#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-2.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @guiSimpleAttributeListAST list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_guiSimpleAttributeListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_guiSimpleAttributeListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_guiSimpleAttributeListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mKey,
                                                 const class GALGAS_lstring & in_mValue
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_guiSimpleAttributeListAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_guiSimpleAttributeListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_guiSimpleAttributeListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_lstring & inOperand1
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_guiSimpleAttributeListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_guiSimpleAttributeListAST add_operation (const GALGAS_guiSimpleAttributeListAST & inOperand,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_guiSimpleAttributeListAST_2D_element inArgument0,
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

  public: VIRTUAL_IN_DEBUG void setter_setMKeyAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValueAtIndex (class GALGAS_lstring constinArgument0,
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
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mKeyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mValueAtIndex (const class GALGAS_uint & constinOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_guiSimpleAttributeListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_guiSimpleAttributeListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_guiSimpleAttributeListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_guiSimpleAttributeListAST ;
 
} ; // End of GALGAS_guiSimpleAttributeListAST class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_guiSimpleAttributeListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_guiSimpleAttributeListAST (const GALGAS_guiSimpleAttributeListAST & inEnumeratedObject,
                                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mKey (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_guiSimpleAttributeListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guiSimpleAttributeListAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @guiSimpleAttributeListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_guiSimpleAttributeListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mKey ;
  public: inline GALGAS_lstring readProperty_mKey (void) const {
    return mProperty_mKey ;
  }

  public: GALGAS_lstring mProperty_mValue ;
  public: inline GALGAS_lstring readProperty_mValue (void) const {
    return mProperty_mValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_guiSimpleAttributeListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_guiSimpleAttributeListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMKey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mKey = inValue ;
  }

  public: inline void setter_setMValue (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_guiSimpleAttributeListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_guiSimpleAttributeListAST_2D_element (const GALGAS_lstring & in_mKey,
                                                       const GALGAS_lstring & in_mValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_guiSimpleAttributeListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_guiSimpleAttributeListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_lstring & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_guiSimpleAttributeListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_guiSimpleAttributeListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guiSimpleAttributeListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @guiCompoundAttributeListAST list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_guiCompoundAttributeListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_guiCompoundAttributeListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_guiCompoundAttributeListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mKey,
                                                 const class GALGAS_lstring & in_mAttributeName,
                                                 const class GALGAS_lstring & in_mValue
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_guiCompoundAttributeListAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_guiCompoundAttributeListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_guiCompoundAttributeListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                     const class GALGAS_lstring & inOperand1,
                                                                                     const class GALGAS_lstring & inOperand2
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_guiCompoundAttributeListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_lstring & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_guiCompoundAttributeListAST add_operation (const GALGAS_guiCompoundAttributeListAST & inOperand,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_guiCompoundAttributeListAST_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_lstring constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                class GALGAS_lstring & outArgument2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_lstring & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAttributeNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMKeyAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValueAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             class GALGAS_lstring & outArgument2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mAttributeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mKeyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mValueAtIndex (const class GALGAS_uint & constinOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_guiCompoundAttributeListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_guiCompoundAttributeListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_guiCompoundAttributeListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_guiCompoundAttributeListAST ;
 
} ; // End of GALGAS_guiCompoundAttributeListAST class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_guiCompoundAttributeListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_guiCompoundAttributeListAST (const GALGAS_guiCompoundAttributeListAST & inEnumeratedObject,
                                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mKey (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mAttributeName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_guiCompoundAttributeListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guiCompoundAttributeListAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @guiCompoundAttributeListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_guiCompoundAttributeListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mKey ;
  public: inline GALGAS_lstring readProperty_mKey (void) const {
    return mProperty_mKey ;
  }

  public: GALGAS_lstring mProperty_mAttributeName ;
  public: inline GALGAS_lstring readProperty_mAttributeName (void) const {
    return mProperty_mAttributeName ;
  }

  public: GALGAS_lstring mProperty_mValue ;
  public: inline GALGAS_lstring readProperty_mValue (void) const {
    return mProperty_mValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_guiCompoundAttributeListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_guiCompoundAttributeListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMKey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mKey = inValue ;
  }

  public: inline void setter_setMAttributeName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAttributeName = inValue ;
  }

  public: inline void setter_setMValue (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_guiCompoundAttributeListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_guiCompoundAttributeListAST_2D_element (const GALGAS_lstring & in_mKey,
                                                         const GALGAS_lstring & in_mAttributeName,
                                                         const GALGAS_lstring & in_mValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_guiCompoundAttributeListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_guiCompoundAttributeListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_lstring & inOperand1,
                                                                                      const class GALGAS_lstring & inOperand2
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_guiCompoundAttributeListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_guiCompoundAttributeListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guiCompoundAttributeListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @terminalLabelListAST list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_terminalLabelListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_terminalLabelListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_terminalLabelListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mTerminal,
                                                 const class GALGAS_uint & in_mDisplayFlags
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_terminalLabelListAST extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_terminalLabelListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_terminalLabelListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_uint & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_terminalLabelListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_uint & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_terminalLabelListAST add_operation (const GALGAS_terminalLabelListAST & inOperand,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_terminalLabelListAST_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_uint & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_uint & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_uint & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDisplayFlagsAtIndex (class GALGAS_uint constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTerminalAtIndex (class GALGAS_lstring constinArgument0,
                                                            class GALGAS_uint constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_uint & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_uint & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mDisplayFlagsAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTerminalAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_terminalLabelListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_terminalLabelListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_terminalLabelListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_terminalLabelListAST ;
 
} ; // End of GALGAS_terminalLabelListAST class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_terminalLabelListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_terminalLabelListAST (const GALGAS_terminalLabelListAST & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mTerminal (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mDisplayFlags (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_terminalLabelListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalLabelListAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @terminalLabelListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_terminalLabelListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mTerminal ;
  public: inline GALGAS_lstring readProperty_mTerminal (void) const {
    return mProperty_mTerminal ;
  }

  public: GALGAS_uint mProperty_mDisplayFlags ;
  public: inline GALGAS_uint readProperty_mDisplayFlags (void) const {
    return mProperty_mDisplayFlags ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_terminalLabelListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_terminalLabelListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTerminal (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTerminal = inValue ;
  }

  public: inline void setter_setMDisplayFlags (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDisplayFlags = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_terminalLabelListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_terminalLabelListAST_2D_element (const GALGAS_lstring & in_mTerminal,
                                                  const GALGAS_uint & in_mDisplayFlags) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_terminalLabelListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_terminalLabelListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_uint & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_terminalLabelListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_terminalLabelListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalLabelListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @guiLabelListAST list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_guiLabelListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_guiLabelListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_guiLabelListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_uint & in_mLeadingCharacterStrippedCount,
                                                 const class GALGAS_terminalLabelListAST & in_mTerminalList,
                                                 const class GALGAS_location & in_mLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_guiLabelListAST extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_guiLabelListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_guiLabelListAST constructor_listWithValue (const class GALGAS_uint & inOperand0,
                                                                         const class GALGAS_terminalLabelListAST & inOperand1,
                                                                         const class GALGAS_location & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_guiLabelListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_uint & inOperand0,
                                                     const class GALGAS_terminalLabelListAST & inOperand1,
                                                     const class GALGAS_location & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_guiLabelListAST add_operation (const GALGAS_guiLabelListAST & inOperand,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_guiLabelListAST_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_uint constinArgument0,
                                                      class GALGAS_terminalLabelListAST constinArgument1,
                                                      class GALGAS_location constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_uint & outArgument0,
                                                 class GALGAS_terminalLabelListAST & outArgument1,
                                                 class GALGAS_location & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_uint & outArgument0,
                                                class GALGAS_terminalLabelListAST & outArgument1,
                                                class GALGAS_location & outArgument2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_uint & outArgument0,
                                                      class GALGAS_terminalLabelListAST & outArgument1,
                                                      class GALGAS_location & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLeadingCharacterStrippedCountAtIndex (class GALGAS_uint constinArgument0,
                                                                                 class GALGAS_uint constinArgument1,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLocationAtIndex (class GALGAS_location constinArgument0,
                                                            class GALGAS_uint constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTerminalListAtIndex (class GALGAS_terminalLabelListAST constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_uint & outArgument0,
                                              class GALGAS_terminalLabelListAST & outArgument1,
                                              class GALGAS_location & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_uint & outArgument0,
                                             class GALGAS_terminalLabelListAST & outArgument1,
                                             class GALGAS_location & outArgument2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mLeadingCharacterStrippedCountAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_terminalLabelListAST getter_mTerminalListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_guiLabelListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_guiLabelListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_guiLabelListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_guiLabelListAST ;
 
} ; // End of GALGAS_guiLabelListAST class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_guiLabelListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_guiLabelListAST (const GALGAS_guiLabelListAST & inEnumeratedObject,
                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_uint current_mLeadingCharacterStrippedCount (LOCATION_ARGS) const ;
  public: class GALGAS_terminalLabelListAST current_mTerminalList (LOCATION_ARGS) const ;
  public: class GALGAS_location current_mLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_guiLabelListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guiLabelListAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @guiLabelListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_guiLabelListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_uint mProperty_mLeadingCharacterStrippedCount ;
  public: inline GALGAS_uint readProperty_mLeadingCharacterStrippedCount (void) const {
    return mProperty_mLeadingCharacterStrippedCount ;
  }

  public: GALGAS_terminalLabelListAST mProperty_mTerminalList ;
  public: inline GALGAS_terminalLabelListAST readProperty_mTerminalList (void) const {
    return mProperty_mTerminalList ;
  }

  public: GALGAS_location mProperty_mLocation ;
  public: inline GALGAS_location readProperty_mLocation (void) const {
    return mProperty_mLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_guiLabelListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_guiLabelListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLeadingCharacterStrippedCount (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLeadingCharacterStrippedCount = inValue ;
  }

  public: inline void setter_setMTerminalList (const GALGAS_terminalLabelListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTerminalList = inValue ;
  }

  public: inline void setter_setMLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLocation = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_guiLabelListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_guiLabelListAST_2D_element (const GALGAS_uint & in_mLeadingCharacterStrippedCount,
                                             const GALGAS_terminalLabelListAST & in_mTerminalList,
                                             const GALGAS_location & in_mLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_guiLabelListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_guiLabelListAST_2D_element constructor_new (const class GALGAS_uint & inOperand0,
                                                                          const class GALGAS_terminalLabelListAST & inOperand1,
                                                                          const class GALGAS_location & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_guiLabelListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_guiLabelListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guiLabelListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @withLexiqueListAST list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_withLexiqueListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_withLexiqueListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_withLexiqueListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mLexiqueFileName,
                                                 const class GALGAS_guiLabelListAST & in_mLabels,
                                                 const class GALGAS_guiSimpleAttributeListAST & in_mSimpleAttributes,
                                                 const class GALGAS_guiCompoundAttributeListAST & in_mCompoundAttributes
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_withLexiqueListAST extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_withLexiqueListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_withLexiqueListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_guiLabelListAST & inOperand1,
                                                                            const class GALGAS_guiSimpleAttributeListAST & inOperand2,
                                                                            const class GALGAS_guiCompoundAttributeListAST & inOperand3
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_withLexiqueListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_guiLabelListAST & inOperand1,
                                                     const class GALGAS_guiSimpleAttributeListAST & inOperand2,
                                                     const class GALGAS_guiCompoundAttributeListAST & inOperand3
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_withLexiqueListAST add_operation (const GALGAS_withLexiqueListAST & inOperand,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_withLexiqueListAST_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_guiLabelListAST constinArgument1,
                                                      class GALGAS_guiSimpleAttributeListAST constinArgument2,
                                                      class GALGAS_guiCompoundAttributeListAST constinArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_guiLabelListAST & outArgument1,
                                                 class GALGAS_guiSimpleAttributeListAST & outArgument2,
                                                 class GALGAS_guiCompoundAttributeListAST & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_guiLabelListAST & outArgument1,
                                                class GALGAS_guiSimpleAttributeListAST & outArgument2,
                                                class GALGAS_guiCompoundAttributeListAST & outArgument3,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_guiLabelListAST & outArgument1,
                                                      class GALGAS_guiSimpleAttributeListAST & outArgument2,
                                                      class GALGAS_guiCompoundAttributeListAST & outArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCompoundAttributesAtIndex (class GALGAS_guiCompoundAttributeListAST constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLabelsAtIndex (class GALGAS_guiLabelListAST constinArgument0,
                                                          class GALGAS_uint constinArgument1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLexiqueFileNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSimpleAttributesAtIndex (class GALGAS_guiSimpleAttributeListAST constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_guiLabelListAST & outArgument1,
                                              class GALGAS_guiSimpleAttributeListAST & outArgument2,
                                              class GALGAS_guiCompoundAttributeListAST & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_guiLabelListAST & outArgument1,
                                             class GALGAS_guiSimpleAttributeListAST & outArgument2,
                                             class GALGAS_guiCompoundAttributeListAST & outArgument3,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_guiCompoundAttributeListAST getter_mCompoundAttributesAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_guiLabelListAST getter_mLabelsAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLexiqueFileNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_guiSimpleAttributeListAST getter_mSimpleAttributesAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_withLexiqueListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_withLexiqueListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_withLexiqueListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_withLexiqueListAST ;
 
} ; // End of GALGAS_withLexiqueListAST class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_withLexiqueListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_withLexiqueListAST (const GALGAS_withLexiqueListAST & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mLexiqueFileName (LOCATION_ARGS) const ;
  public: class GALGAS_guiLabelListAST current_mLabels (LOCATION_ARGS) const ;
  public: class GALGAS_guiSimpleAttributeListAST current_mSimpleAttributes (LOCATION_ARGS) const ;
  public: class GALGAS_guiCompoundAttributeListAST current_mCompoundAttributes (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_withLexiqueListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_withLexiqueListAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @withLexiqueListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_withLexiqueListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mLexiqueFileName ;
  public: inline GALGAS_lstring readProperty_mLexiqueFileName (void) const {
    return mProperty_mLexiqueFileName ;
  }

  public: GALGAS_guiLabelListAST mProperty_mLabels ;
  public: inline GALGAS_guiLabelListAST readProperty_mLabels (void) const {
    return mProperty_mLabels ;
  }

  public: GALGAS_guiSimpleAttributeListAST mProperty_mSimpleAttributes ;
  public: inline GALGAS_guiSimpleAttributeListAST readProperty_mSimpleAttributes (void) const {
    return mProperty_mSimpleAttributes ;
  }

  public: GALGAS_guiCompoundAttributeListAST mProperty_mCompoundAttributes ;
  public: inline GALGAS_guiCompoundAttributeListAST readProperty_mCompoundAttributes (void) const {
    return mProperty_mCompoundAttributes ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_withLexiqueListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_withLexiqueListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLexiqueFileName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexiqueFileName = inValue ;
  }

  public: inline void setter_setMLabels (const GALGAS_guiLabelListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLabels = inValue ;
  }

  public: inline void setter_setMSimpleAttributes (const GALGAS_guiSimpleAttributeListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSimpleAttributes = inValue ;
  }

  public: inline void setter_setMCompoundAttributes (const GALGAS_guiCompoundAttributeListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCompoundAttributes = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_withLexiqueListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_withLexiqueListAST_2D_element (const GALGAS_lstring & in_mLexiqueFileName,
                                                const GALGAS_guiLabelListAST & in_mLabels,
                                                const GALGAS_guiSimpleAttributeListAST & in_mSimpleAttributes,
                                                const GALGAS_guiCompoundAttributeListAST & in_mCompoundAttributes) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_withLexiqueListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_withLexiqueListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_guiLabelListAST & inOperand1,
                                                                             const class GALGAS_guiSimpleAttributeListAST & inOperand2,
                                                                             const class GALGAS_guiCompoundAttributeListAST & inOperand3
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_withLexiqueListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_withLexiqueListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_withLexiqueListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @guiCommandLineOptionList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_guiCommandLineOptionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_guiCommandLineOptionList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_guiCommandLineOptionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_string & in_mOptionComponent,
                                                 const class GALGAS_string & in_mOptionIdentifier,
                                                 const class GALGAS_char & in_mOptionChar,
                                                 const class GALGAS_string & in_mOptionString,
                                                 const class GALGAS_string & in_mComment
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_guiCommandLineOptionList extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_guiCommandLineOptionList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_guiCommandLineOptionList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                  const class GALGAS_string & inOperand1,
                                                                                  const class GALGAS_char & inOperand2,
                                                                                  const class GALGAS_string & inOperand3,
                                                                                  const class GALGAS_string & inOperand4
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_guiCommandLineOptionList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_string & inOperand1,
                                                     const class GALGAS_char & inOperand2,
                                                     const class GALGAS_string & inOperand3,
                                                     const class GALGAS_string & inOperand4
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_guiCommandLineOptionList add_operation (const GALGAS_guiCommandLineOptionList & inOperand,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_guiCommandLineOptionList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_string constinArgument1,
                                                      class GALGAS_char constinArgument2,
                                                      class GALGAS_string constinArgument3,
                                                      class GALGAS_string constinArgument4,
                                                      class GALGAS_uint constinArgument5,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_char & outArgument2,
                                                 class GALGAS_string & outArgument3,
                                                 class GALGAS_string & outArgument4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_string & outArgument1,
                                                class GALGAS_char & outArgument2,
                                                class GALGAS_string & outArgument3,
                                                class GALGAS_string & outArgument4,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_string & outArgument1,
                                                      class GALGAS_char & outArgument2,
                                                      class GALGAS_string & outArgument3,
                                                      class GALGAS_string & outArgument4,
                                                      class GALGAS_uint constinArgument5,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCommentAtIndex (class GALGAS_string constinArgument0,
                                                           class GALGAS_uint constinArgument1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOptionCharAtIndex (class GALGAS_char constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOptionComponentAtIndex (class GALGAS_string constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOptionIdentifierAtIndex (class GALGAS_string constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOptionStringAtIndex (class GALGAS_string constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_char & outArgument2,
                                              class GALGAS_string & outArgument3,
                                              class GALGAS_string & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_string & outArgument1,
                                             class GALGAS_char & outArgument2,
                                             class GALGAS_string & outArgument3,
                                             class GALGAS_string & outArgument4,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mCommentAtIndex (const class GALGAS_uint & constinOperand0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_char getter_mOptionCharAtIndex (const class GALGAS_uint & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mOptionComponentAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mOptionIdentifierAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mOptionStringAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_guiCommandLineOptionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_guiCommandLineOptionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_guiCommandLineOptionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_guiCommandLineOptionList ;
 
} ; // End of GALGAS_guiCommandLineOptionList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_guiCommandLineOptionList : public cGenericAbstractEnumerator {
  public: cEnumerator_guiCommandLineOptionList (const GALGAS_guiCommandLineOptionList & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mOptionComponent (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mOptionIdentifier (LOCATION_ARGS) const ;
  public: class GALGAS_char current_mOptionChar (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mOptionString (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mComment (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_guiCommandLineOptionList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guiCommandLineOptionList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @guiCommandLineOptionList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_guiCommandLineOptionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mOptionComponent ;
  public: inline GALGAS_string readProperty_mOptionComponent (void) const {
    return mProperty_mOptionComponent ;
  }

  public: GALGAS_string mProperty_mOptionIdentifier ;
  public: inline GALGAS_string readProperty_mOptionIdentifier (void) const {
    return mProperty_mOptionIdentifier ;
  }

  public: GALGAS_char mProperty_mOptionChar ;
  public: inline GALGAS_char readProperty_mOptionChar (void) const {
    return mProperty_mOptionChar ;
  }

  public: GALGAS_string mProperty_mOptionString ;
  public: inline GALGAS_string readProperty_mOptionString (void) const {
    return mProperty_mOptionString ;
  }

  public: GALGAS_string mProperty_mComment ;
  public: inline GALGAS_string readProperty_mComment (void) const {
    return mProperty_mComment ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_guiCommandLineOptionList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_guiCommandLineOptionList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOptionComponent (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionComponent = inValue ;
  }

  public: inline void setter_setMOptionIdentifier (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionIdentifier = inValue ;
  }

  public: inline void setter_setMOptionChar (const GALGAS_char & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionChar = inValue ;
  }

  public: inline void setter_setMOptionString (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionString = inValue ;
  }

  public: inline void setter_setMComment (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mComment = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_guiCommandLineOptionList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_guiCommandLineOptionList_2D_element (const GALGAS_string & in_mOptionComponent,
                                                      const GALGAS_string & in_mOptionIdentifier,
                                                      const GALGAS_char & in_mOptionChar,
                                                      const GALGAS_string & in_mOptionString,
                                                      const GALGAS_string & in_mComment) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_guiCommandLineOptionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_guiCommandLineOptionList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                   const class GALGAS_string & inOperand1,
                                                                                   const class GALGAS_char & inOperand2,
                                                                                   const class GALGAS_string & inOperand3,
                                                                                   const class GALGAS_string & inOperand4
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_guiCommandLineOptionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_guiCommandLineOptionList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guiCommandLineOptionList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_extensionMap ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_extensionMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_extensionMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_extensionMap (const GALGAS_extensionMap & inSource) ;
  public: GALGAS_extensionMap & operator = (const GALGAS_extensionMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionMap extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_extensionMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_extensionMap constructor_mapWithMapToOverride (const class GALGAS_extensionMap & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_string & inOperand1,
                                                     const class GALGAS_uint & inOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_string constinArgument1,
                                                  class GALGAS_uint constinArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIndexForKey (class GALGAS_uint constinArgument0,
                                                        class GALGAS_string constinArgument1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLexiqueNameForKey (class GALGAS_string constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mIndexForKey (const class GALGAS_string & constinOperand0,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mLexiqueNameForKey (const class GALGAS_string & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_extensionMap getter_overriddenMap (C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_string & outOperand1,
                                                    class GALGAS_uint & outOperand2) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_extensionMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_extensionMap ;
 
} ; // End of GALGAS_extensionMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_extensionMap : public cGenericAbstractEnumerator {
  public: cEnumerator_extensionMap (const GALGAS_extensionMap & inEnumeratedObject,
                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mLexiqueName (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_extensionMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@extensionMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_extensionMap : public cMapElement {
//--- Map attributes
  public: GALGAS_string mProperty_mLexiqueName ;
  public: GALGAS_uint mProperty_mIndex ;

//--- Constructor
  public: cMapElement_extensionMap (const GALGAS_lstring & inKey,
                                    const GALGAS_string & in_mLexiqueName,
                                    const GALGAS_uint & in_mIndex
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
// Phase 1: @extensionMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_extensionMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_string mProperty_mLexiqueName ;
  public: inline GALGAS_string readProperty_mLexiqueName (void) const {
    return mProperty_mLexiqueName ;
  }

  public: GALGAS_uint mProperty_mIndex ;
  public: inline GALGAS_uint readProperty_mIndex (void) const {
    return mProperty_mIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_extensionMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_extensionMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMLexiqueName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexiqueName = inValue ;
  }

  public: inline void setter_setMIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIndex = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_extensionMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_extensionMap_2D_element (const GALGAS_lstring & in_lkey,
                                          const GALGAS_string & in_mLexiqueName,
                                          const GALGAS_uint & in_mIndex) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionMap_2D_element extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_extensionMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_string & inOperand1,
                                                                       const class GALGAS_uint & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_extensionMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_extensionMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @textMacroList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_textMacroList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_textMacroList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_textMacroList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_string & in_mKey,
                                                 const class GALGAS_string & in_mContents
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_textMacroList extractObject (const GALGAS_object & inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_textMacroList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_textMacroList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                       const class GALGAS_string & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_textMacroList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_string & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_textMacroList add_operation (const GALGAS_textMacroList & inOperand,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_textMacroList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_string constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_string & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_string & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMContentsAtIndex (class GALGAS_string constinArgument0,
                                                            class GALGAS_uint constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMKeyAtIndex (class GALGAS_string constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_string & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mContentsAtIndex (const class GALGAS_uint & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mKeyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_textMacroList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_textMacroList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_textMacroList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_textMacroList ;
 
} ; // End of GALGAS_textMacroList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_textMacroList : public cGenericAbstractEnumerator {
  public: cEnumerator_textMacroList (const GALGAS_textMacroList & inEnumeratedObject,
                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mKey (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mContents (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_textMacroList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_textMacroList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @textMacroList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_textMacroList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mKey ;
  public: inline GALGAS_string readProperty_mKey (void) const {
    return mProperty_mKey ;
  }

  public: GALGAS_string mProperty_mContents ;
  public: inline GALGAS_string readProperty_mContents (void) const {
    return mProperty_mContents ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_textMacroList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_textMacroList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMKey (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mKey = inValue ;
  }

  public: inline void setter_setMContents (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mContents = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_textMacroList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_textMacroList_2D_element (const GALGAS_string & in_mKey,
                                           const GALGAS_string & in_mContents) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_textMacroList_2D_element extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_textMacroList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                        const class GALGAS_string & inOperand1
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_textMacroList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_textMacroList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_textMacroList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @importedLexiqueList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_importedLexiqueList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_importedLexiqueList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_importedLexiqueList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_string & in_mLexiqueClassName,
                                                 const class GALGAS_uint & in_mIndex,
                                                 const class GALGAS_string & in_mBlockComment,
                                                 const class GALGAS_string & in_mTitle,
                                                 const class GALGAS_textMacroList & in_mTextMacroList,
                                                 const class GALGAS_guiLabelListAST & in_mLabels
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_importedLexiqueList extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_importedLexiqueList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_importedLexiqueList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                             const class GALGAS_uint & inOperand1,
                                                                             const class GALGAS_string & inOperand2,
                                                                             const class GALGAS_string & inOperand3,
                                                                             const class GALGAS_textMacroList & inOperand4,
                                                                             const class GALGAS_guiLabelListAST & inOperand5
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_importedLexiqueList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_uint & inOperand1,
                                                     const class GALGAS_string & inOperand2,
                                                     const class GALGAS_string & inOperand3,
                                                     const class GALGAS_textMacroList & inOperand4,
                                                     const class GALGAS_guiLabelListAST & inOperand5
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_importedLexiqueList add_operation (const GALGAS_importedLexiqueList & inOperand,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_importedLexiqueList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      class GALGAS_string constinArgument2,
                                                      class GALGAS_string constinArgument3,
                                                      class GALGAS_textMacroList constinArgument4,
                                                      class GALGAS_guiLabelListAST constinArgument5,
                                                      class GALGAS_uint constinArgument6,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_uint & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 class GALGAS_string & outArgument3,
                                                 class GALGAS_textMacroList & outArgument4,
                                                 class GALGAS_guiLabelListAST & outArgument5,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_uint & outArgument1,
                                                class GALGAS_string & outArgument2,
                                                class GALGAS_string & outArgument3,
                                                class GALGAS_textMacroList & outArgument4,
                                                class GALGAS_guiLabelListAST & outArgument5,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_uint & outArgument1,
                                                      class GALGAS_string & outArgument2,
                                                      class GALGAS_string & outArgument3,
                                                      class GALGAS_textMacroList & outArgument4,
                                                      class GALGAS_guiLabelListAST & outArgument5,
                                                      class GALGAS_uint constinArgument6,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBlockCommentAtIndex (class GALGAS_string constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIndexAtIndex (class GALGAS_uint constinArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLabelsAtIndex (class GALGAS_guiLabelListAST constinArgument0,
                                                          class GALGAS_uint constinArgument1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLexiqueClassNameAtIndex (class GALGAS_string constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTextMacroListAtIndex (class GALGAS_textMacroList constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTitleAtIndex (class GALGAS_string constinArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_uint & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              class GALGAS_string & outArgument3,
                                              class GALGAS_textMacroList & outArgument4,
                                              class GALGAS_guiLabelListAST & outArgument5,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_uint & outArgument1,
                                             class GALGAS_string & outArgument2,
                                             class GALGAS_string & outArgument3,
                                             class GALGAS_textMacroList & outArgument4,
                                             class GALGAS_guiLabelListAST & outArgument5,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mBlockCommentAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mIndexAtIndex (const class GALGAS_uint & constinOperand0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_guiLabelListAST getter_mLabelsAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mLexiqueClassNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_textMacroList getter_mTextMacroListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mTitleAtIndex (const class GALGAS_uint & constinOperand0,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_importedLexiqueList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_importedLexiqueList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_importedLexiqueList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_importedLexiqueList ;
 
} ; // End of GALGAS_importedLexiqueList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_importedLexiqueList : public cGenericAbstractEnumerator {
  public: cEnumerator_importedLexiqueList (const GALGAS_importedLexiqueList & inEnumeratedObject,
                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mLexiqueClassName (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mIndex (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mBlockComment (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mTitle (LOCATION_ARGS) const ;
  public: class GALGAS_textMacroList current_mTextMacroList (LOCATION_ARGS) const ;
  public: class GALGAS_guiLabelListAST current_mLabels (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_importedLexiqueList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_importedLexiqueList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @importedLexiqueList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_importedLexiqueList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mLexiqueClassName ;
  public: inline GALGAS_string readProperty_mLexiqueClassName (void) const {
    return mProperty_mLexiqueClassName ;
  }

  public: GALGAS_uint mProperty_mIndex ;
  public: inline GALGAS_uint readProperty_mIndex (void) const {
    return mProperty_mIndex ;
  }

  public: GALGAS_string mProperty_mBlockComment ;
  public: inline GALGAS_string readProperty_mBlockComment (void) const {
    return mProperty_mBlockComment ;
  }

  public: GALGAS_string mProperty_mTitle ;
  public: inline GALGAS_string readProperty_mTitle (void) const {
    return mProperty_mTitle ;
  }

  public: GALGAS_textMacroList mProperty_mTextMacroList ;
  public: inline GALGAS_textMacroList readProperty_mTextMacroList (void) const {
    return mProperty_mTextMacroList ;
  }

  public: GALGAS_guiLabelListAST mProperty_mLabels ;
  public: inline GALGAS_guiLabelListAST readProperty_mLabels (void) const {
    return mProperty_mLabels ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_importedLexiqueList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_importedLexiqueList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLexiqueClassName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexiqueClassName = inValue ;
  }

  public: inline void setter_setMIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIndex = inValue ;
  }

  public: inline void setter_setMBlockComment (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBlockComment = inValue ;
  }

  public: inline void setter_setMTitle (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTitle = inValue ;
  }

  public: inline void setter_setMTextMacroList (const GALGAS_textMacroList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTextMacroList = inValue ;
  }

  public: inline void setter_setMLabels (const GALGAS_guiLabelListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLabels = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_importedLexiqueList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_importedLexiqueList_2D_element (const GALGAS_string & in_mLexiqueClassName,
                                                 const GALGAS_uint & in_mIndex,
                                                 const GALGAS_string & in_mBlockComment,
                                                 const GALGAS_string & in_mTitle,
                                                 const GALGAS_textMacroList & in_mTextMacroList,
                                                 const GALGAS_guiLabelListAST & in_mLabels) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_importedLexiqueList_2D_element extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_importedLexiqueList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                              const class GALGAS_uint & inOperand1,
                                                                              const class GALGAS_string & inOperand2,
                                                                              const class GALGAS_string & inOperand3,
                                                                              const class GALGAS_textMacroList & inOperand4,
                                                                              const class GALGAS_guiLabelListAST & inOperand5
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_importedLexiqueList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_importedLexiqueList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_importedLexiqueList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @galgas3GUIComponentListAST list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_galgas_33_GUIComponentListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_galgas_33_GUIComponentListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_galgas_33_GUIComponentListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mGUIComponentName,
                                                 const class GALGAS_lstringlist & in_mImportedOptionList,
                                                 const class GALGAS_guiSimpleAttributeListAST & in_mGlobalSimpleAttributeList,
                                                 const class GALGAS_withLexiqueListAST & in_mWithLexiqueList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_galgas_33_GUIComponentListAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_galgas_33_GUIComponentListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_galgas_33_GUIComponentListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_lstringlist & inOperand1,
                                                                                       const class GALGAS_guiSimpleAttributeListAST & inOperand2,
                                                                                       const class GALGAS_withLexiqueListAST & inOperand3
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_galgas_33_GUIComponentListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstringlist & inOperand1,
                                                     const class GALGAS_guiSimpleAttributeListAST & inOperand2,
                                                     const class GALGAS_withLexiqueListAST & inOperand3
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_galgas_33_GUIComponentListAST add_operation (const GALGAS_galgas_33_GUIComponentListAST & inOperand,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_galgas_33_GUIComponentListAST_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstringlist constinArgument1,
                                                      class GALGAS_guiSimpleAttributeListAST constinArgument2,
                                                      class GALGAS_withLexiqueListAST constinArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstringlist & outArgument1,
                                                 class GALGAS_guiSimpleAttributeListAST & outArgument2,
                                                 class GALGAS_withLexiqueListAST & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstringlist & outArgument1,
                                                class GALGAS_guiSimpleAttributeListAST & outArgument2,
                                                class GALGAS_withLexiqueListAST & outArgument3,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstringlist & outArgument1,
                                                      class GALGAS_guiSimpleAttributeListAST & outArgument2,
                                                      class GALGAS_withLexiqueListAST & outArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGUIComponentNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGlobalSimpleAttributeListAtIndex (class GALGAS_guiSimpleAttributeListAST constinArgument0,
                                                                             class GALGAS_uint constinArgument1,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMImportedOptionListAtIndex (class GALGAS_lstringlist constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMWithLexiqueListAtIndex (class GALGAS_withLexiqueListAST constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstringlist & outArgument1,
                                              class GALGAS_guiSimpleAttributeListAST & outArgument2,
                                              class GALGAS_withLexiqueListAST & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstringlist & outArgument1,
                                             class GALGAS_guiSimpleAttributeListAST & outArgument2,
                                             class GALGAS_withLexiqueListAST & outArgument3,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mGUIComponentNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_guiSimpleAttributeListAST getter_mGlobalSimpleAttributeListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mImportedOptionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_withLexiqueListAST getter_mWithLexiqueListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_galgas_33_GUIComponentListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_galgas_33_GUIComponentListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_galgas_33_GUIComponentListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_galgas_33_GUIComponentListAST ;
 
} ; // End of GALGAS_galgas_33_GUIComponentListAST class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_galgas_33_GUIComponentListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_galgas_33_GUIComponentListAST (const GALGAS_galgas_33_GUIComponentListAST & inEnumeratedObject,
                                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mGUIComponentName (LOCATION_ARGS) const ;
  public: class GALGAS_lstringlist current_mImportedOptionList (LOCATION_ARGS) const ;
  public: class GALGAS_guiSimpleAttributeListAST current_mGlobalSimpleAttributeList (LOCATION_ARGS) const ;
  public: class GALGAS_withLexiqueListAST current_mWithLexiqueList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_galgas_33_GUIComponentListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_GUIComponentListAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @galgas_33_GUIComponentListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_galgas_33_GUIComponentListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mGUIComponentName ;
  public: inline GALGAS_lstring readProperty_mGUIComponentName (void) const {
    return mProperty_mGUIComponentName ;
  }

  public: GALGAS_lstringlist mProperty_mImportedOptionList ;
  public: inline GALGAS_lstringlist readProperty_mImportedOptionList (void) const {
    return mProperty_mImportedOptionList ;
  }

  public: GALGAS_guiSimpleAttributeListAST mProperty_mGlobalSimpleAttributeList ;
  public: inline GALGAS_guiSimpleAttributeListAST readProperty_mGlobalSimpleAttributeList (void) const {
    return mProperty_mGlobalSimpleAttributeList ;
  }

  public: GALGAS_withLexiqueListAST mProperty_mWithLexiqueList ;
  public: inline GALGAS_withLexiqueListAST readProperty_mWithLexiqueList (void) const {
    return mProperty_mWithLexiqueList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_galgas_33_GUIComponentListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_galgas_33_GUIComponentListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMGUIComponentName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGUIComponentName = inValue ;
  }

  public: inline void setter_setMImportedOptionList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mImportedOptionList = inValue ;
  }

  public: inline void setter_setMGlobalSimpleAttributeList (const GALGAS_guiSimpleAttributeListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGlobalSimpleAttributeList = inValue ;
  }

  public: inline void setter_setMWithLexiqueList (const GALGAS_withLexiqueListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mWithLexiqueList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_galgas_33_GUIComponentListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_galgas_33_GUIComponentListAST_2D_element (const GALGAS_lstring & in_mGUIComponentName,
                                                           const GALGAS_lstringlist & in_mImportedOptionList,
                                                           const GALGAS_guiSimpleAttributeListAST & in_mGlobalSimpleAttributeList,
                                                           const GALGAS_withLexiqueListAST & in_mWithLexiqueList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_galgas_33_GUIComponentListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_galgas_33_GUIComponentListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                        const class GALGAS_lstringlist & inOperand1,
                                                                                        const class GALGAS_guiSimpleAttributeListAST & inOperand2,
                                                                                        const class GALGAS_withLexiqueListAST & inOperand3
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_galgas_33_GUIComponentListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_galgas_33_GUIComponentListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_GUIComponentListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @guiAnalysisContext struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_guiAnalysisContext : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_stringlist mProperty_mImportedOptionComponentList ;
  public: inline GALGAS_stringlist readProperty_mImportedOptionComponentList (void) const {
    return mProperty_mImportedOptionComponentList ;
  }

  public: GALGAS_guiCommandLineOptionList mProperty_mBoolOptionList ;
  public: inline GALGAS_guiCommandLineOptionList readProperty_mBoolOptionList (void) const {
    return mProperty_mBoolOptionList ;
  }

  public: GALGAS_guiCommandLineOptionList mProperty_mUIntOptionList ;
  public: inline GALGAS_guiCommandLineOptionList readProperty_mUIntOptionList (void) const {
    return mProperty_mUIntOptionList ;
  }

  public: GALGAS_guiCommandLineOptionList mProperty_mStringOptionList ;
  public: inline GALGAS_guiCommandLineOptionList readProperty_mStringOptionList (void) const {
    return mProperty_mStringOptionList ;
  }

  public: GALGAS_stringlist mProperty_mNibAndClassList ;
  public: inline GALGAS_stringlist readProperty_mNibAndClassList (void) const {
    return mProperty_mNibAndClassList ;
  }

  public: GALGAS_extensionMap mProperty_mExtensionMap ;
  public: inline GALGAS_extensionMap readProperty_mExtensionMap (void) const {
    return mProperty_mExtensionMap ;
  }

  public: GALGAS_importedLexiqueList mProperty_mWithLexiqueList ;
  public: inline GALGAS_importedLexiqueList readProperty_mWithLexiqueList (void) const {
    return mProperty_mWithLexiqueList ;
  }

  public: GALGAS_string mProperty_mBuildRunOption ;
  public: inline GALGAS_string readProperty_mBuildRunOption (void) const {
    return mProperty_mBuildRunOption ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_guiAnalysisContext constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_guiAnalysisContext (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMImportedOptionComponentList (const GALGAS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mImportedOptionComponentList = inValue ;
  }

  public: inline void setter_setMBoolOptionList (const GALGAS_guiCommandLineOptionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBoolOptionList = inValue ;
  }

  public: inline void setter_setMUIntOptionList (const GALGAS_guiCommandLineOptionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUIntOptionList = inValue ;
  }

  public: inline void setter_setMStringOptionList (const GALGAS_guiCommandLineOptionList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStringOptionList = inValue ;
  }

  public: inline void setter_setMNibAndClassList (const GALGAS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNibAndClassList = inValue ;
  }

  public: inline void setter_setMExtensionMap (const GALGAS_extensionMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExtensionMap = inValue ;
  }

  public: inline void setter_setMWithLexiqueList (const GALGAS_importedLexiqueList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mWithLexiqueList = inValue ;
  }

  public: inline void setter_setMBuildRunOption (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBuildRunOption = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_guiAnalysisContext (void) ;

//--------------------------------- Native constructor
  public: GALGAS_guiAnalysisContext (const GALGAS_stringlist & in_mImportedOptionComponentList,
                                     const GALGAS_guiCommandLineOptionList & in_mBoolOptionList,
                                     const GALGAS_guiCommandLineOptionList & in_mUIntOptionList,
                                     const GALGAS_guiCommandLineOptionList & in_mStringOptionList,
                                     const GALGAS_stringlist & in_mNibAndClassList,
                                     const GALGAS_extensionMap & in_mExtensionMap,
                                     const GALGAS_importedLexiqueList & in_mWithLexiqueList,
                                     const GALGAS_string & in_mBuildRunOption) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_guiAnalysisContext extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_guiAnalysisContext constructor_new (const class GALGAS_stringlist & inOperand0,
                                                                  const class GALGAS_guiCommandLineOptionList & inOperand1,
                                                                  const class GALGAS_guiCommandLineOptionList & inOperand2,
                                                                  const class GALGAS_guiCommandLineOptionList & inOperand3,
                                                                  const class GALGAS_stringlist & inOperand4,
                                                                  const class GALGAS_extensionMap & inOperand5,
                                                                  const class GALGAS_importedLexiqueList & inOperand6,
                                                                  const class GALGAS_string & inOperand7
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_guiAnalysisContext & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_guiAnalysisContext class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guiAnalysisContext ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @optionComponentMapForGeneration map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_optionComponentMapForGeneration ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_optionComponentMapForGeneration : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_optionComponentMapForGeneration (void) ;

//--------------------------------- Handle copy
  public: GALGAS_optionComponentMapForGeneration (const GALGAS_optionComponentMapForGeneration & inSource) ;
  public: GALGAS_optionComponentMapForGeneration & operator = (const GALGAS_optionComponentMapForGeneration & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_optionComponentMapForGeneration extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_optionComponentMapForGeneration constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_optionComponentMapForGeneration constructor_mapWithMapToOverride (const class GALGAS_optionComponentMapForGeneration & inOperand0
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_guiAnalysisContext & inOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_guiAnalysisContext constinArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGuiComponentContextForKey (class GALGAS_guiAnalysisContext constinArgument0,
                                                                      class GALGAS_string constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_guiAnalysisContext getter_mGuiComponentContextForKey (const class GALGAS_string & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_optionComponentMapForGeneration getter_overriddenMap (C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_guiAnalysisContext & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_optionComponentMapForGeneration * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                            const GALGAS_string & inKey
                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_optionComponentMapForGeneration ;
 
} ; // End of GALGAS_optionComponentMapForGeneration class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_optionComponentMapForGeneration : public cGenericAbstractEnumerator {
  public: cEnumerator_optionComponentMapForGeneration (const GALGAS_optionComponentMapForGeneration & inEnumeratedObject,
                                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_guiAnalysisContext current_mGuiComponentContext (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_optionComponentMapForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionComponentMapForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@optionComponentMapForGeneration' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_optionComponentMapForGeneration : public cMapElement {
//--- Map attributes
  public: GALGAS_guiAnalysisContext mProperty_mGuiComponentContext ;

//--- Constructor
  public: cMapElement_optionComponentMapForGeneration (const GALGAS_lstring & inKey,
                                                       const GALGAS_guiAnalysisContext & in_mGuiComponentContext
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
// Phase 1: @optionComponentMapForGeneration_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_optionComponentMapForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_guiAnalysisContext mProperty_mGuiComponentContext ;
  public: inline GALGAS_guiAnalysisContext readProperty_mGuiComponentContext (void) const {
    return mProperty_mGuiComponentContext ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_optionComponentMapForGeneration_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_optionComponentMapForGeneration_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMGuiComponentContext (const GALGAS_guiAnalysisContext & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGuiComponentContext = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_optionComponentMapForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_optionComponentMapForGeneration_2D_element (const GALGAS_lstring & in_lkey,
                                                             const GALGAS_guiAnalysisContext & in_mGuiComponentContext) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_optionComponentMapForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_optionComponentMapForGeneration_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                          const class GALGAS_guiAnalysisContext & inOperand1
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_optionComponentMapForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_optionComponentMapForGeneration_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionComponentMapForGeneration_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @propertyInCollectionListAST list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_propertyInCollectionListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_propertyInCollectionListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_propertyInCollectionListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_bool & in_isConstant,
                                                 const class GALGAS_lstring & in_mPropertyTypeName,
                                                 const class GALGAS_lstring & in_mPropertyName,
                                                 const class GALGAS_bool & in_mIsPublic,
                                                 const class GALGAS_lstringlist & in_mAttributeList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_propertyInCollectionListAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_propertyInCollectionListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_propertyInCollectionListAST constructor_listWithValue (const class GALGAS_bool & inOperand0,
                                                                                     const class GALGAS_lstring & inOperand1,
                                                                                     const class GALGAS_lstring & inOperand2,
                                                                                     const class GALGAS_bool & inOperand3,
                                                                                     const class GALGAS_lstringlist & inOperand4
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_propertyInCollectionListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_bool & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_lstring & inOperand2,
                                                     const class GALGAS_bool & inOperand3,
                                                     const class GALGAS_lstringlist & inOperand4
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_propertyInCollectionListAST add_operation (const GALGAS_propertyInCollectionListAST & inOperand,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_propertyInCollectionListAST_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_bool constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_lstring constinArgument2,
                                                      class GALGAS_bool constinArgument3,
                                                      class GALGAS_lstringlist constinArgument4,
                                                      class GALGAS_uint constinArgument5,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_bool & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 class GALGAS_bool & outArgument3,
                                                 class GALGAS_lstringlist & outArgument4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_bool & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                class GALGAS_lstring & outArgument2,
                                                class GALGAS_bool & outArgument3,
                                                class GALGAS_lstringlist & outArgument4,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_bool & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_lstring & outArgument2,
                                                      class GALGAS_bool & outArgument3,
                                                      class GALGAS_lstringlist & outArgument4,
                                                      class GALGAS_uint constinArgument5,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setIsConstantAtIndex (class GALGAS_bool constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAttributeListAtIndex (class GALGAS_lstringlist constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsPublicAtIndex (class GALGAS_bool constinArgument0,
                                                            class GALGAS_uint constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyTypeNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_bool & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              class GALGAS_bool & outArgument3,
                                              class GALGAS_lstringlist & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_bool & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             class GALGAS_lstring & outArgument2,
                                             class GALGAS_bool & outArgument3,
                                             class GALGAS_lstringlist & outArgument4,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isConstantAtIndex (const class GALGAS_uint & constinOperand0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mAttributeListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsPublicAtIndex (const class GALGAS_uint & constinOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mPropertyNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mPropertyTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_propertyInCollectionListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_propertyInCollectionListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_propertyInCollectionListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_propertyInCollectionListAST ;
 
} ; // End of GALGAS_propertyInCollectionListAST class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_propertyInCollectionListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_propertyInCollectionListAST (const GALGAS_propertyInCollectionListAST & inEnumeratedObject,
                                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_bool current_isConstant (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mPropertyTypeName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mPropertyName (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mIsPublic (LOCATION_ARGS) const ;
  public: class GALGAS_lstringlist current_mAttributeList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_propertyInCollectionListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyInCollectionListAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @propertyInCollectionListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_propertyInCollectionListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_bool mProperty_isConstant ;
  public: inline GALGAS_bool readProperty_isConstant (void) const {
    return mProperty_isConstant ;
  }

  public: GALGAS_lstring mProperty_mPropertyTypeName ;
  public: inline GALGAS_lstring readProperty_mPropertyTypeName (void) const {
    return mProperty_mPropertyTypeName ;
  }

  public: GALGAS_lstring mProperty_mPropertyName ;
  public: inline GALGAS_lstring readProperty_mPropertyName (void) const {
    return mProperty_mPropertyName ;
  }

  public: GALGAS_bool mProperty_mIsPublic ;
  public: inline GALGAS_bool readProperty_mIsPublic (void) const {
    return mProperty_mIsPublic ;
  }

  public: GALGAS_lstringlist mProperty_mAttributeList ;
  public: inline GALGAS_lstringlist readProperty_mAttributeList (void) const {
    return mProperty_mAttributeList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_propertyInCollectionListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_propertyInCollectionListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setIsConstant (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isConstant = inValue ;
  }

  public: inline void setter_setMPropertyTypeName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyTypeName = inValue ;
  }

  public: inline void setter_setMPropertyName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyName = inValue ;
  }

  public: inline void setter_setMIsPublic (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsPublic = inValue ;
  }

  public: inline void setter_setMAttributeList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAttributeList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_propertyInCollectionListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_propertyInCollectionListAST_2D_element (const GALGAS_bool & in_isConstant,
                                                         const GALGAS_lstring & in_mPropertyTypeName,
                                                         const GALGAS_lstring & in_mPropertyName,
                                                         const GALGAS_bool & in_mIsPublic,
                                                         const GALGAS_lstringlist & in_mAttributeList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_propertyInCollectionListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_propertyInCollectionListAST_2D_element constructor_new (const class GALGAS_bool & inOperand0,
                                                                                      const class GALGAS_lstring & inOperand1,
                                                                                      const class GALGAS_lstring & inOperand2,
                                                                                      const class GALGAS_bool & inOperand3,
                                                                                      const class GALGAS_lstringlist & inOperand4
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_propertyInCollectionListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_propertyInCollectionListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyInCollectionListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @typedPropertyList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_typedPropertyList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mPropertyTypeEntry ;
  public: inline GALGAS_unifiedTypeMap_2D_entry readProperty_mPropertyTypeEntry (void) const {
    return mProperty_mPropertyTypeEntry ;
  }

  public: GALGAS_lstring mProperty_mPropertyName ;
  public: inline GALGAS_lstring readProperty_mPropertyName (void) const {
    return mProperty_mPropertyName ;
  }

  public: GALGAS_bool mProperty_mHasSetter ;
  public: inline GALGAS_bool readProperty_mHasSetter (void) const {
    return mProperty_mHasSetter ;
  }

  public: GALGAS_bool mProperty_mHasSelector ;
  public: inline GALGAS_bool readProperty_mHasSelector (void) const {
    return mProperty_mHasSelector ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_typedPropertyList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_typedPropertyList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMPropertyTypeEntry (const GALGAS_unifiedTypeMap_2D_entry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyTypeEntry = inValue ;
  }

  public: inline void setter_setMPropertyName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyName = inValue ;
  }

  public: inline void setter_setMHasSetter (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHasSetter = inValue ;
  }

  public: inline void setter_setMHasSelector (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHasSelector = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_typedPropertyList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_typedPropertyList_2D_element (const GALGAS_unifiedTypeMap_2D_entry & in_mPropertyTypeEntry,
                                               const GALGAS_lstring & in_mPropertyName,
                                               const GALGAS_bool & in_mHasSetter,
                                               const GALGAS_bool & in_mHasSelector) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_typedPropertyList_2D_element extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_typedPropertyList_2D_element constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                            const class GALGAS_lstring & inOperand1,
                                                                            const class GALGAS_bool & inOperand2,
                                                                            const class GALGAS_bool & inOperand3
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_typedPropertyList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_typedPropertyList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typedPropertyList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @enumConstantList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_enumConstantList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mConstantName ;
  public: inline GALGAS_lstring readProperty_mConstantName (void) const {
    return mProperty_mConstantName ;
  }

  public: GALGAS__32_lstringlist mProperty_mAssociatedValueDefinitionList ;
  public: inline GALGAS__32_lstringlist readProperty_mAssociatedValueDefinitionList (void) const {
    return mProperty_mAssociatedValueDefinitionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_enumConstantList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_enumConstantList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMConstantName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConstantName = inValue ;
  }

  public: inline void setter_setMAssociatedValueDefinitionList (const GALGAS__32_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAssociatedValueDefinitionList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_enumConstantList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_enumConstantList_2D_element (const GALGAS_lstring & in_mConstantName,
                                              const GALGAS__32_lstringlist & in_mAssociatedValueDefinitionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_enumConstantList_2D_element extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_enumConstantList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS__32_lstringlist & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_enumConstantList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumConstantList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumConstantList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @enumConstantListForGeneration list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_enumConstantListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_enumConstantListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_enumConstantListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_string & in_mConstantName,
                                                 const class GALGAS_unifiedTypeMapEntryList & in_mAssociatedValueTypeList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_enumConstantListForGeneration extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_enumConstantListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_enumConstantListForGeneration constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                       const class GALGAS_unifiedTypeMapEntryList & inOperand1
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_enumConstantListForGeneration inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_unifiedTypeMapEntryList & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_enumConstantListForGeneration add_operation (const GALGAS_enumConstantListForGeneration & inOperand,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_enumConstantListForGeneration_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_unifiedTypeMapEntryList constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_unifiedTypeMapEntryList & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_unifiedTypeMapEntryList & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_unifiedTypeMapEntryList & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAssociatedValueTypeListAtIndex (class GALGAS_unifiedTypeMapEntryList constinArgument0,
                                                                           class GALGAS_uint constinArgument1,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMConstantNameAtIndex (class GALGAS_string constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_unifiedTypeMapEntryList & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_unifiedTypeMapEntryList & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapEntryList getter_mAssociatedValueTypeListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mConstantNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_enumConstantListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_enumConstantListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_enumConstantListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_enumConstantListForGeneration ;
 
} ; // End of GALGAS_enumConstantListForGeneration class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_enumConstantListForGeneration : public cGenericAbstractEnumerator {
  public: cEnumerator_enumConstantListForGeneration (const GALGAS_enumConstantListForGeneration & inEnumeratedObject,
                                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mConstantName (LOCATION_ARGS) const ;
  public: class GALGAS_unifiedTypeMapEntryList current_mAssociatedValueTypeList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_enumConstantListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumConstantListForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @unifiedTypeMapEntryList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_unifiedTypeMapEntryList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_unifiedTypeMapEntryList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_unifiedTypeMapEntryList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_unifiedTypeMap_2D_entry & in_mType
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_unifiedTypeMapEntryList extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_unifiedTypeMapEntryList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_unifiedTypeMapEntryList constructor_listWithValue (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_unifiedTypeMapEntryList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMapEntryList add_operation (const GALGAS_unifiedTypeMapEntryList & inOperand,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_unifiedTypeMapEntryList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_unifiedTypeMap_2D_entry constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_unifiedTypeMap_2D_entry & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_unifiedTypeMap_2D_entry & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_unifiedTypeMap_2D_entry & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeAtIndex (class GALGAS_unifiedTypeMap_2D_entry constinArgument0,
                                                        class GALGAS_uint constinArgument1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_unifiedTypeMap_2D_entry & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_unifiedTypeMap_2D_entry & outArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapEntryList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapEntryList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapEntryList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_unifiedTypeMapEntryList ;
 
} ; // End of GALGAS_unifiedTypeMapEntryList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_unifiedTypeMapEntryList : public cGenericAbstractEnumerator {
  public: cEnumerator_unifiedTypeMapEntryList (const GALGAS_unifiedTypeMapEntryList & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_unifiedTypeMap_2D_entry current_mType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_unifiedTypeMapEntryList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapEntryList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @enumConstantListForGeneration_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_enumConstantListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mConstantName ;
  public: inline GALGAS_string readProperty_mConstantName (void) const {
    return mProperty_mConstantName ;
  }

  public: GALGAS_unifiedTypeMapEntryList mProperty_mAssociatedValueTypeList ;
  public: inline GALGAS_unifiedTypeMapEntryList readProperty_mAssociatedValueTypeList (void) const {
    return mProperty_mAssociatedValueTypeList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_enumConstantListForGeneration_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_enumConstantListForGeneration_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMConstantName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConstantName = inValue ;
  }

  public: inline void setter_setMAssociatedValueTypeList (const GALGAS_unifiedTypeMapEntryList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAssociatedValueTypeList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_enumConstantListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_enumConstantListForGeneration_2D_element (const GALGAS_string & in_mConstantName,
                                                           const GALGAS_unifiedTypeMapEntryList & in_mAssociatedValueTypeList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_enumConstantListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_enumConstantListForGeneration_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                        const class GALGAS_unifiedTypeMapEntryList & inOperand1
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_enumConstantListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumConstantListForGeneration_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumConstantListForGeneration_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @unifiedTypeMapEntryList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_unifiedTypeMapEntryList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mType ;
  public: inline GALGAS_unifiedTypeMap_2D_entry readProperty_mType (void) const {
    return mProperty_mType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_unifiedTypeMapEntryList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_unifiedTypeMapEntryList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMType (const GALGAS_unifiedTypeMap_2D_entry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mType = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_unifiedTypeMapEntryList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_unifiedTypeMapEntryList_2D_element (const GALGAS_unifiedTypeMap_2D_entry & in_mType) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_unifiedTypeMapEntryList_2D_element extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_unifiedTypeMapEntryList_2D_element constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_unifiedTypeMapEntryList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_unifiedTypeMapEntryList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapEntryList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @externTypeConstructorList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_externTypeConstructorList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_externTypeConstructorList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_externTypeConstructorList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mConstructorName,
                                                 const class GALGAS_lstring & in_mResultTypeName,
                                                 const class GALGAS_typeNameFormalParameterNameList & in_mParameterList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_externTypeConstructorList extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_externTypeConstructorList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_externTypeConstructorList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_lstring & inOperand1,
                                                                                   const class GALGAS_typeNameFormalParameterNameList & inOperand2
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_externTypeConstructorList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_typeNameFormalParameterNameList & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_externTypeConstructorList add_operation (const GALGAS_externTypeConstructorList & inOperand,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_externTypeConstructorList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_typeNameFormalParameterNameList constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_typeNameFormalParameterNameList & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                class GALGAS_typeNameFormalParameterNameList & outArgument2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_typeNameFormalParameterNameList & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMConstructorNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParameterListAtIndex (class GALGAS_typeNameFormalParameterNameList constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMResultTypeNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_typeNameFormalParameterNameList & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             class GALGAS_typeNameFormalParameterNameList & outArgument2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mConstructorNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_typeNameFormalParameterNameList getter_mParameterListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mResultTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_externTypeConstructorList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_externTypeConstructorList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_externTypeConstructorList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_externTypeConstructorList ;
 
} ; // End of GALGAS_externTypeConstructorList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_externTypeConstructorList : public cGenericAbstractEnumerator {
  public: cEnumerator_externTypeConstructorList (const GALGAS_externTypeConstructorList & inEnumeratedObject,
                                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mConstructorName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mResultTypeName (LOCATION_ARGS) const ;
  public: class GALGAS_typeNameFormalParameterNameList current_mParameterList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_externTypeConstructorList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externTypeConstructorList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @typeNameFormalParameterNameList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_typeNameFormalParameterNameList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_typeNameFormalParameterNameList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_typeNameFormalParameterNameList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mFormalSelector,
                                                 const class GALGAS_lstring & in_mFormalParameterTypeName,
                                                 const class GALGAS_lstring & in_mFormalParameterName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_typeNameFormalParameterNameList extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_typeNameFormalParameterNameList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_typeNameFormalParameterNameList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                         const class GALGAS_lstring & inOperand1,
                                                                                         const class GALGAS_lstring & inOperand2
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_typeNameFormalParameterNameList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_lstring & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_typeNameFormalParameterNameList add_operation (const GALGAS_typeNameFormalParameterNameList & inOperand,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_typeNameFormalParameterNameList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_lstring constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                class GALGAS_lstring & outArgument2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_lstring & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalParameterNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                       class GALGAS_uint constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalParameterTypeNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                           class GALGAS_uint constinArgument1,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalSelectorAtIndex (class GALGAS_lstring constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             class GALGAS_lstring & outArgument2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalParameterNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalParameterTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalSelectorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_typeNameFormalParameterNameList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_typeNameFormalParameterNameList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_typeNameFormalParameterNameList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_typeNameFormalParameterNameList ;
 
} ; // End of GALGAS_typeNameFormalParameterNameList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_typeNameFormalParameterNameList : public cGenericAbstractEnumerator {
  public: cEnumerator_typeNameFormalParameterNameList (const GALGAS_typeNameFormalParameterNameList & inEnumeratedObject,
                                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mFormalSelector (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mFormalParameterTypeName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mFormalParameterName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_typeNameFormalParameterNameList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeNameFormalParameterNameList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @externTypeConstructorList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_externTypeConstructorList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mConstructorName ;
  public: inline GALGAS_lstring readProperty_mConstructorName (void) const {
    return mProperty_mConstructorName ;
  }

  public: GALGAS_lstring mProperty_mResultTypeName ;
  public: inline GALGAS_lstring readProperty_mResultTypeName (void) const {
    return mProperty_mResultTypeName ;
  }

  public: GALGAS_typeNameFormalParameterNameList mProperty_mParameterList ;
  public: inline GALGAS_typeNameFormalParameterNameList readProperty_mParameterList (void) const {
    return mProperty_mParameterList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_externTypeConstructorList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_externTypeConstructorList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMConstructorName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConstructorName = inValue ;
  }

  public: inline void setter_setMResultTypeName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mResultTypeName = inValue ;
  }

  public: inline void setter_setMParameterList (const GALGAS_typeNameFormalParameterNameList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameterList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_externTypeConstructorList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_externTypeConstructorList_2D_element (const GALGAS_lstring & in_mConstructorName,
                                                       const GALGAS_lstring & in_mResultTypeName,
                                                       const GALGAS_typeNameFormalParameterNameList & in_mParameterList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_externTypeConstructorList_2D_element extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_externTypeConstructorList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_lstring & inOperand1,
                                                                                    const class GALGAS_typeNameFormalParameterNameList & inOperand2
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_externTypeConstructorList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_externTypeConstructorList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externTypeConstructorList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @externTypeGetterList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_externTypeGetterList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_externTypeGetterList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_externTypeGetterList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mGetterName,
                                                 const class GALGAS_lstring & in_mResultTypeName,
                                                 const class GALGAS_typeNameFormalParameterNameList & in_mParameterList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_externTypeGetterList extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_externTypeGetterList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_externTypeGetterList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_lstring & inOperand1,
                                                                              const class GALGAS_typeNameFormalParameterNameList & inOperand2
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_externTypeGetterList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_typeNameFormalParameterNameList & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_externTypeGetterList add_operation (const GALGAS_externTypeGetterList & inOperand,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_externTypeGetterList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_typeNameFormalParameterNameList constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_typeNameFormalParameterNameList & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                class GALGAS_typeNameFormalParameterNameList & outArgument2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_typeNameFormalParameterNameList & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGetterNameAtIndex (class GALGAS_lstring constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParameterListAtIndex (class GALGAS_typeNameFormalParameterNameList constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMResultTypeNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_typeNameFormalParameterNameList & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             class GALGAS_typeNameFormalParameterNameList & outArgument2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mGetterNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_typeNameFormalParameterNameList getter_mParameterListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mResultTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_externTypeGetterList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_externTypeGetterList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_externTypeGetterList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_externTypeGetterList ;
 
} ; // End of GALGAS_externTypeGetterList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_externTypeGetterList : public cGenericAbstractEnumerator {
  public: cEnumerator_externTypeGetterList (const GALGAS_externTypeGetterList & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mGetterName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mResultTypeName (LOCATION_ARGS) const ;
  public: class GALGAS_typeNameFormalParameterNameList current_mParameterList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_externTypeGetterList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externTypeGetterList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @externTypeGetterList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_externTypeGetterList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mGetterName ;
  public: inline GALGAS_lstring readProperty_mGetterName (void) const {
    return mProperty_mGetterName ;
  }

  public: GALGAS_lstring mProperty_mResultTypeName ;
  public: inline GALGAS_lstring readProperty_mResultTypeName (void) const {
    return mProperty_mResultTypeName ;
  }

  public: GALGAS_typeNameFormalParameterNameList mProperty_mParameterList ;
  public: inline GALGAS_typeNameFormalParameterNameList readProperty_mParameterList (void) const {
    return mProperty_mParameterList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_externTypeGetterList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_externTypeGetterList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMGetterName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGetterName = inValue ;
  }

  public: inline void setter_setMResultTypeName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mResultTypeName = inValue ;
  }

  public: inline void setter_setMParameterList (const GALGAS_typeNameFormalParameterNameList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameterList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_externTypeGetterList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_externTypeGetterList_2D_element (const GALGAS_lstring & in_mGetterName,
                                                  const GALGAS_lstring & in_mResultTypeName,
                                                  const GALGAS_typeNameFormalParameterNameList & in_mParameterList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_externTypeGetterList_2D_element extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_externTypeGetterList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_lstring & inOperand1,
                                                                               const class GALGAS_typeNameFormalParameterNameList & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_externTypeGetterList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_externTypeGetterList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externTypeGetterList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @externTypeSetterList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_externTypeSetterList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_externTypeSetterList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_externTypeSetterList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mSetterName,
                                                 const class GALGAS_formalParameterListAST & in_mFormalParameterList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_externTypeSetterList extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_externTypeSetterList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_externTypeSetterList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_formalParameterListAST & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_externTypeSetterList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_formalParameterListAST & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_externTypeSetterList add_operation (const GALGAS_externTypeSetterList & inOperand,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_externTypeSetterList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_formalParameterListAST constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_formalParameterListAST & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_formalParameterListAST & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_formalParameterListAST & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalParameterListAtIndex (class GALGAS_formalParameterListAST constinArgument0,
                                                                       class GALGAS_uint constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSetterNameAtIndex (class GALGAS_lstring constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_formalParameterListAST & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_formalParameterListAST & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST getter_mFormalParameterListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSetterNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_externTypeSetterList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_externTypeSetterList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_externTypeSetterList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_externTypeSetterList ;
 
} ; // End of GALGAS_externTypeSetterList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_externTypeSetterList : public cGenericAbstractEnumerator {
  public: cEnumerator_externTypeSetterList (const GALGAS_externTypeSetterList & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mSetterName (LOCATION_ARGS) const ;
  public: class GALGAS_formalParameterListAST current_mFormalParameterList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_externTypeSetterList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externTypeSetterList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @formalParameterListAST list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_formalParameterListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_formalParameterListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_formalParameterListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mFormalSelector,
                                                 const class GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                 const class GALGAS_lstring & in_mFormalArgumentTypeName,
                                                 const class GALGAS_lstring & in_mFormalArgumentName,
                                                 const class GALGAS_bool & in_mIsUnused
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_formalParameterListAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_formalParameterListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_formalParameterListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_formalArgumentPassingModeAST & inOperand1,
                                                                                const class GALGAS_lstring & inOperand2,
                                                                                const class GALGAS_lstring & inOperand3,
                                                                                const class GALGAS_bool & inOperand4
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_formalParameterListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_formalArgumentPassingModeAST & inOperand1,
                                                     const class GALGAS_lstring & inOperand2,
                                                     const class GALGAS_lstring & inOperand3,
                                                     const class GALGAS_bool & inOperand4
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_formalParameterListAST add_operation (const GALGAS_formalParameterListAST & inOperand,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_formalParameterListAST_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_formalArgumentPassingModeAST constinArgument1,
                                                      class GALGAS_lstring constinArgument2,
                                                      class GALGAS_lstring constinArgument3,
                                                      class GALGAS_bool constinArgument4,
                                                      class GALGAS_uint constinArgument5,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_formalArgumentPassingModeAST & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 class GALGAS_lstring & outArgument3,
                                                 class GALGAS_bool & outArgument4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_formalArgumentPassingModeAST & outArgument1,
                                                class GALGAS_lstring & outArgument2,
                                                class GALGAS_lstring & outArgument3,
                                                class GALGAS_bool & outArgument4,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_formalArgumentPassingModeAST & outArgument1,
                                                      class GALGAS_lstring & outArgument2,
                                                      class GALGAS_lstring & outArgument3,
                                                      class GALGAS_bool & outArgument4,
                                                      class GALGAS_uint constinArgument5,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentPassingModeAtIndex (class GALGAS_formalArgumentPassingModeAST constinArgument0,
                                                                             class GALGAS_uint constinArgument1,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentTypeNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                          class GALGAS_uint constinArgument1,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalSelectorAtIndex (class GALGAS_lstring constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsUnusedAtIndex (class GALGAS_bool constinArgument0,
                                                            class GALGAS_uint constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_formalArgumentPassingModeAST & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              class GALGAS_lstring & outArgument3,
                                              class GALGAS_bool & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_formalArgumentPassingModeAST & outArgument1,
                                             class GALGAS_lstring & outArgument2,
                                             class GALGAS_lstring & outArgument3,
                                             class GALGAS_bool & outArgument4,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalArgumentNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formalArgumentPassingModeAST getter_mFormalArgumentPassingModeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalArgumentTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalSelectorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsUnusedAtIndex (const class GALGAS_uint & constinOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_formalParameterListAST ;
 
} ; // End of GALGAS_formalParameterListAST class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_formalParameterListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_formalParameterListAST (const GALGAS_formalParameterListAST & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mFormalSelector (LOCATION_ARGS) const ;
  public: class GALGAS_formalArgumentPassingModeAST current_mFormalArgumentPassingMode (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mFormalArgumentTypeName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mFormalArgumentName (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mIsUnused (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_formalParameterListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formalParameterListAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @externTypeSetterList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_externTypeSetterList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mSetterName ;
  public: inline GALGAS_lstring readProperty_mSetterName (void) const {
    return mProperty_mSetterName ;
  }

  public: GALGAS_formalParameterListAST mProperty_mFormalParameterList ;
  public: inline GALGAS_formalParameterListAST readProperty_mFormalParameterList (void) const {
    return mProperty_mFormalParameterList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_externTypeSetterList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_externTypeSetterList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSetterName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSetterName = inValue ;
  }

  public: inline void setter_setMFormalParameterList (const GALGAS_formalParameterListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalParameterList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_externTypeSetterList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_externTypeSetterList_2D_element (const GALGAS_lstring & in_mSetterName,
                                                  const GALGAS_formalParameterListAST & in_mFormalParameterList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_externTypeSetterList_2D_element extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_externTypeSetterList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_formalParameterListAST & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_externTypeSetterList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_externTypeSetterList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externTypeSetterList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @externTypeMethodList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_externTypeMethodList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_externTypeMethodList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_externTypeMethodList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mMethodName,
                                                 const class GALGAS_formalParameterListAST & in_mFormalParameterList,
                                                 const class GALGAS_location & in_mDeclarationLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_externTypeMethodList extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_externTypeMethodList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_externTypeMethodList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_formalParameterListAST & inOperand1,
                                                                              const class GALGAS_location & inOperand2
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_externTypeMethodList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_formalParameterListAST & inOperand1,
                                                     const class GALGAS_location & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_externTypeMethodList add_operation (const GALGAS_externTypeMethodList & inOperand,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_externTypeMethodList_2D_element inArgument0,
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

  public: VIRTUAL_IN_DEBUG void setter_setMDeclarationLocationAtIndex (class GALGAS_location constinArgument0,
                                                                       class GALGAS_uint constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalParameterListAtIndex (class GALGAS_formalParameterListAST constinArgument0,
                                                                       class GALGAS_uint constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMethodNameAtIndex (class GALGAS_lstring constinArgument0,
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
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mDeclarationLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterListAST getter_mFormalParameterListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mMethodNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_externTypeMethodList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_externTypeMethodList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_externTypeMethodList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_externTypeMethodList ;
 
} ; // End of GALGAS_externTypeMethodList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_externTypeMethodList : public cGenericAbstractEnumerator {
  public: cEnumerator_externTypeMethodList (const GALGAS_externTypeMethodList & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mMethodName (LOCATION_ARGS) const ;
  public: class GALGAS_formalParameterListAST current_mFormalParameterList (LOCATION_ARGS) const ;
  public: class GALGAS_location current_mDeclarationLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_externTypeMethodList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externTypeMethodList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @externTypeMethodList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_externTypeMethodList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mMethodName ;
  public: inline GALGAS_lstring readProperty_mMethodName (void) const {
    return mProperty_mMethodName ;
  }

  public: GALGAS_formalParameterListAST mProperty_mFormalParameterList ;
  public: inline GALGAS_formalParameterListAST readProperty_mFormalParameterList (void) const {
    return mProperty_mFormalParameterList ;
  }

  public: GALGAS_location mProperty_mDeclarationLocation ;
  public: inline GALGAS_location readProperty_mDeclarationLocation (void) const {
    return mProperty_mDeclarationLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_externTypeMethodList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_externTypeMethodList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMMethodName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMethodName = inValue ;
  }

  public: inline void setter_setMFormalParameterList (const GALGAS_formalParameterListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalParameterList = inValue ;
  }

  public: inline void setter_setMDeclarationLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeclarationLocation = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_externTypeMethodList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_externTypeMethodList_2D_element (const GALGAS_lstring & in_mMethodName,
                                                  const GALGAS_formalParameterListAST & in_mFormalParameterList,
                                                  const GALGAS_location & in_mDeclarationLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_externTypeMethodList_2D_element extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_externTypeMethodList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_formalParameterListAST & inOperand1,
                                                                               const class GALGAS_location & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_externTypeMethodList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_externTypeMethodList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externTypeMethodList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @typeNameFormalParameterNameList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_typeNameFormalParameterNameList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mFormalSelector ;
  public: inline GALGAS_lstring readProperty_mFormalSelector (void) const {
    return mProperty_mFormalSelector ;
  }

  public: GALGAS_lstring mProperty_mFormalParameterTypeName ;
  public: inline GALGAS_lstring readProperty_mFormalParameterTypeName (void) const {
    return mProperty_mFormalParameterTypeName ;
  }

  public: GALGAS_lstring mProperty_mFormalParameterName ;
  public: inline GALGAS_lstring readProperty_mFormalParameterName (void) const {
    return mProperty_mFormalParameterName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_typeNameFormalParameterNameList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_typeNameFormalParameterNameList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFormalSelector (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalSelector = inValue ;
  }

  public: inline void setter_setMFormalParameterTypeName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalParameterTypeName = inValue ;
  }

  public: inline void setter_setMFormalParameterName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalParameterName = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_typeNameFormalParameterNameList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_typeNameFormalParameterNameList_2D_element (const GALGAS_lstring & in_mFormalSelector,
                                                             const GALGAS_lstring & in_mFormalParameterTypeName,
                                                             const GALGAS_lstring & in_mFormalParameterName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_typeNameFormalParameterNameList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_typeNameFormalParameterNameList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                          const class GALGAS_lstring & inOperand1,
                                                                                          const class GALGAS_lstring & inOperand2
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_typeNameFormalParameterNameList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_typeNameFormalParameterNameList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeNameFormalParameterNameList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                     Phase 1: @formalArgumentPassingModeAST enum                                     *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_formalArgumentPassingModeAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_formalArgumentPassingModeAST (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_argumentIn,
    kEnum_argumentOut,
    kEnum_argumentInOut,
    kEnum_argumentConstantIn
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
  public: static GALGAS_formalArgumentPassingModeAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_formalArgumentPassingModeAST constructor_argumentConstantIn (LOCATION_ARGS) ;

  public: static class GALGAS_formalArgumentPassingModeAST constructor_argumentIn (LOCATION_ARGS) ;

  public: static class GALGAS_formalArgumentPassingModeAST constructor_argumentInOut (LOCATION_ARGS) ;

  public: static class GALGAS_formalArgumentPassingModeAST constructor_argumentOut (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_formalArgumentPassingModeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isArgumentConstantIn (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isArgumentIn (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isArgumentInOut (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isArgumentOut (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_argumentConstantIn () const ;

  public: VIRTUAL_IN_DEBUG bool optional_argumentIn () const ;

  public: VIRTUAL_IN_DEBUG bool optional_argumentInOut () const ;

  public: VIRTUAL_IN_DEBUG bool optional_argumentOut () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_formalArgumentPassingModeAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formalArgumentPassingModeAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @formalParameterListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_formalParameterListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mFormalSelector ;
  public: inline GALGAS_lstring readProperty_mFormalSelector (void) const {
    return mProperty_mFormalSelector ;
  }

  public: GALGAS_formalArgumentPassingModeAST mProperty_mFormalArgumentPassingMode ;
  public: inline GALGAS_formalArgumentPassingModeAST readProperty_mFormalArgumentPassingMode (void) const {
    return mProperty_mFormalArgumentPassingMode ;
  }

  public: GALGAS_lstring mProperty_mFormalArgumentTypeName ;
  public: inline GALGAS_lstring readProperty_mFormalArgumentTypeName (void) const {
    return mProperty_mFormalArgumentTypeName ;
  }

  public: GALGAS_lstring mProperty_mFormalArgumentName ;
  public: inline GALGAS_lstring readProperty_mFormalArgumentName (void) const {
    return mProperty_mFormalArgumentName ;
  }

  public: GALGAS_bool mProperty_mIsUnused ;
  public: inline GALGAS_bool readProperty_mIsUnused (void) const {
    return mProperty_mIsUnused ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_formalParameterListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFormalSelector (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalSelector = inValue ;
  }

  public: inline void setter_setMFormalArgumentPassingMode (const GALGAS_formalArgumentPassingModeAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentPassingMode = inValue ;
  }

  public: inline void setter_setMFormalArgumentTypeName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentTypeName = inValue ;
  }

  public: inline void setter_setMFormalArgumentName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentName = inValue ;
  }

  public: inline void setter_setMIsUnused (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsUnused = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_formalParameterListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_formalParameterListAST_2D_element (const GALGAS_lstring & in_mFormalSelector,
                                                    const GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                    const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                    const GALGAS_lstring & in_mFormalArgumentName,
                                                    const GALGAS_bool & in_mIsUnused) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_formalParameterListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_formalParameterListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_formalArgumentPassingModeAST & inOperand1,
                                                                                 const class GALGAS_lstring & inOperand2,
                                                                                 const class GALGAS_lstring & inOperand3,
                                                                                 const class GALGAS_bool & inOperand4
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_formalParameterListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_formalParameterListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formalParameterListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @graphInsertModifierList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_graphInsertModifierList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_graphInsertModifierList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_graphInsertModifierList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mInsertModifierName,
                                                 const class GALGAS_lstring & in_mInsertErrorMessage
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_graphInsertModifierList extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_graphInsertModifierList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_graphInsertModifierList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_graphInsertModifierList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_graphInsertModifierList add_operation (const GALGAS_graphInsertModifierList & inOperand,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_graphInsertModifierList_2D_element inArgument0,
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

  public: VIRTUAL_IN_DEBUG void setter_setMInsertErrorMessageAtIndex (class GALGAS_lstring constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInsertModifierNameAtIndex (class GALGAS_lstring constinArgument0,
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
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mInsertErrorMessageAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mInsertModifierNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_graphInsertModifierList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_graphInsertModifierList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_graphInsertModifierList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_graphInsertModifierList ;
 
} ; // End of GALGAS_graphInsertModifierList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_graphInsertModifierList : public cGenericAbstractEnumerator {
  public: cEnumerator_graphInsertModifierList (const GALGAS_graphInsertModifierList & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mInsertModifierName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mInsertErrorMessage (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_graphInsertModifierList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_graphInsertModifierList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @graphInsertModifierList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_graphInsertModifierList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mInsertModifierName ;
  public: inline GALGAS_lstring readProperty_mInsertModifierName (void) const {
    return mProperty_mInsertModifierName ;
  }

  public: GALGAS_lstring mProperty_mInsertErrorMessage ;
  public: inline GALGAS_lstring readProperty_mInsertErrorMessage (void) const {
    return mProperty_mInsertErrorMessage ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_graphInsertModifierList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_graphInsertModifierList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInsertModifierName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInsertModifierName = inValue ;
  }

  public: inline void setter_setMInsertErrorMessage (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInsertErrorMessage = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_graphInsertModifierList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_graphInsertModifierList_2D_element (const GALGAS_lstring & in_mInsertModifierName,
                                                     const GALGAS_lstring & in_mInsertErrorMessage) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_graphInsertModifierList_2D_element extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_graphInsertModifierList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_lstring & inOperand1
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_graphInsertModifierList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_graphInsertModifierList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_graphInsertModifierList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @insertMethodListAST list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_insertMethodListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_insertMethodListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_insertMethodListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mInsertMethodName,
                                                 const class GALGAS_lstring & in_mErrorMessage,
                                                 const class GALGAS_lstring & in_mShadowErrorMessage,
                                                 const class GALGAS_lstring & in_mInitialStateName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_insertMethodListAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_insertMethodListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_insertMethodListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_lstring & inOperand1,
                                                                             const class GALGAS_lstring & inOperand2,
                                                                             const class GALGAS_lstring & inOperand3
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_insertMethodListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_lstring & inOperand2,
                                                     const class GALGAS_lstring & inOperand3
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_insertMethodListAST add_operation (const GALGAS_insertMethodListAST & inOperand,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_insertMethodListAST_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_lstring constinArgument2,
                                                      class GALGAS_lstring constinArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 class GALGAS_lstring & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                class GALGAS_lstring & outArgument2,
                                                class GALGAS_lstring & outArgument3,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_lstring & outArgument2,
                                                      class GALGAS_lstring & outArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMErrorMessageAtIndex (class GALGAS_lstring constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInitialStateNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInsertMethodNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMShadowErrorMessageAtIndex (class GALGAS_lstring constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              class GALGAS_lstring & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             class GALGAS_lstring & outArgument2,
                                             class GALGAS_lstring & outArgument3,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mErrorMessageAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mInitialStateNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mInsertMethodNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mShadowErrorMessageAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_insertMethodListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_insertMethodListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_insertMethodListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_insertMethodListAST ;
 
} ; // End of GALGAS_insertMethodListAST class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_insertMethodListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_insertMethodListAST (const GALGAS_insertMethodListAST & inEnumeratedObject,
                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mInsertMethodName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mErrorMessage (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mShadowErrorMessage (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mInitialStateName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_insertMethodListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_insertMethodListAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @insertMethodListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_insertMethodListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mInsertMethodName ;
  public: inline GALGAS_lstring readProperty_mInsertMethodName (void) const {
    return mProperty_mInsertMethodName ;
  }

  public: GALGAS_lstring mProperty_mErrorMessage ;
  public: inline GALGAS_lstring readProperty_mErrorMessage (void) const {
    return mProperty_mErrorMessage ;
  }

  public: GALGAS_lstring mProperty_mShadowErrorMessage ;
  public: inline GALGAS_lstring readProperty_mShadowErrorMessage (void) const {
    return mProperty_mShadowErrorMessage ;
  }

  public: GALGAS_lstring mProperty_mInitialStateName ;
  public: inline GALGAS_lstring readProperty_mInitialStateName (void) const {
    return mProperty_mInitialStateName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_insertMethodListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_insertMethodListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInsertMethodName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInsertMethodName = inValue ;
  }

  public: inline void setter_setMErrorMessage (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mErrorMessage = inValue ;
  }

  public: inline void setter_setMShadowErrorMessage (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mShadowErrorMessage = inValue ;
  }

  public: inline void setter_setMInitialStateName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInitialStateName = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_insertMethodListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_insertMethodListAST_2D_element (const GALGAS_lstring & in_mInsertMethodName,
                                                 const GALGAS_lstring & in_mErrorMessage,
                                                 const GALGAS_lstring & in_mShadowErrorMessage,
                                                 const GALGAS_lstring & in_mInitialStateName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_insertMethodListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_insertMethodListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_lstring & inOperand1,
                                                                              const class GALGAS_lstring & inOperand2,
                                                                              const class GALGAS_lstring & inOperand3
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_insertMethodListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_insertMethodListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_insertMethodListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @mapSearchMethodListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_mapSearchMethodListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mSearchMethodName ;
  public: inline GALGAS_lstring readProperty_mSearchMethodName (void) const {
    return mProperty_mSearchMethodName ;
  }

  public: GALGAS_lstring mProperty_mErrorMessage ;
  public: inline GALGAS_lstring readProperty_mErrorMessage (void) const {
    return mProperty_mErrorMessage ;
  }

  public: GALGAS_lstring mProperty_mActionName ;
  public: inline GALGAS_lstring readProperty_mActionName (void) const {
    return mProperty_mActionName ;
  }

  public: GALGAS_bool mProperty_mLocationAttribute ;
  public: inline GALGAS_bool readProperty_mLocationAttribute (void) const {
    return mProperty_mLocationAttribute ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_mapSearchMethodListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_mapSearchMethodListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSearchMethodName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSearchMethodName = inValue ;
  }

  public: inline void setter_setMErrorMessage (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mErrorMessage = inValue ;
  }

  public: inline void setter_setMActionName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mActionName = inValue ;
  }

  public: inline void setter_setMLocationAttribute (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLocationAttribute = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_mapSearchMethodListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_mapSearchMethodListAST_2D_element (const GALGAS_lstring & in_mSearchMethodName,
                                                    const GALGAS_lstring & in_mErrorMessage,
                                                    const GALGAS_lstring & in_mActionName,
                                                    const GALGAS_bool & in_mLocationAttribute) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_mapSearchMethodListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_mapSearchMethodListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1,
                                                                                 const class GALGAS_lstring & inOperand2,
                                                                                 const class GALGAS_bool & inOperand3
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_mapSearchMethodListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_mapSearchMethodListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapSearchMethodListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @mapRemoveMethodListAST list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_mapRemoveMethodListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_mapRemoveMethodListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_mapRemoveMethodListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mMethodName,
                                                 const class GALGAS_lstring & in_mErrorMessage
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_mapRemoveMethodListAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_mapRemoveMethodListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_mapRemoveMethodListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_mapRemoveMethodListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_mapRemoveMethodListAST add_operation (const GALGAS_mapRemoveMethodListAST & inOperand,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_mapRemoveMethodListAST_2D_element inArgument0,
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

  public: VIRTUAL_IN_DEBUG void setter_setMErrorMessageAtIndex (class GALGAS_lstring constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMethodNameAtIndex (class GALGAS_lstring constinArgument0,
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
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mErrorMessageAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mMethodNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_mapRemoveMethodListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_mapRemoveMethodListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_mapRemoveMethodListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_mapRemoveMethodListAST ;
 
} ; // End of GALGAS_mapRemoveMethodListAST class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_mapRemoveMethodListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_mapRemoveMethodListAST (const GALGAS_mapRemoveMethodListAST & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mMethodName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mErrorMessage (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_mapRemoveMethodListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapRemoveMethodListAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @mapRemoveMethodListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_mapRemoveMethodListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mMethodName ;
  public: inline GALGAS_lstring readProperty_mMethodName (void) const {
    return mProperty_mMethodName ;
  }

  public: GALGAS_lstring mProperty_mErrorMessage ;
  public: inline GALGAS_lstring readProperty_mErrorMessage (void) const {
    return mProperty_mErrorMessage ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_mapRemoveMethodListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_mapRemoveMethodListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMMethodName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMethodName = inValue ;
  }

  public: inline void setter_setMErrorMessage (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mErrorMessage = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_mapRemoveMethodListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_mapRemoveMethodListAST_2D_element (const GALGAS_lstring & in_mMethodName,
                                                    const GALGAS_lstring & in_mErrorMessage) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_mapRemoveMethodListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_mapRemoveMethodListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_mapRemoveMethodListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_mapRemoveMethodListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapRemoveMethodListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @insertOrReplaceDeclarationListAST list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_insertOrReplaceDeclarationListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_insertOrReplaceDeclarationListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_insertOrReplaceDeclarationListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_location & in_mInsertOrReplaceDeclarationLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_insertOrReplaceDeclarationListAST extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_insertOrReplaceDeclarationListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_insertOrReplaceDeclarationListAST constructor_listWithValue (const class GALGAS_location & inOperand0
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_insertOrReplaceDeclarationListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_location & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_insertOrReplaceDeclarationListAST add_operation (const GALGAS_insertOrReplaceDeclarationListAST & inOperand,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_insertOrReplaceDeclarationListAST_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_location constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_location & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_location & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_location & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInsertOrReplaceDeclarationLocationAtIndex (class GALGAS_location constinArgument0,
                                                                                      class GALGAS_uint constinArgument1,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_location & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_location & outArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mInsertOrReplaceDeclarationLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_insertOrReplaceDeclarationListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_insertOrReplaceDeclarationListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_insertOrReplaceDeclarationListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_insertOrReplaceDeclarationListAST ;
 
} ; // End of GALGAS_insertOrReplaceDeclarationListAST class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_insertOrReplaceDeclarationListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_insertOrReplaceDeclarationListAST (const GALGAS_insertOrReplaceDeclarationListAST & inEnumeratedObject,
                                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_location current_mInsertOrReplaceDeclarationLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_insertOrReplaceDeclarationListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_insertOrReplaceDeclarationListAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @insertOrReplaceDeclarationListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_insertOrReplaceDeclarationListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_location mProperty_mInsertOrReplaceDeclarationLocation ;
  public: inline GALGAS_location readProperty_mInsertOrReplaceDeclarationLocation (void) const {
    return mProperty_mInsertOrReplaceDeclarationLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_insertOrReplaceDeclarationListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_insertOrReplaceDeclarationListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInsertOrReplaceDeclarationLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInsertOrReplaceDeclarationLocation = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_insertOrReplaceDeclarationListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_insertOrReplaceDeclarationListAST_2D_element (const GALGAS_location & in_mInsertOrReplaceDeclarationLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_insertOrReplaceDeclarationListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_insertOrReplaceDeclarationListAST_2D_element constructor_new (const class GALGAS_location & inOperand0
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_insertOrReplaceDeclarationListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_insertOrReplaceDeclarationListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_insertOrReplaceDeclarationListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @insertMethodMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_insertMethodMap ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_insertMethodMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_insertMethodMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_insertMethodMap (const GALGAS_insertMethodMap & inSource) ;
  public: GALGAS_insertMethodMap & operator = (const GALGAS_insertMethodMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_insertMethodMap extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_insertMethodMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_insertMethodMap constructor_mapWithMapToOverride (const class GALGAS_insertMethodMap & inOperand0
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
  public: VIRTUAL_IN_DEBUG class GALGAS_insertMethodMap getter_overriddenMap (C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_insertMethodMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                            const GALGAS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_insertMethodMap ;
 
} ; // End of GALGAS_insertMethodMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_insertMethodMap : public cGenericAbstractEnumerator {
  public: cEnumerator_insertMethodMap (const GALGAS_insertMethodMap & inEnumeratedObject,
                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_insertMethodMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_insertMethodMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@insertMethodMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_insertMethodMap : public cMapElement {
//--- Map attributes

//--- Constructor
  public: cMapElement_insertMethodMap (const GALGAS_lstring & inKey
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
// Phase 1: @insertMethodMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_insertMethodMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_insertMethodMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_insertMethodMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_insertMethodMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_insertMethodMap_2D_element (const GALGAS_lstring & in_lkey) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_insertMethodMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_insertMethodMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_insertMethodMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_insertMethodMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_insertMethodMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @searchMethodMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_searchMethodMap ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_searchMethodMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_searchMethodMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_searchMethodMap (const GALGAS_searchMethodMap & inSource) ;
  public: GALGAS_searchMethodMap & operator = (const GALGAS_searchMethodMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_searchMethodMap extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_searchMethodMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_searchMethodMap constructor_mapWithMapToOverride (const class GALGAS_searchMethodMap & inOperand0
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
  public: VIRTUAL_IN_DEBUG class GALGAS_searchMethodMap getter_overriddenMap (C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_searchMethodMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                            const GALGAS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_searchMethodMap ;
 
} ; // End of GALGAS_searchMethodMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_searchMethodMap : public cGenericAbstractEnumerator {
  public: cEnumerator_searchMethodMap (const GALGAS_searchMethodMap & inEnumeratedObject,
                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_searchMethodMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_searchMethodMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@searchMethodMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_searchMethodMap : public cMapElement {
//--- Map attributes

//--- Constructor
  public: cMapElement_searchMethodMap (const GALGAS_lstring & inKey
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
// Phase 1: @searchMethodMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_searchMethodMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_searchMethodMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_searchMethodMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_searchMethodMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_searchMethodMap_2D_element (const GALGAS_lstring & in_lkey) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_searchMethodMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_searchMethodMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_searchMethodMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_searchMethodMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_searchMethodMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                        Phase 1: @mapAutomatonMessageKind enum                                       *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_mapAutomatonMessageKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_mapAutomatonMessageKind (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_noMessage,
    kEnum_warningMessage,
    kEnum_errorMessage
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
  public: static GALGAS_mapAutomatonMessageKind extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_mapAutomatonMessageKind constructor_errorMessage (LOCATION_ARGS) ;

  public: static class GALGAS_mapAutomatonMessageKind constructor_noMessage (LOCATION_ARGS) ;

  public: static class GALGAS_mapAutomatonMessageKind constructor_warningMessage (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_mapAutomatonMessageKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isErrorMessage (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNoMessage (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isWarningMessage (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_errorMessage () const ;

  public: VIRTUAL_IN_DEBUG bool optional_noMessage () const ;

  public: VIRTUAL_IN_DEBUG bool optional_warningMessage () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_mapAutomatonMessageKind class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapAutomatonMessageKind ;

