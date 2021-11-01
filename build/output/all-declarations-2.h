#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalRoutineOrFunctionFormalInputArgumentAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST (const class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalRoutineOrFunctionFormalInputArgumentAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST : public acStrongPtr_class {
//--- Properties

//--- Constructor
  public: cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak (const class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & inSource) ;

  public: GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak & operator = (const class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST bang_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalFormalInputArgumentAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalFormalInputArgumentAST : public GALGAS_abstractLexicalRoutineActualArgumentAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalFormalInputArgumentAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalFormalInputArgumentAST (const class cPtr_lexicalFormalInputArgumentAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST readProperty_mRoutineOrFunctionFormalInputArgument (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalFormalInputArgumentAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalFormalInputArgumentAST constructor_new (const class GALGAS_location & inOperand0,
                                                                             const class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalFormalInputArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalFormalInputArgumentAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFormalInputArgumentAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalFormalInputArgumentAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalFormalInputArgumentAST : public cPtr_abstractLexicalRoutineActualArgumentAST {
//--- Properties
  public: GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST mProperty_mRoutineOrFunctionFormalInputArgument ;

//--- Constructor
  public: cPtr_lexicalFormalInputArgumentAST (const GALGAS_location & in_mActualPassingModeLocation,
                                              const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mRoutineOrFunctionFormalInputArgument
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalFormalInputArgumentAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalFormalInputArgumentAST_2D_weak : public GALGAS_abstractLexicalRoutineActualArgumentAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexicalFormalInputArgumentAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalFormalInputArgumentAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalFormalInputArgumentAST_2D_weak (const class GALGAS_lexicalFormalInputArgumentAST & inSource) ;

  public: GALGAS_lexicalFormalInputArgumentAST_2D_weak & operator = (const class GALGAS_lexicalFormalInputArgumentAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalFormalInputArgumentAST bang_lexicalFormalInputArgumentAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalFormalInputArgumentAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalFormalInputArgumentAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalFormalInputArgumentAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalFormalInputArgumentAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFormalInputArgumentAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalFunctionCallActualArgumentListAST list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalFunctionCallActualArgumentListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_lexicalFunctionCallActualArgumentListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_lexicalFunctionCallActualArgumentListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mLexicalActualInputArgument
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalFunctionCallActualArgumentListAST extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalFunctionCallActualArgumentListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalFunctionCallActualArgumentListAST constructor_listWithValue (const class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & inOperand0
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_lexicalFunctionCallActualArgumentListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_lexicalFunctionCallActualArgumentListAST add_operation (const GALGAS_lexicalFunctionCallActualArgumentListAST & inOperand,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLexicalActualInputArgumentAtIndex (class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST constinArgument0,
                                                                              class GALGAS_uint constinArgument1,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST getter_mLexicalActualInputArgumentAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalFunctionCallActualArgumentListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalFunctionCallActualArgumentListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalFunctionCallActualArgumentListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalFunctionCallActualArgumentListAST ;
 
} ; // End of GALGAS_lexicalFunctionCallActualArgumentListAST class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_lexicalFunctionCallActualArgumentListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_lexicalFunctionCallActualArgumentListAST (const GALGAS_lexicalFunctionCallActualArgumentListAST & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST current_mLexicalActualInputArgument (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionCallActualArgumentListAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalFunctionCallActualArgumentListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST mProperty_mLexicalActualInputArgument ;
  public: inline GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST readProperty_mLexicalActualInputArgument (void) const {
    return mProperty_mLexicalActualInputArgument ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLexicalActualInputArgument (const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalActualInputArgument = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element (const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mLexicalActualInputArgument) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element constructor_new (const class GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & inOperand0
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalCurrentCharacterInputArgumentAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalCurrentCharacterInputArgumentAST : public GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalCurrentCharacterInputArgumentAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalCurrentCharacterInputArgumentAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalCurrentCharacterInputArgumentAST (const class cPtr_lexicalCurrentCharacterInputArgumentAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mLocation (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalCurrentCharacterInputArgumentAST extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalCurrentCharacterInputArgumentAST constructor_new (const class GALGAS_location & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalCurrentCharacterInputArgumentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalCurrentCharacterInputArgumentAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalCurrentCharacterInputArgumentAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalCurrentCharacterInputArgumentAST : public cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST {
//--- Properties
  public: GALGAS_location mProperty_mLocation ;

//--- Constructor
  public: cPtr_lexicalCurrentCharacterInputArgumentAST (const GALGAS_location & in_mLocation
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalCurrentCharacterInputArgumentAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalCurrentCharacterInputArgumentAST_2D_weak : public GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexicalCurrentCharacterInputArgumentAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalCurrentCharacterInputArgumentAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalCurrentCharacterInputArgumentAST_2D_weak (const class GALGAS_lexicalCurrentCharacterInputArgumentAST & inSource) ;

  public: GALGAS_lexicalCurrentCharacterInputArgumentAST_2D_weak & operator = (const class GALGAS_lexicalCurrentCharacterInputArgumentAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalCurrentCharacterInputArgumentAST bang_lexicalCurrentCharacterInputArgumentAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalCurrentCharacterInputArgumentAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalCurrentCharacterInputArgumentAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalCurrentCharacterInputArgumentAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalCurrentCharacterInputArgumentAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalLogInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalLogInstructionAST : public GALGAS_lexicalInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalLogInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalLogInstructionAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalLogInstructionAST (const class cPtr_lexicalLogInstructionAST * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalLogInstructionAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalLogInstructionAST constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalLogInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalLogInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalLogInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalLogInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalLogInstructionAST : public cPtr_lexicalInstructionAST {
//--- Properties

//--- Constructor
  public: cPtr_lexicalLogInstructionAST (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalLogInstructionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalLogInstructionAST_2D_weak : public GALGAS_lexicalInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexicalLogInstructionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalLogInstructionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalLogInstructionAST_2D_weak (const class GALGAS_lexicalLogInstructionAST & inSource) ;

  public: GALGAS_lexicalLogInstructionAST_2D_weak & operator = (const class GALGAS_lexicalLogInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalLogInstructionAST bang_lexicalLogInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalLogInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalLogInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalLogInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalLogInstructionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalLogInstructionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                        Phase 1: @lexicalArgumentModeAST enum                                        *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalArgumentModeAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_lexicalArgumentModeAST (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_lexicalInputMode,
    kEnum_lexicalInputOutputMode
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
  public: static GALGAS_lexicalArgumentModeAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalArgumentModeAST constructor_lexicalInputMode (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalArgumentModeAST constructor_lexicalInputOutputMode (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalArgumentModeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLexicalInputMode (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLexicalInputOutputMode (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_lexicalInputMode () const ;

  public: VIRTUAL_IN_DEBUG bool optional_lexicalInputOutputMode () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalArgumentModeAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalArgumentModeAST ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@lexicalArgumentModeAST lexicalFormalModeName' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_lexicalFormalModeName (const class GALGAS_lexicalArgumentModeAST & inObject,
                                                           class C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@lexicalArgumentModeAST cppConstInFormalArgument' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_cppConstInFormalArgument (const class GALGAS_lexicalArgumentModeAST & inObject,
                                                              class C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@lexicalArgumentModeAST cppReferenceInFormalArgument' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_cppReferenceInFormalArgument (const class GALGAS_lexicalArgumentModeAST & inObject,
                                                                  class C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@lexicalArgumentModeAST cocoaPointerInFormalArgument' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_cocoaPointerInFormalArgument (const class GALGAS_lexicalArgumentModeAST & inObject,
                                                                  class C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalExternRoutineFormalArgumentListAST list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalExternRoutineFormalArgumentListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_lexicalExternRoutineFormalArgumentListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_lexicalExternRoutineFormalArgumentListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lexicalArgumentModeAST & in_mPassingMode,
                                                 const class GALGAS_lstring & in_mLexicalTypeName,
                                                 const class GALGAS_lstring & in_mFormalArgumentName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalExternRoutineFormalArgumentListAST extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalExternRoutineFormalArgumentListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalExternRoutineFormalArgumentListAST constructor_listWithValue (const class GALGAS_lexicalArgumentModeAST & inOperand0,
                                                                                                   const class GALGAS_lstring & inOperand1,
                                                                                                   const class GALGAS_lstring & inOperand2
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_lexicalExternRoutineFormalArgumentListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lexicalArgumentModeAST & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_lstring & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_lexicalExternRoutineFormalArgumentListAST add_operation (const GALGAS_lexicalExternRoutineFormalArgumentListAST & inOperand,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lexicalArgumentModeAST constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_lstring constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lexicalArgumentModeAST & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lexicalArgumentModeAST & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                class GALGAS_lstring & outArgument2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lexicalArgumentModeAST & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_lstring & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLexicalTypeNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPassingModeAtIndex (class GALGAS_lexicalArgumentModeAST constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lexicalArgumentModeAST & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lexicalArgumentModeAST & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             class GALGAS_lstring & outArgument2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalArgumentNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLexicalTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalArgumentModeAST getter_mPassingModeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalExternRoutineFormalArgumentListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalExternRoutineFormalArgumentListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalExternRoutineFormalArgumentListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalExternRoutineFormalArgumentListAST ;
 
} ; // End of GALGAS_lexicalExternRoutineFormalArgumentListAST class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_lexicalExternRoutineFormalArgumentListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_lexicalExternRoutineFormalArgumentListAST (const GALGAS_lexicalExternRoutineFormalArgumentListAST & inEnumeratedObject,
                                                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lexicalArgumentModeAST current_mPassingMode (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mLexicalTypeName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mFormalArgumentName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalExternRoutineFormalArgumentListAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalExternRoutineFormalArgumentListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lexicalArgumentModeAST mProperty_mPassingMode ;
  public: inline GALGAS_lexicalArgumentModeAST readProperty_mPassingMode (void) const {
    return mProperty_mPassingMode ;
  }

  public: GALGAS_lstring mProperty_mLexicalTypeName ;
  public: inline GALGAS_lstring readProperty_mLexicalTypeName (void) const {
    return mProperty_mLexicalTypeName ;
  }

  public: GALGAS_lstring mProperty_mFormalArgumentName ;
  public: inline GALGAS_lstring readProperty_mFormalArgumentName (void) const {
    return mProperty_mFormalArgumentName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMPassingMode (const GALGAS_lexicalArgumentModeAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPassingMode = inValue ;
  }

  public: inline void setter_setMLexicalTypeName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalTypeName = inValue ;
  }

  public: inline void setter_setMFormalArgumentName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentName = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element (const GALGAS_lexicalArgumentModeAST & in_mPassingMode,
                                                                       const GALGAS_lstring & in_mLexicalTypeName,
                                                                       const GALGAS_lstring & in_mFormalArgumentName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element constructor_new (const class GALGAS_lexicalArgumentModeAST & inOperand0,
                                                                                                    const class GALGAS_lstring & inOperand1,
                                                                                                    const class GALGAS_lstring & inOperand2
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @externRoutineListAST list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_externRoutineListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_externRoutineListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_externRoutineListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mRoutineName,
                                                 const class GALGAS_lexicalExternRoutineFormalArgumentListAST & in_mLexicalRoutineFormalArgumentList,
                                                 const class GALGAS_stringlist & in_mErrorMessageList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_externRoutineListAST extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_externRoutineListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_externRoutineListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_lexicalExternRoutineFormalArgumentListAST & inOperand1,
                                                                              const class GALGAS_stringlist & inOperand2
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_externRoutineListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lexicalExternRoutineFormalArgumentListAST & inOperand1,
                                                     const class GALGAS_stringlist & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_externRoutineListAST add_operation (const GALGAS_externRoutineListAST & inOperand,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_externRoutineListAST_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lexicalExternRoutineFormalArgumentListAST constinArgument1,
                                                      class GALGAS_stringlist constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lexicalExternRoutineFormalArgumentListAST & outArgument1,
                                                 class GALGAS_stringlist & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lexicalExternRoutineFormalArgumentListAST & outArgument1,
                                                class GALGAS_stringlist & outArgument2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lexicalExternRoutineFormalArgumentListAST & outArgument1,
                                                      class GALGAS_stringlist & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMErrorMessageListAtIndex (class GALGAS_stringlist constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLexicalRoutineFormalArgumentListAtIndex (class GALGAS_lexicalExternRoutineFormalArgumentListAST constinArgument0,
                                                                                    class GALGAS_uint constinArgument1,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRoutineNameAtIndex (class GALGAS_lstring constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lexicalExternRoutineFormalArgumentListAST & outArgument1,
                                              class GALGAS_stringlist & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lexicalExternRoutineFormalArgumentListAST & outArgument1,
                                             class GALGAS_stringlist & outArgument2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mErrorMessageListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalExternRoutineFormalArgumentListAST getter_mLexicalRoutineFormalArgumentListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                                   C_Compiler * inCompiler
                                                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRoutineNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_externRoutineListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_externRoutineListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_externRoutineListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_externRoutineListAST ;
 
} ; // End of GALGAS_externRoutineListAST class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_externRoutineListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_externRoutineListAST (const GALGAS_externRoutineListAST & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mRoutineName (LOCATION_ARGS) const ;
  public: class GALGAS_lexicalExternRoutineFormalArgumentListAST current_mLexicalRoutineFormalArgumentList (LOCATION_ARGS) const ;
  public: class GALGAS_stringlist current_mErrorMessageList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_externRoutineListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externRoutineListAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @externRoutineListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_externRoutineListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mRoutineName ;
  public: inline GALGAS_lstring readProperty_mRoutineName (void) const {
    return mProperty_mRoutineName ;
  }

  public: GALGAS_lexicalExternRoutineFormalArgumentListAST mProperty_mLexicalRoutineFormalArgumentList ;
  public: inline GALGAS_lexicalExternRoutineFormalArgumentListAST readProperty_mLexicalRoutineFormalArgumentList (void) const {
    return mProperty_mLexicalRoutineFormalArgumentList ;
  }

  public: GALGAS_stringlist mProperty_mErrorMessageList ;
  public: inline GALGAS_stringlist readProperty_mErrorMessageList (void) const {
    return mProperty_mErrorMessageList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_externRoutineListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_externRoutineListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMRoutineName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutineName = inValue ;
  }

  public: inline void setter_setMLexicalRoutineFormalArgumentList (const GALGAS_lexicalExternRoutineFormalArgumentListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalRoutineFormalArgumentList = inValue ;
  }

  public: inline void setter_setMErrorMessageList (const GALGAS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mErrorMessageList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_externRoutineListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_externRoutineListAST_2D_element (const GALGAS_lstring & in_mRoutineName,
                                                  const GALGAS_lexicalExternRoutineFormalArgumentListAST & in_mLexicalRoutineFormalArgumentList,
                                                  const GALGAS_stringlist & in_mErrorMessageList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_externRoutineListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_externRoutineListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_lexicalExternRoutineFormalArgumentListAST & inOperand1,
                                                                               const class GALGAS_stringlist & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_externRoutineListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_externRoutineListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externRoutineListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalExternFunctionFormalArgumentListAST list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalExternFunctionFormalArgumentListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_lexicalExternFunctionFormalArgumentListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_lexicalExternFunctionFormalArgumentListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mLexicalTypeName,
                                                 const class GALGAS_lstring & in_mFormalArgumentName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalExternFunctionFormalArgumentListAST extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalExternFunctionFormalArgumentListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalExternFunctionFormalArgumentListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                                    const class GALGAS_lstring & inOperand1
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_lexicalExternFunctionFormalArgumentListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_lexicalExternFunctionFormalArgumentListAST add_operation (const GALGAS_lexicalExternFunctionFormalArgumentListAST & inOperand,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element inArgument0,
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

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLexicalTypeNameAtIndex (class GALGAS_lstring constinArgument0,
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
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalArgumentNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLexicalTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalExternFunctionFormalArgumentListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalExternFunctionFormalArgumentListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalExternFunctionFormalArgumentListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalExternFunctionFormalArgumentListAST ;
 
} ; // End of GALGAS_lexicalExternFunctionFormalArgumentListAST class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_lexicalExternFunctionFormalArgumentListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_lexicalExternFunctionFormalArgumentListAST (const GALGAS_lexicalExternFunctionFormalArgumentListAST & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mLexicalTypeName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mFormalArgumentName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalExternFunctionFormalArgumentListAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalExternFunctionFormalArgumentListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mLexicalTypeName ;
  public: inline GALGAS_lstring readProperty_mLexicalTypeName (void) const {
    return mProperty_mLexicalTypeName ;
  }

  public: GALGAS_lstring mProperty_mFormalArgumentName ;
  public: inline GALGAS_lstring readProperty_mFormalArgumentName (void) const {
    return mProperty_mFormalArgumentName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLexicalTypeName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalTypeName = inValue ;
  }

  public: inline void setter_setMFormalArgumentName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentName = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element (const GALGAS_lstring & in_mLexicalTypeName,
                                                                        const GALGAS_lstring & in_mFormalArgumentName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                                     const class GALGAS_lstring & inOperand1
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @externFunctionListAST list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_externFunctionListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_externFunctionListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_externFunctionListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mFunctionName,
                                                 const class GALGAS_lexicalExternFunctionFormalArgumentListAST & in_mLexicalFunctionFormalArgumentList,
                                                 const class GALGAS_lstring & in_mReturnedTypeName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_externFunctionListAST extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_externFunctionListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_externFunctionListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_lexicalExternFunctionFormalArgumentListAST & inOperand1,
                                                                               const class GALGAS_lstring & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_externFunctionListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lexicalExternFunctionFormalArgumentListAST & inOperand1,
                                                     const class GALGAS_lstring & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_externFunctionListAST add_operation (const GALGAS_externFunctionListAST & inOperand,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_externFunctionListAST_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lexicalExternFunctionFormalArgumentListAST constinArgument1,
                                                      class GALGAS_lstring constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lexicalExternFunctionFormalArgumentListAST & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lexicalExternFunctionFormalArgumentListAST & outArgument1,
                                                class GALGAS_lstring & outArgument2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lexicalExternFunctionFormalArgumentListAST & outArgument1,
                                                      class GALGAS_lstring & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFunctionNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLexicalFunctionFormalArgumentListAtIndex (class GALGAS_lexicalExternFunctionFormalArgumentListAST constinArgument0,
                                                                                     class GALGAS_uint constinArgument1,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReturnedTypeNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lexicalExternFunctionFormalArgumentListAST & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lexicalExternFunctionFormalArgumentListAST & outArgument1,
                                             class GALGAS_lstring & outArgument2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFunctionNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalExternFunctionFormalArgumentListAST getter_mLexicalFunctionFormalArgumentListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                                     C_Compiler * inCompiler
                                                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mReturnedTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_externFunctionListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_externFunctionListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_externFunctionListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_externFunctionListAST ;
 
} ; // End of GALGAS_externFunctionListAST class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_externFunctionListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_externFunctionListAST (const GALGAS_externFunctionListAST & inEnumeratedObject,
                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mFunctionName (LOCATION_ARGS) const ;
  public: class GALGAS_lexicalExternFunctionFormalArgumentListAST current_mLexicalFunctionFormalArgumentList (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mReturnedTypeName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_externFunctionListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externFunctionListAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @externFunctionListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_externFunctionListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mFunctionName ;
  public: inline GALGAS_lstring readProperty_mFunctionName (void) const {
    return mProperty_mFunctionName ;
  }

  public: GALGAS_lexicalExternFunctionFormalArgumentListAST mProperty_mLexicalFunctionFormalArgumentList ;
  public: inline GALGAS_lexicalExternFunctionFormalArgumentListAST readProperty_mLexicalFunctionFormalArgumentList (void) const {
    return mProperty_mLexicalFunctionFormalArgumentList ;
  }

  public: GALGAS_lstring mProperty_mReturnedTypeName ;
  public: inline GALGAS_lstring readProperty_mReturnedTypeName (void) const {
    return mProperty_mReturnedTypeName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_externFunctionListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_externFunctionListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFunctionName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFunctionName = inValue ;
  }

  public: inline void setter_setMLexicalFunctionFormalArgumentList (const GALGAS_lexicalExternFunctionFormalArgumentListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalFunctionFormalArgumentList = inValue ;
  }

  public: inline void setter_setMReturnedTypeName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReturnedTypeName = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_externFunctionListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_externFunctionListAST_2D_element (const GALGAS_lstring & in_mFunctionName,
                                                   const GALGAS_lexicalExternFunctionFormalArgumentListAST & in_mLexicalFunctionFormalArgumentList,
                                                   const GALGAS_lstring & in_mReturnedTypeName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_externFunctionListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_externFunctionListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_lexicalExternFunctionFormalArgumentListAST & inOperand1,
                                                                                const class GALGAS_lstring & inOperand2
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_externFunctionListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_externFunctionListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externFunctionListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @indexingListAST list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_indexingListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_indexingListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_indexingListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mIndexName,
                                                 const class GALGAS_lstring & in_mIndexComment
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_indexingListAST extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_indexingListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_indexingListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_lstring & inOperand1
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_indexingListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_indexingListAST add_operation (const GALGAS_indexingListAST & inOperand,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_indexingListAST_2D_element inArgument0,
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

  public: VIRTUAL_IN_DEBUG void setter_setMIndexCommentAtIndex (class GALGAS_lstring constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIndexNameAtIndex (class GALGAS_lstring constinArgument0,
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
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mIndexCommentAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mIndexNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_indexingListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_indexingListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_indexingListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_indexingListAST ;
 
} ; // End of GALGAS_indexingListAST class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_indexingListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_indexingListAST (const GALGAS_indexingListAST & inEnumeratedObject,
                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mIndexName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mIndexComment (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_indexingListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_indexingListAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @indexingListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_indexingListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mIndexName ;
  public: inline GALGAS_lstring readProperty_mIndexName (void) const {
    return mProperty_mIndexName ;
  }

  public: GALGAS_lstring mProperty_mIndexComment ;
  public: inline GALGAS_lstring readProperty_mIndexComment (void) const {
    return mProperty_mIndexComment ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_indexingListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_indexingListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMIndexName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIndexName = inValue ;
  }

  public: inline void setter_setMIndexComment (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIndexComment = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_indexingListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_indexingListAST_2D_element (const GALGAS_lstring & in_mIndexName,
                                             const GALGAS_lstring & in_mIndexComment) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_indexingListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_indexingListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_indexingListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_indexingListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_indexingListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalFunctionListAST list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalFunctionListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_lexicalFunctionListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_lexicalFunctionListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mFunctionName,
                                                 const class GALGAS_lexicalFunctionExpressionAST & in_mLexicalExpression
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalFunctionListAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalFunctionListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalFunctionListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_lexicalFunctionExpressionAST & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_lexicalFunctionListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lexicalFunctionExpressionAST & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_lexicalFunctionListAST add_operation (const GALGAS_lexicalFunctionListAST & inOperand,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lexicalFunctionListAST_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lexicalFunctionExpressionAST constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lexicalFunctionExpressionAST & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lexicalFunctionExpressionAST & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lexicalFunctionExpressionAST & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFunctionNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLexicalExpressionAtIndex (class GALGAS_lexicalFunctionExpressionAST constinArgument0,
                                                                     class GALGAS_uint constinArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lexicalFunctionExpressionAST & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lexicalFunctionExpressionAST & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFunctionNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalFunctionExpressionAST getter_mLexicalExpressionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalFunctionListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalFunctionListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalFunctionListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalFunctionListAST ;
 
} ; // End of GALGAS_lexicalFunctionListAST class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_lexicalFunctionListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_lexicalFunctionListAST (const GALGAS_lexicalFunctionListAST & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mFunctionName (LOCATION_ARGS) const ;
  public: class GALGAS_lexicalFunctionExpressionAST current_mLexicalExpression (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_lexicalFunctionListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionListAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalFunctionExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalFunctionExpressionAST : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_lexicalFunctionExpressionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalFunctionExpressionAST (const class cPtr_lexicalFunctionExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalFunctionExpressionAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalFunctionExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalFunctionExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalFunctionExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalFunctionExpressionAST : public acStrongPtr_class {
//--- Properties

//--- Constructor
  public: cPtr_lexicalFunctionExpressionAST (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalFunctionListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalFunctionListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mFunctionName ;
  public: inline GALGAS_lstring readProperty_mFunctionName (void) const {
    return mProperty_mFunctionName ;
  }

  public: GALGAS_lexicalFunctionExpressionAST mProperty_mLexicalExpression ;
  public: inline GALGAS_lexicalFunctionExpressionAST readProperty_mLexicalExpression (void) const {
    return mProperty_mLexicalExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_lexicalFunctionListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFunctionName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFunctionName = inValue ;
  }

  public: inline void setter_setMLexicalExpression (const GALGAS_lexicalFunctionExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalExpression = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_lexicalFunctionListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_lexicalFunctionListAST_2D_element (const GALGAS_lstring & in_mFunctionName,
                                                    const GALGAS_lexicalFunctionExpressionAST & in_mLexicalExpression) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalFunctionListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalFunctionListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_lexicalFunctionExpressionAST & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalFunctionListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalFunctionListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                            Phase 1: @lexicalTypeEnum enum                                           *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalTypeEnum : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_lexicalTypeEnum (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_lexicalType_5F_string,
    kEnum_lexicalType_5F_char,
    kEnum_lexicalType_5F_uint,
    kEnum_lexicalType_5F_uint_36__34_,
    kEnum_lexicalType_5F_sint,
    kEnum_lexicalType_5F_sint_36__34_,
    kEnum_lexicalType_5F_double,
    kEnum_lexicalType_5F_bigint
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
  public: static GALGAS_lexicalTypeEnum extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalTypeEnum constructor_lexicalType_5F_bigint (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalTypeEnum constructor_lexicalType_5F_char (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalTypeEnum constructor_lexicalType_5F_double (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalTypeEnum constructor_lexicalType_5F_sint (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalTypeEnum constructor_lexicalType_5F_sint_36__34_ (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalTypeEnum constructor_lexicalType_5F_string (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalTypeEnum constructor_lexicalType_5F_uint (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalTypeEnum constructor_lexicalType_5F_uint_36__34_ (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalTypeEnum & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLexicalType_5F_bigint (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLexicalType_5F_char (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLexicalType_5F_double (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLexicalType_5F_sint (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLexicalType_5F_sint_36__34_ (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLexicalType_5F_string (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLexicalType_5F_uint (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLexicalType_5F_uint_36__34_ (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_lexicalType_5F_bigint () const ;

  public: VIRTUAL_IN_DEBUG bool optional_lexicalType_5F_char () const ;

  public: VIRTUAL_IN_DEBUG bool optional_lexicalType_5F_double () const ;

  public: VIRTUAL_IN_DEBUG bool optional_lexicalType_5F_sint () const ;

  public: VIRTUAL_IN_DEBUG bool optional_lexicalType_5F_sint_36__34_ () const ;

  public: VIRTUAL_IN_DEBUG bool optional_lexicalType_5F_string () const ;

  public: VIRTUAL_IN_DEBUG bool optional_lexicalType_5F_uint () const ;

  public: VIRTUAL_IN_DEBUG bool optional_lexicalType_5F_uint_36__34_ () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalTypeEnum class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalTypeEnum ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalSentValueList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalSentValueList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_lexicalSentValueList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_lexicalSentValueList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mLexicalFormalSelector,
                                                 const class GALGAS_string & in_mLexicalAttributeName,
                                                 const class GALGAS_lexicalTypeEnum & in_mLexicalType
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalSentValueList extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalSentValueList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalSentValueList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_string & inOperand1,
                                                                              const class GALGAS_lexicalTypeEnum & inOperand2
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_lexicalSentValueList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_string & inOperand1,
                                                     const class GALGAS_lexicalTypeEnum & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_lexicalSentValueList add_operation (const GALGAS_lexicalSentValueList & inOperand,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lexicalSentValueList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_string constinArgument1,
                                                      class GALGAS_lexicalTypeEnum constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_lexicalTypeEnum & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_string & outArgument1,
                                                class GALGAS_lexicalTypeEnum & outArgument2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_string & outArgument1,
                                                      class GALGAS_lexicalTypeEnum & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLexicalAttributeNameAtIndex (class GALGAS_string constinArgument0,
                                                                        class GALGAS_uint constinArgument1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLexicalFormalSelectorAtIndex (class GALGAS_lstring constinArgument0,
                                                                         class GALGAS_uint constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLexicalTypeAtIndex (class GALGAS_lexicalTypeEnum constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_lexicalTypeEnum & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_string & outArgument1,
                                             class GALGAS_lexicalTypeEnum & outArgument2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mLexicalAttributeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLexicalFormalSelectorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalTypeEnum getter_mLexicalTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalSentValueList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalSentValueList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalSentValueList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalSentValueList ;
 
} ; // End of GALGAS_lexicalSentValueList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_lexicalSentValueList : public cGenericAbstractEnumerator {
  public: cEnumerator_lexicalSentValueList (const GALGAS_lexicalSentValueList & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mLexicalFormalSelector (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mLexicalAttributeName (LOCATION_ARGS) const ;
  public: class GALGAS_lexicalTypeEnum current_mLexicalType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_lexicalSentValueList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSentValueList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalSentValueList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalSentValueList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mLexicalFormalSelector ;
  public: inline GALGAS_lstring readProperty_mLexicalFormalSelector (void) const {
    return mProperty_mLexicalFormalSelector ;
  }

  public: GALGAS_string mProperty_mLexicalAttributeName ;
  public: inline GALGAS_string readProperty_mLexicalAttributeName (void) const {
    return mProperty_mLexicalAttributeName ;
  }

  public: GALGAS_lexicalTypeEnum mProperty_mLexicalType ;
  public: inline GALGAS_lexicalTypeEnum readProperty_mLexicalType (void) const {
    return mProperty_mLexicalType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_lexicalSentValueList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLexicalFormalSelector (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalFormalSelector = inValue ;
  }

  public: inline void setter_setMLexicalAttributeName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalAttributeName = inValue ;
  }

  public: inline void setter_setMLexicalType (const GALGAS_lexicalTypeEnum & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalType = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_lexicalSentValueList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_lexicalSentValueList_2D_element (const GALGAS_lstring & in_mLexicalFormalSelector,
                                                  const GALGAS_string & in_mLexicalAttributeName,
                                                  const GALGAS_lexicalTypeEnum & in_mLexicalType) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalSentValueList_2D_element extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalSentValueList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_string & inOperand1,
                                                                               const class GALGAS_lexicalTypeEnum & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalSentValueList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalSentValueList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSentValueList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @terminalMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_terminalMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_terminalMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_terminalMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_terminalMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_terminalMap (const GALGAS_terminalMap & inSource) ;
  public: GALGAS_terminalMap & operator = (const GALGAS_terminalMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_terminalMap extractObject (const GALGAS_object & inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_terminalMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_terminalMap constructor_mapWithMapToOverride (const class GALGAS_terminalMap & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lexicalSentValueList & inOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lexicalSentValueList constinArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSentAttributeListForKey (class GALGAS_lexicalSentValueList constinArgument0,
                                                                    class GALGAS_string constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lexicalSentValueList & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalSentValueList getter_mSentAttributeListForKey (const class GALGAS_string & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_terminalMap getter_overriddenMap (C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_lexicalSentValueList & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_terminalMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                        const GALGAS_string & inKey
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_terminalMap ;
 
} ; // End of GALGAS_terminalMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_terminalMap : public cGenericAbstractEnumerator {
  public: cEnumerator_terminalMap (const GALGAS_terminalMap & inEnumeratedObject,
                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_lexicalSentValueList current_mSentAttributeList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_terminalMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@terminalMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_terminalMap : public cMapElement {
//--- Map attributes
  public: GALGAS_lexicalSentValueList mProperty_mSentAttributeList ;

//--- Constructor
  public: cMapElement_terminalMap (const GALGAS_lstring & inKey,
                                   const GALGAS_lexicalSentValueList & in_mSentAttributeList
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
// Phase 1: @terminalMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_terminalMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_lexicalSentValueList mProperty_mSentAttributeList ;
  public: inline GALGAS_lexicalSentValueList readProperty_mSentAttributeList (void) const {
    return mProperty_mSentAttributeList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_terminalMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_terminalMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMSentAttributeList (const GALGAS_lexicalSentValueList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSentAttributeList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_terminalMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_terminalMap_2D_element (const GALGAS_lstring & in_lkey,
                                         const GALGAS_lexicalSentValueList & in_mSentAttributeList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_terminalMap_2D_element extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_terminalMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                      const class GALGAS_lexicalSentValueList & inOperand1
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_terminalMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_terminalMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalTypeMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_lexicalTypeMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_lexicalTypeMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalTypeMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_lexicalTypeMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_lexicalTypeMap (const GALGAS_lexicalTypeMap & inSource) ;
  public: GALGAS_lexicalTypeMap & operator = (const GALGAS_lexicalTypeMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalTypeMap extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalTypeMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalTypeMap constructor_mapWithMapToOverride (const class GALGAS_lexicalTypeMap & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lexicalTypeEnum & inOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lexicalTypeEnum constinArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLexicalTypeForKey (class GALGAS_lexicalTypeEnum constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lexicalTypeEnum & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalTypeEnum getter_mLexicalTypeForKey (const class GALGAS_string & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalTypeMap getter_overriddenMap (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_lexicalTypeEnum & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_lexicalTypeMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                           const GALGAS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_lexicalTypeMap ;
 
} ; // End of GALGAS_lexicalTypeMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_lexicalTypeMap : public cGenericAbstractEnumerator {
  public: cEnumerator_lexicalTypeMap (const GALGAS_lexicalTypeMap & inEnumeratedObject,
                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_lexicalTypeEnum current_mLexicalType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_lexicalTypeMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalTypeMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@lexicalTypeMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_lexicalTypeMap : public cMapElement {
//--- Map attributes
  public: GALGAS_lexicalTypeEnum mProperty_mLexicalType ;

//--- Constructor
  public: cMapElement_lexicalTypeMap (const GALGAS_lstring & inKey,
                                      const GALGAS_lexicalTypeEnum & in_mLexicalType
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
// Phase 1: @lexicalTypeMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalTypeMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_lexicalTypeEnum mProperty_mLexicalType ;
  public: inline GALGAS_lexicalTypeEnum readProperty_mLexicalType (void) const {
    return mProperty_mLexicalType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_lexicalTypeMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMLexicalType (const GALGAS_lexicalTypeEnum & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalType = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_lexicalTypeMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_lexicalTypeMap_2D_element (const GALGAS_lstring & in_lkey,
                                            const GALGAS_lexicalTypeEnum & in_mLexicalType) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalTypeMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalTypeMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_lexicalTypeEnum & inOperand1
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalTypeMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalTypeMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalTypeMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalAttributeMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_lexicalAttributeMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_lexicalAttributeMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalAttributeMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_lexicalAttributeMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_lexicalAttributeMap (const GALGAS_lexicalAttributeMap & inSource) ;
  public: GALGAS_lexicalAttributeMap & operator = (const GALGAS_lexicalAttributeMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalAttributeMap extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalAttributeMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalAttributeMap constructor_mapWithMapToOverride (const class GALGAS_lexicalAttributeMap & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lexicalTypeEnum & inOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lexicalTypeEnum constinArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLexicalTypeForKey (class GALGAS_lexicalTypeEnum constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lexicalTypeEnum & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalTypeEnum getter_mLexicalTypeForKey (const class GALGAS_string & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalAttributeMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_lexicalTypeEnum & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_lexicalAttributeMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                const GALGAS_string & inKey
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_lexicalAttributeMap ;
 
} ; // End of GALGAS_lexicalAttributeMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_lexicalAttributeMap : public cGenericAbstractEnumerator {
  public: cEnumerator_lexicalAttributeMap (const GALGAS_lexicalAttributeMap & inEnumeratedObject,
                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_lexicalTypeEnum current_mLexicalType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_lexicalAttributeMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalAttributeMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@lexicalAttributeMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_lexicalAttributeMap : public cMapElement {
//--- Map attributes
  public: GALGAS_lexicalTypeEnum mProperty_mLexicalType ;

//--- Constructor
  public: cMapElement_lexicalAttributeMap (const GALGAS_lstring & inKey,
                                           const GALGAS_lexicalTypeEnum & in_mLexicalType
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
// Phase 1: @lexicalAttributeMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalAttributeMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_lexicalTypeEnum mProperty_mLexicalType ;
  public: inline GALGAS_lexicalTypeEnum readProperty_mLexicalType (void) const {
    return mProperty_mLexicalType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_lexicalAttributeMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMLexicalType (const GALGAS_lexicalTypeEnum & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalType = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_lexicalAttributeMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_lexicalAttributeMap_2D_element (const GALGAS_lstring & in_lkey,
                                                 const GALGAS_lexicalTypeEnum & in_mLexicalType) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalAttributeMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalAttributeMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_lexicalTypeEnum & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalAttributeMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalAttributeMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalAttributeMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @terminalList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_terminalList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_terminalList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_terminalList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mTerminalName,
                                                 const class GALGAS_lexicalSentValueList & in_mSentAttributeList,
                                                 const class GALGAS_string & in_mSyntaxErrorMessage,
                                                 const class GALGAS_bool & in_mIsEndOfTemplateMark,
                                                 const class GALGAS_bool & in_mAtomicSelection,
                                                 const class GALGAS_uint & in_mStyleIndex
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_terminalList extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_terminalList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_terminalList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                      const class GALGAS_lexicalSentValueList & inOperand1,
                                                                      const class GALGAS_string & inOperand2,
                                                                      const class GALGAS_bool & inOperand3,
                                                                      const class GALGAS_bool & inOperand4,
                                                                      const class GALGAS_uint & inOperand5
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_terminalList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lexicalSentValueList & inOperand1,
                                                     const class GALGAS_string & inOperand2,
                                                     const class GALGAS_bool & inOperand3,
                                                     const class GALGAS_bool & inOperand4,
                                                     const class GALGAS_uint & inOperand5
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_terminalList add_operation (const GALGAS_terminalList & inOperand,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_terminalList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lexicalSentValueList constinArgument1,
                                                      class GALGAS_string constinArgument2,
                                                      class GALGAS_bool constinArgument3,
                                                      class GALGAS_bool constinArgument4,
                                                      class GALGAS_uint constinArgument5,
                                                      class GALGAS_uint constinArgument6,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lexicalSentValueList & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 class GALGAS_bool & outArgument3,
                                                 class GALGAS_bool & outArgument4,
                                                 class GALGAS_uint & outArgument5,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lexicalSentValueList & outArgument1,
                                                class GALGAS_string & outArgument2,
                                                class GALGAS_bool & outArgument3,
                                                class GALGAS_bool & outArgument4,
                                                class GALGAS_uint & outArgument5,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lexicalSentValueList & outArgument1,
                                                      class GALGAS_string & outArgument2,
                                                      class GALGAS_bool & outArgument3,
                                                      class GALGAS_bool & outArgument4,
                                                      class GALGAS_uint & outArgument5,
                                                      class GALGAS_uint constinArgument6,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAtomicSelectionAtIndex (class GALGAS_bool constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsEndOfTemplateMarkAtIndex (class GALGAS_bool constinArgument0,
                                                                       class GALGAS_uint constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSentAttributeListAtIndex (class GALGAS_lexicalSentValueList constinArgument0,
                                                                     class GALGAS_uint constinArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStyleIndexAtIndex (class GALGAS_uint constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSyntaxErrorMessageAtIndex (class GALGAS_string constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTerminalNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lexicalSentValueList & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              class GALGAS_bool & outArgument3,
                                              class GALGAS_bool & outArgument4,
                                              class GALGAS_uint & outArgument5,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lexicalSentValueList & outArgument1,
                                             class GALGAS_string & outArgument2,
                                             class GALGAS_bool & outArgument3,
                                             class GALGAS_bool & outArgument4,
                                             class GALGAS_uint & outArgument5,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mAtomicSelectionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsEndOfTemplateMarkAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalSentValueList getter_mSentAttributeListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mStyleIndexAtIndex (const class GALGAS_uint & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mSyntaxErrorMessageAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTerminalNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_terminalList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_terminalList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_terminalList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_terminalList ;
 
} ; // End of GALGAS_terminalList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_terminalList : public cGenericAbstractEnumerator {
  public: cEnumerator_terminalList (const GALGAS_terminalList & inEnumeratedObject,
                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mTerminalName (LOCATION_ARGS) const ;
  public: class GALGAS_lexicalSentValueList current_mSentAttributeList (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mSyntaxErrorMessage (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mIsEndOfTemplateMark (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mAtomicSelection (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mStyleIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_terminalList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @terminalList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_terminalList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mTerminalName ;
  public: inline GALGAS_lstring readProperty_mTerminalName (void) const {
    return mProperty_mTerminalName ;
  }

  public: GALGAS_lexicalSentValueList mProperty_mSentAttributeList ;
  public: inline GALGAS_lexicalSentValueList readProperty_mSentAttributeList (void) const {
    return mProperty_mSentAttributeList ;
  }

  public: GALGAS_string mProperty_mSyntaxErrorMessage ;
  public: inline GALGAS_string readProperty_mSyntaxErrorMessage (void) const {
    return mProperty_mSyntaxErrorMessage ;
  }

  public: GALGAS_bool mProperty_mIsEndOfTemplateMark ;
  public: inline GALGAS_bool readProperty_mIsEndOfTemplateMark (void) const {
    return mProperty_mIsEndOfTemplateMark ;
  }

  public: GALGAS_bool mProperty_mAtomicSelection ;
  public: inline GALGAS_bool readProperty_mAtomicSelection (void) const {
    return mProperty_mAtomicSelection ;
  }

  public: GALGAS_uint mProperty_mStyleIndex ;
  public: inline GALGAS_uint readProperty_mStyleIndex (void) const {
    return mProperty_mStyleIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_terminalList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_terminalList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTerminalName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTerminalName = inValue ;
  }

  public: inline void setter_setMSentAttributeList (const GALGAS_lexicalSentValueList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSentAttributeList = inValue ;
  }

  public: inline void setter_setMSyntaxErrorMessage (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxErrorMessage = inValue ;
  }

  public: inline void setter_setMIsEndOfTemplateMark (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsEndOfTemplateMark = inValue ;
  }

  public: inline void setter_setMAtomicSelection (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAtomicSelection = inValue ;
  }

  public: inline void setter_setMStyleIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStyleIndex = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_terminalList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_terminalList_2D_element (const GALGAS_lstring & in_mTerminalName,
                                          const GALGAS_lexicalSentValueList & in_mSentAttributeList,
                                          const GALGAS_string & in_mSyntaxErrorMessage,
                                          const GALGAS_bool & in_mIsEndOfTemplateMark,
                                          const GALGAS_bool & in_mAtomicSelection,
                                          const GALGAS_uint & in_mStyleIndex) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_terminalList_2D_element extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_terminalList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_lexicalSentValueList & inOperand1,
                                                                       const class GALGAS_string & inOperand2,
                                                                       const class GALGAS_bool & inOperand3,
                                                                       const class GALGAS_bool & inOperand4,
                                                                       const class GALGAS_uint & inOperand5
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_terminalList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_terminalList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalExplicitTokenListMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_lexicalExplicitTokenListMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_lexicalExplicitTokenListMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalExplicitTokenListMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_lexicalExplicitTokenListMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_lexicalExplicitTokenListMap (const GALGAS_lexicalExplicitTokenListMap & inSource) ;
  public: GALGAS_lexicalExplicitTokenListMap & operator = (const GALGAS_lexicalExplicitTokenListMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalExplicitTokenListMap extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalExplicitTokenListMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalExplicitTokenListMap constructor_mapWithMapToOverride (const class GALGAS_lexicalExplicitTokenListMap & inOperand0
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_lstringlist & inOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lstring constinArgument1,
                                                  class GALGAS_lstringlist constinArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAttributeListForKey (class GALGAS_lstringlist constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTerminalForKey (class GALGAS_lstring constinArgument0,
                                                           class GALGAS_string constinArgument1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_lstringlist & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mAttributeListForKey (const class GALGAS_string & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTerminalForKey (const class GALGAS_string & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalExplicitTokenListMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_lstring & outOperand1,
                                                    class GALGAS_lstringlist & outOperand2) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_lexicalExplicitTokenListMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                        const GALGAS_string & inKey
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_lexicalExplicitTokenListMap ;
 
} ; // End of GALGAS_lexicalExplicitTokenListMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_lexicalExplicitTokenListMap : public cGenericAbstractEnumerator {
  public: cEnumerator_lexicalExplicitTokenListMap (const GALGAS_lexicalExplicitTokenListMap & inEnumeratedObject,
                                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mTerminal (LOCATION_ARGS) const ;
  public: class GALGAS_lstringlist current_mAttributeList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_lexicalExplicitTokenListMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalExplicitTokenListMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@lexicalExplicitTokenListMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_lexicalExplicitTokenListMap : public cMapElement {
//--- Map attributes
  public: GALGAS_lstring mProperty_mTerminal ;
  public: GALGAS_lstringlist mProperty_mAttributeList ;

//--- Constructor
  public: cMapElement_lexicalExplicitTokenListMap (const GALGAS_lstring & inKey,
                                                   const GALGAS_lstring & in_mTerminal,
                                                   const GALGAS_lstringlist & in_mAttributeList
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
// Phase 1: @lexicalExplicitTokenListMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalExplicitTokenListMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_lstring mProperty_mTerminal ;
  public: inline GALGAS_lstring readProperty_mTerminal (void) const {
    return mProperty_mTerminal ;
  }

  public: GALGAS_lstringlist mProperty_mAttributeList ;
  public: inline GALGAS_lstringlist readProperty_mAttributeList (void) const {
    return mProperty_mAttributeList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalExplicitTokenListMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_lexicalExplicitTokenListMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMTerminal (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTerminal = inValue ;
  }

  public: inline void setter_setMAttributeList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAttributeList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_lexicalExplicitTokenListMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_lexicalExplicitTokenListMap_2D_element (const GALGAS_lstring & in_lkey,
                                                         const GALGAS_lstring & in_mTerminal,
                                                         const GALGAS_lstringlist & in_mAttributeList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalExplicitTokenListMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalExplicitTokenListMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_lstring & inOperand1,
                                                                                      const class GALGAS_lstringlist & inOperand2
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalExplicitTokenListMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalExplicitTokenListMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalExplicitTokenListMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @tokenSortedlist sorted list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_tokenSortedlist : public AC_GALGAS_sortedlist {
//--------------------------------- Default constructor
  public: GALGAS_tokenSortedlist (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_tokenSortedlist extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_tokenSortedlist constructor_emptySortedList (LOCATION_ARGS) ;

  public: static class GALGAS_tokenSortedlist constructor_sortedListWithValue (const class GALGAS_uint & inOperand0,
                                                                               const class GALGAS_string & inOperand1,
                                                                               const class GALGAS_string & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_tokenSortedlist inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_uint & inOperand0,
                                                     const class GALGAS_string & inOperand1,
                                                     const class GALGAS_string & inOperand2
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_popGreatest (class GALGAS_uint & outArgument0,
                                                    class GALGAS_string & outArgument1,
                                                    class GALGAS_string & outArgument2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popSmallest (class GALGAS_uint & outArgument0,
                                                    class GALGAS_string & outArgument1,
                                                    class GALGAS_string & outArgument2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_greatest (class GALGAS_uint & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_smallest (class GALGAS_uint & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_tokenSortedlist ;
 
} ; // End of GALGAS_tokenSortedlist class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_tokenSortedlist : public cGenericAbstractEnumerator {
  public: cEnumerator_tokenSortedlist (const GALGAS_tokenSortedlist & inEnumeratedObject,
                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_uint current_mLength (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mName (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mTerminalName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_tokenSortedlist_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tokenSortedlist ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @tokenSortedlist_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_tokenSortedlist_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_uint mProperty_mLength ;
  public: inline GALGAS_uint readProperty_mLength (void) const {
    return mProperty_mLength ;
  }

  public: GALGAS_string mProperty_mName ;
  public: inline GALGAS_string readProperty_mName (void) const {
    return mProperty_mName ;
  }

  public: GALGAS_string mProperty_mTerminalName ;
  public: inline GALGAS_string readProperty_mTerminalName (void) const {
    return mProperty_mTerminalName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_tokenSortedlist_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_tokenSortedlist_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLength (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLength = inValue ;
  }

  public: inline void setter_setMName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mName = inValue ;
  }

  public: inline void setter_setMTerminalName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTerminalName = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_tokenSortedlist_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_tokenSortedlist_2D_element (const GALGAS_uint & in_mLength,
                                             const GALGAS_string & in_mName,
                                             const GALGAS_string & in_mTerminalName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_tokenSortedlist_2D_element extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_tokenSortedlist_2D_element constructor_new (const class GALGAS_uint & inOperand0,
                                                                          const class GALGAS_string & inOperand1,
                                                                          const class GALGAS_string & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_tokenSortedlist_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_tokenSortedlist_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tokenSortedlist_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalExplicitTokenListMapMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_lexicalExplicitTokenListMapMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_lexicalExplicitTokenListMapMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalExplicitTokenListMapMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_lexicalExplicitTokenListMapMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_lexicalExplicitTokenListMapMap (const GALGAS_lexicalExplicitTokenListMapMap & inSource) ;
  public: GALGAS_lexicalExplicitTokenListMapMap & operator = (const GALGAS_lexicalExplicitTokenListMapMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalExplicitTokenListMapMap extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalExplicitTokenListMapMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalExplicitTokenListMapMap constructor_mapWithMapToOverride (const class GALGAS_lexicalExplicitTokenListMapMap & inOperand0
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lexicalExplicitTokenListMap & inOperand1,
                                                     const class GALGAS_tokenSortedlist & inOperand2,
                                                     const class GALGAS_bool & inOperand3,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lexicalExplicitTokenListMap constinArgument1,
                                                  class GALGAS_tokenSortedlist constinArgument2,
                                                  class GALGAS_bool constinArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExplicitTokenListMapForKey (class GALGAS_lexicalExplicitTokenListMap constinArgument0,
                                                                       class GALGAS_string constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMShouldBeGeneratedForKey (class GALGAS_bool constinArgument0,
                                                                    class GALGAS_string constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTokenSortedListForKey (class GALGAS_tokenSortedlist constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lexicalExplicitTokenListMap & outArgument1,
                                                  class GALGAS_tokenSortedlist & outArgument2,
                                                  class GALGAS_bool & outArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalExplicitTokenListMap getter_mExplicitTokenListMapForKey (const class GALGAS_string & constinOperand0,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mShouldBeGeneratedForKey (const class GALGAS_string & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_tokenSortedlist getter_mTokenSortedListForKey (const class GALGAS_string & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalExplicitTokenListMapMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_lexicalExplicitTokenListMap & outOperand1,
                                                    class GALGAS_tokenSortedlist & outOperand2,
                                                    class GALGAS_bool & outOperand3) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_lexicalExplicitTokenListMapMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                           const GALGAS_string & inKey
                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_lexicalExplicitTokenListMapMap ;
 
} ; // End of GALGAS_lexicalExplicitTokenListMapMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_lexicalExplicitTokenListMapMap : public cGenericAbstractEnumerator {
  public: cEnumerator_lexicalExplicitTokenListMapMap (const GALGAS_lexicalExplicitTokenListMapMap & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_lexicalExplicitTokenListMap current_mExplicitTokenListMap (LOCATION_ARGS) const ;
  public: class GALGAS_tokenSortedlist current_mTokenSortedList (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mShouldBeGenerated (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_lexicalExplicitTokenListMapMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalExplicitTokenListMapMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@lexicalExplicitTokenListMapMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_lexicalExplicitTokenListMapMap : public cMapElement {
//--- Map attributes
  public: GALGAS_lexicalExplicitTokenListMap mProperty_mExplicitTokenListMap ;
  public: GALGAS_tokenSortedlist mProperty_mTokenSortedList ;
  public: GALGAS_bool mProperty_mShouldBeGenerated ;

//--- Constructor
  public: cMapElement_lexicalExplicitTokenListMapMap (const GALGAS_lstring & inKey,
                                                      const GALGAS_lexicalExplicitTokenListMap & in_mExplicitTokenListMap,
                                                      const GALGAS_tokenSortedlist & in_mTokenSortedList,
                                                      const GALGAS_bool & in_mShouldBeGenerated
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
// Phase 1: @lexicalExplicitTokenListMapMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalExplicitTokenListMapMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_lexicalExplicitTokenListMap mProperty_mExplicitTokenListMap ;
  public: inline GALGAS_lexicalExplicitTokenListMap readProperty_mExplicitTokenListMap (void) const {
    return mProperty_mExplicitTokenListMap ;
  }

  public: GALGAS_tokenSortedlist mProperty_mTokenSortedList ;
  public: inline GALGAS_tokenSortedlist readProperty_mTokenSortedList (void) const {
    return mProperty_mTokenSortedList ;
  }

  public: GALGAS_bool mProperty_mShouldBeGenerated ;
  public: inline GALGAS_bool readProperty_mShouldBeGenerated (void) const {
    return mProperty_mShouldBeGenerated ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalExplicitTokenListMapMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_lexicalExplicitTokenListMapMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMExplicitTokenListMap (const GALGAS_lexicalExplicitTokenListMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExplicitTokenListMap = inValue ;
  }

  public: inline void setter_setMTokenSortedList (const GALGAS_tokenSortedlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTokenSortedList = inValue ;
  }

  public: inline void setter_setMShouldBeGenerated (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mShouldBeGenerated = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_lexicalExplicitTokenListMapMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_lexicalExplicitTokenListMapMap_2D_element (const GALGAS_lstring & in_lkey,
                                                            const GALGAS_lexicalExplicitTokenListMap & in_mExplicitTokenListMap,
                                                            const GALGAS_tokenSortedlist & in_mTokenSortedList,
                                                            const GALGAS_bool & in_mShouldBeGenerated) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalExplicitTokenListMapMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalExplicitTokenListMapMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                         const class GALGAS_lexicalExplicitTokenListMap & inOperand1,
                                                                                         const class GALGAS_tokenSortedlist & inOperand2,
                                                                                         const class GALGAS_bool & inOperand3
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalExplicitTokenListMapMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalExplicitTokenListMapMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalExplicitTokenListMapMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalMessageMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_lexicalMessageMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_lexicalMessageMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalMessageMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_lexicalMessageMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_lexicalMessageMap (const GALGAS_lexicalMessageMap & inSource) ;
  public: GALGAS_lexicalMessageMap & operator = (const GALGAS_lexicalMessageMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalMessageMap extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalMessageMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalMessageMap constructor_mapWithMapToOverride (const class GALGAS_lexicalMessageMap & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_bool & inOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lstring constinArgument1,
                                                  class GALGAS_bool constinArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLexicalMessageForKey (class GALGAS_lstring constinArgument0,
                                                                 class GALGAS_string constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMessageIsUsedForKey (class GALGAS_bool constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_bool & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLexicalMessageForKey (const class GALGAS_string & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mMessageIsUsedForKey (const class GALGAS_string & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalMessageMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_lstring & outOperand1,
                                                    class GALGAS_bool & outOperand2) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_lexicalMessageMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                              const GALGAS_string & inKey
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_lexicalMessageMap ;
 
} ; // End of GALGAS_lexicalMessageMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_lexicalMessageMap : public cGenericAbstractEnumerator {
  public: cEnumerator_lexicalMessageMap (const GALGAS_lexicalMessageMap & inEnumeratedObject,
                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mLexicalMessage (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mMessageIsUsed (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_lexicalMessageMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalMessageMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@lexicalMessageMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_lexicalMessageMap : public cMapElement {
//--- Map attributes
  public: GALGAS_lstring mProperty_mLexicalMessage ;
  public: GALGAS_bool mProperty_mMessageIsUsed ;

//--- Constructor
  public: cMapElement_lexicalMessageMap (const GALGAS_lstring & inKey,
                                         const GALGAS_lstring & in_mLexicalMessage,
                                         const GALGAS_bool & in_mMessageIsUsed
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
// Phase 1: @lexicalMessageMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalMessageMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_lstring mProperty_mLexicalMessage ;
  public: inline GALGAS_lstring readProperty_mLexicalMessage (void) const {
    return mProperty_mLexicalMessage ;
  }

  public: GALGAS_bool mProperty_mMessageIsUsed ;
  public: inline GALGAS_bool readProperty_mMessageIsUsed (void) const {
    return mProperty_mMessageIsUsed ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalMessageMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_lexicalMessageMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMLexicalMessage (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalMessage = inValue ;
  }

  public: inline void setter_setMMessageIsUsed (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMessageIsUsed = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_lexicalMessageMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_lexicalMessageMap_2D_element (const GALGAS_lstring & in_lkey,
                                               const GALGAS_lstring & in_mLexicalMessage,
                                               const GALGAS_bool & in_mMessageIsUsed) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalMessageMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalMessageMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_lstring & inOperand1,
                                                                            const class GALGAS_bool & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalMessageMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalMessageMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalMessageMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalRoutineFormalArgumentList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalRoutineFormalArgumentList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_lexicalRoutineFormalArgumentList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_lexicalRoutineFormalArgumentList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lexicalArgumentModeAST & in_mLexicalFormalArgumentMode,
                                                 const class GALGAS_lexicalTypeEnum & in_mLexicalFormalArgumentType,
                                                 const class GALGAS_string & in_mArgumentNameForComment
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalRoutineFormalArgumentList extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalRoutineFormalArgumentList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalRoutineFormalArgumentList constructor_listWithValue (const class GALGAS_lexicalArgumentModeAST & inOperand0,
                                                                                          const class GALGAS_lexicalTypeEnum & inOperand1,
                                                                                          const class GALGAS_string & inOperand2
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_lexicalRoutineFormalArgumentList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lexicalArgumentModeAST & inOperand0,
                                                     const class GALGAS_lexicalTypeEnum & inOperand1,
                                                     const class GALGAS_string & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_lexicalRoutineFormalArgumentList add_operation (const GALGAS_lexicalRoutineFormalArgumentList & inOperand,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lexicalRoutineFormalArgumentList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lexicalArgumentModeAST constinArgument0,
                                                      class GALGAS_lexicalTypeEnum constinArgument1,
                                                      class GALGAS_string constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lexicalArgumentModeAST & outArgument0,
                                                 class GALGAS_lexicalTypeEnum & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lexicalArgumentModeAST & outArgument0,
                                                class GALGAS_lexicalTypeEnum & outArgument1,
                                                class GALGAS_string & outArgument2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lexicalArgumentModeAST & outArgument0,
                                                      class GALGAS_lexicalTypeEnum & outArgument1,
                                                      class GALGAS_string & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMArgumentNameForCommentAtIndex (class GALGAS_string constinArgument0,
                                                                          class GALGAS_uint constinArgument1,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLexicalFormalArgumentModeAtIndex (class GALGAS_lexicalArgumentModeAST constinArgument0,
                                                                             class GALGAS_uint constinArgument1,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLexicalFormalArgumentTypeAtIndex (class GALGAS_lexicalTypeEnum constinArgument0,
                                                                             class GALGAS_uint constinArgument1,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lexicalArgumentModeAST & outArgument0,
                                              class GALGAS_lexicalTypeEnum & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lexicalArgumentModeAST & outArgument0,
                                             class GALGAS_lexicalTypeEnum & outArgument1,
                                             class GALGAS_string & outArgument2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mArgumentNameForCommentAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalArgumentModeAST getter_mLexicalFormalArgumentModeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalTypeEnum getter_mLexicalFormalArgumentTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalRoutineFormalArgumentList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalRoutineFormalArgumentList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalRoutineFormalArgumentList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalRoutineFormalArgumentList ;
 
} ; // End of GALGAS_lexicalRoutineFormalArgumentList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_lexicalRoutineFormalArgumentList : public cGenericAbstractEnumerator {
  public: cEnumerator_lexicalRoutineFormalArgumentList (const GALGAS_lexicalRoutineFormalArgumentList & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lexicalArgumentModeAST current_mLexicalFormalArgumentMode (LOCATION_ARGS) const ;
  public: class GALGAS_lexicalTypeEnum current_mLexicalFormalArgumentType (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mArgumentNameForComment (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_lexicalRoutineFormalArgumentList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRoutineFormalArgumentList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalRoutineFormalArgumentList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalRoutineFormalArgumentList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lexicalArgumentModeAST mProperty_mLexicalFormalArgumentMode ;
  public: inline GALGAS_lexicalArgumentModeAST readProperty_mLexicalFormalArgumentMode (void) const {
    return mProperty_mLexicalFormalArgumentMode ;
  }

  public: GALGAS_lexicalTypeEnum mProperty_mLexicalFormalArgumentType ;
  public: inline GALGAS_lexicalTypeEnum readProperty_mLexicalFormalArgumentType (void) const {
    return mProperty_mLexicalFormalArgumentType ;
  }

  public: GALGAS_string mProperty_mArgumentNameForComment ;
  public: inline GALGAS_string readProperty_mArgumentNameForComment (void) const {
    return mProperty_mArgumentNameForComment ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_lexicalRoutineFormalArgumentList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLexicalFormalArgumentMode (const GALGAS_lexicalArgumentModeAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalFormalArgumentMode = inValue ;
  }

  public: inline void setter_setMLexicalFormalArgumentType (const GALGAS_lexicalTypeEnum & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalFormalArgumentType = inValue ;
  }

  public: inline void setter_setMArgumentNameForComment (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mArgumentNameForComment = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_lexicalRoutineFormalArgumentList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_lexicalRoutineFormalArgumentList_2D_element (const GALGAS_lexicalArgumentModeAST & in_mLexicalFormalArgumentMode,
                                                              const GALGAS_lexicalTypeEnum & in_mLexicalFormalArgumentType,
                                                              const GALGAS_string & in_mArgumentNameForComment) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalRoutineFormalArgumentList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalRoutineFormalArgumentList_2D_element constructor_new (const class GALGAS_lexicalArgumentModeAST & inOperand0,
                                                                                           const class GALGAS_lexicalTypeEnum & inOperand1,
                                                                                           const class GALGAS_string & inOperand2
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalRoutineFormalArgumentList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalRoutineFormalArgumentList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRoutineFormalArgumentList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalRoutineMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_lexicalRoutineMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_lexicalRoutineMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalRoutineMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_lexicalRoutineMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_lexicalRoutineMap (const GALGAS_lexicalRoutineMap & inSource) ;
  public: GALGAS_lexicalRoutineMap & operator = (const GALGAS_lexicalRoutineMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalRoutineMap extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalRoutineMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalRoutineMap constructor_mapWithMapToOverride (const class GALGAS_lexicalRoutineMap & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lexicalRoutineFormalArgumentList & inOperand1,
                                                     const class GALGAS_stringlist & inOperand2,
                                                     const class GALGAS_bool & inOperand3,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lexicalRoutineFormalArgumentList constinArgument1,
                                                  class GALGAS_stringlist constinArgument2,
                                                  class GALGAS_bool constinArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMErrorMessageListForKey (class GALGAS_stringlist constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsExternForKey (class GALGAS_bool constinArgument0,
                                                           class GALGAS_string constinArgument1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLexicalRoutineFormalArgumentListForKey (class GALGAS_lexicalRoutineFormalArgumentList constinArgument0,
                                                                                   class GALGAS_string constinArgument1,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lexicalRoutineFormalArgumentList & outArgument1,
                                                  class GALGAS_stringlist & outArgument2,
                                                  class GALGAS_bool & outArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mErrorMessageListForKey (const class GALGAS_string & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsExternForKey (const class GALGAS_string & constinOperand0,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalRoutineFormalArgumentList getter_mLexicalRoutineFormalArgumentListForKey (const class GALGAS_string & constinOperand0,
                                                                                                                         C_Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalRoutineMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_lexicalRoutineFormalArgumentList & outOperand1,
                                                    class GALGAS_stringlist & outOperand2,
                                                    class GALGAS_bool & outOperand3) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_lexicalRoutineMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                              const GALGAS_string & inKey
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_lexicalRoutineMap ;
 
} ; // End of GALGAS_lexicalRoutineMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_lexicalRoutineMap : public cGenericAbstractEnumerator {
  public: cEnumerator_lexicalRoutineMap (const GALGAS_lexicalRoutineMap & inEnumeratedObject,
                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_lexicalRoutineFormalArgumentList current_mLexicalRoutineFormalArgumentList (LOCATION_ARGS) const ;
  public: class GALGAS_stringlist current_mErrorMessageList (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mIsExtern (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_lexicalRoutineMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRoutineMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@lexicalRoutineMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_lexicalRoutineMap : public cMapElement {
//--- Map attributes
  public: GALGAS_lexicalRoutineFormalArgumentList mProperty_mLexicalRoutineFormalArgumentList ;
  public: GALGAS_stringlist mProperty_mErrorMessageList ;
  public: GALGAS_bool mProperty_mIsExtern ;

//--- Constructor
  public: cMapElement_lexicalRoutineMap (const GALGAS_lstring & inKey,
                                         const GALGAS_lexicalRoutineFormalArgumentList & in_mLexicalRoutineFormalArgumentList,
                                         const GALGAS_stringlist & in_mErrorMessageList,
                                         const GALGAS_bool & in_mIsExtern
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
// Phase 1: @lexicalRoutineMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalRoutineMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_lexicalRoutineFormalArgumentList mProperty_mLexicalRoutineFormalArgumentList ;
  public: inline GALGAS_lexicalRoutineFormalArgumentList readProperty_mLexicalRoutineFormalArgumentList (void) const {
    return mProperty_mLexicalRoutineFormalArgumentList ;
  }

  public: GALGAS_stringlist mProperty_mErrorMessageList ;
  public: inline GALGAS_stringlist readProperty_mErrorMessageList (void) const {
    return mProperty_mErrorMessageList ;
  }

  public: GALGAS_bool mProperty_mIsExtern ;
  public: inline GALGAS_bool readProperty_mIsExtern (void) const {
    return mProperty_mIsExtern ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalRoutineMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_lexicalRoutineMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMLexicalRoutineFormalArgumentList (const GALGAS_lexicalRoutineFormalArgumentList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalRoutineFormalArgumentList = inValue ;
  }

  public: inline void setter_setMErrorMessageList (const GALGAS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mErrorMessageList = inValue ;
  }

  public: inline void setter_setMIsExtern (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsExtern = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_lexicalRoutineMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_lexicalRoutineMap_2D_element (const GALGAS_lstring & in_lkey,
                                               const GALGAS_lexicalRoutineFormalArgumentList & in_mLexicalRoutineFormalArgumentList,
                                               const GALGAS_stringlist & in_mErrorMessageList,
                                               const GALGAS_bool & in_mIsExtern) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalRoutineMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalRoutineMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_lexicalRoutineFormalArgumentList & inOperand1,
                                                                            const class GALGAS_stringlist & inOperand2,
                                                                            const class GALGAS_bool & inOperand3
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalRoutineMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalRoutineMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRoutineMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalFunctionFormalArgumentList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalFunctionFormalArgumentList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_lexicalFunctionFormalArgumentList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_lexicalFunctionFormalArgumentList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lexicalTypeEnum & in_mLexicalType,
                                                 const class GALGAS_string & in_mArgumentNameForComment
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalFunctionFormalArgumentList extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalFunctionFormalArgumentList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalFunctionFormalArgumentList constructor_listWithValue (const class GALGAS_lexicalTypeEnum & inOperand0,
                                                                                           const class GALGAS_string & inOperand1
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_lexicalFunctionFormalArgumentList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lexicalTypeEnum & inOperand0,
                                                     const class GALGAS_string & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_lexicalFunctionFormalArgumentList add_operation (const GALGAS_lexicalFunctionFormalArgumentList & inOperand,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lexicalFunctionFormalArgumentList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lexicalTypeEnum constinArgument0,
                                                      class GALGAS_string constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lexicalTypeEnum & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lexicalTypeEnum & outArgument0,
                                                class GALGAS_string & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lexicalTypeEnum & outArgument0,
                                                      class GALGAS_string & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMArgumentNameForCommentAtIndex (class GALGAS_string constinArgument0,
                                                                          class GALGAS_uint constinArgument1,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLexicalTypeAtIndex (class GALGAS_lexicalTypeEnum constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lexicalTypeEnum & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lexicalTypeEnum & outArgument0,
                                             class GALGAS_string & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mArgumentNameForCommentAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalTypeEnum getter_mLexicalTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalFunctionFormalArgumentList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalFunctionFormalArgumentList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalFunctionFormalArgumentList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalFunctionFormalArgumentList ;
 
} ; // End of GALGAS_lexicalFunctionFormalArgumentList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_lexicalFunctionFormalArgumentList : public cGenericAbstractEnumerator {
  public: cEnumerator_lexicalFunctionFormalArgumentList (const GALGAS_lexicalFunctionFormalArgumentList & inEnumeratedObject,
                                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lexicalTypeEnum current_mLexicalType (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mArgumentNameForComment (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_lexicalFunctionFormalArgumentList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionFormalArgumentList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalFunctionFormalArgumentList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalFunctionFormalArgumentList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lexicalTypeEnum mProperty_mLexicalType ;
  public: inline GALGAS_lexicalTypeEnum readProperty_mLexicalType (void) const {
    return mProperty_mLexicalType ;
  }

  public: GALGAS_string mProperty_mArgumentNameForComment ;
  public: inline GALGAS_string readProperty_mArgumentNameForComment (void) const {
    return mProperty_mArgumentNameForComment ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_lexicalFunctionFormalArgumentList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLexicalType (const GALGAS_lexicalTypeEnum & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalType = inValue ;
  }

  public: inline void setter_setMArgumentNameForComment (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mArgumentNameForComment = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_lexicalFunctionFormalArgumentList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_lexicalFunctionFormalArgumentList_2D_element (const GALGAS_lexicalTypeEnum & in_mLexicalType,
                                                               const GALGAS_string & in_mArgumentNameForComment) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalFunctionFormalArgumentList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalFunctionFormalArgumentList_2D_element constructor_new (const class GALGAS_lexicalTypeEnum & inOperand0,
                                                                                            const class GALGAS_string & inOperand1
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalFunctionFormalArgumentList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalFunctionFormalArgumentList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionFormalArgumentList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalFunctionMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_lexicalFunctionMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_lexicalFunctionMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalFunctionMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_lexicalFunctionMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_lexicalFunctionMap (const GALGAS_lexicalFunctionMap & inSource) ;
  public: GALGAS_lexicalFunctionMap & operator = (const GALGAS_lexicalFunctionMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalFunctionMap extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalFunctionMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalFunctionMap constructor_mapWithMapToOverride (const class GALGAS_lexicalFunctionMap & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lexicalFunctionFormalArgumentList & inOperand1,
                                                     const class GALGAS_lexicalTypeEnum & inOperand2,
                                                     const class GALGAS_string & inOperand3,
                                                     const class GALGAS_bool & inOperand4,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lexicalFunctionFormalArgumentList constinArgument1,
                                                  class GALGAS_lexicalTypeEnum constinArgument2,
                                                  class GALGAS_string constinArgument3,
                                                  class GALGAS_bool constinArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsExternForKey (class GALGAS_bool constinArgument0,
                                                           class GALGAS_string constinArgument1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLexicalTypeListForKey (class GALGAS_lexicalFunctionFormalArgumentList constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReplacementFunctionNameForKey (class GALGAS_string constinArgument0,
                                                                          class GALGAS_string constinArgument1,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReturnedLexicalTypeForKey (class GALGAS_lexicalTypeEnum constinArgument0,
                                                                      class GALGAS_string constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lexicalFunctionFormalArgumentList & outArgument1,
                                                  class GALGAS_lexicalTypeEnum & outArgument2,
                                                  class GALGAS_string & outArgument3,
                                                  class GALGAS_bool & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsExternForKey (const class GALGAS_string & constinOperand0,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalFunctionFormalArgumentList getter_mLexicalTypeListForKey (const class GALGAS_string & constinOperand0,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mReplacementFunctionNameForKey (const class GALGAS_string & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalTypeEnum getter_mReturnedLexicalTypeForKey (const class GALGAS_string & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalFunctionMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_lexicalFunctionFormalArgumentList & outOperand1,
                                                    class GALGAS_lexicalTypeEnum & outOperand2,
                                                    class GALGAS_string & outOperand3,
                                                    class GALGAS_bool & outOperand4) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_lexicalFunctionMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_lexicalFunctionMap ;
 
} ; // End of GALGAS_lexicalFunctionMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_lexicalFunctionMap : public cGenericAbstractEnumerator {
  public: cEnumerator_lexicalFunctionMap (const GALGAS_lexicalFunctionMap & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_lexicalFunctionFormalArgumentList current_mLexicalTypeList (LOCATION_ARGS) const ;
  public: class GALGAS_lexicalTypeEnum current_mReturnedLexicalType (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mReplacementFunctionName (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mIsExtern (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_lexicalFunctionMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@lexicalFunctionMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_lexicalFunctionMap : public cMapElement {
//--- Map attributes
  public: GALGAS_lexicalFunctionFormalArgumentList mProperty_mLexicalTypeList ;
  public: GALGAS_lexicalTypeEnum mProperty_mReturnedLexicalType ;
  public: GALGAS_string mProperty_mReplacementFunctionName ;
  public: GALGAS_bool mProperty_mIsExtern ;

//--- Constructor
  public: cMapElement_lexicalFunctionMap (const GALGAS_lstring & inKey,
                                          const GALGAS_lexicalFunctionFormalArgumentList & in_mLexicalTypeList,
                                          const GALGAS_lexicalTypeEnum & in_mReturnedLexicalType,
                                          const GALGAS_string & in_mReplacementFunctionName,
                                          const GALGAS_bool & in_mIsExtern
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
// Phase 1: @lexicalFunctionMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalFunctionMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_lexicalFunctionFormalArgumentList mProperty_mLexicalTypeList ;
  public: inline GALGAS_lexicalFunctionFormalArgumentList readProperty_mLexicalTypeList (void) const {
    return mProperty_mLexicalTypeList ;
  }

  public: GALGAS_lexicalTypeEnum mProperty_mReturnedLexicalType ;
  public: inline GALGAS_lexicalTypeEnum readProperty_mReturnedLexicalType (void) const {
    return mProperty_mReturnedLexicalType ;
  }

  public: GALGAS_string mProperty_mReplacementFunctionName ;
  public: inline GALGAS_string readProperty_mReplacementFunctionName (void) const {
    return mProperty_mReplacementFunctionName ;
  }

  public: GALGAS_bool mProperty_mIsExtern ;
  public: inline GALGAS_bool readProperty_mIsExtern (void) const {
    return mProperty_mIsExtern ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_lexicalFunctionMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMLexicalTypeList (const GALGAS_lexicalFunctionFormalArgumentList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalTypeList = inValue ;
  }

  public: inline void setter_setMReturnedLexicalType (const GALGAS_lexicalTypeEnum & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReturnedLexicalType = inValue ;
  }

  public: inline void setter_setMReplacementFunctionName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReplacementFunctionName = inValue ;
  }

  public: inline void setter_setMIsExtern (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsExtern = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_lexicalFunctionMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_lexicalFunctionMap_2D_element (const GALGAS_lstring & in_lkey,
                                                const GALGAS_lexicalFunctionFormalArgumentList & in_mLexicalTypeList,
                                                const GALGAS_lexicalTypeEnum & in_mReturnedLexicalType,
                                                const GALGAS_string & in_mReplacementFunctionName,
                                                const GALGAS_bool & in_mIsExtern) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalFunctionMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalFunctionMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_lexicalFunctionFormalArgumentList & inOperand1,
                                                                             const class GALGAS_lexicalTypeEnum & inOperand2,
                                                                             const class GALGAS_string & inOperand3,
                                                                             const class GALGAS_bool & inOperand4
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalFunctionMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalFunctionMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateDelimitorList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateDelimitorList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_templateDelimitorList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_templateDelimitorList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mStartString,
                                                 const class GALGAS_lstring & in_mEndString,
                                                 const class GALGAS_bool & in_mPreservesStartDelimiter
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateDelimitorList extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateDelimitorList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_templateDelimitorList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_lstring & inOperand1,
                                                                               const class GALGAS_bool & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_templateDelimitorList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_bool & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_templateDelimitorList add_operation (const GALGAS_templateDelimitorList & inOperand,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_templateDelimitorList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_bool constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_bool & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                class GALGAS_bool & outArgument2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_bool & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndStringAtIndex (class GALGAS_lstring constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPreservesStartDelimiterAtIndex (class GALGAS_bool constinArgument0,
                                                                           class GALGAS_uint constinArgument1,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStartStringAtIndex (class GALGAS_lstring constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_bool & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             class GALGAS_bool & outArgument2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mEndStringAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mPreservesStartDelimiterAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mStartStringAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateDelimitorList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateDelimitorList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateDelimitorList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_templateDelimitorList ;
 
} ; // End of GALGAS_templateDelimitorList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_templateDelimitorList : public cGenericAbstractEnumerator {
  public: cEnumerator_templateDelimitorList (const GALGAS_templateDelimitorList & inEnumeratedObject,
                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mStartString (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mEndString (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mPreservesStartDelimiter (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_templateDelimitorList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateDelimitorList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateDelimitorList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateDelimitorList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mStartString ;
  public: inline GALGAS_lstring readProperty_mStartString (void) const {
    return mProperty_mStartString ;
  }

  public: GALGAS_lstring mProperty_mEndString ;
  public: inline GALGAS_lstring readProperty_mEndString (void) const {
    return mProperty_mEndString ;
  }

  public: GALGAS_bool mProperty_mPreservesStartDelimiter ;
  public: inline GALGAS_bool readProperty_mPreservesStartDelimiter (void) const {
    return mProperty_mPreservesStartDelimiter ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateDelimitorList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_templateDelimitorList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMStartString (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStartString = inValue ;
  }

  public: inline void setter_setMEndString (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndString = inValue ;
  }

  public: inline void setter_setMPreservesStartDelimiter (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPreservesStartDelimiter = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_templateDelimitorList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_templateDelimitorList_2D_element (const GALGAS_lstring & in_mStartString,
                                                   const GALGAS_lstring & in_mEndString,
                                                   const GALGAS_bool & in_mPreservesStartDelimiter) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateDelimitorList_2D_element extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateDelimitorList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1,
                                                                                const class GALGAS_bool & inOperand2
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateDelimitorList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateDelimitorList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateDelimitorList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @styleMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_styleMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_styleMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_styleMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_styleMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_styleMap (const GALGAS_styleMap & inSource) ;
  public: GALGAS_styleMap & operator = (const GALGAS_styleMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_styleMap extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_styleMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_styleMap constructor_mapWithMapToOverride (const class GALGAS_styleMap & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_uint & inOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lstring constinArgument1,
                                                  class GALGAS_uint constinArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCommentForKey (class GALGAS_lstring constinArgument0,
                                                          class GALGAS_string constinArgument1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStyleIndexForKey (class GALGAS_uint constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_uint & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mCommentForKey (const class GALGAS_string & constinOperand0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mStyleIndexForKey (const class GALGAS_string & constinOperand0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_styleMap getter_overriddenMap (C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_lstring & outOperand1,
                                                    class GALGAS_uint & outOperand2) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_styleMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                     const GALGAS_string & inKey
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_styleMap ;
 
} ; // End of GALGAS_styleMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_styleMap : public cGenericAbstractEnumerator {
  public: cEnumerator_styleMap (const GALGAS_styleMap & inEnumeratedObject,
                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mComment (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mStyleIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_styleMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_styleMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@styleMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_styleMap : public cMapElement {
//--- Map attributes
  public: GALGAS_lstring mProperty_mComment ;
  public: GALGAS_uint mProperty_mStyleIndex ;

//--- Constructor
  public: cMapElement_styleMap (const GALGAS_lstring & inKey,
                                const GALGAS_lstring & in_mComment,
                                const GALGAS_uint & in_mStyleIndex
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
// Phase 1: @styleMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_styleMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_lstring mProperty_mComment ;
  public: inline GALGAS_lstring readProperty_mComment (void) const {
    return mProperty_mComment ;
  }

  public: GALGAS_uint mProperty_mStyleIndex ;
  public: inline GALGAS_uint readProperty_mStyleIndex (void) const {
    return mProperty_mStyleIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_styleMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_styleMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMComment (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mComment = inValue ;
  }

  public: inline void setter_setMStyleIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStyleIndex = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_styleMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_styleMap_2D_element (const GALGAS_lstring & in_lkey,
                                      const GALGAS_lstring & in_mComment,
                                      const GALGAS_uint & in_mStyleIndex) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_styleMap_2D_element extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_styleMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                   const class GALGAS_lstring & inOperand1,
                                                                   const class GALGAS_uint & inOperand2
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_styleMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_styleMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_styleMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalTagMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_lexicalTagMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_lexicalTagMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalTagMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_lexicalTagMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_lexicalTagMap (const GALGAS_lexicalTagMap & inSource) ;
  public: GALGAS_lexicalTagMap & operator = (const GALGAS_lexicalTagMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalTagMap extractObject (const GALGAS_object & inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalTagMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalTagMap constructor_mapWithMapToOverride (const class GALGAS_lexicalTagMap & inOperand0
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
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalTagMap getter_overriddenMap (C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_lexicalTagMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                          const GALGAS_string & inKey
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_lexicalTagMap ;
 
} ; // End of GALGAS_lexicalTagMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_lexicalTagMap : public cGenericAbstractEnumerator {
  public: cEnumerator_lexicalTagMap (const GALGAS_lexicalTagMap & inEnumeratedObject,
                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_lexicalTagMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalTagMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@lexicalTagMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_lexicalTagMap : public cMapElement {
//--- Map attributes

//--- Constructor
  public: cMapElement_lexicalTagMap (const GALGAS_lstring & inKey
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
// Phase 1: @lexicalTagMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalTagMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalTagMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_lexicalTagMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_lexicalTagMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_lexicalTagMap_2D_element (const GALGAS_lstring & in_lkey) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalTagMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalTagMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalTagMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalTagMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalTagMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalFunctionExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalFunctionExpressionAST_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_lexicalFunctionExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalFunctionExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalFunctionExpressionAST_2D_weak (const class GALGAS_lexicalFunctionExpressionAST & inSource) ;

  public: GALGAS_lexicalFunctionExpressionAST_2D_weak & operator = (const class GALGAS_lexicalFunctionExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalFunctionExpressionAST bang_lexicalFunctionExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalFunctionExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalFunctionExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalFunctionExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalFunctionExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalFunctionOrExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalFunctionOrExpressionAST : public GALGAS_lexicalFunctionExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalFunctionOrExpressionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalFunctionOrExpressionAST (const class cPtr_lexicalFunctionOrExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lexicalFunctionExpressionAST readProperty_mLeftOperand (void) const ;

  public: class GALGAS_lexicalFunctionExpressionAST readProperty_mRightOperand (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalFunctionOrExpressionAST extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalFunctionOrExpressionAST constructor_new (const class GALGAS_lexicalFunctionExpressionAST & inOperand0,
                                                                              const class GALGAS_lexicalFunctionExpressionAST & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalFunctionOrExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalFunctionOrExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionOrExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalFunctionOrExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalFunctionOrExpressionAST : public cPtr_lexicalFunctionExpressionAST {
//--- Properties
  public: GALGAS_lexicalFunctionExpressionAST mProperty_mLeftOperand ;
  public: GALGAS_lexicalFunctionExpressionAST mProperty_mRightOperand ;

//--- Constructor
  public: cPtr_lexicalFunctionOrExpressionAST (const GALGAS_lexicalFunctionExpressionAST & in_mLeftOperand,
                                               const GALGAS_lexicalFunctionExpressionAST & in_mRightOperand
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalFunctionOrExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalFunctionOrExpressionAST_2D_weak : public GALGAS_lexicalFunctionExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexicalFunctionOrExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalFunctionOrExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalFunctionOrExpressionAST_2D_weak (const class GALGAS_lexicalFunctionOrExpressionAST & inSource) ;

  public: GALGAS_lexicalFunctionOrExpressionAST_2D_weak & operator = (const class GALGAS_lexicalFunctionOrExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalFunctionOrExpressionAST bang_lexicalFunctionOrExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalFunctionOrExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalFunctionOrExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalFunctionOrExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalFunctionOrExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionOrExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@lexicalFunctionExpressionAST checkUnicodeConstants'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_lexicalFunctionExpressionAST_checkUnicodeConstants) (const class cPtr_lexicalFunctionExpressionAST * inObject,
                                                                                             class C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_checkUnicodeConstants (const int32_t inClassIndex,
                                                 extensionMethodSignature_lexicalFunctionExpressionAST_checkUnicodeConstants inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_checkUnicodeConstants (const class cPtr_lexicalFunctionExpressionAST * inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalFunctionExpressionAST callsDefinedUnicodeTestFunctions'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_bool (*enterExtensionGetter_lexicalFunctionExpressionAST_callsDefinedUnicodeTestFunctions) (const class cPtr_lexicalFunctionExpressionAST * inObject,
                                                                                                                 const class GALGAS_stringset constinArgument0,
                                                                                                                 class C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_callsDefinedUnicodeTestFunctions (const int32_t inClassIndex,
                                                            enterExtensionGetter_lexicalFunctionExpressionAST_callsDefinedUnicodeTestFunctions inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool callExtensionGetter_callsDefinedUnicodeTestFunctions (const class cPtr_lexicalFunctionExpressionAST * inObject,
                                                                        const GALGAS_stringset constin_inDefinedUnicodeFunctionSet,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalFunctionExpressionAST generateForUnicodeTestFunctions'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_string (*enterExtensionGetter_lexicalFunctionExpressionAST_generateForUnicodeTestFunctions) (const class cPtr_lexicalFunctionExpressionAST * inObject,
                                                                                                                  class C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_generateForUnicodeTestFunctions (const int32_t inClassIndex,
                                                           enterExtensionGetter_lexicalFunctionExpressionAST_generateForUnicodeTestFunctions inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_generateForUnicodeTestFunctions (const class cPtr_lexicalFunctionExpressionAST * inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@lexicalTypeEnum lexicalTypeBaseName' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_lexicalTypeBaseName (const class GALGAS_lexicalTypeEnum & inObject,
                                                         class C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalExpressionAST generateConditionCode'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_string (*enterExtensionGetter_lexicalExpressionAST_generateConditionCode) (const class cPtr_lexicalExpressionAST * inObject,
                                                                                                const class GALGAS_lexiqueAnalysisContext constinArgument0,
                                                                                                class C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_generateConditionCode (const int32_t inClassIndex,
                                                 enterExtensionGetter_lexicalExpressionAST_generateConditionCode inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_generateConditionCode (const class cPtr_lexicalExpressionAST * inObject,
                                                               const GALGAS_lexiqueAnalysisContext constin_inLexiqueAnalysisContext,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexiqueAnalysisContext struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexiqueAnalysisContext : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mLexiqueName ;
  public: inline GALGAS_string readProperty_mLexiqueName (void) const {
    return mProperty_mLexiqueName ;
  }

  public: GALGAS_lexicalRoutineMap mProperty_mLexicalRoutineMessageMap ;
  public: inline GALGAS_lexicalRoutineMap readProperty_mLexicalRoutineMessageMap (void) const {
    return mProperty_mLexicalRoutineMessageMap ;
  }

  public: GALGAS_lexicalFunctionMap mProperty_mLexicalFunctionMap ;
  public: inline GALGAS_lexicalFunctionMap readProperty_mLexicalFunctionMap (void) const {
    return mProperty_mLexicalFunctionMap ;
  }

  public: GALGAS_lexicalMessageMap mProperty_mLexicalMessageMap ;
  public: inline GALGAS_lexicalMessageMap readProperty_mLexicalMessageMap (void) const {
    return mProperty_mLexicalMessageMap ;
  }

  public: GALGAS_terminalMap mProperty_mTerminalMap ;
  public: inline GALGAS_terminalMap readProperty_mTerminalMap (void) const {
    return mProperty_mTerminalMap ;
  }

  public: GALGAS_terminalList mProperty_mTerminalList ;
  public: inline GALGAS_terminalList readProperty_mTerminalList (void) const {
    return mProperty_mTerminalList ;
  }

  public: GALGAS_lexicalAttributeMap mProperty_mLexicalAttributeMap ;
  public: inline GALGAS_lexicalAttributeMap readProperty_mLexicalAttributeMap (void) const {
    return mProperty_mLexicalAttributeMap ;
  }

  public: GALGAS_lexicalExplicitTokenListMapMap mProperty_mLexicalTokenListMap ;
  public: inline GALGAS_lexicalExplicitTokenListMapMap readProperty_mLexicalTokenListMap (void) const {
    return mProperty_mLexicalTokenListMap ;
  }

  public: GALGAS_stringset mProperty_mUnicodeStringToGenerate ;
  public: inline GALGAS_stringset readProperty_mUnicodeStringToGenerate (void) const {
    return mProperty_mUnicodeStringToGenerate ;
  }

  public: GALGAS_templateDelimitorList mProperty_mTemplateDelimitorList ;
  public: inline GALGAS_templateDelimitorList readProperty_mTemplateDelimitorList (void) const {
    return mProperty_mTemplateDelimitorList ;
  }

  public: GALGAS_styleMap mProperty_mStyleMap ;
  public: inline GALGAS_styleMap readProperty_mStyleMap (void) const {
    return mProperty_mStyleMap ;
  }

  public: GALGAS_stringset mProperty_mExternUnicodeTestFunctions ;
  public: inline GALGAS_stringset readProperty_mExternUnicodeTestFunctions (void) const {
    return mProperty_mExternUnicodeTestFunctions ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexiqueAnalysisContext constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_lexiqueAnalysisContext (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLexiqueName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexiqueName = inValue ;
  }

  public: inline void setter_setMLexicalRoutineMessageMap (const GALGAS_lexicalRoutineMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalRoutineMessageMap = inValue ;
  }

  public: inline void setter_setMLexicalFunctionMap (const GALGAS_lexicalFunctionMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalFunctionMap = inValue ;
  }

  public: inline void setter_setMLexicalMessageMap (const GALGAS_lexicalMessageMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalMessageMap = inValue ;
  }

  public: inline void setter_setMTerminalMap (const GALGAS_terminalMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTerminalMap = inValue ;
  }

  public: inline void setter_setMTerminalList (const GALGAS_terminalList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTerminalList = inValue ;
  }

  public: inline void setter_setMLexicalAttributeMap (const GALGAS_lexicalAttributeMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalAttributeMap = inValue ;
  }

  public: inline void setter_setMLexicalTokenListMap (const GALGAS_lexicalExplicitTokenListMapMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalTokenListMap = inValue ;
  }

  public: inline void setter_setMUnicodeStringToGenerate (const GALGAS_stringset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUnicodeStringToGenerate = inValue ;
  }

  public: inline void setter_setMTemplateDelimitorList (const GALGAS_templateDelimitorList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTemplateDelimitorList = inValue ;
  }

  public: inline void setter_setMStyleMap (const GALGAS_styleMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStyleMap = inValue ;
  }

  public: inline void setter_setMExternUnicodeTestFunctions (const GALGAS_stringset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExternUnicodeTestFunctions = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_lexiqueAnalysisContext (void) ;

//--------------------------------- Native constructor
  public: GALGAS_lexiqueAnalysisContext (const GALGAS_string & in_mLexiqueName,
                                         const GALGAS_lexicalRoutineMap & in_mLexicalRoutineMessageMap,
                                         const GALGAS_lexicalFunctionMap & in_mLexicalFunctionMap,
                                         const GALGAS_lexicalMessageMap & in_mLexicalMessageMap,
                                         const GALGAS_terminalMap & in_mTerminalMap,
                                         const GALGAS_terminalList & in_mTerminalList,
                                         const GALGAS_lexicalAttributeMap & in_mLexicalAttributeMap,
                                         const GALGAS_lexicalExplicitTokenListMapMap & in_mLexicalTokenListMap,
                                         const GALGAS_stringset & in_mUnicodeStringToGenerate,
                                         const GALGAS_templateDelimitorList & in_mTemplateDelimitorList,
                                         const GALGAS_styleMap & in_mStyleMap,
                                         const GALGAS_stringset & in_mExternUnicodeTestFunctions) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexiqueAnalysisContext extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexiqueAnalysisContext constructor_new (const class GALGAS_string & inOperand0,
                                                                      const class GALGAS_lexicalRoutineMap & inOperand1,
                                                                      const class GALGAS_lexicalFunctionMap & inOperand2,
                                                                      const class GALGAS_lexicalMessageMap & inOperand3,
                                                                      const class GALGAS_terminalMap & inOperand4,
                                                                      const class GALGAS_terminalList & inOperand5,
                                                                      const class GALGAS_lexicalAttributeMap & inOperand6,
                                                                      const class GALGAS_lexicalExplicitTokenListMapMap & inOperand7,
                                                                      const class GALGAS_stringset & inOperand8,
                                                                      const class GALGAS_templateDelimitorList & inOperand9,
                                                                      const class GALGAS_styleMap & inOperand10,
                                                                      const class GALGAS_stringset & inOperand11
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexiqueAnalysisContext & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexiqueAnalysisContext class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueAnalysisContext ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalRoutineOrFunctionFormalInputArgumentAST generateRoutineOrFunctionArgument'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_string (*enterExtensionGetter_lexicalRoutineOrFunctionFormalInputArgumentAST_generateRoutineOrFunctionArgument) (const class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                                                      class C_Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_generateRoutineOrFunctionArgument (const int32_t inClassIndex,
                                                             enterExtensionGetter_lexicalRoutineOrFunctionFormalInputArgumentAST_generateRoutineOrFunctionArgument inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_generateRoutineOrFunctionArgument (const class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractLexicalRoutineActualArgumentAST generateRoutineArgument'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_string (*enterExtensionGetter_abstractLexicalRoutineActualArgumentAST_generateRoutineArgument) (const class cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                                                                     class C_Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_generateRoutineArgument (const int32_t inClassIndex,
                                                   enterExtensionGetter_abstractLexicalRoutineActualArgumentAST_generateRoutineArgument inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_generateRoutineArgument (const class cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalSendDefaultActionAST generateDefaultSendCode'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_string (*enterExtensionGetter_lexicalSendDefaultActionAST_generateDefaultSendCode) (const class cPtr_lexicalSendDefaultActionAST * inObject,
                                                                                                         const class GALGAS_string constinArgument0,
                                                                                                         class C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_generateDefaultSendCode (const int32_t inClassIndex,
                                                   enterExtensionGetter_lexicalSendDefaultActionAST_generateDefaultSendCode inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_generateDefaultSendCode (const class cPtr_lexicalSendDefaultActionAST * inObject,
                                                                 const GALGAS_string constin_inScannerClassName,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalInstructionAST generateInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_string (*enterExtensionGetter_lexicalInstructionAST_generateInstructionCode) (const class cPtr_lexicalInstructionAST * inObject,
                                                                                                   const class GALGAS_string constinArgument0,
                                                                                                   const class GALGAS_lexiqueAnalysisContext constinArgument1,
                                                                                                   class C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_generateInstructionCode (const int32_t inClassIndex,
                                                   enterExtensionGetter_lexicalInstructionAST_generateInstructionCode inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_generateInstructionCode (const class cPtr_lexicalInstructionAST * inObject,
                                                                 const GALGAS_string constin_inScannerClassName,
                                                                 const GALGAS_lexiqueAnalysisContext constin_inLexiqueAnalysisContext,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractLexicalRuleAST generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_string (*enterExtensionGetter_abstractLexicalRuleAST_generateCode) (const class cPtr_abstractLexicalRuleAST * inObject,
                                                                                         const class GALGAS_string constinArgument0,
                                                                                         const class GALGAS_lexiqueAnalysisContext constinArgument1,
                                                                                         class C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_generateCode (const int32_t inClassIndex,
                                        enterExtensionGetter_abstractLexicalRuleAST_generateCode inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_generateCode (const class cPtr_abstractLexicalRuleAST * inObject,
                                                      const GALGAS_string constin_inScannerClassName,
                                                      const GALGAS_lexiqueAnalysisContext constin_inLexiqueAnalysisContext,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalExpressionAST generateCocoaConditionCode'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_string (*enterExtensionGetter_lexicalExpressionAST_generateCocoaConditionCode) (const class cPtr_lexicalExpressionAST * inObject,
                                                                                                     const class GALGAS_lexiqueAnalysisContext constinArgument0,
                                                                                                     class C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_generateCocoaConditionCode (const int32_t inClassIndex,
                                                      enterExtensionGetter_lexicalExpressionAST_generateCocoaConditionCode inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_generateCocoaConditionCode (const class cPtr_lexicalExpressionAST * inObject,
                                                                    const GALGAS_lexiqueAnalysisContext constin_inLexiqueAnalysisContext,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalRoutineOrFunctionFormalInputArgumentAST generateCocoaRoutineOrFunctionArgument'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_string (*enterExtensionGetter_lexicalRoutineOrFunctionFormalInputArgumentAST_generateCocoaRoutineOrFunctionArgument) (const class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                                                           class C_Compiler * inCompiler
                                                                                                                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_generateCocoaRoutineOrFunctionArgument (const int32_t inClassIndex,
                                                                  enterExtensionGetter_lexicalRoutineOrFunctionFormalInputArgumentAST_generateCocoaRoutineOrFunctionArgument inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_generateCocoaRoutineOrFunctionArgument (const class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractLexicalRoutineActualArgumentAST generateCocoaRoutineArgument'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_string (*enterExtensionGetter_abstractLexicalRoutineActualArgumentAST_generateCocoaRoutineArgument) (const class cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                                                                          const class GALGAS_lexiqueAnalysisContext constinArgument0,
                                                                                                                          class C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_generateCocoaRoutineArgument (const int32_t inClassIndex,
                                                        enterExtensionGetter_abstractLexicalRoutineActualArgumentAST_generateCocoaRoutineArgument inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_generateCocoaRoutineArgument (const class cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                      const GALGAS_lexiqueAnalysisContext constin_inLexiqueAnalysisContext,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalSendDefaultActionAST generateCocoaDefaultSendCode'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_string (*enterExtensionGetter_lexicalSendDefaultActionAST_generateCocoaDefaultSendCode) (const class cPtr_lexicalSendDefaultActionAST * inObject,
                                                                                                              const class GALGAS_string constinArgument0,
                                                                                                              class C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_generateCocoaDefaultSendCode (const int32_t inClassIndex,
                                                        enterExtensionGetter_lexicalSendDefaultActionAST_generateCocoaDefaultSendCode inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_generateCocoaDefaultSendCode (const class cPtr_lexicalSendDefaultActionAST * inObject,
                                                                      const GALGAS_string constin_inScannerClassName,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalInstructionAST generateCocoaInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_string (*enterExtensionGetter_lexicalInstructionAST_generateCocoaInstructionCode) (const class cPtr_lexicalInstructionAST * inObject,
                                                                                                        const class GALGAS_string constinArgument0,
                                                                                                        const class GALGAS_lexiqueAnalysisContext constinArgument1,
                                                                                                        class C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_generateCocoaInstructionCode (const int32_t inClassIndex,
                                                        enterExtensionGetter_lexicalInstructionAST_generateCocoaInstructionCode inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_generateCocoaInstructionCode (const class cPtr_lexicalInstructionAST * inObject,
                                                                      const GALGAS_string constin_inScannerClassName,
                                                                      const GALGAS_lexiqueAnalysisContext constin_inLexiqueAnalysisContext,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractLexicalRuleAST generateCocoaCode'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_string (*enterExtensionGetter_abstractLexicalRuleAST_generateCocoaCode) (const class cPtr_abstractLexicalRuleAST * inObject,
                                                                                              const class GALGAS_string constinArgument0,
                                                                                              const class GALGAS_lexiqueAnalysisContext constinArgument1,
                                                                                              class C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_generateCocoaCode (const int32_t inClassIndex,
                                             enterExtensionGetter_abstractLexicalRuleAST_generateCocoaCode inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_generateCocoaCode (const class cPtr_abstractLexicalRuleAST * inObject,
                                                           const GALGAS_string constin_inScannerClassName,
                                                           const GALGAS_lexiqueAnalysisContext constin_inLexiqueAnalysisContext,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@lexicalTypeEnum cppTypeName' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_cppTypeName (const class GALGAS_lexicalTypeEnum & inObject,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@lexicalTypeEnum appendMethodName' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_appendMethodName (const class GALGAS_lexicalTypeEnum & inObject,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@lexicalTypeEnum appendArgumentOfMethod' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_appendArgumentOfMethod (const class GALGAS_lexicalTypeEnum & inObject,
                                                            class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@lexicalTypeEnum initialization' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_initialization (const class GALGAS_lexicalTypeEnum & inObject,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@lexicalTypeEnum cocoaTypeName' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_cocoaTypeName (const class GALGAS_lexicalTypeEnum & inObject,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@lexicalTypeEnum needsReferenceInInputOutputInCocoa' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool extensionGetter_needsReferenceInInputOutputInCocoa (const class GALGAS_lexicalTypeEnum & inObject,
                                                                      class C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@lexicalTypeEnum cocoaInitializationCode' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_cocoaInitializationCode (const class GALGAS_lexicalTypeEnum & inObject,
                                                             class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@lexicalTypeEnum cocoaResetPrefix' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_cocoaResetPrefix (const class GALGAS_lexicalTypeEnum & inObject,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@lexicalTypeEnum cocoaReset' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_cocoaReset (const class GALGAS_lexicalTypeEnum & inObject,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@lexicalSendDefaultActionAST checkLexicalDefaultAction'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_lexicalSendDefaultActionAST_checkLexicalDefaultAction) (const class cPtr_lexicalSendDefaultActionAST * inObject,
                                                                                                class GALGAS_lexiqueAnalysisContext & ioArgument0,
                                                                                                class C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_checkLexicalDefaultAction (const int32_t inClassIndex,
                                                     extensionMethodSignature_lexicalSendDefaultActionAST_checkLexicalDefaultAction inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalDefaultAction (const class cPtr_lexicalSendDefaultActionAST * inObject,
                                                    GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@lexicalExpressionAST checkLexicalExpression'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_lexicalExpressionAST_checkLexicalExpression) (const class cPtr_lexicalExpressionAST * inObject,
                                                                                      class GALGAS_lexiqueAnalysisContext & ioArgument0,
                                                                                      class C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_checkLexicalExpression (const int32_t inClassIndex,
                                                  extensionMethodSignature_lexicalExpressionAST_checkLexicalExpression inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalExpression (const class cPtr_lexicalExpressionAST * inObject,
                                                 GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@lexicalRoutineOrFunctionFormalInputArgumentAST checkLexicalFunctionCallArgument'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalFunctionCallArgument) (const class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                                          class GALGAS_lexiqueAnalysisContext & ioArgument0,
                                                                                                                          class GALGAS_lexicalTypeEnum inArgument1,
                                                                                                                          class C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_checkLexicalFunctionCallArgument (const int32_t inClassIndex,
                                                            extensionMethodSignature_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalFunctionCallArgument inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalFunctionCallArgument (const class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                           GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                           GALGAS_lexicalTypeEnum in_inLexicalRoutineFormalArgumentType,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@lexicalRoutineOrFunctionFormalInputArgumentAST checkLexicalRoutineCallArgument'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalRoutineCallArgument) (const class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                                         class GALGAS_lexiqueAnalysisContext & ioArgument0,
                                                                                                                         class GALGAS_lexicalTypeEnum inArgument1,
                                                                                                                         class C_Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_checkLexicalRoutineCallArgument (const int32_t inClassIndex,
                                                           extensionMethodSignature_lexicalRoutineOrFunctionFormalInputArgumentAST_checkLexicalRoutineCallArgument inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalRoutineCallArgument (const class cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                          GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                          GALGAS_lexicalTypeEnum in_inLexicalRoutineFormalArgumentType,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractLexicalRoutineActualArgumentAST checkLexicalRoutineCallArgument'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_abstractLexicalRoutineActualArgumentAST_checkLexicalRoutineCallArgument) (const class cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                                                                  class GALGAS_lexiqueAnalysisContext & ioArgument0,
                                                                                                                  class GALGAS_lexicalArgumentModeAST inArgument1,
                                                                                                                  class GALGAS_lexicalTypeEnum inArgument2,
                                                                                                                  class C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_checkLexicalRoutineCallArgument (const int32_t inClassIndex,
                                                           extensionMethodSignature_abstractLexicalRoutineActualArgumentAST_checkLexicalRoutineCallArgument inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalRoutineCallArgument (const class cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                          GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                          GALGAS_lexicalArgumentModeAST in_inLexicalRoutineFormalArgumentMode,
                                                          GALGAS_lexicalTypeEnum in_inLexicalRoutineFormalArgumentType,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@lexicalInstructionAST checkLexicalInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_lexicalInstructionAST_checkLexicalInstruction) (const class cPtr_lexicalInstructionAST * inObject,
                                                                                        class GALGAS_lexiqueAnalysisContext & ioArgument0,
                                                                                        class GALGAS_lexicalTagMap & ioArgument1,
                                                                                        class C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_checkLexicalInstruction (const int32_t inClassIndex,
                                                   extensionMethodSignature_lexicalInstructionAST_checkLexicalInstruction inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalInstruction (const class cPtr_lexicalInstructionAST * inObject,
                                                  GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                  GALGAS_lexicalTagMap & io_ioTagMap,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractLexicalRuleAST checkLexicalRule'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_abstractLexicalRuleAST_checkLexicalRule) (const class cPtr_abstractLexicalRuleAST * inObject,
                                                                                  class GALGAS_lexiqueAnalysisContext & ioArgument0,
                                                                                  class C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_checkLexicalRule (const int32_t inClassIndex,
                                            extensionMethodSignature_abstractLexicalRuleAST_checkLexicalRule inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalRule (const class cPtr_abstractLexicalRuleAST * inObject,
                                           GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                       Phase 1: @optionDefaultValueEnumAST enum                                      *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_optionDefaultValueEnumAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_optionDefaultValueEnumAST (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_noDefaultValue,
    kEnum_unsignedDefaultValue,
    kEnum_stringDefaultValue
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
  public: static GALGAS_optionDefaultValueEnumAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_optionDefaultValueEnumAST constructor_noDefaultValue (LOCATION_ARGS) ;

  public: static class GALGAS_optionDefaultValueEnumAST constructor_stringDefaultValue (LOCATION_ARGS) ;

  public: static class GALGAS_optionDefaultValueEnumAST constructor_unsignedDefaultValue (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_optionDefaultValueEnumAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNoDefaultValue (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isStringDefaultValue (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isUnsignedDefaultValue (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_noDefaultValue () const ;

  public: VIRTUAL_IN_DEBUG bool optional_stringDefaultValue () const ;

  public: VIRTUAL_IN_DEBUG bool optional_unsignedDefaultValue () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_optionDefaultValueEnumAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionDefaultValueEnumAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @commandLineOptionListAST list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_commandLineOptionListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_commandLineOptionListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_commandLineOptionListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mOptionTypeName,
                                                 const class GALGAS_lstring & in_mOptionInternalName,
                                                 const class GALGAS_lchar & in_mOptionInvocationLetter,
                                                 const class GALGAS_lstring & in_mOptionInvocationString,
                                                 const class GALGAS_lstring & in_mOptionComment,
                                                 const class GALGAS_lstring & in_mOptionDefaultValue,
                                                 const class GALGAS_optionDefaultValueEnumAST & in_mOptionDefaultValueKind
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_commandLineOptionListAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_commandLineOptionListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_commandLineOptionListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_lstring & inOperand1,
                                                                                  const class GALGAS_lchar & inOperand2,
                                                                                  const class GALGAS_lstring & inOperand3,
                                                                                  const class GALGAS_lstring & inOperand4,
                                                                                  const class GALGAS_lstring & inOperand5,
                                                                                  const class GALGAS_optionDefaultValueEnumAST & inOperand6
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_commandLineOptionListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_lchar & inOperand2,
                                                     const class GALGAS_lstring & inOperand3,
                                                     const class GALGAS_lstring & inOperand4,
                                                     const class GALGAS_lstring & inOperand5,
                                                     const class GALGAS_optionDefaultValueEnumAST & inOperand6
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_commandLineOptionListAST add_operation (const GALGAS_commandLineOptionListAST & inOperand,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_commandLineOptionListAST_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_lchar constinArgument2,
                                                      class GALGAS_lstring constinArgument3,
                                                      class GALGAS_lstring constinArgument4,
                                                      class GALGAS_lstring constinArgument5,
                                                      class GALGAS_optionDefaultValueEnumAST constinArgument6,
                                                      class GALGAS_uint constinArgument7,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_lchar & outArgument2,
                                                 class GALGAS_lstring & outArgument3,
                                                 class GALGAS_lstring & outArgument4,
                                                 class GALGAS_lstring & outArgument5,
                                                 class GALGAS_optionDefaultValueEnumAST & outArgument6,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                class GALGAS_lchar & outArgument2,
                                                class GALGAS_lstring & outArgument3,
                                                class GALGAS_lstring & outArgument4,
                                                class GALGAS_lstring & outArgument5,
                                                class GALGAS_optionDefaultValueEnumAST & outArgument6,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_lchar & outArgument2,
                                                      class GALGAS_lstring & outArgument3,
                                                      class GALGAS_lstring & outArgument4,
                                                      class GALGAS_lstring & outArgument5,
                                                      class GALGAS_optionDefaultValueEnumAST & outArgument6,
                                                      class GALGAS_uint constinArgument7,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOptionCommentAtIndex (class GALGAS_lstring constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOptionDefaultValueAtIndex (class GALGAS_lstring constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOptionDefaultValueKindAtIndex (class GALGAS_optionDefaultValueEnumAST constinArgument0,
                                                                          class GALGAS_uint constinArgument1,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOptionInternalNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOptionInvocationLetterAtIndex (class GALGAS_lchar constinArgument0,
                                                                          class GALGAS_uint constinArgument1,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOptionInvocationStringAtIndex (class GALGAS_lstring constinArgument0,
                                                                          class GALGAS_uint constinArgument1,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOptionTypeNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_lchar & outArgument2,
                                              class GALGAS_lstring & outArgument3,
                                              class GALGAS_lstring & outArgument4,
                                              class GALGAS_lstring & outArgument5,
                                              class GALGAS_optionDefaultValueEnumAST & outArgument6,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             class GALGAS_lchar & outArgument2,
                                             class GALGAS_lstring & outArgument3,
                                             class GALGAS_lstring & outArgument4,
                                             class GALGAS_lstring & outArgument5,
                                             class GALGAS_optionDefaultValueEnumAST & outArgument6,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOptionCommentAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOptionDefaultValueAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_optionDefaultValueEnumAST getter_mOptionDefaultValueKindAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOptionInternalNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lchar getter_mOptionInvocationLetterAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOptionInvocationStringAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOptionTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_commandLineOptionListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_commandLineOptionListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_commandLineOptionListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_commandLineOptionListAST ;
 
} ; // End of GALGAS_commandLineOptionListAST class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_commandLineOptionListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_commandLineOptionListAST (const GALGAS_commandLineOptionListAST & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mOptionTypeName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mOptionInternalName (LOCATION_ARGS) const ;
  public: class GALGAS_lchar current_mOptionInvocationLetter (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mOptionInvocationString (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mOptionComment (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mOptionDefaultValue (LOCATION_ARGS) const ;
  public: class GALGAS_optionDefaultValueEnumAST current_mOptionDefaultValueKind (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_commandLineOptionListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_commandLineOptionListAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @commandLineOptionListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_commandLineOptionListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mOptionTypeName ;
  public: inline GALGAS_lstring readProperty_mOptionTypeName (void) const {
    return mProperty_mOptionTypeName ;
  }

  public: GALGAS_lstring mProperty_mOptionInternalName ;
  public: inline GALGAS_lstring readProperty_mOptionInternalName (void) const {
    return mProperty_mOptionInternalName ;
  }

  public: GALGAS_lchar mProperty_mOptionInvocationLetter ;
  public: inline GALGAS_lchar readProperty_mOptionInvocationLetter (void) const {
    return mProperty_mOptionInvocationLetter ;
  }

  public: GALGAS_lstring mProperty_mOptionInvocationString ;
  public: inline GALGAS_lstring readProperty_mOptionInvocationString (void) const {
    return mProperty_mOptionInvocationString ;
  }

  public: GALGAS_lstring mProperty_mOptionComment ;
  public: inline GALGAS_lstring readProperty_mOptionComment (void) const {
    return mProperty_mOptionComment ;
  }

  public: GALGAS_lstring mProperty_mOptionDefaultValue ;
  public: inline GALGAS_lstring readProperty_mOptionDefaultValue (void) const {
    return mProperty_mOptionDefaultValue ;
  }

  public: GALGAS_optionDefaultValueEnumAST mProperty_mOptionDefaultValueKind ;
  public: inline GALGAS_optionDefaultValueEnumAST readProperty_mOptionDefaultValueKind (void) const {
    return mProperty_mOptionDefaultValueKind ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_commandLineOptionListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOptionTypeName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionTypeName = inValue ;
  }

  public: inline void setter_setMOptionInternalName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionInternalName = inValue ;
  }

  public: inline void setter_setMOptionInvocationLetter (const GALGAS_lchar & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionInvocationLetter = inValue ;
  }

  public: inline void setter_setMOptionInvocationString (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionInvocationString = inValue ;
  }

  public: inline void setter_setMOptionComment (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionComment = inValue ;
  }

  public: inline void setter_setMOptionDefaultValue (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionDefaultValue = inValue ;
  }

  public: inline void setter_setMOptionDefaultValueKind (const GALGAS_optionDefaultValueEnumAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionDefaultValueKind = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_commandLineOptionListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_commandLineOptionListAST_2D_element (const GALGAS_lstring & in_mOptionTypeName,
                                                      const GALGAS_lstring & in_mOptionInternalName,
                                                      const GALGAS_lchar & in_mOptionInvocationLetter,
                                                      const GALGAS_lstring & in_mOptionInvocationString,
                                                      const GALGAS_lstring & in_mOptionComment,
                                                      const GALGAS_lstring & in_mOptionDefaultValue,
                                                      const GALGAS_optionDefaultValueEnumAST & in_mOptionDefaultValueKind) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_commandLineOptionListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_commandLineOptionListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_lstring & inOperand1,
                                                                                   const class GALGAS_lchar & inOperand2,
                                                                                   const class GALGAS_lstring & inOperand3,
                                                                                   const class GALGAS_lstring & inOperand4,
                                                                                   const class GALGAS_lstring & inOperand5,
                                                                                   const class GALGAS_optionDefaultValueEnumAST & inOperand6
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_commandLineOptionListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_commandLineOptionListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_commandLineOptionListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @commandLineOptionMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_commandLineOptionMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_commandLineOptionMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_commandLineOptionMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_commandLineOptionMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_commandLineOptionMap (const GALGAS_commandLineOptionMap & inSource) ;
  public: GALGAS_commandLineOptionMap & operator = (const GALGAS_commandLineOptionMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_commandLineOptionMap extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_commandLineOptionMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_commandLineOptionMap constructor_mapWithMapToOverride (const class GALGAS_commandLineOptionMap & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_char & inOperand1,
                                                     const class GALGAS_string & inOperand2,
                                                     const class GALGAS_string & inOperand3,
                                                     const class GALGAS_string & inOperand4,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_char constinArgument1,
                                                  class GALGAS_string constinArgument2,
                                                  class GALGAS_string constinArgument3,
                                                  class GALGAS_string constinArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCommentForKey (class GALGAS_string constinArgument0,
                                                          class GALGAS_string constinArgument1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDefaultValueForKey (class GALGAS_string constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOptionCharForKey (class GALGAS_char constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOptionStringForKey (class GALGAS_string constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_char & outArgument1,
                                                  class GALGAS_string & outArgument2,
                                                  class GALGAS_string & outArgument3,
                                                  class GALGAS_string & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mCommentForKey (const class GALGAS_string & constinOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mDefaultValueForKey (const class GALGAS_string & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_char getter_mOptionCharForKey (const class GALGAS_string & constinOperand0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mOptionStringForKey (const class GALGAS_string & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_commandLineOptionMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_char & outOperand1,
                                                    class GALGAS_string & outOperand2,
                                                    class GALGAS_string & outOperand3,
                                                    class GALGAS_string & outOperand4) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_commandLineOptionMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                 const GALGAS_string & inKey
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_commandLineOptionMap ;
 
} ; // End of GALGAS_commandLineOptionMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_commandLineOptionMap : public cGenericAbstractEnumerator {
  public: cEnumerator_commandLineOptionMap (const GALGAS_commandLineOptionMap & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_char current_mOptionChar (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mOptionString (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mComment (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mDefaultValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_commandLineOptionMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_commandLineOptionMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@commandLineOptionMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_commandLineOptionMap : public cMapElement {
//--- Map attributes
  public: GALGAS_char mProperty_mOptionChar ;
  public: GALGAS_string mProperty_mOptionString ;
  public: GALGAS_string mProperty_mComment ;
  public: GALGAS_string mProperty_mDefaultValue ;

//--- Constructor
  public: cMapElement_commandLineOptionMap (const GALGAS_lstring & inKey,
                                            const GALGAS_char & in_mOptionChar,
                                            const GALGAS_string & in_mOptionString,
                                            const GALGAS_string & in_mComment,
                                            const GALGAS_string & in_mDefaultValue
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
// Phase 1: @commandLineOptionMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_commandLineOptionMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
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

  public: GALGAS_string mProperty_mDefaultValue ;
  public: inline GALGAS_string readProperty_mDefaultValue (void) const {
    return mProperty_mDefaultValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_commandLineOptionMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_commandLineOptionMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
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

  public: inline void setter_setMDefaultValue (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDefaultValue = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_commandLineOptionMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_commandLineOptionMap_2D_element (const GALGAS_lstring & in_lkey,
                                                  const GALGAS_char & in_mOptionChar,
                                                  const GALGAS_string & in_mOptionString,
                                                  const GALGAS_string & in_mComment,
                                                  const GALGAS_string & in_mDefaultValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_commandLineOptionMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_commandLineOptionMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_char & inOperand1,
                                                                               const class GALGAS_string & inOperand2,
                                                                               const class GALGAS_string & inOperand3,
                                                                               const class GALGAS_string & inOperand4
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_commandLineOptionMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_commandLineOptionMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_commandLineOptionMap_2D_element ;

