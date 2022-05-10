#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-0.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionForGeneration : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_templateInstructionForGeneration (const class cPtr_templateInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateInstructionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_templateInstructionForGeneration : public acStrongPtr_class {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties

//--- Constructor
  public: cPtr_templateInstructionForGeneration (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionForGeneration_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateInstructionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateInstructionForGeneration_2D_weak (const class GALGAS_templateInstructionForGeneration & inSource) ;

  public: GALGAS_templateInstructionForGeneration_2D_weak & operator = (const class GALGAS_templateInstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateInstructionForGeneration bang_templateInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticExpressionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_semanticExpressionForGeneration : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_semanticExpressionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_semanticExpressionForGeneration (const class cPtr_semanticExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_unifiedTypeMap_2D_entry readProperty_mResultType (void) const ;

  public: class GALGAS_location readProperty_mLocation (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_semanticExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_semanticExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLocation (class GALGAS_location inArgument0
                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMResultType (class GALGAS_unifiedTypeMap_2D_entry inArgument0
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_semanticExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @unifiedTypeMapElementClass reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_unifiedTypeMapElementClass : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_unifiedTypeMapElementClass (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_unifiedTypeMapElementClass (const class cPtr_unifiedTypeMapElementClass * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_typeDefinition readProperty_mDefinition (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_unifiedTypeMapElementClass extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_unifiedTypeMapElementClass constructor_new (const class GALGAS_typeDefinition & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_unifiedTypeMapElementClass & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMDefinition (class GALGAS_typeDefinition inArgument0
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_unifiedTypeMapElementClass class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapElementClass ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                        Phase 1: @unifiedTypeMap_2D_entry enum                                       *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_unifiedTypeMap_2D_entry : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_unifiedTypeMap_2D_entry (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_null,
    kEnum_element
  } enumeration ;
  
//--------------------------------- Private data member
  private: AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public: VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_unifiedTypeMap_2D_entry extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_unifiedTypeMap_2D_entry constructor_element (const class GALGAS_unifiedTypeMapElementClass & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_unifiedTypeMap_2D_entry constructor_null (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_unifiedTypeMap_2D_entry & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_element (class GALGAS_unifiedTypeMapElementClass & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isElement (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNull (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_element (class GALGAS_unifiedTypeMapElementClass & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_null () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_unifiedTypeMap_2D_entry class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMap_2D_entry ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @unifiedTypeMap_2D_entry enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_unifiedTypeMap_2D_entry_element : public cEnumAssociatedValues {
  public: const GALGAS_unifiedTypeMapElementClass mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_unifiedTypeMap_2D_entry_element (const GALGAS_unifiedTypeMapElementClass & inAssociatedValue0
                                                                 COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_unifiedTypeMap_2D_entry_element (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @semanticExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_semanticExpressionForGeneration : public acStrongPtr_class {

//----------------------------------------------------------------------------------------------------------------------

/* § public: virtual GALGAS_bool getter_isTrueExpression (C_Compiler * COMMA_LOCATION_ARGS) const ; */
//--- Properties
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mResultType ;
  public: GALGAS_location mProperty_mLocation ;

//--- Constructor
  public: cPtr_semanticExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                const GALGAS_location & in_mLocation
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
// Phase 1: @templateInstructionExpressionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionExpressionForGeneration : public GALGAS_templateInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionExpressionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_templateInstructionExpressionForGeneration (const class cPtr_templateInstructionExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_semanticExpressionForGeneration readProperty_mExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionExpressionForGeneration constructor_new (const class GALGAS_semanticExpressionForGeneration & inOperand0
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInstructionExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateInstructionExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_templateInstructionExpressionForGeneration : public cPtr_templateInstructionForGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_semanticExpressionForGeneration mProperty_mExpression ;

//--- Constructor
  public: cPtr_templateInstructionExpressionForGeneration (const GALGAS_semanticExpressionForGeneration & in_mExpression
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
// Phase 1: @templateInstructionExpressionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionExpressionForGeneration_2D_weak : public GALGAS_templateInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateInstructionExpressionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateInstructionExpressionForGeneration_2D_weak (const class GALGAS_templateInstructionExpressionForGeneration & inSource) ;

  public: GALGAS_templateInstructionExpressionForGeneration_2D_weak & operator = (const class GALGAS_templateInstructionExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateInstructionExpressionForGeneration bang_templateInstructionExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionExpressionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInstructionExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionExpressionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionExpressionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionListForGeneration list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_templateInstructionListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_templateInstructionForGeneration & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionListForGeneration extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_templateInstructionListForGeneration constructor_listWithValue (const class GALGAS_templateInstructionForGeneration & inOperand0
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_templateInstructionListForGeneration inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_templateInstructionForGeneration & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_templateInstructionListForGeneration add_operation (const GALGAS_templateInstructionListForGeneration & inOperand,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_templateInstructionListForGeneration_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_templateInstructionForGeneration constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_templateInstructionForGeneration & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_templateInstructionForGeneration & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_templateInstructionForGeneration & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GALGAS_templateInstructionForGeneration constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_templateInstructionForGeneration & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_templateInstructionForGeneration & outArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_templateInstructionForGeneration getter_mInstructionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_templateInstructionListForGeneration ;
 
} ; // End of GALGAS_templateInstructionListForGeneration class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_templateInstructionListForGeneration : public cGenericAbstractEnumerator {
  public: cEnumerator_templateInstructionListForGeneration (const GALGAS_templateInstructionListForGeneration & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_templateInstructionForGeneration current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_templateInstructionListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionListForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionListForGeneration_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_templateInstructionForGeneration mProperty_mInstruction ;
  public: inline GALGAS_templateInstructionForGeneration readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_templateInstructionListForGeneration_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GALGAS_templateInstructionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_templateInstructionListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_templateInstructionListForGeneration_2D_element (const GALGAS_templateInstructionForGeneration & in_mInstruction) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionListForGeneration_2D_element constructor_new (const class GALGAS_templateInstructionForGeneration & inOperand0
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInstructionListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionListForGeneration_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionListForGeneration_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateBlockInstructionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateBlockInstructionForGeneration : public GALGAS_templateInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_templateBlockInstructionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_templateBlockInstructionForGeneration (const class cPtr_templateBlockInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_semanticExpressionForGeneration readProperty_mExpression (void) const ;

  public: class GALGAS_location readProperty_mLocation (void) const ;

  public: class GALGAS_templateInstructionListForGeneration readProperty_mBlockInstructionList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateBlockInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateBlockInstructionForGeneration constructor_new (const class GALGAS_semanticExpressionForGeneration & inOperand0,
                                                                                     const class GALGAS_location & inOperand1,
                                                                                     const class GALGAS_templateInstructionListForGeneration & inOperand2
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateBlockInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateBlockInstructionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateBlockInstructionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateBlockInstructionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_templateBlockInstructionForGeneration : public cPtr_templateInstructionForGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_semanticExpressionForGeneration mProperty_mExpression ;
  public: GALGAS_location mProperty_mLocation ;
  public: GALGAS_templateInstructionListForGeneration mProperty_mBlockInstructionList ;

//--- Constructor
  public: cPtr_templateBlockInstructionForGeneration (const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                      const GALGAS_location & in_mLocation,
                                                      const GALGAS_templateInstructionListForGeneration & in_mBlockInstructionList
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
// Phase 1: @templateBlockInstructionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateBlockInstructionForGeneration_2D_weak : public GALGAS_templateInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateBlockInstructionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateBlockInstructionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateBlockInstructionForGeneration_2D_weak (const class GALGAS_templateBlockInstructionForGeneration & inSource) ;

  public: GALGAS_templateBlockInstructionForGeneration_2D_weak & operator = (const class GALGAS_templateBlockInstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateBlockInstructionForGeneration bang_templateBlockInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateBlockInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateBlockInstructionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateBlockInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateBlockInstructionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateBlockInstructionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionGetColumnLocationForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionGetColumnLocationForGeneration : public GALGAS_templateInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionGetColumnLocationForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateInstructionGetColumnLocationForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_templateInstructionGetColumnLocationForGeneration (const class cPtr_templateInstructionGetColumnLocationForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionGetColumnLocationForGeneration extractObject (const GALGAS_object & inObject,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionGetColumnLocationForGeneration constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInstructionGetColumnLocationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionGetColumnLocationForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateInstructionGetColumnLocationForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_templateInstructionGetColumnLocationForGeneration : public cPtr_templateInstructionForGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties

//--- Constructor
  public: cPtr_templateInstructionGetColumnLocationForGeneration (LOCATION_ARGS) ;

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
// Phase 1: @templateInstructionGetColumnLocationForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak : public GALGAS_templateInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak (const class GALGAS_templateInstructionGetColumnLocationForGeneration & inSource) ;

  public: GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak & operator = (const class GALGAS_templateInstructionGetColumnLocationForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateInstructionGetColumnLocationForGeneration bang_templateInstructionGetColumnLocationForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionGotoColumnLocationForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionGotoColumnLocationForGeneration : public GALGAS_templateInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionGotoColumnLocationForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateInstructionGotoColumnLocationForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_templateInstructionGotoColumnLocationForGeneration (const class cPtr_templateInstructionGotoColumnLocationForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionGotoColumnLocationForGeneration extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionGotoColumnLocationForGeneration constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInstructionGotoColumnLocationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionGotoColumnLocationForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateInstructionGotoColumnLocationForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_templateInstructionGotoColumnLocationForGeneration : public cPtr_templateInstructionForGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties

//--- Constructor
  public: cPtr_templateInstructionGotoColumnLocationForGeneration (LOCATION_ARGS) ;

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
// Phase 1: @templateInstructionGotoColumnLocationForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionGotoColumnLocationForGeneration_2D_weak : public GALGAS_templateInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionGotoColumnLocationForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateInstructionGotoColumnLocationForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateInstructionGotoColumnLocationForGeneration_2D_weak (const class GALGAS_templateInstructionGotoColumnLocationForGeneration & inSource) ;

  public: GALGAS_templateInstructionGotoColumnLocationForGeneration_2D_weak & operator = (const class GALGAS_templateInstructionGotoColumnLocationForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateInstructionGotoColumnLocationForGeneration bang_templateInstructionGotoColumnLocationForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionGotoColumnLocationForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionGotoColumnLocationForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInstructionGotoColumnLocationForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionGotoColumnLocationForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionIfBranchListForGeneration list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionIfBranchListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionIfBranchListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_templateInstructionIfBranchListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                 const class GALGAS_templateInstructionListForGeneration & in_mInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionIfBranchListForGeneration extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionIfBranchListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_templateInstructionIfBranchListForGeneration constructor_listWithValue (const class GALGAS_semanticExpressionForGeneration & inOperand0,
                                                                                                      const class GALGAS_templateInstructionListForGeneration & inOperand1
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_templateInstructionIfBranchListForGeneration inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_semanticExpressionForGeneration & inOperand0,
                                                     const class GALGAS_templateInstructionListForGeneration & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_templateInstructionIfBranchListForGeneration add_operation (const GALGAS_templateInstructionIfBranchListForGeneration & inOperand,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_templateInstructionIfBranchListForGeneration_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_semanticExpressionForGeneration constinArgument0,
                                                      class GALGAS_templateInstructionListForGeneration constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_semanticExpressionForGeneration & outArgument0,
                                                 class GALGAS_templateInstructionListForGeneration & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_semanticExpressionForGeneration & outArgument0,
                                                class GALGAS_templateInstructionListForGeneration & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_semanticExpressionForGeneration & outArgument0,
                                                      class GALGAS_templateInstructionListForGeneration & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExpressionAtIndex (class GALGAS_semanticExpressionForGeneration constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GALGAS_templateInstructionListForGeneration constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_semanticExpressionForGeneration & outArgument0,
                                              class GALGAS_templateInstructionListForGeneration & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_semanticExpressionForGeneration & outArgument0,
                                             class GALGAS_templateInstructionListForGeneration & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mExpressionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListForGeneration getter_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateInstructionIfBranchListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateInstructionIfBranchListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateInstructionIfBranchListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_templateInstructionIfBranchListForGeneration ;
 
} ; // End of GALGAS_templateInstructionIfBranchListForGeneration class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_templateInstructionIfBranchListForGeneration : public cGenericAbstractEnumerator {
  public: cEnumerator_templateInstructionIfBranchListForGeneration (const GALGAS_templateInstructionIfBranchListForGeneration & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_semanticExpressionForGeneration current_mExpression (LOCATION_ARGS) const ;
  public: class GALGAS_templateInstructionListForGeneration current_mInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_templateInstructionIfBranchListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionIfBranchListForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionIfBranchListForGeneration_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionIfBranchListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_semanticExpressionForGeneration mProperty_mExpression ;
  public: inline GALGAS_semanticExpressionForGeneration readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

  public: GALGAS_templateInstructionListForGeneration mProperty_mInstructionList ;
  public: inline GALGAS_templateInstructionListForGeneration readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_templateInstructionIfBranchListForGeneration_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMExpression (const GALGAS_semanticExpressionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

  public: inline void setter_setMInstructionList (const GALGAS_templateInstructionListForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_templateInstructionIfBranchListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_templateInstructionIfBranchListForGeneration_2D_element (const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                                          const GALGAS_templateInstructionListForGeneration & in_mInstructionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionIfBranchListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionIfBranchListForGeneration_2D_element constructor_new (const class GALGAS_semanticExpressionForGeneration & inOperand0,
                                                                                                       const class GALGAS_templateInstructionListForGeneration & inOperand1
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInstructionIfBranchListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionIfBranchListForGeneration_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionIfBranchListForGeneration_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionIfForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionIfForGeneration : public GALGAS_templateInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionIfForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateInstructionIfForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_templateInstructionIfForGeneration (const class cPtr_templateInstructionIfForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_templateInstructionIfBranchListForGeneration readProperty_mTemplateInstructionIfBranchList (void) const ;

  public: class GALGAS_templateInstructionListForGeneration readProperty_mElseInstructionList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionIfForGeneration extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionIfForGeneration constructor_new (const class GALGAS_templateInstructionIfBranchListForGeneration & inOperand0,
                                                                                  const class GALGAS_templateInstructionListForGeneration & inOperand1
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInstructionIfForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionIfForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionIfForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateInstructionIfForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_templateInstructionIfForGeneration : public cPtr_templateInstructionForGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_templateInstructionIfBranchListForGeneration mProperty_mTemplateInstructionIfBranchList ;
  public: GALGAS_templateInstructionListForGeneration mProperty_mElseInstructionList ;

//--- Constructor
  public: cPtr_templateInstructionIfForGeneration (const GALGAS_templateInstructionIfBranchListForGeneration & in_mTemplateInstructionIfBranchList,
                                                   const GALGAS_templateInstructionListForGeneration & in_mElseInstructionList
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
// Phase 1: @templateInstructionIfForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionIfForGeneration_2D_weak : public GALGAS_templateInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionIfForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateInstructionIfForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateInstructionIfForGeneration_2D_weak (const class GALGAS_templateInstructionIfForGeneration & inSource) ;

  public: GALGAS_templateInstructionIfForGeneration_2D_weak & operator = (const class GALGAS_templateInstructionIfForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateInstructionIfForGeneration bang_templateInstructionIfForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionIfForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionIfForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInstructionIfForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionIfForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionIfForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateVariableMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_templateVariableMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_templateVariableMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateVariableMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_templateVariableMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_templateVariableMap (const GALGAS_templateVariableMap & inSource) ;
  public: GALGAS_templateVariableMap & operator = (const GALGAS_templateVariableMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateVariableMap extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateVariableMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_templateVariableMap constructor_mapWithMapToOverride (const class GALGAS_templateVariableMap & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_unifiedTypeMap_2D_entry & inOperand1,
                                                     const class GALGAS_string & inOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_unifiedTypeMap_2D_entry constinArgument1,
                                                  class GALGAS_string constinArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCppNameForKey (class GALGAS_string constinArgument0,
                                                          class GALGAS_string constinArgument1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeForKey (class GALGAS_unifiedTypeMap_2D_entry constinArgument0,
                                                       class GALGAS_string constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_unifiedTypeMap_2D_entry & outArgument1,
                                                  class GALGAS_string & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mCppNameForKey (const class GALGAS_string & constinOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mTypeForKey (const class GALGAS_string & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateVariableMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_unifiedTypeMap_2D_entry & outOperand1,
                                                    class GALGAS_string & outOperand2) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_templateVariableMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                const GALGAS_string & inKey
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_templateVariableMap ;
 
} ; // End of GALGAS_templateVariableMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_templateVariableMap : public cGenericAbstractEnumerator {
  public: cEnumerator_templateVariableMap (const GALGAS_templateVariableMap & inEnumeratedObject,
                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_unifiedTypeMap_2D_entry current_mType (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mCppName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_templateVariableMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateVariableMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@templateVariableMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_templateVariableMap : public cMapElement {
//--- Map attributes
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mType ;
  public: GALGAS_string mProperty_mCppName ;

//--- Constructor
  public: cMapElement_templateVariableMap (const GALGAS_lstring & inKey,
                                           const GALGAS_unifiedTypeMap_2D_entry & in_mType,
                                           const GALGAS_string & in_mCppName
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
// Phase 1: @templateVariableMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateVariableMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mType ;
  public: inline GALGAS_unifiedTypeMap_2D_entry readProperty_mType (void) const {
    return mProperty_mType ;
  }

  public: GALGAS_string mProperty_mCppName ;
  public: inline GALGAS_string readProperty_mCppName (void) const {
    return mProperty_mCppName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_templateVariableMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMType (const GALGAS_unifiedTypeMap_2D_entry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mType = inValue ;
  }

  public: inline void setter_setMCppName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCppName = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_templateVariableMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_templateVariableMap_2D_element (const GALGAS_lstring & in_lkey,
                                                 const GALGAS_unifiedTypeMap_2D_entry & in_mType,
                                                 const GALGAS_string & in_mCppName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateVariableMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateVariableMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_unifiedTypeMap_2D_entry & inOperand1,
                                                                              const class GALGAS_string & inOperand2
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateVariableMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateVariableMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateVariableMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @predefinedTypes struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_predefinedTypes : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mLocationType ;
  public: inline GALGAS_unifiedTypeMap_2D_entry readProperty_mLocationType (void) const {
    return mProperty_mLocationType ;
  }

  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mBoolType ;
  public: inline GALGAS_unifiedTypeMap_2D_entry readProperty_mBoolType (void) const {
    return mProperty_mBoolType ;
  }

  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mCharType ;
  public: inline GALGAS_unifiedTypeMap_2D_entry readProperty_mCharType (void) const {
    return mProperty_mCharType ;
  }

  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mStringType ;
  public: inline GALGAS_unifiedTypeMap_2D_entry readProperty_mStringType (void) const {
    return mProperty_mStringType ;
  }

  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mUIntType ;
  public: inline GALGAS_unifiedTypeMap_2D_entry readProperty_mUIntType (void) const {
    return mProperty_mUIntType ;
  }

  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mSIntType ;
  public: inline GALGAS_unifiedTypeMap_2D_entry readProperty_mSIntType (void) const {
    return mProperty_mSIntType ;
  }

  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mUInt_36__34_Type ;
  public: inline GALGAS_unifiedTypeMap_2D_entry readProperty_mUInt_36__34_Type (void) const {
    return mProperty_mUInt_36__34_Type ;
  }

  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mSInt_36__34_Type ;
  public: inline GALGAS_unifiedTypeMap_2D_entry readProperty_mSInt_36__34_Type (void) const {
    return mProperty_mSInt_36__34_Type ;
  }

  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mDoubleType ;
  public: inline GALGAS_unifiedTypeMap_2D_entry readProperty_mDoubleType (void) const {
    return mProperty_mDoubleType ;
  }

  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mLBoolType ;
  public: inline GALGAS_unifiedTypeMap_2D_entry readProperty_mLBoolType (void) const {
    return mProperty_mLBoolType ;
  }

  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mLCharType ;
  public: inline GALGAS_unifiedTypeMap_2D_entry readProperty_mLCharType (void) const {
    return mProperty_mLCharType ;
  }

  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mLStringType ;
  public: inline GALGAS_unifiedTypeMap_2D_entry readProperty_mLStringType (void) const {
    return mProperty_mLStringType ;
  }

  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mLUIntType ;
  public: inline GALGAS_unifiedTypeMap_2D_entry readProperty_mLUIntType (void) const {
    return mProperty_mLUIntType ;
  }

  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mLSIntType ;
  public: inline GALGAS_unifiedTypeMap_2D_entry readProperty_mLSIntType (void) const {
    return mProperty_mLSIntType ;
  }

  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mLUInt_36__34_Type ;
  public: inline GALGAS_unifiedTypeMap_2D_entry readProperty_mLUInt_36__34_Type (void) const {
    return mProperty_mLUInt_36__34_Type ;
  }

  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mLSInt_36__34_Type ;
  public: inline GALGAS_unifiedTypeMap_2D_entry readProperty_mLSInt_36__34_Type (void) const {
    return mProperty_mLSInt_36__34_Type ;
  }

  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mLDoubleType ;
  public: inline GALGAS_unifiedTypeMap_2D_entry readProperty_mLDoubleType (void) const {
    return mProperty_mLDoubleType ;
  }

  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mStringListType ;
  public: inline GALGAS_unifiedTypeMap_2D_entry readProperty_mStringListType (void) const {
    return mProperty_mStringListType ;
  }

  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mLBigIntType ;
  public: inline GALGAS_unifiedTypeMap_2D_entry readProperty_mLBigIntType (void) const {
    return mProperty_mLBigIntType ;
  }

  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mBigIntType ;
  public: inline GALGAS_unifiedTypeMap_2D_entry readProperty_mBigIntType (void) const {
    return mProperty_mBigIntType ;
  }

  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mStringSetType ;
  public: inline GALGAS_unifiedTypeMap_2D_entry readProperty_mStringSetType (void) const {
    return mProperty_mStringSetType ;
  }

  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mLStringListType ;
  public: inline GALGAS_unifiedTypeMap_2D_entry readProperty_mLStringListType (void) const {
    return mProperty_mLStringListType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_predefinedTypes (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLocationType (const GALGAS_unifiedTypeMap_2D_entry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLocationType = inValue ;
  }

  public: inline void setter_setMBoolType (const GALGAS_unifiedTypeMap_2D_entry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBoolType = inValue ;
  }

  public: inline void setter_setMCharType (const GALGAS_unifiedTypeMap_2D_entry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCharType = inValue ;
  }

  public: inline void setter_setMStringType (const GALGAS_unifiedTypeMap_2D_entry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStringType = inValue ;
  }

  public: inline void setter_setMUIntType (const GALGAS_unifiedTypeMap_2D_entry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUIntType = inValue ;
  }

  public: inline void setter_setMSIntType (const GALGAS_unifiedTypeMap_2D_entry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSIntType = inValue ;
  }

  public: inline void setter_setMUInt_36__34_Type (const GALGAS_unifiedTypeMap_2D_entry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUInt_36__34_Type = inValue ;
  }

  public: inline void setter_setMSInt_36__34_Type (const GALGAS_unifiedTypeMap_2D_entry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSInt_36__34_Type = inValue ;
  }

  public: inline void setter_setMDoubleType (const GALGAS_unifiedTypeMap_2D_entry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDoubleType = inValue ;
  }

  public: inline void setter_setMLBoolType (const GALGAS_unifiedTypeMap_2D_entry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLBoolType = inValue ;
  }

  public: inline void setter_setMLCharType (const GALGAS_unifiedTypeMap_2D_entry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLCharType = inValue ;
  }

  public: inline void setter_setMLStringType (const GALGAS_unifiedTypeMap_2D_entry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLStringType = inValue ;
  }

  public: inline void setter_setMLUIntType (const GALGAS_unifiedTypeMap_2D_entry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLUIntType = inValue ;
  }

  public: inline void setter_setMLSIntType (const GALGAS_unifiedTypeMap_2D_entry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLSIntType = inValue ;
  }

  public: inline void setter_setMLUInt_36__34_Type (const GALGAS_unifiedTypeMap_2D_entry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLUInt_36__34_Type = inValue ;
  }

  public: inline void setter_setMLSInt_36__34_Type (const GALGAS_unifiedTypeMap_2D_entry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLSInt_36__34_Type = inValue ;
  }

  public: inline void setter_setMLDoubleType (const GALGAS_unifiedTypeMap_2D_entry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLDoubleType = inValue ;
  }

  public: inline void setter_setMStringListType (const GALGAS_unifiedTypeMap_2D_entry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStringListType = inValue ;
  }

  public: inline void setter_setMLBigIntType (const GALGAS_unifiedTypeMap_2D_entry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLBigIntType = inValue ;
  }

  public: inline void setter_setMBigIntType (const GALGAS_unifiedTypeMap_2D_entry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBigIntType = inValue ;
  }

  public: inline void setter_setMStringSetType (const GALGAS_unifiedTypeMap_2D_entry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStringSetType = inValue ;
  }

  public: inline void setter_setMLStringListType (const GALGAS_unifiedTypeMap_2D_entry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLStringListType = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_predefinedTypes (void) ;

//--------------------------------- Native constructor
  public: GALGAS_predefinedTypes (const GALGAS_unifiedTypeMap_2D_entry & in_mLocationType,
                                  const GALGAS_unifiedTypeMap_2D_entry & in_mBoolType,
                                  const GALGAS_unifiedTypeMap_2D_entry & in_mCharType,
                                  const GALGAS_unifiedTypeMap_2D_entry & in_mStringType,
                                  const GALGAS_unifiedTypeMap_2D_entry & in_mUIntType,
                                  const GALGAS_unifiedTypeMap_2D_entry & in_mSIntType,
                                  const GALGAS_unifiedTypeMap_2D_entry & in_mUInt_36__34_Type,
                                  const GALGAS_unifiedTypeMap_2D_entry & in_mSInt_36__34_Type,
                                  const GALGAS_unifiedTypeMap_2D_entry & in_mDoubleType,
                                  const GALGAS_unifiedTypeMap_2D_entry & in_mLBoolType,
                                  const GALGAS_unifiedTypeMap_2D_entry & in_mLCharType,
                                  const GALGAS_unifiedTypeMap_2D_entry & in_mLStringType,
                                  const GALGAS_unifiedTypeMap_2D_entry & in_mLUIntType,
                                  const GALGAS_unifiedTypeMap_2D_entry & in_mLSIntType,
                                  const GALGAS_unifiedTypeMap_2D_entry & in_mLUInt_36__34_Type,
                                  const GALGAS_unifiedTypeMap_2D_entry & in_mLSInt_36__34_Type,
                                  const GALGAS_unifiedTypeMap_2D_entry & in_mLDoubleType,
                                  const GALGAS_unifiedTypeMap_2D_entry & in_mStringListType,
                                  const GALGAS_unifiedTypeMap_2D_entry & in_mLBigIntType,
                                  const GALGAS_unifiedTypeMap_2D_entry & in_mBigIntType,
                                  const GALGAS_unifiedTypeMap_2D_entry & in_mStringSetType,
                                  const GALGAS_unifiedTypeMap_2D_entry & in_mLStringListType) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_predefinedTypes extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_predefinedTypes constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                               const class GALGAS_unifiedTypeMap_2D_entry & inOperand1,
                                                               const class GALGAS_unifiedTypeMap_2D_entry & inOperand2,
                                                               const class GALGAS_unifiedTypeMap_2D_entry & inOperand3,
                                                               const class GALGAS_unifiedTypeMap_2D_entry & inOperand4,
                                                               const class GALGAS_unifiedTypeMap_2D_entry & inOperand5,
                                                               const class GALGAS_unifiedTypeMap_2D_entry & inOperand6,
                                                               const class GALGAS_unifiedTypeMap_2D_entry & inOperand7,
                                                               const class GALGAS_unifiedTypeMap_2D_entry & inOperand8,
                                                               const class GALGAS_unifiedTypeMap_2D_entry & inOperand9,
                                                               const class GALGAS_unifiedTypeMap_2D_entry & inOperand10,
                                                               const class GALGAS_unifiedTypeMap_2D_entry & inOperand11,
                                                               const class GALGAS_unifiedTypeMap_2D_entry & inOperand12,
                                                               const class GALGAS_unifiedTypeMap_2D_entry & inOperand13,
                                                               const class GALGAS_unifiedTypeMap_2D_entry & inOperand14,
                                                               const class GALGAS_unifiedTypeMap_2D_entry & inOperand15,
                                                               const class GALGAS_unifiedTypeMap_2D_entry & inOperand16,
                                                               const class GALGAS_unifiedTypeMap_2D_entry & inOperand17,
                                                               const class GALGAS_unifiedTypeMap_2D_entry & inOperand18,
                                                               const class GALGAS_unifiedTypeMap_2D_entry & inOperand19,
                                                               const class GALGAS_unifiedTypeMap_2D_entry & inOperand20,
                                                               const class GALGAS_unifiedTypeMap_2D_entry & inOperand21
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_predefinedTypes & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_predefinedTypes class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_predefinedTypes ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@templateExpressionAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_templateExpressionAST_templateExpressionAnalysis) (const class cPtr_templateExpressionAST * inObject,
                                                                                           const class GALGAS_lstring constinArgument0,
                                                                                           class GALGAS_usefulEntitiesGraph & ioArgument1,
                                                                                           const class GALGAS_templateAnalysisContext constinArgument2,
                                                                                           class GALGAS_semanticExpressionForGeneration & outArgument3,
                                                                                           class C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_templateExpressionAnalysis (const int32_t inClassIndex,
                                                      extensionMethodSignature_templateExpressionAST_templateExpressionAnalysis inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_templateExpressionAnalysis (const class cPtr_templateExpressionAST * inObject,
                                                     const GALGAS_lstring constin_inUsefulnessCallerEntityName,
                                                     GALGAS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                     const GALGAS_templateAnalysisContext constin_inAnalysisContext,
                                                     GALGAS_semanticExpressionForGeneration & out_outExpression,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @usefulEntitiesGraph graph
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_usefulEntitiesGraph : public AC_GALGAS_graph {
//--------------------------------- Default constructor
  public: GALGAS_usefulEntitiesGraph (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_usefulEntitiesGraph extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_usefulEntitiesGraph constructor_emptyGraph (LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_addNode (class GALGAS_lstring inArgument0,
                                                class GALGAS_lstring inArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_circularities (class GALGAS_lstringlist & outArgument0,
                                                      class GALGAS_lstringlist & outArgument1
                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_depthFirstTopologicalSort (class GALGAS_lstringlist & outArgument0,
                                                                  class GALGAS_lstringlist & outArgument1,
                                                                  class GALGAS_lstringlist & outArgument2,
                                                                  class GALGAS_lstringlist & outArgument3,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_nodesWithNoPredecessor (class GALGAS_lstringlist & outArgument0,
                                                               class GALGAS_lstringlist & outArgument1
                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_nodesWithNoSuccessor (class GALGAS_lstringlist & outArgument0,
                                                             class GALGAS_lstringlist & outArgument1
                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_topologicalSort (class GALGAS_lstringlist & outArgument0,
                                                        class GALGAS_lstringlist & outArgument1,
                                                        class GALGAS_lstringlist & outArgument2,
                                                        class GALGAS_lstringlist & outArgument3,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_accessibleNodesFrom (const class GALGAS_lstringlist & constinOperand0,
                                                                                const class GALGAS_stringset & constinOperand1,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_usefulEntitiesGraph getter_reversedGraph (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_usefulEntitiesGraph getter_subgraphFromNodes (const class GALGAS_lstringlist & constinOperand0,
                                                                                      const class GALGAS_stringset & constinOperand1,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_usefulEntitiesGraph class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_usefulEntitiesGraph ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @filewrapperMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_filewrapperMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_filewrapperMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_filewrapperMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_filewrapperMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_filewrapperMap (const GALGAS_filewrapperMap & inSource) ;
  public: GALGAS_filewrapperMap & operator = (const GALGAS_filewrapperMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_filewrapperMap extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_filewrapperMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_filewrapperMap constructor_mapWithMapToOverride (const class GALGAS_filewrapperMap & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_lstringlist & inOperand2,
                                                     const class GALGAS_wrapperFileMap & inOperand3,
                                                     const class GALGAS_wrapperDirectoryMap & inOperand4,
                                                     const class GALGAS_filewrapperTemplateMap & inOperand5,
                                                     const class GALGAS_bool & inOperand6,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lstring constinArgument1,
                                                  class GALGAS_lstringlist constinArgument2,
                                                  class GALGAS_wrapperFileMap constinArgument3,
                                                  class GALGAS_wrapperDirectoryMap constinArgument4,
                                                  class GALGAS_filewrapperTemplateMap constinArgument5,
                                                  class GALGAS_bool constinArgument6,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFilewrapperDirectoryMapForKey (class GALGAS_wrapperDirectoryMap constinArgument0,
                                                                          class GALGAS_string constinArgument1,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFilewrapperExtensionListForKey (class GALGAS_lstringlist constinArgument0,
                                                                           class GALGAS_string constinArgument1,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFilewrapperFileMapForKey (class GALGAS_wrapperFileMap constinArgument0,
                                                                     class GALGAS_string constinArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFilewrapperPathForKey (class GALGAS_lstring constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFilewrapperTemplateMapForKey (class GALGAS_filewrapperTemplateMap constinArgument0,
                                                                         class GALGAS_string constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsInternalForKey (class GALGAS_bool constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_lstringlist & outArgument2,
                                                  class GALGAS_wrapperFileMap & outArgument3,
                                                  class GALGAS_wrapperDirectoryMap & outArgument4,
                                                  class GALGAS_filewrapperTemplateMap & outArgument5,
                                                  class GALGAS_bool & outArgument6,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_wrapperDirectoryMap getter_mFilewrapperDirectoryMapForKey (const class GALGAS_string & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mFilewrapperExtensionListForKey (const class GALGAS_string & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_wrapperFileMap getter_mFilewrapperFileMapForKey (const class GALGAS_string & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFilewrapperPathForKey (const class GALGAS_string & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_filewrapperTemplateMap getter_mFilewrapperTemplateMapForKey (const class GALGAS_string & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsInternalForKey (const class GALGAS_string & constinOperand0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_filewrapperMap getter_overriddenMap (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_lstring & outOperand1,
                                                    class GALGAS_lstringlist & outOperand2,
                                                    class GALGAS_wrapperFileMap & outOperand3,
                                                    class GALGAS_wrapperDirectoryMap & outOperand4,
                                                    class GALGAS_filewrapperTemplateMap & outOperand5,
                                                    class GALGAS_bool & outOperand6) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_filewrapperMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                           const GALGAS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_filewrapperMap ;
 
} ; // End of GALGAS_filewrapperMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_filewrapperMap : public cGenericAbstractEnumerator {
  public: cEnumerator_filewrapperMap (const GALGAS_filewrapperMap & inEnumeratedObject,
                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mFilewrapperPath (LOCATION_ARGS) const ;
  public: class GALGAS_lstringlist current_mFilewrapperExtensionList (LOCATION_ARGS) const ;
  public: class GALGAS_wrapperFileMap current_mFilewrapperFileMap (LOCATION_ARGS) const ;
  public: class GALGAS_wrapperDirectoryMap current_mFilewrapperDirectoryMap (LOCATION_ARGS) const ;
  public: class GALGAS_filewrapperTemplateMap current_mFilewrapperTemplateMap (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mIsInternal (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_filewrapperMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @functionMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_functionMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_functionMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_functionMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_functionMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_functionMap (const GALGAS_functionMap & inSource) ;
  public: GALGAS_functionMap & operator = (const GALGAS_functionMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_functionMap extractObject (const GALGAS_object & inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_functionMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_functionMap constructor_mapWithMapToOverride (const class GALGAS_functionMap & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_functionSignature & inOperand1,
                                                     const class GALGAS_unifiedTypeMap_2D_entry & inOperand2,
                                                     const class GALGAS_bool & inOperand3,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_functionSignature constinArgument1,
                                                  class GALGAS_unifiedTypeMap_2D_entry constinArgument2,
                                                  class GALGAS_bool constinArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFunctionSignatureForKey (class GALGAS_functionSignature constinArgument0,
                                                                    class GALGAS_string constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsInternalForKey (class GALGAS_bool constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMResultTypeForKey (class GALGAS_unifiedTypeMap_2D_entry constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_functionSignature & outArgument1,
                                                  class GALGAS_unifiedTypeMap_2D_entry & outArgument2,
                                                  class GALGAS_bool & outArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_functionSignature getter_mFunctionSignatureForKey (const class GALGAS_string & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsInternalForKey (const class GALGAS_string & constinOperand0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mResultTypeForKey (const class GALGAS_string & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_functionMap getter_overriddenMap (C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_functionSignature & outOperand1,
                                                    class GALGAS_unifiedTypeMap_2D_entry & outOperand2,
                                                    class GALGAS_bool & outOperand3) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_functionMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                        const GALGAS_string & inKey
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_functionMap ;
 
} ; // End of GALGAS_functionMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_functionMap : public cGenericAbstractEnumerator {
  public: cEnumerator_functionMap (const GALGAS_functionMap & inEnumeratedObject,
                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_functionSignature current_mFunctionSignature (LOCATION_ARGS) const ;
  public: class GALGAS_unifiedTypeMap_2D_entry current_mResultType (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mIsInternal (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_functionMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_grammarMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_grammarMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_grammarMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_grammarMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_grammarMap (const GALGAS_grammarMap & inSource) ;
  public: GALGAS_grammarMap & operator = (const GALGAS_grammarMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_grammarMap extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_grammarMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_grammarMap constructor_mapWithMapToOverride (const class GALGAS_grammarMap & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_grammarLabelMap & inOperand1,
                                                     const class GALGAS_bool & inOperand2,
                                                     const class GALGAS_bool & inOperand3,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertGrammar (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_grammarLabelMap constinArgument1,
                                                      class GALGAS_bool constinArgument2,
                                                      class GALGAS_bool constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHasIndexingForKey (class GALGAS_bool constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHasTranslateFeatureForKey (class GALGAS_bool constinArgument0,
                                                                      class GALGAS_string constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLabelMapForKey (class GALGAS_grammarLabelMap constinArgument0,
                                                           class GALGAS_string constinArgument1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_grammarLabelMap & outArgument1,
                                                  class GALGAS_bool & outArgument2,
                                                  class GALGAS_bool & outArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasIndexingForKey (const class GALGAS_string & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasTranslateFeatureForKey (const class GALGAS_string & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_grammarLabelMap getter_mLabelMapForKey (const class GALGAS_string & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_grammarMap getter_overriddenMap (C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_grammarLabelMap & outOperand1,
                                                    class GALGAS_bool & outOperand2,
                                                    class GALGAS_bool & outOperand3) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_grammarMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_grammarMap ;
 
} ; // End of GALGAS_grammarMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_grammarMap : public cGenericAbstractEnumerator {
  public: cEnumerator_grammarMap (const GALGAS_grammarMap & inEnumeratedObject,
                                  const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_grammarLabelMap current_mLabelMap (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mHasIndexing (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mHasTranslateFeature (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_grammarMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexiqueComponentMapForSemanticAnalysis map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_lexiqueComponentMapForSemanticAnalysis ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_lexiqueComponentMapForSemanticAnalysis_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexiqueComponentMapForSemanticAnalysis : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_lexiqueComponentMapForSemanticAnalysis (void) ;

//--------------------------------- Handle copy
  public: GALGAS_lexiqueComponentMapForSemanticAnalysis (const GALGAS_lexiqueComponentMapForSemanticAnalysis & inSource) ;
  public: GALGAS_lexiqueComponentMapForSemanticAnalysis & operator = (const GALGAS_lexiqueComponentMapForSemanticAnalysis & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexiqueComponentMapForSemanticAnalysis extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexiqueComponentMapForSemanticAnalysis constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_lexiqueComponentMapForSemanticAnalysis constructor_mapWithMapToOverride (const class GALGAS_lexiqueComponentMapForSemanticAnalysis & inOperand0
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_terminalMap & inOperand1,
                                                     const class GALGAS_indexingListAST & inOperand2,
                                                     const class GALGAS_lstring & inOperand3,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_terminalMap constinArgument1,
                                                  class GALGAS_indexingListAST constinArgument2,
                                                  class GALGAS_lstring constinArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIndexingDirectoryForKey (class GALGAS_lstring constinArgument0,
                                                                    class GALGAS_string constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIndexingListASTForKey (class GALGAS_indexingListAST constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTerminalMapForKey (class GALGAS_terminalMap constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_terminalMap & outArgument1,
                                                  class GALGAS_indexingListAST & outArgument2,
                                                  class GALGAS_lstring & outArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mIndexingDirectoryForKey (const class GALGAS_string & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_indexingListAST getter_mIndexingListASTForKey (const class GALGAS_string & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_terminalMap getter_mTerminalMapForKey (const class GALGAS_string & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexiqueComponentMapForSemanticAnalysis getter_overriddenMap (C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_terminalMap & outOperand1,
                                                    class GALGAS_indexingListAST & outOperand2,
                                                    class GALGAS_lstring & outOperand3) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_lexiqueComponentMapForSemanticAnalysis * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                   const GALGAS_string & inKey
                                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_lexiqueComponentMapForSemanticAnalysis ;
 
} ; // End of GALGAS_lexiqueComponentMapForSemanticAnalysis class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_lexiqueComponentMapForSemanticAnalysis : public cGenericAbstractEnumerator {
  public: cEnumerator_lexiqueComponentMapForSemanticAnalysis (const GALGAS_lexiqueComponentMapForSemanticAnalysis & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_terminalMap current_mTerminalMap (LOCATION_ARGS) const ;
  public: class GALGAS_indexingListAST current_mIndexingListAST (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mIndexingDirectory (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueComponentMapForSemanticAnalysis ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @optionComponentMapForSemanticAnalysis map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_optionComponentMapForSemanticAnalysis ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_optionComponentMapForSemanticAnalysis_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_optionComponentMapForSemanticAnalysis : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_optionComponentMapForSemanticAnalysis (void) ;

//--------------------------------- Handle copy
  public: GALGAS_optionComponentMapForSemanticAnalysis (const GALGAS_optionComponentMapForSemanticAnalysis & inSource) ;
  public: GALGAS_optionComponentMapForSemanticAnalysis & operator = (const GALGAS_optionComponentMapForSemanticAnalysis & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_optionComponentMapForSemanticAnalysis extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_optionComponentMapForSemanticAnalysis constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_optionComponentMapForSemanticAnalysis constructor_mapWithMapToOverride (const class GALGAS_optionComponentMapForSemanticAnalysis & inOperand0
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_bool & inOperand1,
                                                     const class GALGAS_commandLineOptionMap & inOperand2,
                                                     const class GALGAS_commandLineOptionMap & inOperand3,
                                                     const class GALGAS_commandLineOptionMap & inOperand4,
                                                     const class GALGAS_commandLineOptionMap & inOperand5,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_bool constinArgument1,
                                                  class GALGAS_commandLineOptionMap constinArgument2,
                                                  class GALGAS_commandLineOptionMap constinArgument3,
                                                  class GALGAS_commandLineOptionMap constinArgument4,
                                                  class GALGAS_commandLineOptionMap constinArgument5,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBoolOptionMapForKey (class GALGAS_commandLineOptionMap constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsPredefinedForKey (class GALGAS_bool constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStringListOptionMapForKey (class GALGAS_commandLineOptionMap constinArgument0,
                                                                      class GALGAS_string constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStringOptionMapForKey (class GALGAS_commandLineOptionMap constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMUIntOptionMapForKey (class GALGAS_commandLineOptionMap constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_bool & outArgument1,
                                                  class GALGAS_commandLineOptionMap & outArgument2,
                                                  class GALGAS_commandLineOptionMap & outArgument3,
                                                  class GALGAS_commandLineOptionMap & outArgument4,
                                                  class GALGAS_commandLineOptionMap & outArgument5,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_commandLineOptionMap getter_mBoolOptionMapForKey (const class GALGAS_string & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsPredefinedForKey (const class GALGAS_string & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_commandLineOptionMap getter_mStringListOptionMapForKey (const class GALGAS_string & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_commandLineOptionMap getter_mStringOptionMapForKey (const class GALGAS_string & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_commandLineOptionMap getter_mUIntOptionMapForKey (const class GALGAS_string & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_optionComponentMapForSemanticAnalysis getter_overriddenMap (C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_bool & outOperand1,
                                                    class GALGAS_commandLineOptionMap & outOperand2,
                                                    class GALGAS_commandLineOptionMap & outOperand3,
                                                    class GALGAS_commandLineOptionMap & outOperand4,
                                                    class GALGAS_commandLineOptionMap & outOperand5) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_optionComponentMapForSemanticAnalysis * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                  const GALGAS_string & inKey
                                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_optionComponentMapForSemanticAnalysis ;
 
} ; // End of GALGAS_optionComponentMapForSemanticAnalysis class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_optionComponentMapForSemanticAnalysis : public cGenericAbstractEnumerator {
  public: cEnumerator_optionComponentMapForSemanticAnalysis (const GALGAS_optionComponentMapForSemanticAnalysis & inEnumeratedObject,
                                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mIsPredefined (LOCATION_ARGS) const ;
  public: class GALGAS_commandLineOptionMap current_mBoolOptionMap (LOCATION_ARGS) const ;
  public: class GALGAS_commandLineOptionMap current_mUIntOptionMap (LOCATION_ARGS) const ;
  public: class GALGAS_commandLineOptionMap current_mStringOptionMap (LOCATION_ARGS) const ;
  public: class GALGAS_commandLineOptionMap current_mStringListOptionMap (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_optionComponentMapForSemanticAnalysis_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionComponentMapForSemanticAnalysis ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @routineMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_routineMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_routineMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_routineMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_routineMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_routineMap (const GALGAS_routineMap & inSource) ;
  public: GALGAS_routineMap & operator = (const GALGAS_routineMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_routineMap extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_routineMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_routineMap constructor_mapWithMapToOverride (const class GALGAS_routineMap & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_formalParameterSignature & inOperand1,
                                                     const class GALGAS_bool & inOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_formalParameterSignature constinArgument1,
                                                  class GALGAS_bool constinArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsInternalForKey (class GALGAS_bool constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRoutineSignatureForKey (class GALGAS_formalParameterSignature constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_formalParameterSignature & outArgument1,
                                                  class GALGAS_bool & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsInternalForKey (const class GALGAS_string & constinOperand0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterSignature getter_mRoutineSignatureForKey (const class GALGAS_string & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_routineMap getter_overriddenMap (C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_formalParameterSignature & outOperand1,
                                                    class GALGAS_bool & outOperand2) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_routineMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_routineMap ;
 
} ; // End of GALGAS_routineMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_routineMap : public cGenericAbstractEnumerator {
  public: cEnumerator_routineMap (const GALGAS_routineMap & inEnumeratedObject,
                                  const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_formalParameterSignature current_mRoutineSignature (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mIsInternal (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_routineMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxComponentMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_syntaxComponentMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_syntaxComponentMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_syntaxComponentMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_syntaxComponentMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_syntaxComponentMap (const GALGAS_syntaxComponentMap & inSource) ;
  public: GALGAS_syntaxComponentMap & operator = (const GALGAS_syntaxComponentMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_syntaxComponentMap extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_syntaxComponentMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_syntaxComponentMap constructor_mapWithMapToOverride (const class GALGAS_syntaxComponentMap & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_nonterminalDeclarationListAST & inOperand2,
                                                     const class GALGAS_syntaxRuleListAST & inOperand3,
                                                     const class GALGAS_bool & inOperand4,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lstring constinArgument1,
                                                  class GALGAS_nonterminalDeclarationListAST constinArgument2,
                                                  class GALGAS_syntaxRuleListAST constinArgument3,
                                                  class GALGAS_bool constinArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHasTranslateFeatureForKey (class GALGAS_bool constinArgument0,
                                                                      class GALGAS_string constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLexiqueNameForKey (class GALGAS_lstring constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNonterminalDeclarationListForKey (class GALGAS_nonterminalDeclarationListAST constinArgument0,
                                                                             class GALGAS_string constinArgument1,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRuleListForKey (class GALGAS_syntaxRuleListAST constinArgument0,
                                                           class GALGAS_string constinArgument1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_nonterminalDeclarationListAST & outArgument2,
                                                  class GALGAS_syntaxRuleListAST & outArgument3,
                                                  class GALGAS_bool & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasTranslateFeatureForKey (const class GALGAS_string & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLexiqueNameForKey (const class GALGAS_string & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_nonterminalDeclarationListAST getter_mNonterminalDeclarationListForKey (const class GALGAS_string & constinOperand0,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxRuleListAST getter_mRuleListForKey (const class GALGAS_string & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxComponentMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_lstring & outOperand1,
                                                    class GALGAS_nonterminalDeclarationListAST & outOperand2,
                                                    class GALGAS_syntaxRuleListAST & outOperand3,
                                                    class GALGAS_bool & outOperand4) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_syntaxComponentMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_syntaxComponentMap ;
 
} ; // End of GALGAS_syntaxComponentMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_syntaxComponentMap : public cGenericAbstractEnumerator {
  public: cEnumerator_syntaxComponentMap (const GALGAS_syntaxComponentMap & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mLexiqueName (LOCATION_ARGS) const ;
  public: class GALGAS_nonterminalDeclarationListAST current_mNonterminalDeclarationList (LOCATION_ARGS) const ;
  public: class GALGAS_syntaxRuleListAST current_mRuleList (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mHasTranslateFeature (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_syntaxComponentMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxComponentMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @unifiedTypeMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_unifiedTypeMap ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_unifiedTypeMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_unifiedTypeMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_unifiedTypeMap (const GALGAS_unifiedTypeMap & inSource) ;
  public: GALGAS_unifiedTypeMap & operator = (const GALGAS_unifiedTypeMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_unifiedTypeMap extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_unifiedTypeMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_unifiedTypeMap constructor_mapWithMapToOverride (const class GALGAS_unifiedTypeMap & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_unifiedTypeMapElementClass & inOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_internalInsertKey (class GALGAS_lstring constinArgument0,
                                                          class GALGAS_unifiedTypeMapElementClass constinArgument1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMElementForKey (class GALGAS_unifiedTypeMapElementClass constinArgument0,
                                                          class GALGAS_string constinArgument1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapElementClass getter_mElementForKey (const class GALGAS_string & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap getter_overriddenMap (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_unifiedTypeMapElementClass & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_unifiedTypeMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                           const GALGAS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_unifiedTypeMap ;
 
} ; // End of GALGAS_unifiedTypeMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_unifiedTypeMap : public cGenericAbstractEnumerator {
  public: cEnumerator_unifiedTypeMap (const GALGAS_unifiedTypeMap & inEnumeratedObject,
                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_unifiedTypeMapElementClass current_mElement (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_unifiedTypeMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticContext struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_semanticContext : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_unifiedTypeMap mProperty_mTypeMap ;
  public: inline GALGAS_unifiedTypeMap readProperty_mTypeMap (void) const {
    return mProperty_mTypeMap ;
  }

  public: GALGAS_routineMap mProperty_mRoutineMap ;
  public: inline GALGAS_routineMap readProperty_mRoutineMap (void) const {
    return mProperty_mRoutineMap ;
  }

  public: GALGAS_functionMap mProperty_mFunctionMap ;
  public: inline GALGAS_functionMap readProperty_mFunctionMap (void) const {
    return mProperty_mFunctionMap ;
  }

  public: GALGAS_filewrapperMap mProperty_mFilewrapperMap ;
  public: inline GALGAS_filewrapperMap readProperty_mFilewrapperMap (void) const {
    return mProperty_mFilewrapperMap ;
  }

  public: GALGAS_grammarMap mProperty_mGrammarMap ;
  public: inline GALGAS_grammarMap readProperty_mGrammarMap (void) const {
    return mProperty_mGrammarMap ;
  }

  public: GALGAS_optionComponentMapForSemanticAnalysis mProperty_mOptionComponentMapForSemanticAnalysis ;
  public: inline GALGAS_optionComponentMapForSemanticAnalysis readProperty_mOptionComponentMapForSemanticAnalysis (void) const {
    return mProperty_mOptionComponentMapForSemanticAnalysis ;
  }

  public: GALGAS_lexiqueComponentMapForSemanticAnalysis mProperty_mLexiqueComponentMapForSemanticAnalysis ;
  public: inline GALGAS_lexiqueComponentMapForSemanticAnalysis readProperty_mLexiqueComponentMapForSemanticAnalysis (void) const {
    return mProperty_mLexiqueComponentMapForSemanticAnalysis ;
  }

  public: GALGAS_syntaxComponentMap mProperty_mSyntaxComponentMapForSemanticAnalysis ;
  public: inline GALGAS_syntaxComponentMap readProperty_mSyntaxComponentMapForSemanticAnalysis (void) const {
    return mProperty_mSyntaxComponentMapForSemanticAnalysis ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_semanticContext constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_semanticContext (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTypeMap (const GALGAS_unifiedTypeMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTypeMap = inValue ;
  }

  public: inline void setter_setMRoutineMap (const GALGAS_routineMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutineMap = inValue ;
  }

  public: inline void setter_setMFunctionMap (const GALGAS_functionMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFunctionMap = inValue ;
  }

  public: inline void setter_setMFilewrapperMap (const GALGAS_filewrapperMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFilewrapperMap = inValue ;
  }

  public: inline void setter_setMGrammarMap (const GALGAS_grammarMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGrammarMap = inValue ;
  }

  public: inline void setter_setMOptionComponentMapForSemanticAnalysis (const GALGAS_optionComponentMapForSemanticAnalysis & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionComponentMapForSemanticAnalysis = inValue ;
  }

  public: inline void setter_setMLexiqueComponentMapForSemanticAnalysis (const GALGAS_lexiqueComponentMapForSemanticAnalysis & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexiqueComponentMapForSemanticAnalysis = inValue ;
  }

  public: inline void setter_setMSyntaxComponentMapForSemanticAnalysis (const GALGAS_syntaxComponentMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxComponentMapForSemanticAnalysis = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_semanticContext (void) ;

//--------------------------------- Native constructor
  public: GALGAS_semanticContext (const GALGAS_unifiedTypeMap & in_mTypeMap,
                                  const GALGAS_routineMap & in_mRoutineMap,
                                  const GALGAS_functionMap & in_mFunctionMap,
                                  const GALGAS_filewrapperMap & in_mFilewrapperMap,
                                  const GALGAS_grammarMap & in_mGrammarMap,
                                  const GALGAS_optionComponentMapForSemanticAnalysis & in_mOptionComponentMapForSemanticAnalysis,
                                  const GALGAS_lexiqueComponentMapForSemanticAnalysis & in_mLexiqueComponentMapForSemanticAnalysis,
                                  const GALGAS_syntaxComponentMap & in_mSyntaxComponentMapForSemanticAnalysis) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_semanticContext extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_semanticContext constructor_new (const class GALGAS_unifiedTypeMap & inOperand0,
                                                               const class GALGAS_routineMap & inOperand1,
                                                               const class GALGAS_functionMap & inOperand2,
                                                               const class GALGAS_filewrapperMap & inOperand3,
                                                               const class GALGAS_grammarMap & inOperand4,
                                                               const class GALGAS_optionComponentMapForSemanticAnalysis & inOperand5,
                                                               const class GALGAS_lexiqueComponentMapForSemanticAnalysis & inOperand6,
                                                               const class GALGAS_syntaxComponentMap & inOperand7
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_semanticContext & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_semanticContext class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticContext ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateAnalysisContext struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateAnalysisContext : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_semanticContext mProperty_mSemanticContext ;
  public: inline GALGAS_semanticContext readProperty_mSemanticContext (void) const {
    return mProperty_mSemanticContext ;
  }

  public: GALGAS_predefinedTypes mProperty_mPredefinedTypes ;
  public: inline GALGAS_predefinedTypes readProperty_mPredefinedTypes (void) const {
    return mProperty_mPredefinedTypes ;
  }

  public: GALGAS_templateVariableMap mProperty_mTemplateVariableMap ;
  public: inline GALGAS_templateVariableMap readProperty_mTemplateVariableMap (void) const {
    return mProperty_mTemplateVariableMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_templateAnalysisContext (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSemanticContext (const GALGAS_semanticContext & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSemanticContext = inValue ;
  }

  public: inline void setter_setMPredefinedTypes (const GALGAS_predefinedTypes & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPredefinedTypes = inValue ;
  }

  public: inline void setter_setMTemplateVariableMap (const GALGAS_templateVariableMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTemplateVariableMap = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_templateAnalysisContext (void) ;

//--------------------------------- Native constructor
  public: GALGAS_templateAnalysisContext (const GALGAS_semanticContext & in_mSemanticContext,
                                          const GALGAS_predefinedTypes & in_mPredefinedTypes,
                                          const GALGAS_templateVariableMap & in_mTemplateVariableMap) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateAnalysisContext extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateAnalysisContext constructor_new (const class GALGAS_semanticContext & inOperand0,
                                                                       const class GALGAS_predefinedTypes & inOperand1,
                                                                       const class GALGAS_templateVariableMap & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateAnalysisContext & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateAnalysisContext class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateAnalysisContext ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateGetterCallInExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateGetterCallInExpressionAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateGetterCallInExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateGetterCallInExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateGetterCallInExpressionAST_2D_weak (const class GALGAS_templateGetterCallInExpressionAST & inSource) ;

  public: GALGAS_templateGetterCallInExpressionAST_2D_weak & operator = (const class GALGAS_templateGetterCallInExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateGetterCallInExpressionAST bang_templateGetterCallInExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateGetterCallInExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateGetterCallInExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateGetterCallInExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateGetterCallInExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateGetterCallInExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@templateInstructionAST templateInstructionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_templateInstructionAST_templateInstructionAnalysis) (const class cPtr_templateInstructionAST * inObject,
                                                                                             const class GALGAS_lstring constinArgument0,
                                                                                             class GALGAS_usefulEntitiesGraph & ioArgument1,
                                                                                             const class GALGAS_templateAnalysisContext constinArgument2,
                                                                                             class GALGAS_templateInstructionListForGeneration & ioArgument3,
                                                                                             class C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_templateInstructionAnalysis (const int32_t inClassIndex,
                                                       extensionMethodSignature_templateInstructionAST_templateInstructionAnalysis inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_templateInstructionAnalysis (const class cPtr_templateInstructionAST * inObject,
                                                      const GALGAS_lstring constin_inUsefulnessCallerEntityName,
                                                      GALGAS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                      const GALGAS_templateAnalysisContext constin_inAnalysisContext,
                                                      GALGAS_templateInstructionListForGeneration & io_ioInstructionList,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@templateInstructionForGeneration templateCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_templateInstructionForGeneration_templateCodeGeneration) (const class cPtr_templateInstructionForGeneration * inObject,
                                                                                                  class GALGAS_string & ioArgument0,
                                                                                                  class GALGAS_stringset & ioArgument1,
                                                                                                  class GALGAS_uint & ioArgument2,
                                                                                                  class GALGAS_stringset & ioArgument3,
                                                                                                  class GALGAS_bool & ioArgument4,
                                                                                                  class C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_templateCodeGeneration (const int32_t inClassIndex,
                                                  extensionMethodSignature_templateInstructionForGeneration_templateCodeGeneration inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_templateCodeGeneration (const class cPtr_templateInstructionForGeneration * inObject,
                                                 GALGAS_string & io_ioGeneratedCode,
                                                 GALGAS_stringset & io_ioInclusionSet,
                                                 GALGAS_uint & io_ioTemporaryVariableIndex,
                                                 GALGAS_stringset & io_ioUnusedVariableCppNameSet,
                                                 GALGAS_bool & io_ioUseColumnMarker,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionForeachAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionForeachAST_2D_weak : public GALGAS_templateInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionForeachAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateInstructionForeachAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateInstructionForeachAST_2D_weak (const class GALGAS_templateInstructionForeachAST & inSource) ;

  public: GALGAS_templateInstructionForeachAST_2D_weak & operator = (const class GALGAS_templateInstructionForeachAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateInstructionForeachAST bang_templateInstructionForeachAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionForeachAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionForeachAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInstructionForeachAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionForeachAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionForeachAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionForeachForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionForeachForGeneration : public GALGAS_templateInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionForeachForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_templateInstructionForeachForGeneration (const class cPtr_templateInstructionForeachForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_mIsAscending (void) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_mExpression (void) const ;

  public: class GALGAS_string readProperty_mEnumeratorCppName (void) const ;

  public: class GALGAS_templateInstructionListForGeneration readProperty_mBeforeInstructionList (void) const ;

  public: class GALGAS_templateInstructionListForGeneration readProperty_mDoInstructionList (void) const ;

  public: class GALGAS_string readProperty_mIndexCppName (void) const ;

  public: class GALGAS_templateInstructionListForGeneration readProperty_mBetweenInstructionList (void) const ;

  public: class GALGAS_templateInstructionListForGeneration readProperty_mAfterInstructionList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionForeachForGeneration extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionForeachForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                                                       const class GALGAS_semanticExpressionForGeneration & inOperand1,
                                                                                       const class GALGAS_string & inOperand2,
                                                                                       const class GALGAS_templateInstructionListForGeneration & inOperand3,
                                                                                       const class GALGAS_templateInstructionListForGeneration & inOperand4,
                                                                                       const class GALGAS_string & inOperand5,
                                                                                       const class GALGAS_templateInstructionListForGeneration & inOperand6,
                                                                                       const class GALGAS_templateInstructionListForGeneration & inOperand7
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInstructionForeachForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionForeachForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionForeachForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateInstructionForeachForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_templateInstructionForeachForGeneration : public cPtr_templateInstructionForGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_bool mProperty_mIsAscending ;
  public: GALGAS_semanticExpressionForGeneration mProperty_mExpression ;
  public: GALGAS_string mProperty_mEnumeratorCppName ;
  public: GALGAS_templateInstructionListForGeneration mProperty_mBeforeInstructionList ;
  public: GALGAS_templateInstructionListForGeneration mProperty_mDoInstructionList ;
  public: GALGAS_string mProperty_mIndexCppName ;
  public: GALGAS_templateInstructionListForGeneration mProperty_mBetweenInstructionList ;
  public: GALGAS_templateInstructionListForGeneration mProperty_mAfterInstructionList ;

//--- Constructor
  public: cPtr_templateInstructionForeachForGeneration (const GALGAS_bool & in_mIsAscending,
                                                        const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                        const GALGAS_string & in_mEnumeratorCppName,
                                                        const GALGAS_templateInstructionListForGeneration & in_mBeforeInstructionList,
                                                        const GALGAS_templateInstructionListForGeneration & in_mDoInstructionList,
                                                        const GALGAS_string & in_mIndexCppName,
                                                        const GALGAS_templateInstructionListForGeneration & in_mBetweenInstructionList,
                                                        const GALGAS_templateInstructionListForGeneration & in_mAfterInstructionList
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
// Phase 1: @templateInstructionForeachForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionForeachForGeneration_2D_weak : public GALGAS_templateInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionForeachForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateInstructionForeachForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateInstructionForeachForGeneration_2D_weak (const class GALGAS_templateInstructionForeachForGeneration & inSource) ;

  public: GALGAS_templateInstructionForeachForGeneration_2D_weak & operator = (const class GALGAS_templateInstructionForeachForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateInstructionForeachForGeneration bang_templateInstructionForeachForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionForeachForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionForeachForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInstructionForeachForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionForeachForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionForeachForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionSwitchBranchListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionSwitchBranchListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstringlist mProperty_mConstantList ;
  public: inline GALGAS_lstringlist readProperty_mConstantList (void) const {
    return mProperty_mConstantList ;
  }

  public: GALGAS_switchExtractedValuesListAST mProperty_mAssociatedValuesExtraction ;
  public: inline GALGAS_switchExtractedValuesListAST readProperty_mAssociatedValuesExtraction (void) const {
    return mProperty_mAssociatedValuesExtraction ;
  }

  public: GALGAS_templateInstructionListAST mProperty_mInstructionList ;
  public: inline GALGAS_templateInstructionListAST readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

  public: GALGAS_location mProperty_mEndOfBranch ;
  public: inline GALGAS_location readProperty_mEndOfBranch (void) const {
    return mProperty_mEndOfBranch ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateInstructionSwitchBranchListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_templateInstructionSwitchBranchListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMConstantList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConstantList = inValue ;
  }

  public: inline void setter_setMAssociatedValuesExtraction (const GALGAS_switchExtractedValuesListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAssociatedValuesExtraction = inValue ;
  }

  public: inline void setter_setMInstructionList (const GALGAS_templateInstructionListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

  public: inline void setter_setMEndOfBranch (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfBranch = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_templateInstructionSwitchBranchListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_templateInstructionSwitchBranchListAST_2D_element (const GALGAS_lstringlist & in_mConstantList,
                                                                    const GALGAS_switchExtractedValuesListAST & in_mAssociatedValuesExtraction,
                                                                    const GALGAS_templateInstructionListAST & in_mInstructionList,
                                                                    const GALGAS_location & in_mEndOfBranch) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionSwitchBranchListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionSwitchBranchListAST_2D_element constructor_new (const class GALGAS_lstringlist & inOperand0,
                                                                                                 const class GALGAS_switchExtractedValuesListAST & inOperand1,
                                                                                                 const class GALGAS_templateInstructionListAST & inOperand2,
                                                                                                 const class GALGAS_location & inOperand3
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInstructionSwitchBranchListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionSwitchBranchListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @switchExtractedValuesListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_switchExtractedValuesListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mExtractedValueTypeName ;
  public: inline GALGAS_lstring readProperty_mExtractedValueTypeName (void) const {
    return mProperty_mExtractedValueTypeName ;
  }

  public: GALGAS_lstring mProperty_mExtractedValueName ;
  public: inline GALGAS_lstring readProperty_mExtractedValueName (void) const {
    return mProperty_mExtractedValueName ;
  }

  public: GALGAS_bool mProperty_mMarkedAsUnused ;
  public: inline GALGAS_bool readProperty_mMarkedAsUnused (void) const {
    return mProperty_mMarkedAsUnused ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_switchExtractedValuesListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_switchExtractedValuesListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMExtractedValueTypeName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExtractedValueTypeName = inValue ;
  }

  public: inline void setter_setMExtractedValueName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExtractedValueName = inValue ;
  }

  public: inline void setter_setMMarkedAsUnused (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMarkedAsUnused = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_switchExtractedValuesListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_switchExtractedValuesListAST_2D_element (const GALGAS_lstring & in_mExtractedValueTypeName,
                                                          const GALGAS_lstring & in_mExtractedValueName,
                                                          const GALGAS_bool & in_mMarkedAsUnused) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_switchExtractedValuesListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_switchExtractedValuesListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_lstring & inOperand1,
                                                                                       const class GALGAS_bool & inOperand2
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_switchExtractedValuesListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_switchExtractedValuesListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchExtractedValuesListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionSwitchAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionSwitchAST_2D_weak : public GALGAS_templateInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionSwitchAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateInstructionSwitchAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateInstructionSwitchAST_2D_weak (const class GALGAS_templateInstructionSwitchAST & inSource) ;

  public: GALGAS_templateInstructionSwitchAST_2D_weak & operator = (const class GALGAS_templateInstructionSwitchAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateInstructionSwitchAST bang_templateInstructionSwitchAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionSwitchAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionSwitchAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInstructionSwitchAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionSwitchAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionSwitchAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionSwitchBranchListForGeneration list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionSwitchBranchListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionSwitchBranchListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_templateInstructionSwitchBranchListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstringlist & in_mConstantList,
                                                 const class GALGAS_extractedAssociatedValuesForGeneration & in_mExtractedAssociatedValuesForGeneration,
                                                 const class GALGAS_uint & in_mEndOfBranchLocationIndex,
                                                 const class GALGAS_templateInstructionListForGeneration & in_mInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionSwitchBranchListForGeneration extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionSwitchBranchListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_templateInstructionSwitchBranchListForGeneration constructor_listWithValue (const class GALGAS_lstringlist & inOperand0,
                                                                                                          const class GALGAS_extractedAssociatedValuesForGeneration & inOperand1,
                                                                                                          const class GALGAS_uint & inOperand2,
                                                                                                          const class GALGAS_templateInstructionListForGeneration & inOperand3
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_templateInstructionSwitchBranchListForGeneration inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstringlist & inOperand0,
                                                     const class GALGAS_extractedAssociatedValuesForGeneration & inOperand1,
                                                     const class GALGAS_uint & inOperand2,
                                                     const class GALGAS_templateInstructionListForGeneration & inOperand3
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_templateInstructionSwitchBranchListForGeneration add_operation (const GALGAS_templateInstructionSwitchBranchListForGeneration & inOperand,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstringlist constinArgument0,
                                                      class GALGAS_extractedAssociatedValuesForGeneration constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      class GALGAS_templateInstructionListForGeneration constinArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstringlist & outArgument0,
                                                 class GALGAS_extractedAssociatedValuesForGeneration & outArgument1,
                                                 class GALGAS_uint & outArgument2,
                                                 class GALGAS_templateInstructionListForGeneration & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstringlist & outArgument0,
                                                class GALGAS_extractedAssociatedValuesForGeneration & outArgument1,
                                                class GALGAS_uint & outArgument2,
                                                class GALGAS_templateInstructionListForGeneration & outArgument3,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstringlist & outArgument0,
                                                      class GALGAS_extractedAssociatedValuesForGeneration & outArgument1,
                                                      class GALGAS_uint & outArgument2,
                                                      class GALGAS_templateInstructionListForGeneration & outArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMConstantListAtIndex (class GALGAS_lstringlist constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfBranchLocationIndexAtIndex (class GALGAS_uint constinArgument0,
                                                                            class GALGAS_uint constinArgument1,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExtractedAssociatedValuesForGenerationAtIndex (class GALGAS_extractedAssociatedValuesForGeneration constinArgument0,
                                                                                          class GALGAS_uint constinArgument1,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GALGAS_templateInstructionListForGeneration constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstringlist & outArgument0,
                                              class GALGAS_extractedAssociatedValuesForGeneration & outArgument1,
                                              class GALGAS_uint & outArgument2,
                                              class GALGAS_templateInstructionListForGeneration & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstringlist & outArgument0,
                                             class GALGAS_extractedAssociatedValuesForGeneration & outArgument1,
                                             class GALGAS_uint & outArgument2,
                                             class GALGAS_templateInstructionListForGeneration & outArgument3,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mConstantListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mEndOfBranchLocationIndexAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_extractedAssociatedValuesForGeneration getter_mExtractedAssociatedValuesForGenerationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListForGeneration getter_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateInstructionSwitchBranchListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateInstructionSwitchBranchListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateInstructionSwitchBranchListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_templateInstructionSwitchBranchListForGeneration ;
 
} ; // End of GALGAS_templateInstructionSwitchBranchListForGeneration class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_templateInstructionSwitchBranchListForGeneration : public cGenericAbstractEnumerator {
  public: cEnumerator_templateInstructionSwitchBranchListForGeneration (const GALGAS_templateInstructionSwitchBranchListForGeneration & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstringlist current_mConstantList (LOCATION_ARGS) const ;
  public: class GALGAS_extractedAssociatedValuesForGeneration current_mExtractedAssociatedValuesForGeneration (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mEndOfBranchLocationIndex (LOCATION_ARGS) const ;
  public: class GALGAS_templateInstructionListForGeneration current_mInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @extractedAssociatedValuesForGeneration list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_extractedAssociatedValuesForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_extractedAssociatedValuesForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_extractedAssociatedValuesForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_unifiedTypeMap_2D_entry & in_mType,
                                                 const class GALGAS_string & in_mCppName,
                                                 const class GALGAS_uint & in_mIndex
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_extractedAssociatedValuesForGeneration extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_extractedAssociatedValuesForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_extractedAssociatedValuesForGeneration constructor_listWithValue (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                                const class GALGAS_string & inOperand1,
                                                                                                const class GALGAS_uint & inOperand2
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_extractedAssociatedValuesForGeneration inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                     const class GALGAS_string & inOperand1,
                                                     const class GALGAS_uint & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_extractedAssociatedValuesForGeneration add_operation (const GALGAS_extractedAssociatedValuesForGeneration & inOperand,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_extractedAssociatedValuesForGeneration_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_unifiedTypeMap_2D_entry constinArgument0,
                                                      class GALGAS_string constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_unifiedTypeMap_2D_entry & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_uint & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_unifiedTypeMap_2D_entry & outArgument0,
                                                class GALGAS_string & outArgument1,
                                                class GALGAS_uint & outArgument2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_unifiedTypeMap_2D_entry & outArgument0,
                                                      class GALGAS_string & outArgument1,
                                                      class GALGAS_uint & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCppNameAtIndex (class GALGAS_string constinArgument0,
                                                           class GALGAS_uint constinArgument1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIndexAtIndex (class GALGAS_uint constinArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeAtIndex (class GALGAS_unifiedTypeMap_2D_entry constinArgument0,
                                                        class GALGAS_uint constinArgument1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_unifiedTypeMap_2D_entry & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_uint & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_unifiedTypeMap_2D_entry & outArgument0,
                                             class GALGAS_string & outArgument1,
                                             class GALGAS_uint & outArgument2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mCppNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mIndexAtIndex (const class GALGAS_uint & constinOperand0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_extractedAssociatedValuesForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_extractedAssociatedValuesForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_extractedAssociatedValuesForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_extractedAssociatedValuesForGeneration ;
 
} ; // End of GALGAS_extractedAssociatedValuesForGeneration class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_extractedAssociatedValuesForGeneration : public cGenericAbstractEnumerator {
  public: cEnumerator_extractedAssociatedValuesForGeneration (const GALGAS_extractedAssociatedValuesForGeneration & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_unifiedTypeMap_2D_entry current_mType (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mCppName (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_extractedAssociatedValuesForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extractedAssociatedValuesForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionSwitchBranchListForGeneration_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstringlist mProperty_mConstantList ;
  public: inline GALGAS_lstringlist readProperty_mConstantList (void) const {
    return mProperty_mConstantList ;
  }

  public: GALGAS_extractedAssociatedValuesForGeneration mProperty_mExtractedAssociatedValuesForGeneration ;
  public: inline GALGAS_extractedAssociatedValuesForGeneration readProperty_mExtractedAssociatedValuesForGeneration (void) const {
    return mProperty_mExtractedAssociatedValuesForGeneration ;
  }

  public: GALGAS_uint mProperty_mEndOfBranchLocationIndex ;
  public: inline GALGAS_uint readProperty_mEndOfBranchLocationIndex (void) const {
    return mProperty_mEndOfBranchLocationIndex ;
  }

  public: GALGAS_templateInstructionListForGeneration mProperty_mInstructionList ;
  public: inline GALGAS_templateInstructionListForGeneration readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMConstantList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConstantList = inValue ;
  }

  public: inline void setter_setMExtractedAssociatedValuesForGeneration (const GALGAS_extractedAssociatedValuesForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExtractedAssociatedValuesForGeneration = inValue ;
  }

  public: inline void setter_setMEndOfBranchLocationIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfBranchLocationIndex = inValue ;
  }

  public: inline void setter_setMInstructionList (const GALGAS_templateInstructionListForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element (const GALGAS_lstringlist & in_mConstantList,
                                                                              const GALGAS_extractedAssociatedValuesForGeneration & in_mExtractedAssociatedValuesForGeneration,
                                                                              const GALGAS_uint & in_mEndOfBranchLocationIndex,
                                                                              const GALGAS_templateInstructionListForGeneration & in_mInstructionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element constructor_new (const class GALGAS_lstringlist & inOperand0,
                                                                                                           const class GALGAS_extractedAssociatedValuesForGeneration & inOperand1,
                                                                                                           const class GALGAS_uint & inOperand2,
                                                                                                           const class GALGAS_templateInstructionListForGeneration & inOperand3
                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @extractedAssociatedValuesForGeneration_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_extractedAssociatedValuesForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mType ;
  public: inline GALGAS_unifiedTypeMap_2D_entry readProperty_mType (void) const {
    return mProperty_mType ;
  }

  public: GALGAS_string mProperty_mCppName ;
  public: inline GALGAS_string readProperty_mCppName (void) const {
    return mProperty_mCppName ;
  }

  public: GALGAS_uint mProperty_mIndex ;
  public: inline GALGAS_uint readProperty_mIndex (void) const {
    return mProperty_mIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_extractedAssociatedValuesForGeneration_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMType (const GALGAS_unifiedTypeMap_2D_entry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mType = inValue ;
  }

  public: inline void setter_setMCppName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCppName = inValue ;
  }

  public: inline void setter_setMIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIndex = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_extractedAssociatedValuesForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_extractedAssociatedValuesForGeneration_2D_element (const GALGAS_unifiedTypeMap_2D_entry & in_mType,
                                                                    const GALGAS_string & in_mCppName,
                                                                    const GALGAS_uint & in_mIndex) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_extractedAssociatedValuesForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_extractedAssociatedValuesForGeneration_2D_element constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                                 const class GALGAS_string & inOperand1,
                                                                                                 const class GALGAS_uint & inOperand2
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_extractedAssociatedValuesForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_extractedAssociatedValuesForGeneration_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extractedAssociatedValuesForGeneration_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionSwitchForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionSwitchForGeneration : public GALGAS_templateInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionSwitchForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_templateInstructionSwitchForGeneration (const class cPtr_templateInstructionSwitchForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_unifiedTypeMap_2D_entry readProperty_mEnumType (void) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_mSwitchExpression (void) const ;

  public: class GALGAS_templateInstructionSwitchBranchListForGeneration readProperty_mTemplateInstructionSwitchBranchList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionSwitchForGeneration extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionSwitchForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                      const class GALGAS_semanticExpressionForGeneration & inOperand1,
                                                                                      const class GALGAS_templateInstructionSwitchBranchListForGeneration & inOperand2
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInstructionSwitchForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionSwitchForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionSwitchForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateInstructionSwitchForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_templateInstructionSwitchForGeneration : public cPtr_templateInstructionForGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mEnumType ;
  public: GALGAS_semanticExpressionForGeneration mProperty_mSwitchExpression ;
  public: GALGAS_templateInstructionSwitchBranchListForGeneration mProperty_mTemplateInstructionSwitchBranchList ;

//--- Constructor
  public: cPtr_templateInstructionSwitchForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mEnumType,
                                                       const GALGAS_semanticExpressionForGeneration & in_mSwitchExpression,
                                                       const GALGAS_templateInstructionSwitchBranchListForGeneration & in_mTemplateInstructionSwitchBranchList
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
// Phase 1: @templateInstructionSwitchForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionSwitchForGeneration_2D_weak : public GALGAS_templateInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionSwitchForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateInstructionSwitchForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateInstructionSwitchForGeneration_2D_weak (const class GALGAS_templateInstructionSwitchForGeneration & inSource) ;

  public: GALGAS_templateInstructionSwitchForGeneration_2D_weak & operator = (const class GALGAS_templateInstructionSwitchForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateInstructionSwitchForGeneration bang_templateInstructionSwitchForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionSwitchForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateInstructionSwitchForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateInstructionSwitchForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateInstructionSwitchForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionSwitchForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_semanticDeclarationAST : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_semanticDeclarationAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_semanticDeclarationAST (const class cPtr_semanticDeclarationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_mIsPredefined (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_semanticDeclarationAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_semanticDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_semanticDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @semanticDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_semanticDeclarationAST : public acStrongPtr_class {

//----------------------------------------------------------------------------------------------------------------------

/* § public: virtual GALGAS_string getter_keyRepresentation (C_Compiler * COMMA_LOCATION_ARGS) const ; */
//--- Properties
  public: GALGAS_bool mProperty_mIsPredefined ;

//--- Constructor
  public: cPtr_semanticDeclarationAST (const GALGAS_bool & in_mIsPredefined
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
// Phase 1: @semanticDeclarationAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_semanticDeclarationAST_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_semanticDeclarationAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_semanticDeclarationAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_semanticDeclarationAST_2D_weak (const class GALGAS_semanticDeclarationAST & inSource) ;

  public: GALGAS_semanticDeclarationAST_2D_weak & operator = (const class GALGAS_semanticDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_semanticDeclarationAST bang_semanticDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_semanticDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_semanticDeclarationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_semanticDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_semanticDeclarationAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalExpressionAST : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_lexicalExpressionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalExpressionAST (const class cPtr_lexicalExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalExpressionAST extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalExpressionAST : public acStrongPtr_class {

//----------------------------------------------------------------------------------------------------------------------

/* § public: virtual GALGAS_string getter_generateCocoaConditionCode (const GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           C_Compiler * COMMA_LOCATION_ARGS) const ; */
/* § public: virtual GALGAS_string getter_generateConditionCode (const GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           C_Compiler * COMMA_LOCATION_ARGS) const ; */
//--- Properties

//--- Constructor
  public: cPtr_lexicalExpressionAST (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalExpressionAST_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_lexicalExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalExpressionAST_2D_weak (const class GALGAS_lexicalExpressionAST & inSource) ;

  public: GALGAS_lexicalExpressionAST_2D_weak & operator = (const class GALGAS_lexicalExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalExpressionAST bang_lexicalExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalInstructionAST : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_lexicalInstructionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalInstructionAST (const class cPtr_lexicalInstructionAST * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalInstructionAST extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalInstructionAST : public acStrongPtr_class {

//----------------------------------------------------------------------------------------------------------------------

/* § public: virtual GALGAS_string getter_generateCocoaInstructionCode (const GALGAS_string inScannerClassName,
           const GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           C_Compiler * COMMA_LOCATION_ARGS) const ; */
/* § public: virtual GALGAS_string getter_generateInstructionCode (const GALGAS_string inScannerClassName,
           const GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           C_Compiler * COMMA_LOCATION_ARGS) const ; */
//--- Properties

//--- Constructor
  public: cPtr_lexicalInstructionAST (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalInstructionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalInstructionAST_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_lexicalInstructionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalInstructionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalInstructionAST_2D_weak (const class GALGAS_lexicalInstructionAST & inSource) ;

  public: GALGAS_lexicalInstructionAST_2D_weak & operator = (const class GALGAS_lexicalInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalInstructionAST bang_lexicalInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalInstructionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalInstructionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalInstructionListAST list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalInstructionListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_lexicalInstructionListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_lexicalInstructionListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lexicalInstructionAST & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalInstructionListAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalInstructionListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalInstructionListAST constructor_listWithValue (const class GALGAS_lexicalInstructionAST & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_lexicalInstructionListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lexicalInstructionAST & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_lexicalInstructionListAST add_operation (const GALGAS_lexicalInstructionListAST & inOperand,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lexicalInstructionListAST_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lexicalInstructionAST constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lexicalInstructionAST & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lexicalInstructionAST & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lexicalInstructionAST & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GALGAS_lexicalInstructionAST constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lexicalInstructionAST & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lexicalInstructionAST & outArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalInstructionAST getter_mInstructionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalInstructionListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalInstructionListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalInstructionListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalInstructionListAST ;
 
} ; // End of GALGAS_lexicalInstructionListAST class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_lexicalInstructionListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_lexicalInstructionListAST (const GALGAS_lexicalInstructionListAST & inEnumeratedObject,
                                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lexicalInstructionAST current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_lexicalInstructionListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalInstructionListAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalInstructionListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalInstructionListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lexicalInstructionAST mProperty_mInstruction ;
  public: inline GALGAS_lexicalInstructionAST readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_lexicalInstructionListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GALGAS_lexicalInstructionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_lexicalInstructionListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_lexicalInstructionListAST_2D_element (const GALGAS_lexicalInstructionAST & in_mInstruction) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalInstructionListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalInstructionListAST_2D_element constructor_new (const class GALGAS_lexicalInstructionAST & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalInstructionListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalInstructionListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalInstructionListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @metamodelTemplateDelimitorListAST list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_metamodelTemplateDelimitorListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_metamodelTemplateDelimitorListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_metamodelTemplateDelimitorListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mStartString,
                                                 const class GALGAS_lstringlist & in_mOptionList,
                                                 const class GALGAS_lstring & in_mEndString
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_metamodelTemplateDelimitorListAST extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_metamodelTemplateDelimitorListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_metamodelTemplateDelimitorListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                           const class GALGAS_lstringlist & inOperand1,
                                                                                           const class GALGAS_lstring & inOperand2
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_metamodelTemplateDelimitorListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstringlist & inOperand1,
                                                     const class GALGAS_lstring & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_metamodelTemplateDelimitorListAST add_operation (const GALGAS_metamodelTemplateDelimitorListAST & inOperand,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_metamodelTemplateDelimitorListAST_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstringlist constinArgument1,
                                                      class GALGAS_lstring constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstringlist & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstringlist & outArgument1,
                                                class GALGAS_lstring & outArgument2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstringlist & outArgument1,
                                                      class GALGAS_lstring & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndStringAtIndex (class GALGAS_lstring constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOptionListAtIndex (class GALGAS_lstringlist constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStartStringAtIndex (class GALGAS_lstring constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstringlist & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstringlist & outArgument1,
                                             class GALGAS_lstring & outArgument2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mEndStringAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mOptionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mStartStringAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_metamodelTemplateDelimitorListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_metamodelTemplateDelimitorListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_metamodelTemplateDelimitorListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_metamodelTemplateDelimitorListAST ;
 
} ; // End of GALGAS_metamodelTemplateDelimitorListAST class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_metamodelTemplateDelimitorListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_metamodelTemplateDelimitorListAST (const GALGAS_metamodelTemplateDelimitorListAST & inEnumeratedObject,
                                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mStartString (LOCATION_ARGS) const ;
  public: class GALGAS_lstringlist current_mOptionList (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mEndString (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_metamodelTemplateDelimitorListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_metamodelTemplateDelimitorListAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @metamodelTemplateDelimitorListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_metamodelTemplateDelimitorListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mStartString ;
  public: inline GALGAS_lstring readProperty_mStartString (void) const {
    return mProperty_mStartString ;
  }

  public: GALGAS_lstringlist mProperty_mOptionList ;
  public: inline GALGAS_lstringlist readProperty_mOptionList (void) const {
    return mProperty_mOptionList ;
  }

  public: GALGAS_lstring mProperty_mEndString ;
  public: inline GALGAS_lstring readProperty_mEndString (void) const {
    return mProperty_mEndString ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_metamodelTemplateDelimitorListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_metamodelTemplateDelimitorListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMStartString (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStartString = inValue ;
  }

  public: inline void setter_setMOptionList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionList = inValue ;
  }

  public: inline void setter_setMEndString (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndString = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_metamodelTemplateDelimitorListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_metamodelTemplateDelimitorListAST_2D_element (const GALGAS_lstring & in_mStartString,
                                                               const GALGAS_lstringlist & in_mOptionList,
                                                               const GALGAS_lstring & in_mEndString) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_metamodelTemplateDelimitorListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_metamodelTemplateDelimitorListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                            const class GALGAS_lstringlist & inOperand1,
                                                                                            const class GALGAS_lstring & inOperand2
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_metamodelTemplateDelimitorListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_metamodelTemplateDelimitorListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_metamodelTemplateDelimitorListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateReplacementListAST list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateReplacementListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_templateReplacementListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_templateReplacementListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mMatchString,
                                                 const class GALGAS_lstring & in_mReplacementString,
                                                 const class GALGAS_lstring & in_mReplacementFunction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateReplacementListAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateReplacementListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_templateReplacementListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_lstring & inOperand1,
                                                                                    const class GALGAS_lstring & inOperand2
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_templateReplacementListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_lstring & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_templateReplacementListAST add_operation (const GALGAS_templateReplacementListAST & inOperand,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_templateReplacementListAST_2D_element inArgument0,
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

  public: VIRTUAL_IN_DEBUG void setter_setMMatchStringAtIndex (class GALGAS_lstring constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReplacementFunctionAtIndex (class GALGAS_lstring constinArgument0,
                                                                       class GALGAS_uint constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReplacementStringAtIndex (class GALGAS_lstring constinArgument0,
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
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mMatchStringAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mReplacementFunctionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mReplacementStringAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateReplacementListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateReplacementListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateReplacementListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_templateReplacementListAST ;
 
} ; // End of GALGAS_templateReplacementListAST class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_templateReplacementListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_templateReplacementListAST (const GALGAS_templateReplacementListAST & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mMatchString (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mReplacementString (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mReplacementFunction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_templateReplacementListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateReplacementListAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateReplacementListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateReplacementListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mMatchString ;
  public: inline GALGAS_lstring readProperty_mMatchString (void) const {
    return mProperty_mMatchString ;
  }

  public: GALGAS_lstring mProperty_mReplacementString ;
  public: inline GALGAS_lstring readProperty_mReplacementString (void) const {
    return mProperty_mReplacementString ;
  }

  public: GALGAS_lstring mProperty_mReplacementFunction ;
  public: inline GALGAS_lstring readProperty_mReplacementFunction (void) const {
    return mProperty_mReplacementFunction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateReplacementListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_templateReplacementListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMMatchString (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMatchString = inValue ;
  }

  public: inline void setter_setMReplacementString (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReplacementString = inValue ;
  }

  public: inline void setter_setMReplacementFunction (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReplacementFunction = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_templateReplacementListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_templateReplacementListAST_2D_element (const GALGAS_lstring & in_mMatchString,
                                                        const GALGAS_lstring & in_mReplacementString,
                                                        const GALGAS_lstring & in_mReplacementFunction) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateReplacementListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateReplacementListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                     const class GALGAS_lstring & inOperand1,
                                                                                     const class GALGAS_lstring & inOperand2
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateReplacementListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateReplacementListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateReplacementListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractLexicalRuleAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_abstractLexicalRuleAST : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_abstractLexicalRuleAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_abstractLexicalRuleAST (const class cPtr_abstractLexicalRuleAST * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractLexicalRuleAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_abstractLexicalRuleAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractLexicalRuleAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractLexicalRuleAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractLexicalRuleAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_abstractLexicalRuleAST : public acStrongPtr_class {

//----------------------------------------------------------------------------------------------------------------------

/* § public: virtual GALGAS_string getter_generateCocoaCode (const GALGAS_string inScannerClassName,
           const GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           C_Compiler * COMMA_LOCATION_ARGS) const ; */
/* § public: virtual GALGAS_string getter_generateCode (const GALGAS_string inScannerClassName,
           const GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           C_Compiler * COMMA_LOCATION_ARGS) const ; */
//--- Properties

//--- Constructor
  public: cPtr_abstractLexicalRuleAST (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractLexicalRuleAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_abstractLexicalRuleAST_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_abstractLexicalRuleAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_abstractLexicalRuleAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_abstractLexicalRuleAST_2D_weak (const class GALGAS_abstractLexicalRuleAST & inSource) ;

  public: GALGAS_abstractLexicalRuleAST_2D_weak & operator = (const class GALGAS_abstractLexicalRuleAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_abstractLexicalRuleAST bang_abstractLexicalRuleAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractLexicalRuleAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_abstractLexicalRuleAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_abstractLexicalRuleAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractLexicalRuleAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractLexicalRuleAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalRuleListAST list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalRuleListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_lexicalRuleListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_lexicalRuleListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_abstractLexicalRuleAST & in_mLexicalRule
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalRuleListAST extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalRuleListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalRuleListAST constructor_listWithValue (const class GALGAS_abstractLexicalRuleAST & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_lexicalRuleListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_abstractLexicalRuleAST & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_lexicalRuleListAST add_operation (const GALGAS_lexicalRuleListAST & inOperand,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lexicalRuleListAST_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_abstractLexicalRuleAST constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_abstractLexicalRuleAST & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_abstractLexicalRuleAST & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_abstractLexicalRuleAST & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLexicalRuleAtIndex (class GALGAS_abstractLexicalRuleAST constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_abstractLexicalRuleAST & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_abstractLexicalRuleAST & outArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_abstractLexicalRuleAST getter_mLexicalRuleAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalRuleListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalRuleListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalRuleListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalRuleListAST ;
 
} ; // End of GALGAS_lexicalRuleListAST class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_lexicalRuleListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_lexicalRuleListAST (const GALGAS_lexicalRuleListAST & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_abstractLexicalRuleAST current_mLexicalRule (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_lexicalRuleListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRuleListAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalRuleListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalRuleListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_abstractLexicalRuleAST mProperty_mLexicalRule ;
  public: inline GALGAS_abstractLexicalRuleAST readProperty_mLexicalRule (void) const {
    return mProperty_mLexicalRule ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_lexicalRuleListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLexicalRule (const GALGAS_abstractLexicalRuleAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalRule = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_lexicalRuleListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_lexicalRuleListAST_2D_element (const GALGAS_abstractLexicalRuleAST & in_mLexicalRule) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalRuleListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalRuleListAST_2D_element constructor_new (const class GALGAS_abstractLexicalRuleAST & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalRuleListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalRuleListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRuleListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalImplicitRuleAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalImplicitRuleAST : public GALGAS_abstractLexicalRuleAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalImplicitRuleAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalImplicitRuleAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalImplicitRuleAST (const class cPtr_lexicalImplicitRuleAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mListName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalImplicitRuleAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalImplicitRuleAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalImplicitRuleAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalImplicitRuleAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalImplicitRuleAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalImplicitRuleAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalImplicitRuleAST : public cPtr_abstractLexicalRuleAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mListName ;

//--- Constructor
  public: cPtr_lexicalImplicitRuleAST (const GALGAS_lstring & in_mListName
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
// Phase 1: @lexicalImplicitRuleAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalImplicitRuleAST_2D_weak : public GALGAS_abstractLexicalRuleAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexicalImplicitRuleAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalImplicitRuleAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalImplicitRuleAST_2D_weak (const class GALGAS_lexicalImplicitRuleAST & inSource) ;

  public: GALGAS_lexicalImplicitRuleAST_2D_weak & operator = (const class GALGAS_lexicalImplicitRuleAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalImplicitRuleAST bang_lexicalImplicitRuleAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalImplicitRuleAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalImplicitRuleAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalImplicitRuleAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalImplicitRuleAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalImplicitRuleAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalExplicitRuleAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalExplicitRuleAST : public GALGAS_abstractLexicalRuleAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalExplicitRuleAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalExplicitRuleAST (const class cPtr_lexicalExplicitRuleAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lexicalExpressionAST readProperty_mLexicalRuleExpression (void) const ;

  public: class GALGAS_lexicalInstructionListAST readProperty_mInstructionList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalExplicitRuleAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalExplicitRuleAST constructor_new (const class GALGAS_lexicalExpressionAST & inOperand0,
                                                                      const class GALGAS_lexicalInstructionListAST & inOperand1
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalExplicitRuleAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalExplicitRuleAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalExplicitRuleAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalExplicitRuleAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalExplicitRuleAST : public cPtr_abstractLexicalRuleAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lexicalExpressionAST mProperty_mLexicalRuleExpression ;
  public: GALGAS_lexicalInstructionListAST mProperty_mInstructionList ;

//--- Constructor
  public: cPtr_lexicalExplicitRuleAST (const GALGAS_lexicalExpressionAST & in_mLexicalRuleExpression,
                                       const GALGAS_lexicalInstructionListAST & in_mInstructionList
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
// Phase 1: @lexicalExplicitRuleAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalExplicitRuleAST_2D_weak : public GALGAS_abstractLexicalRuleAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexicalExplicitRuleAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalExplicitRuleAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalExplicitRuleAST_2D_weak (const class GALGAS_lexicalExplicitRuleAST & inSource) ;

  public: GALGAS_lexicalExplicitRuleAST_2D_weak & operator = (const class GALGAS_lexicalExplicitRuleAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalExplicitRuleAST bang_lexicalExplicitRuleAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalExplicitRuleAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalExplicitRuleAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalExplicitRuleAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalExplicitRuleAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalExplicitRuleAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalMessageDeclarationListAST list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalMessageDeclarationListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_lexicalMessageDeclarationListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_lexicalMessageDeclarationListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mMessageName,
                                                 const class GALGAS_lstring & in_mMessageValue
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalMessageDeclarationListAST extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalMessageDeclarationListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalMessageDeclarationListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                          const class GALGAS_lstring & inOperand1
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_lexicalMessageDeclarationListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_lexicalMessageDeclarationListAST add_operation (const GALGAS_lexicalMessageDeclarationListAST & inOperand,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lexicalMessageDeclarationListAST_2D_element inArgument0,
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

  public: VIRTUAL_IN_DEBUG void setter_setMMessageNameAtIndex (class GALGAS_lstring constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMessageValueAtIndex (class GALGAS_lstring constinArgument0,
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
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mMessageNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mMessageValueAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalMessageDeclarationListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalMessageDeclarationListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalMessageDeclarationListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalMessageDeclarationListAST ;
 
} ; // End of GALGAS_lexicalMessageDeclarationListAST class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_lexicalMessageDeclarationListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_lexicalMessageDeclarationListAST (const GALGAS_lexicalMessageDeclarationListAST & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mMessageName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mMessageValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_lexicalMessageDeclarationListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalMessageDeclarationListAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalMessageDeclarationListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalMessageDeclarationListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mMessageName ;
  public: inline GALGAS_lstring readProperty_mMessageName (void) const {
    return mProperty_mMessageName ;
  }

  public: GALGAS_lstring mProperty_mMessageValue ;
  public: inline GALGAS_lstring readProperty_mMessageValue (void) const {
    return mProperty_mMessageValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalMessageDeclarationListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_lexicalMessageDeclarationListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMMessageName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMessageName = inValue ;
  }

  public: inline void setter_setMMessageValue (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMessageValue = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_lexicalMessageDeclarationListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_lexicalMessageDeclarationListAST_2D_element (const GALGAS_lstring & in_mMessageName,
                                                              const GALGAS_lstring & in_mMessageValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalMessageDeclarationListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalMessageDeclarationListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                           const class GALGAS_lstring & inOperand1
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalMessageDeclarationListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalMessageDeclarationListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalMessageDeclarationListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalAttributeListAST list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalAttributeListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_lexicalAttributeListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_lexicalAttributeListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mTypeName,
                                                 const class GALGAS_lstring & in_mName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalAttributeListAST extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalAttributeListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalAttributeListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_lexicalAttributeListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_lexicalAttributeListAST add_operation (const GALGAS_lexicalAttributeListAST & inOperand,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lexicalAttributeListAST_2D_element inArgument0,
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

  public: VIRTUAL_IN_DEBUG void setter_setMNameAtIndex (class GALGAS_lstring constinArgument0,
                                                        class GALGAS_uint constinArgument1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeNameAtIndex (class GALGAS_lstring constinArgument0,
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
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalAttributeListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalAttributeListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalAttributeListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalAttributeListAST ;
 
} ; // End of GALGAS_lexicalAttributeListAST class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_lexicalAttributeListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_lexicalAttributeListAST (const GALGAS_lexicalAttributeListAST & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mTypeName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_lexicalAttributeListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalAttributeListAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalAttributeListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalAttributeListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mTypeName ;
  public: inline GALGAS_lstring readProperty_mTypeName (void) const {
    return mProperty_mTypeName ;
  }

  public: GALGAS_lstring mProperty_mName ;
  public: inline GALGAS_lstring readProperty_mName (void) const {
    return mProperty_mName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalAttributeListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_lexicalAttributeListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTypeName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTypeName = inValue ;
  }

  public: inline void setter_setMName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mName = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_lexicalAttributeListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_lexicalAttributeListAST_2D_element (const GALGAS_lstring & in_mTypeName,
                                                     const GALGAS_lstring & in_mName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalAttributeListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalAttributeListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_lstring & inOperand1
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalAttributeListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalAttributeListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalAttributeListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalStyleListAST list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalStyleListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_lexicalStyleListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_lexicalStyleListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mName,
                                                 const class GALGAS_lstring & in_mComment
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalStyleListAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalStyleListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalStyleListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_lstring & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_lexicalStyleListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_lexicalStyleListAST add_operation (const GALGAS_lexicalStyleListAST & inOperand,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lexicalStyleListAST_2D_element inArgument0,
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

  public: VIRTUAL_IN_DEBUG void setter_setMCommentAtIndex (class GALGAS_lstring constinArgument0,
                                                           class GALGAS_uint constinArgument1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNameAtIndex (class GALGAS_lstring constinArgument0,
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
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mCommentAtIndex (const class GALGAS_uint & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalStyleListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalStyleListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalStyleListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalStyleListAST ;
 
} ; // End of GALGAS_lexicalStyleListAST class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_lexicalStyleListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_lexicalStyleListAST (const GALGAS_lexicalStyleListAST & inEnumeratedObject,
                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mComment (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_lexicalStyleListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalStyleListAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalStyleListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalStyleListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mName ;
  public: inline GALGAS_lstring readProperty_mName (void) const {
    return mProperty_mName ;
  }

  public: GALGAS_lstring mProperty_mComment ;
  public: inline GALGAS_lstring readProperty_mComment (void) const {
    return mProperty_mComment ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalStyleListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_lexicalStyleListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mName = inValue ;
  }

  public: inline void setter_setMComment (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mComment = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_lexicalStyleListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_lexicalStyleListAST_2D_element (const GALGAS_lstring & in_mName,
                                                 const GALGAS_lstring & in_mComment) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalStyleListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalStyleListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_lstring & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalStyleListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalStyleListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalStyleListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @terminalDeclarationListAST list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_terminalDeclarationListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_terminalDeclarationListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_terminalDeclarationListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mName,
                                                 const class GALGAS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                 const class GALGAS_lstring & in_mSyntaxErrorMessage,
                                                 const class GALGAS_lstring & in_mStyle,
                                                 const class GALGAS_lstringlist & in_mOptionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_terminalDeclarationListAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_terminalDeclarationListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_terminalDeclarationListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_sentLexicalAttributeListAST & inOperand1,
                                                                                    const class GALGAS_lstring & inOperand2,
                                                                                    const class GALGAS_lstring & inOperand3,
                                                                                    const class GALGAS_lstringlist & inOperand4
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_terminalDeclarationListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_sentLexicalAttributeListAST & inOperand1,
                                                     const class GALGAS_lstring & inOperand2,
                                                     const class GALGAS_lstring & inOperand3,
                                                     const class GALGAS_lstringlist & inOperand4
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_terminalDeclarationListAST add_operation (const GALGAS_terminalDeclarationListAST & inOperand,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_terminalDeclarationListAST_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_sentLexicalAttributeListAST constinArgument1,
                                                      class GALGAS_lstring constinArgument2,
                                                      class GALGAS_lstring constinArgument3,
                                                      class GALGAS_lstringlist constinArgument4,
                                                      class GALGAS_uint constinArgument5,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_sentLexicalAttributeListAST & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 class GALGAS_lstring & outArgument3,
                                                 class GALGAS_lstringlist & outArgument4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_sentLexicalAttributeListAST & outArgument1,
                                                class GALGAS_lstring & outArgument2,
                                                class GALGAS_lstring & outArgument3,
                                                class GALGAS_lstringlist & outArgument4,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_sentLexicalAttributeListAST & outArgument1,
                                                      class GALGAS_lstring & outArgument2,
                                                      class GALGAS_lstring & outArgument3,
                                                      class GALGAS_lstringlist & outArgument4,
                                                      class GALGAS_uint constinArgument5,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNameAtIndex (class GALGAS_lstring constinArgument0,
                                                        class GALGAS_uint constinArgument1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOptionListAtIndex (class GALGAS_lstringlist constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSentAttributeListAtIndex (class GALGAS_sentLexicalAttributeListAST constinArgument0,
                                                                     class GALGAS_uint constinArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStyleAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSyntaxErrorMessageAtIndex (class GALGAS_lstring constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_sentLexicalAttributeListAST & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              class GALGAS_lstring & outArgument3,
                                              class GALGAS_lstringlist & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_sentLexicalAttributeListAST & outArgument1,
                                             class GALGAS_lstring & outArgument2,
                                             class GALGAS_lstring & outArgument3,
                                             class GALGAS_lstringlist & outArgument4,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mOptionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_sentLexicalAttributeListAST getter_mSentAttributeListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mStyleAtIndex (const class GALGAS_uint & constinOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSyntaxErrorMessageAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_terminalDeclarationListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_terminalDeclarationListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_terminalDeclarationListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_terminalDeclarationListAST ;
 
} ; // End of GALGAS_terminalDeclarationListAST class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_terminalDeclarationListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_terminalDeclarationListAST (const GALGAS_terminalDeclarationListAST & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mName (LOCATION_ARGS) const ;
  public: class GALGAS_sentLexicalAttributeListAST current_mSentAttributeList (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mSyntaxErrorMessage (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mStyle (LOCATION_ARGS) const ;
  public: class GALGAS_lstringlist current_mOptionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_terminalDeclarationListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalDeclarationListAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @sentLexicalAttributeListAST list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_sentLexicalAttributeListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_sentLexicalAttributeListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_sentLexicalAttributeListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mFormalSelector,
                                                 const class GALGAS_lstring & in_mAttributeName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_sentLexicalAttributeListAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_sentLexicalAttributeListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_sentLexicalAttributeListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                     const class GALGAS_lstring & inOperand1
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_sentLexicalAttributeListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_sentLexicalAttributeListAST add_operation (const GALGAS_sentLexicalAttributeListAST & inOperand,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_sentLexicalAttributeListAST_2D_element inArgument0,
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

  public: VIRTUAL_IN_DEBUG void setter_setMAttributeNameAtIndex (class GALGAS_lstring constinArgument0,
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
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mAttributeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalSelectorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_sentLexicalAttributeListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_sentLexicalAttributeListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_sentLexicalAttributeListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_sentLexicalAttributeListAST ;
 
} ; // End of GALGAS_sentLexicalAttributeListAST class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_sentLexicalAttributeListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_sentLexicalAttributeListAST (const GALGAS_sentLexicalAttributeListAST & inEnumeratedObject,
                                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mFormalSelector (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mAttributeName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_sentLexicalAttributeListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sentLexicalAttributeListAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @terminalDeclarationListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_terminalDeclarationListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mName ;
  public: inline GALGAS_lstring readProperty_mName (void) const {
    return mProperty_mName ;
  }

  public: GALGAS_sentLexicalAttributeListAST mProperty_mSentAttributeList ;
  public: inline GALGAS_sentLexicalAttributeListAST readProperty_mSentAttributeList (void) const {
    return mProperty_mSentAttributeList ;
  }

  public: GALGAS_lstring mProperty_mSyntaxErrorMessage ;
  public: inline GALGAS_lstring readProperty_mSyntaxErrorMessage (void) const {
    return mProperty_mSyntaxErrorMessage ;
  }

  public: GALGAS_lstring mProperty_mStyle ;
  public: inline GALGAS_lstring readProperty_mStyle (void) const {
    return mProperty_mStyle ;
  }

  public: GALGAS_lstringlist mProperty_mOptionList ;
  public: inline GALGAS_lstringlist readProperty_mOptionList (void) const {
    return mProperty_mOptionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_terminalDeclarationListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_terminalDeclarationListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mName = inValue ;
  }

  public: inline void setter_setMSentAttributeList (const GALGAS_sentLexicalAttributeListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSentAttributeList = inValue ;
  }

  public: inline void setter_setMSyntaxErrorMessage (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxErrorMessage = inValue ;
  }

  public: inline void setter_setMStyle (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStyle = inValue ;
  }

  public: inline void setter_setMOptionList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_terminalDeclarationListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_terminalDeclarationListAST_2D_element (const GALGAS_lstring & in_mName,
                                                        const GALGAS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                        const GALGAS_lstring & in_mSyntaxErrorMessage,
                                                        const GALGAS_lstring & in_mStyle,
                                                        const GALGAS_lstringlist & in_mOptionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_terminalDeclarationListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_terminalDeclarationListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                     const class GALGAS_sentLexicalAttributeListAST & inOperand1,
                                                                                     const class GALGAS_lstring & inOperand2,
                                                                                     const class GALGAS_lstring & inOperand3,
                                                                                     const class GALGAS_lstringlist & inOperand4
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_terminalDeclarationListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_terminalDeclarationListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalDeclarationListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @sentLexicalAttributeListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_sentLexicalAttributeListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mFormalSelector ;
  public: inline GALGAS_lstring readProperty_mFormalSelector (void) const {
    return mProperty_mFormalSelector ;
  }

  public: GALGAS_lstring mProperty_mAttributeName ;
  public: inline GALGAS_lstring readProperty_mAttributeName (void) const {
    return mProperty_mAttributeName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_sentLexicalAttributeListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_sentLexicalAttributeListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFormalSelector (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalSelector = inValue ;
  }

  public: inline void setter_setMAttributeName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAttributeName = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_sentLexicalAttributeListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_sentLexicalAttributeListAST_2D_element (const GALGAS_lstring & in_mFormalSelector,
                                                         const GALGAS_lstring & in_mAttributeName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_sentLexicalAttributeListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_sentLexicalAttributeListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_lstring & inOperand1
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_sentLexicalAttributeListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_sentLexicalAttributeListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sentLexicalAttributeListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalListEntryListAST list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalListEntryListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_lexicalListEntryListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_lexicalListEntryListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mEntrySpelling,
                                                 const class GALGAS_lstring & in_mTerminalSpelling,
                                                 const class GALGAS_lstringlist & in_mAttributeList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalListEntryListAST extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalListEntryListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalListEntryListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1,
                                                                                 const class GALGAS_lstringlist & inOperand2
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_lexicalListEntryListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_lstringlist & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_lexicalListEntryListAST add_operation (const GALGAS_lexicalListEntryListAST & inOperand,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lexicalListEntryListAST_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_lstringlist constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_lstringlist & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                class GALGAS_lstringlist & outArgument2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_lstringlist & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAttributeListAtIndex (class GALGAS_lstringlist constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEntrySpellingAtIndex (class GALGAS_lstring constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTerminalSpellingAtIndex (class GALGAS_lstring constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_lstringlist & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             class GALGAS_lstringlist & outArgument2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mAttributeListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mEntrySpellingAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTerminalSpellingAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalListEntryListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalListEntryListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalListEntryListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalListEntryListAST ;
 
} ; // End of GALGAS_lexicalListEntryListAST class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_lexicalListEntryListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_lexicalListEntryListAST (const GALGAS_lexicalListEntryListAST & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mEntrySpelling (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mTerminalSpelling (LOCATION_ARGS) const ;
  public: class GALGAS_lstringlist current_mAttributeList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_lexicalListEntryListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalListEntryListAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalListEntryListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalListEntryListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mEntrySpelling ;
  public: inline GALGAS_lstring readProperty_mEntrySpelling (void) const {
    return mProperty_mEntrySpelling ;
  }

  public: GALGAS_lstring mProperty_mTerminalSpelling ;
  public: inline GALGAS_lstring readProperty_mTerminalSpelling (void) const {
    return mProperty_mTerminalSpelling ;
  }

  public: GALGAS_lstringlist mProperty_mAttributeList ;
  public: inline GALGAS_lstringlist readProperty_mAttributeList (void) const {
    return mProperty_mAttributeList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalListEntryListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_lexicalListEntryListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMEntrySpelling (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEntrySpelling = inValue ;
  }

  public: inline void setter_setMTerminalSpelling (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTerminalSpelling = inValue ;
  }

  public: inline void setter_setMAttributeList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAttributeList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_lexicalListEntryListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_lexicalListEntryListAST_2D_element (const GALGAS_lstring & in_mEntrySpelling,
                                                     const GALGAS_lstring & in_mTerminalSpelling,
                                                     const GALGAS_lstringlist & in_mAttributeList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalListEntryListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalListEntryListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_lstring & inOperand1,
                                                                                  const class GALGAS_lstringlist & inOperand2
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalListEntryListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalListEntryListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalListEntryListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalListDeclarationListAST list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalListDeclarationListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_lexicalListDeclarationListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_lexicalListDeclarationListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mName,
                                                 const class GALGAS_lstring & in_mStyle,
                                                 const class GALGAS_lstring & in_mSyntaxErrorMessage,
                                                 const class GALGAS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                 const class GALGAS_lexicalListEntryListAST & in_mEntryList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalListDeclarationListAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalListDeclarationListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalListDeclarationListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_lstring & inOperand1,
                                                                                       const class GALGAS_lstring & inOperand2,
                                                                                       const class GALGAS_sentLexicalAttributeListAST & inOperand3,
                                                                                       const class GALGAS_lexicalListEntryListAST & inOperand4
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_lexicalListDeclarationListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_lstring & inOperand2,
                                                     const class GALGAS_sentLexicalAttributeListAST & inOperand3,
                                                     const class GALGAS_lexicalListEntryListAST & inOperand4
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_lexicalListDeclarationListAST add_operation (const GALGAS_lexicalListDeclarationListAST & inOperand,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lexicalListDeclarationListAST_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_lstring constinArgument2,
                                                      class GALGAS_sentLexicalAttributeListAST constinArgument3,
                                                      class GALGAS_lexicalListEntryListAST constinArgument4,
                                                      class GALGAS_uint constinArgument5,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 class GALGAS_sentLexicalAttributeListAST & outArgument3,
                                                 class GALGAS_lexicalListEntryListAST & outArgument4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                class GALGAS_lstring & outArgument2,
                                                class GALGAS_sentLexicalAttributeListAST & outArgument3,
                                                class GALGAS_lexicalListEntryListAST & outArgument4,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_lstring & outArgument2,
                                                      class GALGAS_sentLexicalAttributeListAST & outArgument3,
                                                      class GALGAS_lexicalListEntryListAST & outArgument4,
                                                      class GALGAS_uint constinArgument5,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEntryListAtIndex (class GALGAS_lexicalListEntryListAST constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNameAtIndex (class GALGAS_lstring constinArgument0,
                                                        class GALGAS_uint constinArgument1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSentAttributeListAtIndex (class GALGAS_sentLexicalAttributeListAST constinArgument0,
                                                                     class GALGAS_uint constinArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStyleAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSyntaxErrorMessageAtIndex (class GALGAS_lstring constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              class GALGAS_sentLexicalAttributeListAST & outArgument3,
                                              class GALGAS_lexicalListEntryListAST & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             class GALGAS_lstring & outArgument2,
                                             class GALGAS_sentLexicalAttributeListAST & outArgument3,
                                             class GALGAS_lexicalListEntryListAST & outArgument4,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalListEntryListAST getter_mEntryListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_sentLexicalAttributeListAST getter_mSentAttributeListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mStyleAtIndex (const class GALGAS_uint & constinOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSyntaxErrorMessageAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalListDeclarationListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalListDeclarationListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalListDeclarationListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalListDeclarationListAST ;
 
} ; // End of GALGAS_lexicalListDeclarationListAST class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_lexicalListDeclarationListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_lexicalListDeclarationListAST (const GALGAS_lexicalListDeclarationListAST & inEnumeratedObject,
                                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mStyle (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mSyntaxErrorMessage (LOCATION_ARGS) const ;
  public: class GALGAS_sentLexicalAttributeListAST current_mSentAttributeList (LOCATION_ARGS) const ;
  public: class GALGAS_lexicalListEntryListAST current_mEntryList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_lexicalListDeclarationListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalListDeclarationListAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalListDeclarationListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalListDeclarationListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mName ;
  public: inline GALGAS_lstring readProperty_mName (void) const {
    return mProperty_mName ;
  }

  public: GALGAS_lstring mProperty_mStyle ;
  public: inline GALGAS_lstring readProperty_mStyle (void) const {
    return mProperty_mStyle ;
  }

  public: GALGAS_lstring mProperty_mSyntaxErrorMessage ;
  public: inline GALGAS_lstring readProperty_mSyntaxErrorMessage (void) const {
    return mProperty_mSyntaxErrorMessage ;
  }

  public: GALGAS_sentLexicalAttributeListAST mProperty_mSentAttributeList ;
  public: inline GALGAS_sentLexicalAttributeListAST readProperty_mSentAttributeList (void) const {
    return mProperty_mSentAttributeList ;
  }

  public: GALGAS_lexicalListEntryListAST mProperty_mEntryList ;
  public: inline GALGAS_lexicalListEntryListAST readProperty_mEntryList (void) const {
    return mProperty_mEntryList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalListDeclarationListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_lexicalListDeclarationListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mName = inValue ;
  }

  public: inline void setter_setMStyle (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStyle = inValue ;
  }

  public: inline void setter_setMSyntaxErrorMessage (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSyntaxErrorMessage = inValue ;
  }

  public: inline void setter_setMSentAttributeList (const GALGAS_sentLexicalAttributeListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSentAttributeList = inValue ;
  }

  public: inline void setter_setMEntryList (const GALGAS_lexicalListEntryListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEntryList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_lexicalListDeclarationListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_lexicalListDeclarationListAST_2D_element (const GALGAS_lstring & in_mName,
                                                           const GALGAS_lstring & in_mStyle,
                                                           const GALGAS_lstring & in_mSyntaxErrorMessage,
                                                           const GALGAS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                           const GALGAS_lexicalListEntryListAST & in_mEntryList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalListDeclarationListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalListDeclarationListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                        const class GALGAS_lstring & inOperand1,
                                                                                        const class GALGAS_lstring & inOperand2,
                                                                                        const class GALGAS_sentLexicalAttributeListAST & inOperand3,
                                                                                        const class GALGAS_lexicalListEntryListAST & inOperand4
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalListDeclarationListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalListDeclarationListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalListDeclarationListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalOrExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalOrExpressionAST : public GALGAS_lexicalExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalOrExpressionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalOrExpressionAST (const class cPtr_lexicalOrExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lexicalExpressionAST readProperty_mLeftOperand (void) const ;

  public: class GALGAS_lexicalExpressionAST readProperty_mRightOperand (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalOrExpressionAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalOrExpressionAST constructor_new (const class GALGAS_lexicalExpressionAST & inOperand0,
                                                                      const class GALGAS_lexicalExpressionAST & inOperand1
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalOrExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalOrExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalOrExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalOrExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalOrExpressionAST : public cPtr_lexicalExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lexicalExpressionAST mProperty_mLeftOperand ;
  public: GALGAS_lexicalExpressionAST mProperty_mRightOperand ;

//--- Constructor
  public: cPtr_lexicalOrExpressionAST (const GALGAS_lexicalExpressionAST & in_mLeftOperand,
                                       const GALGAS_lexicalExpressionAST & in_mRightOperand
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
// Phase 1: @lexicalOrExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalOrExpressionAST_2D_weak : public GALGAS_lexicalExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexicalOrExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalOrExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalOrExpressionAST_2D_weak (const class GALGAS_lexicalOrExpressionAST & inSource) ;

  public: GALGAS_lexicalOrExpressionAST_2D_weak & operator = (const class GALGAS_lexicalOrExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalOrExpressionAST bang_lexicalOrExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalOrExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalOrExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalOrExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalOrExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalOrExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalCharacterSetMatchAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalCharacterSetMatchAST : public GALGAS_lexicalExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalCharacterSetMatchAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalCharacterSetMatchAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalCharacterSetMatchAST (const class cPtr_lexicalCharacterSetMatchAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mCharacterSetName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalCharacterSetMatchAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalCharacterSetMatchAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalCharacterSetMatchAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalCharacterSetMatchAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalCharacterSetMatchAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalCharacterSetMatchAST : public cPtr_lexicalExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mCharacterSetName ;

//--- Constructor
  public: cPtr_lexicalCharacterSetMatchAST (const GALGAS_lstring & in_mCharacterSetName
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
// Phase 1: @lexicalCharacterSetMatchAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalCharacterSetMatchAST_2D_weak : public GALGAS_lexicalExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexicalCharacterSetMatchAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalCharacterSetMatchAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalCharacterSetMatchAST_2D_weak (const class GALGAS_lexicalCharacterSetMatchAST & inSource) ;

  public: GALGAS_lexicalCharacterSetMatchAST_2D_weak & operator = (const class GALGAS_lexicalCharacterSetMatchAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalCharacterSetMatchAST bang_lexicalCharacterSetMatchAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalCharacterSetMatchAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalCharacterSetMatchAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalCharacterSetMatchAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalCharacterSetMatchAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalCharacterMatchAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalCharacterMatchAST : public GALGAS_lexicalExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalCharacterMatchAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalCharacterMatchAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalCharacterMatchAST (const class cPtr_lexicalCharacterMatchAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lchar readProperty_mCharacter (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalCharacterMatchAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalCharacterMatchAST constructor_new (const class GALGAS_lchar & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalCharacterMatchAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalCharacterMatchAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCharacterMatchAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalCharacterMatchAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalCharacterMatchAST : public cPtr_lexicalExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lchar mProperty_mCharacter ;

//--- Constructor
  public: cPtr_lexicalCharacterMatchAST (const GALGAS_lchar & in_mCharacter
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
// Phase 1: @lexicalCharacterMatchAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalCharacterMatchAST_2D_weak : public GALGAS_lexicalExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexicalCharacterMatchAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalCharacterMatchAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalCharacterMatchAST_2D_weak (const class GALGAS_lexicalCharacterMatchAST & inSource) ;

  public: GALGAS_lexicalCharacterMatchAST_2D_weak & operator = (const class GALGAS_lexicalCharacterMatchAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalCharacterMatchAST bang_lexicalCharacterMatchAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalCharacterMatchAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalCharacterMatchAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalCharacterMatchAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalCharacterMatchAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCharacterMatchAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalCharacterIntervalMatchAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalCharacterIntervalMatchAST : public GALGAS_lexicalExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalCharacterIntervalMatchAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalCharacterIntervalMatchAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalCharacterIntervalMatchAST (const class cPtr_lexicalCharacterIntervalMatchAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lchar readProperty_mLowerBound (void) const ;

  public: class GALGAS_lchar readProperty_mUpperBound (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalCharacterIntervalMatchAST extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalCharacterIntervalMatchAST constructor_new (const class GALGAS_lchar & inOperand0,
                                                                                const class GALGAS_lchar & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalCharacterIntervalMatchAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalCharacterIntervalMatchAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalCharacterIntervalMatchAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalCharacterIntervalMatchAST : public cPtr_lexicalExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lchar mProperty_mLowerBound ;
  public: GALGAS_lchar mProperty_mUpperBound ;

//--- Constructor
  public: cPtr_lexicalCharacterIntervalMatchAST (const GALGAS_lchar & in_mLowerBound,
                                                 const GALGAS_lchar & in_mUpperBound
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
// Phase 1: @lexicalCharacterIntervalMatchAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalCharacterIntervalMatchAST_2D_weak : public GALGAS_lexicalExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexicalCharacterIntervalMatchAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalCharacterIntervalMatchAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalCharacterIntervalMatchAST_2D_weak (const class GALGAS_lexicalCharacterIntervalMatchAST & inSource) ;

  public: GALGAS_lexicalCharacterIntervalMatchAST_2D_weak & operator = (const class GALGAS_lexicalCharacterIntervalMatchAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalCharacterIntervalMatchAST bang_lexicalCharacterIntervalMatchAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalCharacterIntervalMatchAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalCharacterIntervalMatchAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalCharacterIntervalMatchAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalCharacterIntervalMatchAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalStringMatchAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalStringMatchAST : public GALGAS_lexicalExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalStringMatchAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalStringMatchAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalStringMatchAST (const class cPtr_lexicalStringMatchAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mString (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalStringMatchAST extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalStringMatchAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalStringMatchAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalStringMatchAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalStringMatchAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalStringMatchAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalStringMatchAST : public cPtr_lexicalExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mString ;

//--- Constructor
  public: cPtr_lexicalStringMatchAST (const GALGAS_lstring & in_mString
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
// Phase 1: @lexicalStringMatchAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalStringMatchAST_2D_weak : public GALGAS_lexicalExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexicalStringMatchAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalStringMatchAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalStringMatchAST_2D_weak (const class GALGAS_lexicalStringMatchAST & inSource) ;

  public: GALGAS_lexicalStringMatchAST_2D_weak & operator = (const class GALGAS_lexicalStringMatchAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalStringMatchAST bang_lexicalStringMatchAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalStringMatchAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalStringMatchAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalStringMatchAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalStringMatchAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalStringMatchAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalStringNotMatchAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalStringNotMatchAST : public GALGAS_lexicalExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalStringNotMatchAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalStringNotMatchAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalStringNotMatchAST (const class cPtr_lexicalStringNotMatchAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mString (void) const ;

  public: class GALGAS_lstring readProperty_mErrorMessage (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalStringNotMatchAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalStringNotMatchAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_lstring & inOperand1
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalStringNotMatchAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalStringNotMatchAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalStringNotMatchAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalStringNotMatchAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexicalStringNotMatchAST : public cPtr_lexicalExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mString ;
  public: GALGAS_lstring mProperty_mErrorMessage ;

//--- Constructor
  public: cPtr_lexicalStringNotMatchAST (const GALGAS_lstring & in_mString,
                                         const GALGAS_lstring & in_mErrorMessage
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
// Phase 1: @lexicalStringNotMatchAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalStringNotMatchAST_2D_weak : public GALGAS_lexicalExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexicalStringNotMatchAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalStringNotMatchAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalStringNotMatchAST_2D_weak (const class GALGAS_lexicalStringNotMatchAST & inSource) ;

  public: GALGAS_lexicalStringNotMatchAST_2D_weak & operator = (const class GALGAS_lexicalStringNotMatchAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalStringNotMatchAST bang_lexicalStringNotMatchAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalStringNotMatchAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalStringNotMatchAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalStringNotMatchAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalStringNotMatchAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalStringNotMatchAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalSendSearchListAST list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalSendSearchListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_lexicalSendSearchListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_lexicalSendSearchListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mAttributeName,
                                                 const class GALGAS_lstring & in_mSearchListName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalSendSearchListAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalSendSearchListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalSendSearchListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_lstring & inOperand1
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_lexicalSendSearchListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_lexicalSendSearchListAST add_operation (const GALGAS_lexicalSendSearchListAST & inOperand,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lexicalSendSearchListAST_2D_element inArgument0,
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
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mAttributeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSearchListNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalSendSearchListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalSendSearchListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalSendSearchListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_lexicalSendSearchListAST ;
 
} ; // End of GALGAS_lexicalSendSearchListAST class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_lexicalSendSearchListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_lexicalSendSearchListAST (const GALGAS_lexicalSendSearchListAST & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mAttributeName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mSearchListName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_lexicalSendSearchListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSendSearchListAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalSendSearchListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalSendSearchListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mAttributeName ;
  public: inline GALGAS_lstring readProperty_mAttributeName (void) const {
    return mProperty_mAttributeName ;
  }

  public: GALGAS_lstring mProperty_mSearchListName ;
  public: inline GALGAS_lstring readProperty_mSearchListName (void) const {
    return mProperty_mSearchListName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexicalSendSearchListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_lexicalSendSearchListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMAttributeName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAttributeName = inValue ;
  }

  public: inline void setter_setMSearchListName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSearchListName = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_lexicalSendSearchListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_lexicalSendSearchListAST_2D_element (const GALGAS_lstring & in_mAttributeName,
                                                      const GALGAS_lstring & in_mSearchListName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalSendSearchListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexicalSendSearchListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_lstring & inOperand1
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexicalSendSearchListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexicalSendSearchListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSendSearchListAST_2D_element ;

