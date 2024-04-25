#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-0.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionListForGeneration list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_templateInstructionListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_templateInstructionForGeneration & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateInstructionListForGeneration init (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionListForGeneration extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateInstructionListForGeneration class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_templateInstructionListForGeneration class_func_listWithValue (const class GALGAS_templateInstructionForGeneration & inOperand0
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_templateInstructionListForGeneration inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_templateInstructionForGeneration & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_templateInstructionListForGeneration add_operation (const GALGAS_templateInstructionListForGeneration & inOperand,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_templateInstructionForGeneration constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_templateInstructionForGeneration constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_templateInstructionForGeneration & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_templateInstructionForGeneration & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_templateInstructionForGeneration & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GALGAS_templateInstructionForGeneration constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_templateInstructionForGeneration & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_templateInstructionForGeneration & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_templateInstructionForGeneration getter_mInstructionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_templateInstructionListForGeneration_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_templateInstructionListForGeneration ;
 
} ; // End of GALGAS_templateInstructionListForGeneration class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_templateInstructionListForGeneration : public cGenericAbstractEnumerator {
  public: cEnumerator_templateInstructionListForGeneration (const GALGAS_templateInstructionListForGeneration & inEnumeratedObject,
                                                            const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_templateInstructionForGeneration current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_templateInstructionListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionListForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionListForGeneration_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_templateInstructionForGeneration mProperty_mInstruction ;
  public: inline GALGAS_templateInstructionForGeneration readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_templateInstructionListForGeneration_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GALGAS_templateInstructionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_templateInstructionListForGeneration_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_templateInstructionListForGeneration_2D_element (const GALGAS_templateInstructionForGeneration & in_mInstruction) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateInstructionListForGeneration_2D_element init_21_ (const class GALGAS_templateInstructionForGeneration & inOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateInstructionListForGeneration_2D_element class_func_new (const class GALGAS_templateInstructionForGeneration & inOperand0,
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
 
} ; // End of GALGAS_templateInstructionListForGeneration_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionListForGeneration_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateBlockInstructionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateBlockInstructionForGeneration : public GALGAS_templateInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_templateBlockInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateBlockInstructionForGeneration (const class cPtr_templateBlockInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_semanticExpressionForGeneration readProperty_mExpression (void) const ;

  public: class GALGAS_location readProperty_mLocation (void) const ;

  public: class GALGAS_templateInstructionListForGeneration readProperty_mBlockInstructionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateBlockInstructionForGeneration init_21__21__21_ (const class GALGAS_semanticExpressionForGeneration & inOperand0,
                                                                                const class GALGAS_location & inOperand1,
                                                                                const class GALGAS_templateInstructionListForGeneration & inOperand2,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateBlockInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateBlockInstructionForGeneration class_func_new (const class GALGAS_semanticExpressionForGeneration & inOperand0,
                                                                                    const class GALGAS_location & inOperand1,
                                                                                    const class GALGAS_templateInstructionListForGeneration & inOperand2
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateBlockInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateBlockInstructionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateBlockInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateBlockInstructionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateBlockInstructionForGeneration : public cPtr_templateInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateBlockInstructionForGeneration_init_21__21__21_ (const class GALGAS_semanticExpressionForGeneration & inOperand0,
                                                                       const class GALGAS_location & inOperand1,
                                                                       const class GALGAS_templateInstructionListForGeneration & inOperand2,
                                                                       Compiler * inCompiler) ;


//--- Extension method templateCodeGeneration
  public: virtual void method_templateCodeGeneration (class GALGAS_string & arg_ioGeneratedCode,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_uint & arg_ioTemporaryVariableIndex,
           class GALGAS_stringset & arg_ioUnusedVariableCppNameSet,
           class GALGAS_bool & arg_ioUseColumnMarker,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_semanticExpressionForGeneration mProperty_mExpression ;
  public: GALGAS_location mProperty_mLocation ;
  public: GALGAS_templateInstructionListForGeneration mProperty_mBlockInstructionList ;


//--- Default constructor
  public: cPtr_templateBlockInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateBlockInstructionForGeneration (const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                      const GALGAS_location & in_mLocation,
                                                      const GALGAS_templateInstructionListForGeneration & in_mBlockInstructionList
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateBlockInstructionForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateBlockInstructionForGeneration_2D_weak : public GALGAS_templateInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateBlockInstructionForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateBlockInstructionForGeneration_2D_weak (const class GALGAS_templateBlockInstructionForGeneration & inSource) ;

  public: GALGAS_templateBlockInstructionForGeneration_2D_weak & operator = (const class GALGAS_templateBlockInstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateBlockInstructionForGeneration bang_templateBlockInstructionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateBlockInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateBlockInstructionForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateBlockInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateBlockInstructionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateBlockInstructionForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionGetColumnLocationForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionGetColumnLocationForGeneration : public GALGAS_templateInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionGetColumnLocationForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateInstructionGetColumnLocationForGeneration (const class cPtr_templateInstructionGetColumnLocationForGeneration * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateInstructionGetColumnLocationForGeneration init (Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionGetColumnLocationForGeneration extractObject (const GALGAS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateInstructionGetColumnLocationForGeneration class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateInstructionGetColumnLocationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateInstructionGetColumnLocationForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateInstructionGetColumnLocationForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateInstructionGetColumnLocationForGeneration : public cPtr_templateInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateInstructionGetColumnLocationForGeneration_init (Compiler * inCompiler) ;


//--- Extension method templateCodeGeneration
  public: virtual void method_templateCodeGeneration (class GALGAS_string & arg_ioGeneratedCode,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_uint & arg_ioTemporaryVariableIndex,
           class GALGAS_stringset & arg_ioUnusedVariableCppNameSet,
           class GALGAS_bool & arg_ioUseColumnMarker,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_templateInstructionGetColumnLocationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateInstructionGetColumnLocationForGeneration (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionGetColumnLocationForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak : public GALGAS_templateInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak (const class GALGAS_templateInstructionGetColumnLocationForGeneration & inSource) ;

  public: GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak & operator = (const class GALGAS_templateInstructionGetColumnLocationForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateInstructionGetColumnLocationForGeneration bang_templateInstructionGetColumnLocationForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionGotoColumnLocationForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionGotoColumnLocationForGeneration : public GALGAS_templateInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionGotoColumnLocationForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateInstructionGotoColumnLocationForGeneration (const class cPtr_templateInstructionGotoColumnLocationForGeneration * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateInstructionGotoColumnLocationForGeneration init (Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionGotoColumnLocationForGeneration extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateInstructionGotoColumnLocationForGeneration class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateInstructionGotoColumnLocationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateInstructionGotoColumnLocationForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateInstructionGotoColumnLocationForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateInstructionGotoColumnLocationForGeneration : public cPtr_templateInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateInstructionGotoColumnLocationForGeneration_init (Compiler * inCompiler) ;


//--- Extension method templateCodeGeneration
  public: virtual void method_templateCodeGeneration (class GALGAS_string & arg_ioGeneratedCode,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_uint & arg_ioTemporaryVariableIndex,
           class GALGAS_stringset & arg_ioUnusedVariableCppNameSet,
           class GALGAS_bool & arg_ioUseColumnMarker,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_templateInstructionGotoColumnLocationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateInstructionGotoColumnLocationForGeneration (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionGotoColumnLocationForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionGotoColumnLocationForGeneration_2D_weak : public GALGAS_templateInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionGotoColumnLocationForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateInstructionGotoColumnLocationForGeneration_2D_weak (const class GALGAS_templateInstructionGotoColumnLocationForGeneration & inSource) ;

  public: GALGAS_templateInstructionGotoColumnLocationForGeneration_2D_weak & operator = (const class GALGAS_templateInstructionGotoColumnLocationForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateInstructionGotoColumnLocationForGeneration bang_templateInstructionGotoColumnLocationForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionGotoColumnLocationForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateInstructionGotoColumnLocationForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateInstructionGotoColumnLocationForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateInstructionGotoColumnLocationForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionIfBranchListForGeneration list
//
//--------------------------------------------------------------------------------------------------

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

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateInstructionIfBranchListForGeneration init (Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionIfBranchListForGeneration extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateInstructionIfBranchListForGeneration class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_templateInstructionIfBranchListForGeneration class_func_listWithValue (const class GALGAS_semanticExpressionForGeneration & inOperand0,
                                                                                                     const class GALGAS_templateInstructionListForGeneration & inOperand1
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_templateInstructionIfBranchListForGeneration inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_semanticExpressionForGeneration & inOperand0,
                                                     const class GALGAS_templateInstructionListForGeneration & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_templateInstructionIfBranchListForGeneration add_operation (const GALGAS_templateInstructionIfBranchListForGeneration & inOperand,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_semanticExpressionForGeneration constinArgument0,
                                               class GALGAS_templateInstructionListForGeneration constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_semanticExpressionForGeneration constinArgument0,
                                                      class GALGAS_templateInstructionListForGeneration constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_semanticExpressionForGeneration & outArgument0,
                                                 class GALGAS_templateInstructionListForGeneration & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_semanticExpressionForGeneration & outArgument0,
                                                class GALGAS_templateInstructionListForGeneration & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_semanticExpressionForGeneration & outArgument0,
                                                      class GALGAS_templateInstructionListForGeneration & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExpressionAtIndex (class GALGAS_semanticExpressionForGeneration constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GALGAS_templateInstructionListForGeneration constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_semanticExpressionForGeneration & outArgument0,
                                              class GALGAS_templateInstructionListForGeneration & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_semanticExpressionForGeneration & outArgument0,
                                             class GALGAS_templateInstructionListForGeneration & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mExpressionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListForGeneration getter_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateInstructionIfBranchListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateInstructionIfBranchListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateInstructionIfBranchListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_templateInstructionIfBranchListForGeneration_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_templateInstructionIfBranchListForGeneration ;
 
} ; // End of GALGAS_templateInstructionIfBranchListForGeneration class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_templateInstructionIfBranchListForGeneration : public cGenericAbstractEnumerator {
  public: cEnumerator_templateInstructionIfBranchListForGeneration (const GALGAS_templateInstructionIfBranchListForGeneration & inEnumeratedObject,
                                                                    const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_semanticExpressionForGeneration current_mExpression (LOCATION_ARGS) const ;
  public: class GALGAS_templateInstructionListForGeneration current_mInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_templateInstructionIfBranchListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionIfBranchListForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionIfBranchListForGeneration_2D_element struct
//
//--------------------------------------------------------------------------------------------------

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
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_templateInstructionIfBranchListForGeneration_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMExpression (const GALGAS_semanticExpressionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

  public: inline void setter_setMInstructionList (const GALGAS_templateInstructionListForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_templateInstructionIfBranchListForGeneration_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_templateInstructionIfBranchListForGeneration_2D_element (const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                                          const GALGAS_templateInstructionListForGeneration & in_mInstructionList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateInstructionIfBranchListForGeneration_2D_element init_21__21_ (const class GALGAS_semanticExpressionForGeneration & inOperand0,
                                                                                              const class GALGAS_templateInstructionListForGeneration & inOperand1,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionIfBranchListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateInstructionIfBranchListForGeneration_2D_element class_func_new (const class GALGAS_semanticExpressionForGeneration & inOperand0,
                                                                                                      const class GALGAS_templateInstructionListForGeneration & inOperand1,
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
 
} ; // End of GALGAS_templateInstructionIfBranchListForGeneration_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionIfBranchListForGeneration_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionIfForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionIfForGeneration : public GALGAS_templateInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionIfForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateInstructionIfForGeneration (const class cPtr_templateInstructionIfForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_templateInstructionIfBranchListForGeneration readProperty_mTemplateInstructionIfBranchList (void) const ;

  public: class GALGAS_templateInstructionListForGeneration readProperty_mElseInstructionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateInstructionIfForGeneration init_21__21_ (const class GALGAS_templateInstructionIfBranchListForGeneration & inOperand0,
                                                                         const class GALGAS_templateInstructionListForGeneration & inOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionIfForGeneration extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateInstructionIfForGeneration class_func_new (const class GALGAS_templateInstructionIfBranchListForGeneration & inOperand0,
                                                                                 const class GALGAS_templateInstructionListForGeneration & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateInstructionIfForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateInstructionIfForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionIfForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateInstructionIfForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateInstructionIfForGeneration : public cPtr_templateInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateInstructionIfForGeneration_init_21__21_ (const class GALGAS_templateInstructionIfBranchListForGeneration & inOperand0,
                                                                const class GALGAS_templateInstructionListForGeneration & inOperand1,
                                                                Compiler * inCompiler) ;


//--- Extension method templateCodeGeneration
  public: virtual void method_templateCodeGeneration (class GALGAS_string & arg_ioGeneratedCode,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_uint & arg_ioTemporaryVariableIndex,
           class GALGAS_stringset & arg_ioUnusedVariableCppNameSet,
           class GALGAS_bool & arg_ioUseColumnMarker,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_templateInstructionIfBranchListForGeneration mProperty_mTemplateInstructionIfBranchList ;
  public: GALGAS_templateInstructionListForGeneration mProperty_mElseInstructionList ;


//--- Default constructor
  public: cPtr_templateInstructionIfForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateInstructionIfForGeneration (const GALGAS_templateInstructionIfBranchListForGeneration & in_mTemplateInstructionIfBranchList,
                                                   const GALGAS_templateInstructionListForGeneration & in_mElseInstructionList
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionIfForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionIfForGeneration_2D_weak : public GALGAS_templateInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionIfForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateInstructionIfForGeneration_2D_weak (const class GALGAS_templateInstructionIfForGeneration & inSource) ;

  public: GALGAS_templateInstructionIfForGeneration_2D_weak & operator = (const class GALGAS_templateInstructionIfForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateInstructionIfForGeneration bang_templateInstructionIfForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionIfForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateInstructionIfForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateInstructionIfForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateInstructionIfForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionIfForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateVariableMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_templateVariableMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_templateVariableMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_templateVariableMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_templateVariableMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_templateVariableMap (const GALGAS_templateVariableMap & inSource) ;
  public: GALGAS_templateVariableMap & operator = (const GALGAS_templateVariableMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateVariableMap init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateVariableMap extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateVariableMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_templateVariableMap class_func_mapWithMapToOverride (const class GALGAS_templateVariableMap & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_unifiedTypeMapEntry & inOperand1,
                                                     const class GALGAS_string & inOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_templateVariableMap add_operation (const GALGAS_templateVariableMap & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_unifiedTypeMapEntry constinArgument1,
                                                  class GALGAS_string constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCppNameForKey (class GALGAS_string constinArgument0,
                                                          class GALGAS_string constinArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeForKey (class GALGAS_unifiedTypeMapEntry constinArgument0,
                                                       class GALGAS_string constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_unifiedTypeMapEntry & outArgument1,
                                                  class GALGAS_string & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mCppNameForKey (const class GALGAS_string & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapEntry getter_mTypeForKey (const class GALGAS_string & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateVariableMap getter_overriddenMap (Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GALGAS_templateVariableMap_2D_element_3F_ readSubscript__3F_ (const class GALGAS_string & in0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_templateVariableMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                const GALGAS_string & inKey
                                                                                                COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_templateVariableMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_templateVariableMap ;
 
} ; // End of GALGAS_templateVariableMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_templateVariableMap : public cGenericAbstractEnumerator {
  public: cEnumerator_templateVariableMap (const GALGAS_templateVariableMap & inEnumeratedObject,
                                           const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_unifiedTypeMapEntry current_mType (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mCppName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_templateVariableMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateVariableMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@templateVariableMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_templateVariableMap : public cMapElement {
//--- Map attributes
  public: GALGAS_unifiedTypeMapEntry mProperty_mType ;
  public: GALGAS_string mProperty_mCppName ;

//--- Constructors
  public: cMapElement_templateVariableMap (const GALGAS_templateVariableMap_2D_element & inValue
                                           COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_templateVariableMap (const GALGAS_lstring & inKey,
                                           const GALGAS_unifiedTypeMapEntry & in_mType,
                                           const GALGAS_string & in_mCppName
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
// Phase 1: @templateVariableMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateVariableMap_2D_element : public AC_GALGAS_root {
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

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_templateVariableMap_2D_element (void) ;

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

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_templateVariableMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_templateVariableMap_2D_element (const GALGAS_lstring & in_lkey,
                                                 const GALGAS_unifiedTypeMapEntry & in_mType,
                                                 const GALGAS_string & in_mCppName) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateVariableMap_2D_element init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_unifiedTypeMapEntry & inOperand1,
                                                                         const class GALGAS_string & inOperand2,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateVariableMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateVariableMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_unifiedTypeMapEntry & inOperand1,
                                                                             const class GALGAS_string & inOperand2,
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
 
} ; // End of GALGAS_templateVariableMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateVariableMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: templateVariableMap-element? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateVariableMap_2D_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_templateVariableMap_2D_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_templateVariableMap_2D_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_templateVariableMap_2D_element_3F_ (const GALGAS_templateVariableMap_2D_element & inValue) ;
  public: static GALGAS_templateVariableMap_2D_element_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_templateVariableMap_2D_element unwrappedValue (void) const {
    return mValue ;
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
  public: static GALGAS_templateVariableMap_2D_element_3F_ extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateVariableMap_2D_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateVariableMap_2D_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @unifiedTypeMapElementClass reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_unifiedTypeMapElementClass : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_unifiedTypeMapElementClass (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_unifiedTypeMapElementClass (const class cPtr_unifiedTypeMapElementClass * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_typeDefinition readProperty_mDefinition (void) const ;
  public: void setProperty_mDefinition (const GALGAS_typeDefinition & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_unifiedTypeMapElementClass init_21_ (const class GALGAS_typeDefinition & inOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_unifiedTypeMapElementClass extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_unifiedTypeMapElementClass class_func_new (const class GALGAS_typeDefinition & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_unifiedTypeMapElementClass & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_unifiedTypeMapElementClass class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapElementClass ;

//--------------------------------------------------------------------------------------------------
//   enum typeDefinition
//--------------------------------------------------------------------------------------------------

class GALGAS_typeDefinition : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_typeDefinition (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_unsolved,
    enum_solved
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_solved (class GALGAS_unifiedTypeDefinition & out_definition) const ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
    mAssociatedValues.drop () ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_typeDefinition extractObject (const GALGAS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_typeDefinition class_func_solved (const class GALGAS_unifiedTypeDefinition & inOperand0
                                                                COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_typeDefinition class_func_unsolved (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_solved (class GALGAS_unifiedTypeDefinition & outArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSolved (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isUnsolved (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_typeDefinition_2D_solved_3F_ getter_solved (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_typeDefinition class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeDefinition ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @unifiedTypeMapElementClass class
//
//--------------------------------------------------------------------------------------------------

class cPtr_unifiedTypeMapElementClass : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void unifiedTypeMapElementClass_init_21_ (const class GALGAS_typeDefinition & inOperand0,
                                                    Compiler * inCompiler) ;


//--- Extension getter definition
  public: virtual class GALGAS_unifiedTypeDefinition getter_definition (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Properties
  public: GALGAS_typeDefinition mProperty_mDefinition ;


//--- Default constructor
  public: cPtr_unifiedTypeMapElementClass (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_unifiedTypeMapElementClass (const GALGAS_typeDefinition & in_mDefinition
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @unifiedTypeMapElementClass_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_unifiedTypeMapElementClass_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_unifiedTypeMapElementClass_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_unifiedTypeMapElementClass_2D_weak (const class GALGAS_unifiedTypeMapElementClass & inSource) ;

  public: GALGAS_unifiedTypeMapElementClass_2D_weak & operator = (const class GALGAS_unifiedTypeMapElementClass & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_unifiedTypeMapElementClass bang_unifiedTypeMapElementClass_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_unifiedTypeMapElementClass_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_unifiedTypeMapElementClass_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_unifiedTypeMapElementClass_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_unifiedTypeMapElementClass_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapElementClass_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @unifiedTypeMapEntry_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_unifiedTypeMapEntry_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_unifiedTypeMapElementClass_2D_weak mProperty_weakElement ;
  public: inline GALGAS_unifiedTypeMapElementClass_2D_weak readProperty_weakElement (void) const {
    return mProperty_weakElement ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_unifiedTypeMapEntry_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setWeakElement (const GALGAS_unifiedTypeMapElementClass_2D_weak & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_weakElement = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_unifiedTypeMapEntry_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_unifiedTypeMapEntry_2D_element (const GALGAS_unifiedTypeMapElementClass_2D_weak & in_weakElement) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_unifiedTypeMapEntry_2D_element init_21_ (const class GALGAS_unifiedTypeMapElementClass_2D_weak & inOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_unifiedTypeMapEntry_2D_element extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_unifiedTypeMapEntry_2D_element class_func_new (const class GALGAS_unifiedTypeMapElementClass_2D_weak & inOperand0,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_unifiedTypeMapEntry_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_unifiedTypeMapEntry_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapEntry_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: unifiedTypeMapEntry-element? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_unifiedTypeMapEntry_2D_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_unifiedTypeMapEntry_2D_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_unifiedTypeMapEntry_2D_element_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_unifiedTypeMapEntry_2D_element_3F_ (const GALGAS_unifiedTypeMapEntry_2D_element & inValue) ;
  public: static GALGAS_unifiedTypeMapEntry_2D_element_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_unifiedTypeMapEntry_2D_element unwrappedValue (void) const {
    return mValue ;
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
  public: static GALGAS_unifiedTypeMapEntry_2D_element_3F_ extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_unifiedTypeMapEntry_2D_element_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapEntry_2D_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @predefinedTypes struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_predefinedTypes : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_unifiedTypeMapEntry mProperty_mLocationType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mLocationType (void) const {
    return mProperty_mLocationType ;
  }

  public: GALGAS_unifiedTypeMapEntry mProperty_mBoolType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mBoolType (void) const {
    return mProperty_mBoolType ;
  }

  public: GALGAS_unifiedTypeMapEntry mProperty_mCharType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mCharType (void) const {
    return mProperty_mCharType ;
  }

  public: GALGAS_unifiedTypeMapEntry mProperty_mStringType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mStringType (void) const {
    return mProperty_mStringType ;
  }

  public: GALGAS_unifiedTypeMapEntry mProperty_mUIntType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mUIntType (void) const {
    return mProperty_mUIntType ;
  }

  public: GALGAS_unifiedTypeMapEntry mProperty_mSIntType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mSIntType (void) const {
    return mProperty_mSIntType ;
  }

  public: GALGAS_unifiedTypeMapEntry mProperty_mUInt_36__34_Type ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mUInt_36__34_Type (void) const {
    return mProperty_mUInt_36__34_Type ;
  }

  public: GALGAS_unifiedTypeMapEntry mProperty_mSInt_36__34_Type ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mSInt_36__34_Type (void) const {
    return mProperty_mSInt_36__34_Type ;
  }

  public: GALGAS_unifiedTypeMapEntry mProperty_mDoubleType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mDoubleType (void) const {
    return mProperty_mDoubleType ;
  }

  public: GALGAS_unifiedTypeMapEntry mProperty_mLBoolType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mLBoolType (void) const {
    return mProperty_mLBoolType ;
  }

  public: GALGAS_unifiedTypeMapEntry mProperty_mLCharType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mLCharType (void) const {
    return mProperty_mLCharType ;
  }

  public: GALGAS_unifiedTypeMapEntry mProperty_mLStringType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mLStringType (void) const {
    return mProperty_mLStringType ;
  }

  public: GALGAS_unifiedTypeMapEntry mProperty_mLUIntType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mLUIntType (void) const {
    return mProperty_mLUIntType ;
  }

  public: GALGAS_unifiedTypeMapEntry mProperty_mLSIntType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mLSIntType (void) const {
    return mProperty_mLSIntType ;
  }

  public: GALGAS_unifiedTypeMapEntry mProperty_mLUInt_36__34_Type ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mLUInt_36__34_Type (void) const {
    return mProperty_mLUInt_36__34_Type ;
  }

  public: GALGAS_unifiedTypeMapEntry mProperty_mLSInt_36__34_Type ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mLSInt_36__34_Type (void) const {
    return mProperty_mLSInt_36__34_Type ;
  }

  public: GALGAS_unifiedTypeMapEntry mProperty_mLDoubleType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mLDoubleType (void) const {
    return mProperty_mLDoubleType ;
  }

  public: GALGAS_unifiedTypeMapEntry mProperty_mStringListType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mStringListType (void) const {
    return mProperty_mStringListType ;
  }

  public: GALGAS_unifiedTypeMapEntry mProperty_mLBigIntType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mLBigIntType (void) const {
    return mProperty_mLBigIntType ;
  }

  public: GALGAS_unifiedTypeMapEntry mProperty_mBigIntType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mBigIntType (void) const {
    return mProperty_mBigIntType ;
  }

  public: GALGAS_unifiedTypeMapEntry mProperty_mStringSetType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mStringSetType (void) const {
    return mProperty_mStringSetType ;
  }

  public: GALGAS_unifiedTypeMapEntry mProperty_mLStringListType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mLStringListType (void) const {
    return mProperty_mLStringListType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_predefinedTypes (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLocationType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLocationType = inValue ;
  }

  public: inline void setter_setMBoolType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBoolType = inValue ;
  }

  public: inline void setter_setMCharType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCharType = inValue ;
  }

  public: inline void setter_setMStringType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStringType = inValue ;
  }

  public: inline void setter_setMUIntType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUIntType = inValue ;
  }

  public: inline void setter_setMSIntType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSIntType = inValue ;
  }

  public: inline void setter_setMUInt_36__34_Type (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUInt_36__34_Type = inValue ;
  }

  public: inline void setter_setMSInt_36__34_Type (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSInt_36__34_Type = inValue ;
  }

  public: inline void setter_setMDoubleType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDoubleType = inValue ;
  }

  public: inline void setter_setMLBoolType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLBoolType = inValue ;
  }

  public: inline void setter_setMLCharType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLCharType = inValue ;
  }

  public: inline void setter_setMLStringType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLStringType = inValue ;
  }

  public: inline void setter_setMLUIntType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLUIntType = inValue ;
  }

  public: inline void setter_setMLSIntType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLSIntType = inValue ;
  }

  public: inline void setter_setMLUInt_36__34_Type (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLUInt_36__34_Type = inValue ;
  }

  public: inline void setter_setMLSInt_36__34_Type (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLSInt_36__34_Type = inValue ;
  }

  public: inline void setter_setMLDoubleType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLDoubleType = inValue ;
  }

  public: inline void setter_setMStringListType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStringListType = inValue ;
  }

  public: inline void setter_setMLBigIntType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLBigIntType = inValue ;
  }

  public: inline void setter_setMBigIntType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBigIntType = inValue ;
  }

  public: inline void setter_setMStringSetType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStringSetType = inValue ;
  }

  public: inline void setter_setMLStringListType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLStringListType = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_predefinedTypes (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_predefinedTypes (const GALGAS_unifiedTypeMapEntry & in_mLocationType,
                                  const GALGAS_unifiedTypeMapEntry & in_mBoolType,
                                  const GALGAS_unifiedTypeMapEntry & in_mCharType,
                                  const GALGAS_unifiedTypeMapEntry & in_mStringType,
                                  const GALGAS_unifiedTypeMapEntry & in_mUIntType,
                                  const GALGAS_unifiedTypeMapEntry & in_mSIntType,
                                  const GALGAS_unifiedTypeMapEntry & in_mUInt_36__34_Type,
                                  const GALGAS_unifiedTypeMapEntry & in_mSInt_36__34_Type,
                                  const GALGAS_unifiedTypeMapEntry & in_mDoubleType,
                                  const GALGAS_unifiedTypeMapEntry & in_mLBoolType,
                                  const GALGAS_unifiedTypeMapEntry & in_mLCharType,
                                  const GALGAS_unifiedTypeMapEntry & in_mLStringType,
                                  const GALGAS_unifiedTypeMapEntry & in_mLUIntType,
                                  const GALGAS_unifiedTypeMapEntry & in_mLSIntType,
                                  const GALGAS_unifiedTypeMapEntry & in_mLUInt_36__34_Type,
                                  const GALGAS_unifiedTypeMapEntry & in_mLSInt_36__34_Type,
                                  const GALGAS_unifiedTypeMapEntry & in_mLDoubleType,
                                  const GALGAS_unifiedTypeMapEntry & in_mStringListType,
                                  const GALGAS_unifiedTypeMapEntry & in_mLBigIntType,
                                  const GALGAS_unifiedTypeMapEntry & in_mBigIntType,
                                  const GALGAS_unifiedTypeMapEntry & in_mStringSetType,
                                  const GALGAS_unifiedTypeMapEntry & in_mLStringListType) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_predefinedTypes init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                                                                      const class GALGAS_unifiedTypeMapEntry & inOperand1,
                                                                                                                                      const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                                                                                      const class GALGAS_unifiedTypeMapEntry & inOperand3,
                                                                                                                                      const class GALGAS_unifiedTypeMapEntry & inOperand4,
                                                                                                                                      const class GALGAS_unifiedTypeMapEntry & inOperand5,
                                                                                                                                      const class GALGAS_unifiedTypeMapEntry & inOperand6,
                                                                                                                                      const class GALGAS_unifiedTypeMapEntry & inOperand7,
                                                                                                                                      const class GALGAS_unifiedTypeMapEntry & inOperand8,
                                                                                                                                      const class GALGAS_unifiedTypeMapEntry & inOperand9,
                                                                                                                                      const class GALGAS_unifiedTypeMapEntry & inOperand10,
                                                                                                                                      const class GALGAS_unifiedTypeMapEntry & inOperand11,
                                                                                                                                      const class GALGAS_unifiedTypeMapEntry & inOperand12,
                                                                                                                                      const class GALGAS_unifiedTypeMapEntry & inOperand13,
                                                                                                                                      const class GALGAS_unifiedTypeMapEntry & inOperand14,
                                                                                                                                      const class GALGAS_unifiedTypeMapEntry & inOperand15,
                                                                                                                                      const class GALGAS_unifiedTypeMapEntry & inOperand16,
                                                                                                                                      const class GALGAS_unifiedTypeMapEntry & inOperand17,
                                                                                                                                      const class GALGAS_unifiedTypeMapEntry & inOperand18,
                                                                                                                                      const class GALGAS_unifiedTypeMapEntry & inOperand19,
                                                                                                                                      const class GALGAS_unifiedTypeMapEntry & inOperand20,
                                                                                                                                      const class GALGAS_unifiedTypeMapEntry & inOperand21,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_predefinedTypes extractObject (const GALGAS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_predefinedTypes class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                              const class GALGAS_unifiedTypeMapEntry & inOperand1,
                                                              const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                              const class GALGAS_unifiedTypeMapEntry & inOperand3,
                                                              const class GALGAS_unifiedTypeMapEntry & inOperand4,
                                                              const class GALGAS_unifiedTypeMapEntry & inOperand5,
                                                              const class GALGAS_unifiedTypeMapEntry & inOperand6,
                                                              const class GALGAS_unifiedTypeMapEntry & inOperand7,
                                                              const class GALGAS_unifiedTypeMapEntry & inOperand8,
                                                              const class GALGAS_unifiedTypeMapEntry & inOperand9,
                                                              const class GALGAS_unifiedTypeMapEntry & inOperand10,
                                                              const class GALGAS_unifiedTypeMapEntry & inOperand11,
                                                              const class GALGAS_unifiedTypeMapEntry & inOperand12,
                                                              const class GALGAS_unifiedTypeMapEntry & inOperand13,
                                                              const class GALGAS_unifiedTypeMapEntry & inOperand14,
                                                              const class GALGAS_unifiedTypeMapEntry & inOperand15,
                                                              const class GALGAS_unifiedTypeMapEntry & inOperand16,
                                                              const class GALGAS_unifiedTypeMapEntry & inOperand17,
                                                              const class GALGAS_unifiedTypeMapEntry & inOperand18,
                                                              const class GALGAS_unifiedTypeMapEntry & inOperand19,
                                                              const class GALGAS_unifiedTypeMapEntry & inOperand20,
                                                              const class GALGAS_unifiedTypeMapEntry & inOperand21,
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
 
} ; // End of GALGAS_predefinedTypes class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_predefinedTypes ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@templateExpressionAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_templateExpressionAnalysis (class cPtr_templateExpressionAST * inObject,
                                                     const class GALGAS_lstring constin_inUsefulnessCallerEntityName,
                                                     class GALGAS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                     const class GALGAS_templateAnalysisContext constin_inAnalysisContext,
                                                     class GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                     class GALGAS_semanticExpressionForGeneration & out_outExpression,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @usefulEntitiesGraph graph
//
//--------------------------------------------------------------------------------------------------

class GALGAS_usefulEntitiesGraph : public AC_GALGAS_graph {
//--------------------------------- Default constructor
  public: GALGAS_usefulEntitiesGraph (void) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_usefulEntitiesGraph init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_usefulEntitiesGraph extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_usefulEntitiesGraph class_func_emptyGraph (LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_addNode (class GALGAS_lstring inArgument0,
                                                class GALGAS_lstring inArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_circularities (class GALGAS_lstringlist & outArgument0,
                                                      class GALGAS_lstringlist & outArgument1
                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_depthFirstTopologicalSort (class GALGAS_lstringlist & outArgument0,
                                                                  class GALGAS_lstringlist & outArgument1,
                                                                  class GALGAS_lstringlist & outArgument2,
                                                                  class GALGAS_lstringlist & outArgument3,
                                                                  Compiler * inCompiler
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
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_accessibleNodesFrom (const class GALGAS_lstringlist & constinOperand0,
                                                                                const class GALGAS_stringset & constinOperand1,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_nodeList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_usefulEntitiesGraph getter_reversedGraph (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_usefulEntitiesGraph getter_subgraphFromNodes (const class GALGAS_lstringlist & constinOperand0,
                                                                                      const class GALGAS_stringset & constinOperand1,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_usefulEntitiesGraph class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_usefulEntitiesGraph ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @unifiedTypeMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_unifiedTypeMap ;

//--------------------------------------------------------------------------------------------------

class GALGAS_unifiedTypeMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_unifiedTypeMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_unifiedTypeMap (const GALGAS_unifiedTypeMap & inSource) ;
  public: GALGAS_unifiedTypeMap & operator = (const GALGAS_unifiedTypeMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_unifiedTypeMap init (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_unifiedTypeMap extractObject (const GALGAS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_unifiedTypeMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_unifiedTypeMap class_func_mapWithMapToOverride (const class GALGAS_unifiedTypeMap & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_unifiedTypeMapElementClass & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap add_operation (const GALGAS_unifiedTypeMap & inOperand,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_internalInsertKey (class GALGAS_lstring constinArgument0,
                                                          class GALGAS_unifiedTypeMapElementClass constinArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMElementForKey (class GALGAS_unifiedTypeMapElementClass constinArgument0,
                                                          class GALGAS_string constinArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapElementClass getter_mElementForKey (const class GALGAS_string & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap getter_overriddenMap (Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_element_3F_ readSubscript__3F_ (const class GALGAS_string & in0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_unifiedTypeMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                           const GALGAS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_unifiedTypeMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_unifiedTypeMap ;
 
} ; // End of GALGAS_unifiedTypeMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_unifiedTypeMap : public cGenericAbstractEnumerator {
  public: cEnumerator_unifiedTypeMap (const GALGAS_unifiedTypeMap & inEnumeratedObject,
                                      const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_unifiedTypeMapElementClass current_mElement (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_unifiedTypeMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@unifiedTypeMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_unifiedTypeMap : public cMapElement {
//--- Map attributes
  public: GALGAS_unifiedTypeMapElementClass mProperty_mElement ;

//--- Constructors
  public: cMapElement_unifiedTypeMap (const GALGAS_unifiedTypeMap_2D_element & inValue
                                      COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_unifiedTypeMap (const GALGAS_lstring & inKey,
                                      const GALGAS_unifiedTypeMapElementClass & in_mElement
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
// Phase 1: @filewrapperMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_filewrapperMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_filewrapperMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_filewrapperMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_filewrapperMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_filewrapperMap (const GALGAS_filewrapperMap & inSource) ;
  public: GALGAS_filewrapperMap & operator = (const GALGAS_filewrapperMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_filewrapperMap init (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_filewrapperMap extractObject (const GALGAS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_filewrapperMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_filewrapperMap class_func_mapWithMapToOverride (const class GALGAS_filewrapperMap & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_lstringlist & inOperand2,
                                                     const class GALGAS_wrapperFileMap & inOperand3,
                                                     const class GALGAS_wrapperDirectoryMap & inOperand4,
                                                     const class GALGAS_filewrapperTemplateMap & inOperand5,
                                                     const class GALGAS_bool & inOperand6,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_filewrapperMap add_operation (const GALGAS_filewrapperMap & inOperand,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lstring constinArgument1,
                                                  class GALGAS_lstringlist constinArgument2,
                                                  class GALGAS_wrapperFileMap constinArgument3,
                                                  class GALGAS_wrapperDirectoryMap constinArgument4,
                                                  class GALGAS_filewrapperTemplateMap constinArgument5,
                                                  class GALGAS_bool constinArgument6,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFilewrapperDirectoryMapForKey (class GALGAS_wrapperDirectoryMap constinArgument0,
                                                                          class GALGAS_string constinArgument1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFilewrapperExtensionListForKey (class GALGAS_lstringlist constinArgument0,
                                                                           class GALGAS_string constinArgument1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFilewrapperFileMapForKey (class GALGAS_wrapperFileMap constinArgument0,
                                                                     class GALGAS_string constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFilewrapperPathForKey (class GALGAS_lstring constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFilewrapperTemplateMapForKey (class GALGAS_filewrapperTemplateMap constinArgument0,
                                                                         class GALGAS_string constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsInternalForKey (class GALGAS_bool constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_lstringlist & outArgument2,
                                                  class GALGAS_wrapperFileMap & outArgument3,
                                                  class GALGAS_wrapperDirectoryMap & outArgument4,
                                                  class GALGAS_filewrapperTemplateMap & outArgument5,
                                                  class GALGAS_bool & outArgument6,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_wrapperDirectoryMap getter_mFilewrapperDirectoryMapForKey (const class GALGAS_string & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mFilewrapperExtensionListForKey (const class GALGAS_string & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_wrapperFileMap getter_mFilewrapperFileMapForKey (const class GALGAS_string & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFilewrapperPathForKey (const class GALGAS_string & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_filewrapperTemplateMap getter_mFilewrapperTemplateMapForKey (const class GALGAS_string & constinOperand0,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsInternalForKey (const class GALGAS_string & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_filewrapperMap getter_overriddenMap (Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GALGAS_filewrapperMap_2D_element_3F_ readSubscript__3F_ (const class GALGAS_string & in0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_filewrapperMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                           const GALGAS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_filewrapperMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_filewrapperMap ;
 
} ; // End of GALGAS_filewrapperMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_filewrapperMap : public cGenericAbstractEnumerator {
  public: cEnumerator_filewrapperMap (const GALGAS_filewrapperMap & inEnumeratedObject,
                                      const EnumerationOrder inOrder) ;

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

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @functionMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_functionMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_functionMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_functionMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_functionMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_functionMap (const GALGAS_functionMap & inSource) ;
  public: GALGAS_functionMap & operator = (const GALGAS_functionMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_functionMap init (Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_functionMap extractObject (const GALGAS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_functionMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_functionMap class_func_mapWithMapToOverride (const class GALGAS_functionMap & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_functionSignature & inOperand1,
                                                     const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                     const class GALGAS_bool & inOperand3,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_functionMap add_operation (const GALGAS_functionMap & inOperand,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_functionSignature constinArgument1,
                                                  class GALGAS_unifiedTypeMapEntry constinArgument2,
                                                  class GALGAS_bool constinArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFunctionSignatureForKey (class GALGAS_functionSignature constinArgument0,
                                                                    class GALGAS_string constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsInternalForKey (class GALGAS_bool constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMResultTypeForKey (class GALGAS_unifiedTypeMapEntry constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_functionSignature & outArgument1,
                                                  class GALGAS_unifiedTypeMapEntry & outArgument2,
                                                  class GALGAS_bool & outArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_functionSignature getter_mFunctionSignatureForKey (const class GALGAS_string & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsInternalForKey (const class GALGAS_string & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapEntry getter_mResultTypeForKey (const class GALGAS_string & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_functionMap getter_overriddenMap (Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GALGAS_functionMap_2D_element_3F_ readSubscript__3F_ (const class GALGAS_string & in0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_functionMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                        const GALGAS_string & inKey
                                                                                        COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_functionMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_functionMap ;
 
} ; // End of GALGAS_functionMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_functionMap : public cGenericAbstractEnumerator {
  public: cEnumerator_functionMap (const GALGAS_functionMap & inEnumeratedObject,
                                   const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_functionSignature current_mFunctionSignature (LOCATION_ARGS) const ;
  public: class GALGAS_unifiedTypeMapEntry current_mResultType (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mIsInternal (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_functionMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_grammarMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_grammarMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_grammarMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_grammarMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_grammarMap (const GALGAS_grammarMap & inSource) ;
  public: GALGAS_grammarMap & operator = (const GALGAS_grammarMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_grammarMap init (Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_grammarMap extractObject (const GALGAS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_grammarMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_grammarMap class_func_mapWithMapToOverride (const class GALGAS_grammarMap & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_grammarLabelMap & inOperand1,
                                                     const class GALGAS_bool & inOperand2,
                                                     const class GALGAS_bool & inOperand3,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_grammarMap add_operation (const GALGAS_grammarMap & inOperand,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertGrammar (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_grammarLabelMap constinArgument1,
                                                      class GALGAS_bool constinArgument2,
                                                      class GALGAS_bool constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHasIndexingForKey (class GALGAS_bool constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHasTranslateFeatureForKey (class GALGAS_bool constinArgument0,
                                                                      class GALGAS_string constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLabelMapForKey (class GALGAS_grammarLabelMap constinArgument0,
                                                           class GALGAS_string constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_grammarLabelMap & outArgument1,
                                                  class GALGAS_bool & outArgument2,
                                                  class GALGAS_bool & outArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasIndexingForKey (const class GALGAS_string & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasTranslateFeatureForKey (const class GALGAS_string & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_grammarLabelMap getter_mLabelMapForKey (const class GALGAS_string & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_grammarMap getter_overriddenMap (Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GALGAS_grammarMap_2D_element_3F_ readSubscript__3F_ (const class GALGAS_string & in0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_grammarMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_grammarMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_grammarMap ;
 
} ; // End of GALGAS_grammarMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_grammarMap : public cGenericAbstractEnumerator {
  public: cEnumerator_grammarMap (const GALGAS_grammarMap & inEnumeratedObject,
                                  const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_grammarLabelMap current_mLabelMap (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mHasIndexing (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mHasTranslateFeature (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_grammarMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexiqueComponentMapForSemanticAnalysis map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_lexiqueComponentMapForSemanticAnalysis ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_lexiqueComponentMapForSemanticAnalysis_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_lexiqueComponentMapForSemanticAnalysis : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_lexiqueComponentMapForSemanticAnalysis (void) ;

//--------------------------------- Handle copy
  public: GALGAS_lexiqueComponentMapForSemanticAnalysis (const GALGAS_lexiqueComponentMapForSemanticAnalysis & inSource) ;
  public: GALGAS_lexiqueComponentMapForSemanticAnalysis & operator = (const GALGAS_lexiqueComponentMapForSemanticAnalysis & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_lexiqueComponentMapForSemanticAnalysis init (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexiqueComponentMapForSemanticAnalysis extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_lexiqueComponentMapForSemanticAnalysis class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_lexiqueComponentMapForSemanticAnalysis class_func_mapWithMapToOverride (const class GALGAS_lexiqueComponentMapForSemanticAnalysis & inOperand0
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_bool & inOperand1,
                                                     const class GALGAS_terminalMap & inOperand2,
                                                     const class GALGAS_indexingListAST & inOperand3,
                                                     const class GALGAS_terminalDeclarationListAST & inOperand4,
                                                     const class GALGAS_lexicalAttributeListAST & inOperand5,
                                                     const class GALGAS_lexicalStyleListAST & inOperand6,
                                                     const class GALGAS_lexicalListDeclarationListAST & inOperand7,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_lexiqueComponentMapForSemanticAnalysis add_operation (const GALGAS_lexiqueComponentMapForSemanticAnalysis & inOperand,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_bool constinArgument1,
                                                  class GALGAS_terminalMap constinArgument2,
                                                  class GALGAS_indexingListAST constinArgument3,
                                                  class GALGAS_terminalDeclarationListAST constinArgument4,
                                                  class GALGAS_lexicalAttributeListAST constinArgument5,
                                                  class GALGAS_lexicalStyleListAST constinArgument6,
                                                  class GALGAS_lexicalListDeclarationListAST constinArgument7,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIndexingListASTForKey (class GALGAS_indexingListAST constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsTemplateForKey (class GALGAS_bool constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLexicalAttributeListASTForKey (class GALGAS_lexicalAttributeListAST constinArgument0,
                                                                          class GALGAS_string constinArgument1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLexicalListDeclarationListASTForKey (class GALGAS_lexicalListDeclarationListAST constinArgument0,
                                                                                class GALGAS_string constinArgument1,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLexicalStyleListASTForKey (class GALGAS_lexicalStyleListAST constinArgument0,
                                                                      class GALGAS_string constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTerminalListASTForKey (class GALGAS_terminalDeclarationListAST constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTerminalMapForKey (class GALGAS_terminalMap constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_bool & outArgument1,
                                                  class GALGAS_terminalMap & outArgument2,
                                                  class GALGAS_indexingListAST & outArgument3,
                                                  class GALGAS_terminalDeclarationListAST & outArgument4,
                                                  class GALGAS_lexicalAttributeListAST & outArgument5,
                                                  class GALGAS_lexicalStyleListAST & outArgument6,
                                                  class GALGAS_lexicalListDeclarationListAST & outArgument7,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_indexingListAST getter_mIndexingListASTForKey (const class GALGAS_string & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsTemplateForKey (const class GALGAS_string & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalAttributeListAST getter_mLexicalAttributeListASTForKey (const class GALGAS_string & constinOperand0,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalListDeclarationListAST getter_mLexicalListDeclarationListASTForKey (const class GALGAS_string & constinOperand0,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalStyleListAST getter_mLexicalStyleListASTForKey (const class GALGAS_string & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_terminalDeclarationListAST getter_mTerminalListASTForKey (const class GALGAS_string & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_terminalMap getter_mTerminalMapForKey (const class GALGAS_string & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexiqueComponentMapForSemanticAnalysis getter_overriddenMap (Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element_3F_ readSubscript__3F_ (const class GALGAS_string & in0,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_lexiqueComponentMapForSemanticAnalysis * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                   const GALGAS_string & inKey
                                                                                                                   COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_lexiqueComponentMapForSemanticAnalysis ;
 
} ; // End of GALGAS_lexiqueComponentMapForSemanticAnalysis class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_lexiqueComponentMapForSemanticAnalysis : public cGenericAbstractEnumerator {
  public: cEnumerator_lexiqueComponentMapForSemanticAnalysis (const GALGAS_lexiqueComponentMapForSemanticAnalysis & inEnumeratedObject,
                                                              const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mIsTemplate (LOCATION_ARGS) const ;
  public: class GALGAS_terminalMap current_mTerminalMap (LOCATION_ARGS) const ;
  public: class GALGAS_indexingListAST current_mIndexingListAST (LOCATION_ARGS) const ;
  public: class GALGAS_terminalDeclarationListAST current_mTerminalListAST (LOCATION_ARGS) const ;
  public: class GALGAS_lexicalAttributeListAST current_mLexicalAttributeListAST (LOCATION_ARGS) const ;
  public: class GALGAS_lexicalStyleListAST current_mLexicalStyleListAST (LOCATION_ARGS) const ;
  public: class GALGAS_lexicalListDeclarationListAST current_mLexicalListDeclarationListAST (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_lexiqueComponentMapForSemanticAnalysis_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueComponentMapForSemanticAnalysis ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @optionComponentMapForSemanticAnalysis map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_optionComponentMapForSemanticAnalysis ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_optionComponentMapForSemanticAnalysis_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_optionComponentMapForSemanticAnalysis : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_optionComponentMapForSemanticAnalysis (void) ;

//--------------------------------- Handle copy
  public: GALGAS_optionComponentMapForSemanticAnalysis (const GALGAS_optionComponentMapForSemanticAnalysis & inSource) ;
  public: GALGAS_optionComponentMapForSemanticAnalysis & operator = (const GALGAS_optionComponentMapForSemanticAnalysis & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_optionComponentMapForSemanticAnalysis init (Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_optionComponentMapForSemanticAnalysis extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_optionComponentMapForSemanticAnalysis class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_optionComponentMapForSemanticAnalysis class_func_mapWithMapToOverride (const class GALGAS_optionComponentMapForSemanticAnalysis & inOperand0
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_bool & inOperand1,
                                                     const class GALGAS_commandLineOptionMap & inOperand2,
                                                     const class GALGAS_commandLineOptionMap & inOperand3,
                                                     const class GALGAS_commandLineOptionMap & inOperand4,
                                                     const class GALGAS_commandLineOptionMap & inOperand5,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_optionComponentMapForSemanticAnalysis add_operation (const GALGAS_optionComponentMapForSemanticAnalysis & inOperand,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_bool constinArgument1,
                                                  class GALGAS_commandLineOptionMap constinArgument2,
                                                  class GALGAS_commandLineOptionMap constinArgument3,
                                                  class GALGAS_commandLineOptionMap constinArgument4,
                                                  class GALGAS_commandLineOptionMap constinArgument5,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBoolOptionMapForKey (class GALGAS_commandLineOptionMap constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsPredefinedForKey (class GALGAS_bool constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStringListOptionMapForKey (class GALGAS_commandLineOptionMap constinArgument0,
                                                                      class GALGAS_string constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStringOptionMapForKey (class GALGAS_commandLineOptionMap constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMUIntOptionMapForKey (class GALGAS_commandLineOptionMap constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_bool & outArgument1,
                                                  class GALGAS_commandLineOptionMap & outArgument2,
                                                  class GALGAS_commandLineOptionMap & outArgument3,
                                                  class GALGAS_commandLineOptionMap & outArgument4,
                                                  class GALGAS_commandLineOptionMap & outArgument5,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_commandLineOptionMap getter_mBoolOptionMapForKey (const class GALGAS_string & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsPredefinedForKey (const class GALGAS_string & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_commandLineOptionMap getter_mStringListOptionMapForKey (const class GALGAS_string & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_commandLineOptionMap getter_mStringOptionMapForKey (const class GALGAS_string & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_commandLineOptionMap getter_mUIntOptionMapForKey (const class GALGAS_string & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_optionComponentMapForSemanticAnalysis getter_overriddenMap (Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GALGAS_optionComponentMapForSemanticAnalysis_2D_element_3F_ readSubscript__3F_ (const class GALGAS_string & in0,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_optionComponentMapForSemanticAnalysis * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                  const GALGAS_string & inKey
                                                                                                                  COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_optionComponentMapForSemanticAnalysis_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_optionComponentMapForSemanticAnalysis ;
 
} ; // End of GALGAS_optionComponentMapForSemanticAnalysis class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_optionComponentMapForSemanticAnalysis : public cGenericAbstractEnumerator {
  public: cEnumerator_optionComponentMapForSemanticAnalysis (const GALGAS_optionComponentMapForSemanticAnalysis & inEnumeratedObject,
                                                             const EnumerationOrder inOrder) ;

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

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionComponentMapForSemanticAnalysis ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxComponentMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_syntaxComponentMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_syntaxComponentMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_syntaxComponentMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_syntaxComponentMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_syntaxComponentMap (const GALGAS_syntaxComponentMap & inSource) ;
  public: GALGAS_syntaxComponentMap & operator = (const GALGAS_syntaxComponentMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_syntaxComponentMap init (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_syntaxComponentMap extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_syntaxComponentMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_syntaxComponentMap class_func_mapWithMapToOverride (const class GALGAS_syntaxComponentMap & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_nonterminalDeclarationListAST & inOperand2,
                                                     const class GALGAS_syntaxRuleListAST & inOperand3,
                                                     const class GALGAS_bool & inOperand4,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_syntaxComponentMap add_operation (const GALGAS_syntaxComponentMap & inOperand,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lstring constinArgument1,
                                                  class GALGAS_nonterminalDeclarationListAST constinArgument2,
                                                  class GALGAS_syntaxRuleListAST constinArgument3,
                                                  class GALGAS_bool constinArgument4,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHasTranslateFeatureForKey (class GALGAS_bool constinArgument0,
                                                                      class GALGAS_string constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLexiqueNameForKey (class GALGAS_lstring constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNonterminalDeclarationListForKey (class GALGAS_nonterminalDeclarationListAST constinArgument0,
                                                                             class GALGAS_string constinArgument1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRuleListForKey (class GALGAS_syntaxRuleListAST constinArgument0,
                                                           class GALGAS_string constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_nonterminalDeclarationListAST & outArgument2,
                                                  class GALGAS_syntaxRuleListAST & outArgument3,
                                                  class GALGAS_bool & outArgument4,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasTranslateFeatureForKey (const class GALGAS_string & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLexiqueNameForKey (const class GALGAS_string & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_nonterminalDeclarationListAST getter_mNonterminalDeclarationListForKey (const class GALGAS_string & constinOperand0,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxRuleListAST getter_mRuleListForKey (const class GALGAS_string & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxComponentMap getter_overriddenMap (Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GALGAS_syntaxComponentMap_2D_element_3F_ readSubscript__3F_ (const class GALGAS_string & in0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_syntaxComponentMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_syntaxComponentMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_syntaxComponentMap ;
 
} ; // End of GALGAS_syntaxComponentMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_syntaxComponentMap : public cGenericAbstractEnumerator {
  public: cEnumerator_syntaxComponentMap (const GALGAS_syntaxComponentMap & inEnumeratedObject,
                                          const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mLexiqueName (LOCATION_ARGS) const ;
  public: class GALGAS_nonterminalDeclarationListAST current_mNonterminalDeclarationList (LOCATION_ARGS) const ;
  public: class GALGAS_syntaxRuleListAST current_mRuleList (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mHasTranslateFeature (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_syntaxComponentMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxComponentMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @internalRoutineMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_internalRoutineMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_internalRoutineMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_internalRoutineMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_internalRoutineMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_internalRoutineMap (const GALGAS_internalRoutineMap & inSource) ;
  public: GALGAS_internalRoutineMap & operator = (const GALGAS_internalRoutineMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_internalRoutineMap init (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_internalRoutineMap extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_internalRoutineMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_internalRoutineMap class_func_mapWithMapToOverride (const class GALGAS_internalRoutineMap & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_routineArgumentMap & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_internalRoutineMap add_operation (const GALGAS_internalRoutineMap & inOperand,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_routineArgumentMap constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertOrReplace (class GALGAS_lstring constinArgument0,
                                                        class GALGAS_routineArgumentMap constinArgument1
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMArgumentMapForKey (class GALGAS_routineArgumentMap constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_routineArgumentMap & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_routineArgumentMap getter_mArgumentMapForKey (const class GALGAS_string & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_internalRoutineMap getter_overriddenMap (Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GALGAS_internalRoutineMap_2D_element_3F_ readSubscript__3F_ (const class GALGAS_string & in0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_internalRoutineMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_internalRoutineMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_internalRoutineMap ;
 
} ; // End of GALGAS_internalRoutineMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_internalRoutineMap : public cGenericAbstractEnumerator {
  public: cEnumerator_internalRoutineMap (const GALGAS_internalRoutineMap & inEnumeratedObject,
                                          const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_routineArgumentMap current_mArgumentMap (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_internalRoutineMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_internalRoutineMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @routineMap struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_routineMap : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_internalRoutineMap mProperty_mInternalRoutineMap ;
  public: inline GALGAS_internalRoutineMap readProperty_mInternalRoutineMap (void) const {
    return mProperty_mInternalRoutineMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_routineMap (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInternalRoutineMap (const GALGAS_internalRoutineMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInternalRoutineMap = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_routineMap (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_routineMap (const GALGAS_internalRoutineMap & in_mInternalRoutineMap) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_routineMap init (Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_routineMap extractObject (const GALGAS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_routineMap class_func_new (Compiler * inCompiler
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
 
} ; // End of GALGAS_routineMap class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticContext struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_semanticContext : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_routineMap mProperty_routineMap ;
  public: inline GALGAS_routineMap readProperty_routineMap (void) const {
    return mProperty_routineMap ;
  }

  public: GALGAS_functionMap mProperty_mFunctionMap ;
  public: inline GALGAS_functionMap readProperty_mFunctionMap (void) const {
    return mProperty_mFunctionMap ;
  }

  public: GALGAS_filewrapperMap mProperty_mFilewrapperMap ;
  public: inline GALGAS_filewrapperMap readProperty_mFilewrapperMap (void) const {
    return mProperty_mFilewrapperMap ;
  }

  public: GALGAS_grammarMap mProperty_grammarMap ;
  public: inline GALGAS_grammarMap readProperty_grammarMap (void) const {
    return mProperty_grammarMap ;
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

  public: GALGAS_bool mProperty_galgas_34_ ;
  public: inline GALGAS_bool readProperty_galgas_34_ (void) const {
    return mProperty_galgas_34_ ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_semanticContext (void) ;

//--------------------------------- Property setters
  public: inline void setter_setRoutineMap (const GALGAS_routineMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_routineMap = inValue ;
  }

  public: inline void setter_setMFunctionMap (const GALGAS_functionMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFunctionMap = inValue ;
  }

  public: inline void setter_setMFilewrapperMap (const GALGAS_filewrapperMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFilewrapperMap = inValue ;
  }

  public: inline void setter_setGrammarMap (const GALGAS_grammarMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_grammarMap = inValue ;
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

  public: inline void setter_setGalgas_34_ (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_galgas_34_ = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_semanticContext (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_semanticContext (const GALGAS_routineMap & in_routineMap,
                                  const GALGAS_functionMap & in_mFunctionMap,
                                  const GALGAS_filewrapperMap & in_mFilewrapperMap,
                                  const GALGAS_grammarMap & in_grammarMap,
                                  const GALGAS_optionComponentMapForSemanticAnalysis & in_mOptionComponentMapForSemanticAnalysis,
                                  const GALGAS_lexiqueComponentMapForSemanticAnalysis & in_mLexiqueComponentMapForSemanticAnalysis,
                                  const GALGAS_syntaxComponentMap & in_mSyntaxComponentMapForSemanticAnalysis,
                                  const GALGAS_bool & in_galgas_34_) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_semanticContext init_21_galgas_34_ (const class GALGAS_bool & inOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_semanticContext extractObject (const GALGAS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_semanticContext class_func_new (const class GALGAS_bool & inOperand0,
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
 
} ; // End of GALGAS_semanticContext class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticContext ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateAnalysisContext struct
//
//--------------------------------------------------------------------------------------------------

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
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

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

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_templateAnalysisContext (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_templateAnalysisContext (const GALGAS_semanticContext & in_mSemanticContext,
                                          const GALGAS_predefinedTypes & in_mPredefinedTypes,
                                          const GALGAS_templateVariableMap & in_mTemplateVariableMap) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateAnalysisContext init_21__21__21_ (const class GALGAS_semanticContext & inOperand0,
                                                                  const class GALGAS_predefinedTypes & inOperand1,
                                                                  const class GALGAS_templateVariableMap & inOperand2,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateAnalysisContext extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateAnalysisContext class_func_new (const class GALGAS_semanticContext & inOperand0,
                                                                      const class GALGAS_predefinedTypes & inOperand1,
                                                                      const class GALGAS_templateVariableMap & inOperand2,
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
 
} ; // End of GALGAS_templateAnalysisContext class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateAnalysisContext ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateGetterCallInExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateGetterCallInExpressionAST : public GALGAS_templateExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_templateGetterCallInExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateGetterCallInExpressionAST (const class cPtr_templateGetterCallInExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_templateExpressionAST readProperty_mReceiverExpression (void) const ;

  public: class GALGAS_lstring readProperty_mGetterName (void) const ;

  public: class GALGAS_templateExpressionListAST readProperty_mExpressionList (void) const ;

  public: class GALGAS_location readProperty_mExpressionLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateGetterCallInExpressionAST init_21__21__21__21_ (const class GALGAS_templateExpressionAST & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1,
                                                                                const class GALGAS_templateExpressionListAST & inOperand2,
                                                                                const class GALGAS_location & inOperand3,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateGetterCallInExpressionAST extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateGetterCallInExpressionAST class_func_new (const class GALGAS_templateExpressionAST & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1,
                                                                                const class GALGAS_templateExpressionListAST & inOperand2,
                                                                                const class GALGAS_location & inOperand3
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateGetterCallInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateGetterCallInExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateGetterCallInExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateGetterCallInExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateGetterCallInExpressionAST : public cPtr_templateExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateGetterCallInExpressionAST_init_21__21__21__21_ (const class GALGAS_templateExpressionAST & inOperand0,
                                                                       const class GALGAS_lstring & inOperand1,
                                                                       const class GALGAS_templateExpressionListAST & inOperand2,
                                                                       const class GALGAS_location & inOperand3,
                                                                       Compiler * inCompiler) ;


//--- Extension method templateExpressionAnalysis
  public: virtual void method_templateExpressionAnalysis (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_templateExpressionAST mProperty_mReceiverExpression ;
  public: GALGAS_lstring mProperty_mGetterName ;
  public: GALGAS_templateExpressionListAST mProperty_mExpressionList ;
  public: GALGAS_location mProperty_mExpressionLocation ;


//--- Default constructor
  public: cPtr_templateGetterCallInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateGetterCallInExpressionAST (const GALGAS_templateExpressionAST & in_mReceiverExpression,
                                                  const GALGAS_lstring & in_mGetterName,
                                                  const GALGAS_templateExpressionListAST & in_mExpressionList,
                                                  const GALGAS_location & in_mExpressionLocation
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateGetterCallInExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateGetterCallInExpressionAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateGetterCallInExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateGetterCallInExpressionAST_2D_weak (const class GALGAS_templateGetterCallInExpressionAST & inSource) ;

  public: GALGAS_templateGetterCallInExpressionAST_2D_weak & operator = (const class GALGAS_templateGetterCallInExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateGetterCallInExpressionAST bang_templateGetterCallInExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateGetterCallInExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateGetterCallInExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateGetterCallInExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateGetterCallInExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateGetterCallInExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: [unifiedTypeMapEntry] array
//
//--------------------------------------------------------------------------------------------------

class cEnumerator__5B_unifiedTypeMapEntry_5D_ final {
//--- Constructor
  public: cEnumerator__5B_unifiedTypeMapEntry_5D_ (const class GALGAS__5B_unifiedTypeMapEntry_5D_ & inEnumeratedRange,
                                                   const EnumerationOrder inOrder) ;

//--- No copy
  private: cEnumerator__5B_unifiedTypeMapEntry_5D_ (const cEnumerator__5B_unifiedTypeMapEntry_5D_ &) = delete ;
  private: cEnumerator__5B_unifiedTypeMapEntry_5D_ & operator = (const cEnumerator__5B_unifiedTypeMapEntry_5D_ &) = delete ;

//--- 
  public: inline bool hasCurrentObject (void) const {
    return mCurrent < mSharedArray.count () ;
  }
  
//--- 
  public: inline bool hasNextObject (void) const {
    return (mCurrent + 1) < mSharedArray.count () ;
  }

//--- 
  public: inline void gotoNextObject (void) {
    mCurrent += 1 ;
  }

//--- Current element access
  public: class GALGAS_unifiedTypeMapEntry current (LOCATION_ARGS) const ;

//---- Properties
  private: const TC_Array <GALGAS_unifiedTypeMapEntry> mSharedArray ;
  private: int32_t mCurrent ;
  private: const EnumerationOrder mEnumerationOrder ;
} ;

//--------------------------------------------------------------------------------------------------

class GALGAS__5B_unifiedTypeMapEntry_5D_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: TC_Array <GALGAS_unifiedTypeMapEntry> mSharedArray ;

//--------------------------------- Default constructor
  public: GALGAS__5B_unifiedTypeMapEntry_5D_ (void) ;

//--------------------------------- Handle copy
  public: GALGAS__5B_unifiedTypeMapEntry_5D_ (const GALGAS__5B_unifiedTypeMapEntry_5D_ & inSource) ;
  public: GALGAS__5B_unifiedTypeMapEntry_5D_ & operator = (const GALGAS__5B_unifiedTypeMapEntry_5D_ & inSource) ;

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--------------------------------- Friend
friend class cEnumerator__5B_unifiedTypeMapEntry_5D_ ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS__5B_unifiedTypeMapEntry_5D_ init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS__5B_unifiedTypeMapEntry_5D_ extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS__5B_unifiedTypeMapEntry_5D_ inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS__5B_unifiedTypeMapEntry_5D_ add_operation (const GALGAS__5B_unifiedTypeMapEntry_5D_ & inOperand,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_unifiedTypeMapEntry constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_unifiedTypeMapEntry constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_count (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapEntry readSubscript__3F_ (const class GALGAS_uint & in0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_unifiedTypeMapEntry & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

 
} ; // End of GALGAS__5B_unifiedTypeMapEntry_5D_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS__5B_unifiedTypeMapEntry_5D_ ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@templateInstructionAST templateInstructionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_templateInstructionAnalysis (class cPtr_templateInstructionAST * inObject,
                                                      const class GALGAS_lstring constin_inUsefulnessCallerEntityName,
                                                      class GALGAS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                      const class GALGAS_templateAnalysisContext constin_inAnalysisContext,
                                                      class GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                      class GALGAS_templateInstructionListForGeneration & io_ioInstructionList,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@templateInstructionForGeneration templateCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_templateCodeGeneration (class cPtr_templateInstructionForGeneration * inObject,
                                                 class GALGAS_string & io_ioGeneratedCode,
                                                 class GALGAS_stringset & io_ioInclusionSet,
                                                 class GALGAS_uint & io_ioTemporaryVariableIndex,
                                                 class GALGAS_stringset & io_ioUnusedVariableCppNameSet,
                                                 class GALGAS_bool & io_ioUseColumnMarker,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//   enum templateInstructionForEnumerationAST
//--------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionForEnumerationAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionForEnumerationAST (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_implicit,
    enum_explicit
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_implicit (class GALGAS_string & out_prefix,
                                                                 class GALGAS_location & out_remplacementRange) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_explicit (class GALGAS_lstringlist & out_enumeration,
                                                                 class GALGAS_location & out_endOfProperties) const ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
    mAssociatedValues.drop () ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionForEnumerationAST extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateInstructionForEnumerationAST class_func_explicit (const class GALGAS_lstringlist & inOperand0,
                                                                                        const class GALGAS_location & inOperand1
                                                                                        COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_templateInstructionForEnumerationAST class_func_implicit (const class GALGAS_string & inOperand0,
                                                                                        const class GALGAS_location & inOperand1
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_explicit (class GALGAS_lstringlist & outArgument0,
                                                 class GALGAS_location & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_implicit (class GALGAS_string & outArgument0,
                                                 class GALGAS_location & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_templateInstructionForEnumerationAST_2D_explicit_3F_ getter_explicit (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateInstructionForEnumerationAST_2D_implicit_3F_ getter_implicit (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isExplicit (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isImplicit (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateInstructionForEnumerationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionForEnumerationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionForEnumerationAST_2D_explicit struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionForEnumerationAST_2D_explicit : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstringlist mProperty_enumeration ;
  public: inline GALGAS_lstringlist readProperty_enumeration (void) const {
    return mProperty_enumeration ;
  }

  public: GALGAS_location mProperty_endOfProperties ;
  public: inline GALGAS_location readProperty_endOfProperties (void) const {
    return mProperty_endOfProperties ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_templateInstructionForEnumerationAST_2D_explicit (void) ;

//--------------------------------- Property setters
  public: inline void setter_setEnumeration (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_enumeration = inValue ;
  }

  public: inline void setter_setEndOfProperties (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_endOfProperties = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_templateInstructionForEnumerationAST_2D_explicit (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_templateInstructionForEnumerationAST_2D_explicit (const GALGAS_lstringlist & in_enumeration,
                                                                   const GALGAS_location & in_endOfProperties) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateInstructionForEnumerationAST_2D_explicit init_21__21_ (const class GALGAS_lstringlist & inOperand0,
                                                                                       const class GALGAS_location & inOperand1,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionForEnumerationAST_2D_explicit extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateInstructionForEnumerationAST_2D_explicit class_func_new (const class GALGAS_lstringlist & inOperand0,
                                                                                               const class GALGAS_location & inOperand1,
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
 
} ; // End of GALGAS_templateInstructionForEnumerationAST_2D_explicit class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionForEnumerationAST_2D_explicit ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: templateInstructionForEnumerationAST-explicit? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionForEnumerationAST_2D_explicit_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_templateInstructionForEnumerationAST_2D_explicit mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_templateInstructionForEnumerationAST_2D_explicit_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_templateInstructionForEnumerationAST_2D_explicit_3F_ (const GALGAS_templateInstructionForEnumerationAST_2D_explicit & inValue) ;
  public: static GALGAS_templateInstructionForEnumerationAST_2D_explicit_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_templateInstructionForEnumerationAST_2D_explicit unwrappedValue (void) const {
    return mValue ;
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
  public: static GALGAS_templateInstructionForEnumerationAST_2D_explicit_3F_ extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateInstructionForEnumerationAST_2D_explicit_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionForEnumerationAST_2D_explicit_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionForEnumerationAST_2D_implicit struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionForEnumerationAST_2D_implicit : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_prefix ;
  public: inline GALGAS_string readProperty_prefix (void) const {
    return mProperty_prefix ;
  }

  public: GALGAS_location mProperty_remplacementRange ;
  public: inline GALGAS_location readProperty_remplacementRange (void) const {
    return mProperty_remplacementRange ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_templateInstructionForEnumerationAST_2D_implicit (void) ;

//--------------------------------- Property setters
  public: inline void setter_setPrefix (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_prefix = inValue ;
  }

  public: inline void setter_setRemplacementRange (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_remplacementRange = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_templateInstructionForEnumerationAST_2D_implicit (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_templateInstructionForEnumerationAST_2D_implicit (const GALGAS_string & in_prefix,
                                                                   const GALGAS_location & in_remplacementRange) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateInstructionForEnumerationAST_2D_implicit init_21__21_ (const class GALGAS_string & inOperand0,
                                                                                       const class GALGAS_location & inOperand1,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionForEnumerationAST_2D_implicit extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateInstructionForEnumerationAST_2D_implicit class_func_new (const class GALGAS_string & inOperand0,
                                                                                               const class GALGAS_location & inOperand1,
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
 
} ; // End of GALGAS_templateInstructionForEnumerationAST_2D_implicit class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionForEnumerationAST_2D_implicit ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: templateInstructionForEnumerationAST-implicit? optional
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionForEnumerationAST_2D_implicit_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GALGAS_templateInstructionForEnumerationAST_2D_implicit mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GALGAS_templateInstructionForEnumerationAST_2D_implicit_3F_ (void) ;

//--------------------------------- Dedicaced constructors
  public: GALGAS_templateInstructionForEnumerationAST_2D_implicit_3F_ (const GALGAS_templateInstructionForEnumerationAST_2D_implicit & inValue) ;
  public: static GALGAS_templateInstructionForEnumerationAST_2D_implicit_3F_ init_nil (void) ;

  public: bool isValuated (void) const ;
  public: inline GALGAS_templateInstructionForEnumerationAST_2D_implicit unwrappedValue (void) const {
    return mValue ;
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
  public: static GALGAS_templateInstructionForEnumerationAST_2D_implicit_3F_ extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateInstructionForEnumerationAST_2D_implicit_3F_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionForEnumerationAST_2D_implicit_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionForeachAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionForeachAST : public GALGAS_templateInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionForeachAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateInstructionForeachAST (const class cPtr_templateInstructionForeachAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_bool readProperty_mIsAscending (void) const ;

  public: class GALGAS_templateExpressionAST readProperty_mExpression (void) const ;

  public: class GALGAS_templateInstructionForEnumerationAST readProperty_mEnumeratedObjectProperties (void) const ;

  public: class GALGAS_templateInstructionListAST readProperty_mBeforeInstructionList (void) const ;

  public: class GALGAS_templateInstructionListAST readProperty_mDoInstructionList (void) const ;

  public: class GALGAS_lstring readProperty_mIndexIdentifier (void) const ;

  public: class GALGAS_templateInstructionListAST readProperty_mBetweenInstructionList (void) const ;

  public: class GALGAS_templateInstructionListAST readProperty_mAfterInstructionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateInstructionForeachAST init_21__21__21__21__21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                            const class GALGAS_templateExpressionAST & inOperand1,
                                                                                            const class GALGAS_templateInstructionForEnumerationAST & inOperand2,
                                                                                            const class GALGAS_templateInstructionListAST & inOperand3,
                                                                                            const class GALGAS_templateInstructionListAST & inOperand4,
                                                                                            const class GALGAS_lstring & inOperand5,
                                                                                            const class GALGAS_templateInstructionListAST & inOperand6,
                                                                                            const class GALGAS_templateInstructionListAST & inOperand7,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionForeachAST extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateInstructionForeachAST class_func_new (const class GALGAS_bool & inOperand0,
                                                                            const class GALGAS_templateExpressionAST & inOperand1,
                                                                            const class GALGAS_templateInstructionForEnumerationAST & inOperand2,
                                                                            const class GALGAS_templateInstructionListAST & inOperand3,
                                                                            const class GALGAS_templateInstructionListAST & inOperand4,
                                                                            const class GALGAS_lstring & inOperand5,
                                                                            const class GALGAS_templateInstructionListAST & inOperand6,
                                                                            const class GALGAS_templateInstructionListAST & inOperand7
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateInstructionForeachAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateInstructionForeachAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionForeachAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateInstructionForeachAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateInstructionForeachAST : public cPtr_templateInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateInstructionForeachAST_init_21__21__21__21__21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                   const class GALGAS_templateExpressionAST & inOperand1,
                                                                                   const class GALGAS_templateInstructionForEnumerationAST & inOperand2,
                                                                                   const class GALGAS_templateInstructionListAST & inOperand3,
                                                                                   const class GALGAS_templateInstructionListAST & inOperand4,
                                                                                   const class GALGAS_lstring & inOperand5,
                                                                                   const class GALGAS_templateInstructionListAST & inOperand6,
                                                                                   const class GALGAS_templateInstructionListAST & inOperand7,
                                                                                   Compiler * inCompiler) ;


//--- Extension method templateInstructionAnalysis
  public: virtual void method_templateInstructionAnalysis (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_templateInstructionListForGeneration & arg_ioInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_bool mProperty_mIsAscending ;
  public: GALGAS_templateExpressionAST mProperty_mExpression ;
  public: GALGAS_templateInstructionForEnumerationAST mProperty_mEnumeratedObjectProperties ;
  public: GALGAS_templateInstructionListAST mProperty_mBeforeInstructionList ;
  public: GALGAS_templateInstructionListAST mProperty_mDoInstructionList ;
  public: GALGAS_lstring mProperty_mIndexIdentifier ;
  public: GALGAS_templateInstructionListAST mProperty_mBetweenInstructionList ;
  public: GALGAS_templateInstructionListAST mProperty_mAfterInstructionList ;


//--- Default constructor
  public: cPtr_templateInstructionForeachAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateInstructionForeachAST (const GALGAS_bool & in_mIsAscending,
                                              const GALGAS_templateExpressionAST & in_mExpression,
                                              const GALGAS_templateInstructionForEnumerationAST & in_mEnumeratedObjectProperties,
                                              const GALGAS_templateInstructionListAST & in_mBeforeInstructionList,
                                              const GALGAS_templateInstructionListAST & in_mDoInstructionList,
                                              const GALGAS_lstring & in_mIndexIdentifier,
                                              const GALGAS_templateInstructionListAST & in_mBetweenInstructionList,
                                              const GALGAS_templateInstructionListAST & in_mAfterInstructionList
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionForeachAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionForeachAST_2D_weak : public GALGAS_templateInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionForeachAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateInstructionForeachAST_2D_weak (const class GALGAS_templateInstructionForeachAST & inSource) ;

  public: GALGAS_templateInstructionForeachAST_2D_weak & operator = (const class GALGAS_templateInstructionForeachAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateInstructionForeachAST bang_templateInstructionForeachAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionForeachAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateInstructionForeachAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateInstructionForeachAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateInstructionForeachAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionForeachAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionForeachForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionForeachForGeneration : public GALGAS_templateInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionForeachForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateInstructionForeachForGeneration (const class cPtr_templateInstructionForeachForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_bool readProperty_mIsAscending (void) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_mExpression (void) const ;

  public: class GALGAS_string readProperty_mEnumeratorCppName (void) const ;

  public: class GALGAS_templateInstructionListForGeneration readProperty_mBeforeInstructionList (void) const ;

  public: class GALGAS_templateInstructionListForGeneration readProperty_mDoInstructionList (void) const ;

  public: class GALGAS_string readProperty_mIndexCppName (void) const ;

  public: class GALGAS_templateInstructionListForGeneration readProperty_mBetweenInstructionList (void) const ;

  public: class GALGAS_templateInstructionListForGeneration readProperty_mAfterInstructionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateInstructionForeachForGeneration init_21__21__21__21__21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                      const class GALGAS_semanticExpressionForGeneration & inOperand1,
                                                                                                      const class GALGAS_string & inOperand2,
                                                                                                      const class GALGAS_templateInstructionListForGeneration & inOperand3,
                                                                                                      const class GALGAS_templateInstructionListForGeneration & inOperand4,
                                                                                                      const class GALGAS_string & inOperand5,
                                                                                                      const class GALGAS_templateInstructionListForGeneration & inOperand6,
                                                                                                      const class GALGAS_templateInstructionListForGeneration & inOperand7,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionForeachForGeneration extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateInstructionForeachForGeneration class_func_new (const class GALGAS_bool & inOperand0,
                                                                                      const class GALGAS_semanticExpressionForGeneration & inOperand1,
                                                                                      const class GALGAS_string & inOperand2,
                                                                                      const class GALGAS_templateInstructionListForGeneration & inOperand3,
                                                                                      const class GALGAS_templateInstructionListForGeneration & inOperand4,
                                                                                      const class GALGAS_string & inOperand5,
                                                                                      const class GALGAS_templateInstructionListForGeneration & inOperand6,
                                                                                      const class GALGAS_templateInstructionListForGeneration & inOperand7
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateInstructionForeachForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateInstructionForeachForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionForeachForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateInstructionForeachForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateInstructionForeachForGeneration : public cPtr_templateInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateInstructionForeachForGeneration_init_21__21__21__21__21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                             const class GALGAS_semanticExpressionForGeneration & inOperand1,
                                                                                             const class GALGAS_string & inOperand2,
                                                                                             const class GALGAS_templateInstructionListForGeneration & inOperand3,
                                                                                             const class GALGAS_templateInstructionListForGeneration & inOperand4,
                                                                                             const class GALGAS_string & inOperand5,
                                                                                             const class GALGAS_templateInstructionListForGeneration & inOperand6,
                                                                                             const class GALGAS_templateInstructionListForGeneration & inOperand7,
                                                                                             Compiler * inCompiler) ;


//--- Extension method templateCodeGeneration
  public: virtual void method_templateCodeGeneration (class GALGAS_string & arg_ioGeneratedCode,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_uint & arg_ioTemporaryVariableIndex,
           class GALGAS_stringset & arg_ioUnusedVariableCppNameSet,
           class GALGAS_bool & arg_ioUseColumnMarker,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_bool mProperty_mIsAscending ;
  public: GALGAS_semanticExpressionForGeneration mProperty_mExpression ;
  public: GALGAS_string mProperty_mEnumeratorCppName ;
  public: GALGAS_templateInstructionListForGeneration mProperty_mBeforeInstructionList ;
  public: GALGAS_templateInstructionListForGeneration mProperty_mDoInstructionList ;
  public: GALGAS_string mProperty_mIndexCppName ;
  public: GALGAS_templateInstructionListForGeneration mProperty_mBetweenInstructionList ;
  public: GALGAS_templateInstructionListForGeneration mProperty_mAfterInstructionList ;


//--- Default constructor
  public: cPtr_templateInstructionForeachForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

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
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionForeachForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionForeachForGeneration_2D_weak : public GALGAS_templateInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionForeachForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateInstructionForeachForGeneration_2D_weak (const class GALGAS_templateInstructionForeachForGeneration & inSource) ;

  public: GALGAS_templateInstructionForeachForGeneration_2D_weak & operator = (const class GALGAS_templateInstructionForeachForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateInstructionForeachForGeneration bang_templateInstructionForeachForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionForeachForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateInstructionForeachForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateInstructionForeachForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateInstructionForeachForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionForeachForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: [lstring] array
//
//--------------------------------------------------------------------------------------------------

class cEnumerator__5B_lstring_5D_ final {
//--- Constructor
  public: cEnumerator__5B_lstring_5D_ (const class GALGAS__5B_lstring_5D_ & inEnumeratedRange,
                                       const EnumerationOrder inOrder) ;

//--- No copy
  private: cEnumerator__5B_lstring_5D_ (const cEnumerator__5B_lstring_5D_ &) = delete ;
  private: cEnumerator__5B_lstring_5D_ & operator = (const cEnumerator__5B_lstring_5D_ &) = delete ;

//--- 
  public: inline bool hasCurrentObject (void) const {
    return mCurrent < mSharedArray.count () ;
  }
  
//--- 
  public: inline bool hasNextObject (void) const {
    return (mCurrent + 1) < mSharedArray.count () ;
  }

//--- 
  public: inline void gotoNextObject (void) {
    mCurrent += 1 ;
  }

//--- Current element access
  public: class GALGAS_lstring current (LOCATION_ARGS) const ;

//---- Properties
  private: const TC_Array <GALGAS_lstring> mSharedArray ;
  private: int32_t mCurrent ;
  private: const EnumerationOrder mEnumerationOrder ;
} ;

//--------------------------------------------------------------------------------------------------

class GALGAS__5B_lstring_5D_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: TC_Array <GALGAS_lstring> mSharedArray ;

//--------------------------------- Default constructor
  public: GALGAS__5B_lstring_5D_ (void) ;

//--------------------------------- Handle copy
  public: GALGAS__5B_lstring_5D_ (const GALGAS__5B_lstring_5D_ & inSource) ;
  public: GALGAS__5B_lstring_5D_ & operator = (const GALGAS__5B_lstring_5D_ & inSource) ;

//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--------------------------------- Friend
friend class cEnumerator__5B_lstring_5D_ ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS__5B_lstring_5D_ init (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS__5B_lstring_5D_ extractObject (const GALGAS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS__5B_lstring_5D_ inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS__5B_lstring_5D_ add_operation (const GALGAS__5B_lstring_5D_ & inOperand,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_count (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring readSubscript__3F_ (const class GALGAS_uint & in0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_lstring & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

 
} ; // End of GALGAS__5B_lstring_5D_ class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS__5B_lstring_5D_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionSwitchBranchListAST list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionSwitchBranchListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionSwitchBranchListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_templateInstructionSwitchBranchListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS__5B_lstring_5D_ & in_constantList,
                                                 const class GALGAS_switchExtractedValuesListAST & in_associatedValuesExtraction,
                                                 const class GALGAS_templateInstructionListAST & in_instructionList,
                                                 const class GALGAS_location & in_endOfBranch
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateInstructionSwitchBranchListAST init (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionSwitchBranchListAST extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateInstructionSwitchBranchListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_templateInstructionSwitchBranchListAST class_func_listWithValue (const class GALGAS__5B_lstring_5D_ & inOperand0,
                                                                                               const class GALGAS_switchExtractedValuesListAST & inOperand1,
                                                                                               const class GALGAS_templateInstructionListAST & inOperand2,
                                                                                               const class GALGAS_location & inOperand3
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_templateInstructionSwitchBranchListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS__5B_lstring_5D_ & inOperand0,
                                                     const class GALGAS_switchExtractedValuesListAST & inOperand1,
                                                     const class GALGAS_templateInstructionListAST & inOperand2,
                                                     const class GALGAS_location & inOperand3
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_templateInstructionSwitchBranchListAST add_operation (const GALGAS_templateInstructionSwitchBranchListAST & inOperand,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS__5B_lstring_5D_ constinArgument0,
                                               class GALGAS_switchExtractedValuesListAST constinArgument1,
                                               class GALGAS_templateInstructionListAST constinArgument2,
                                               class GALGAS_location constinArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS__5B_lstring_5D_ constinArgument0,
                                                      class GALGAS_switchExtractedValuesListAST constinArgument1,
                                                      class GALGAS_templateInstructionListAST constinArgument2,
                                                      class GALGAS_location constinArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS__5B_lstring_5D_ & outArgument0,
                                                 class GALGAS_switchExtractedValuesListAST & outArgument1,
                                                 class GALGAS_templateInstructionListAST & outArgument2,
                                                 class GALGAS_location & outArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS__5B_lstring_5D_ & outArgument0,
                                                class GALGAS_switchExtractedValuesListAST & outArgument1,
                                                class GALGAS_templateInstructionListAST & outArgument2,
                                                class GALGAS_location & outArgument3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS__5B_lstring_5D_ & outArgument0,
                                                      class GALGAS_switchExtractedValuesListAST & outArgument1,
                                                      class GALGAS_templateInstructionListAST & outArgument2,
                                                      class GALGAS_location & outArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setAssociatedValuesExtractionAtIndex (class GALGAS_switchExtractedValuesListAST constinArgument0,
                                                                             class GALGAS_uint constinArgument1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setConstantListAtIndex (class GALGAS__5B_lstring_5D_ constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setEndOfBranchAtIndex (class GALGAS_location constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setInstructionListAtIndex (class GALGAS_templateInstructionListAST constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS__5B_lstring_5D_ & outArgument0,
                                              class GALGAS_switchExtractedValuesListAST & outArgument1,
                                              class GALGAS_templateInstructionListAST & outArgument2,
                                              class GALGAS_location & outArgument3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS__5B_lstring_5D_ & outArgument0,
                                             class GALGAS_switchExtractedValuesListAST & outArgument1,
                                             class GALGAS_templateInstructionListAST & outArgument2,
                                             class GALGAS_location & outArgument3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_switchExtractedValuesListAST getter_associatedValuesExtractionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS__5B_lstring_5D_ getter_constantListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_endOfBranchAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListAST getter_instructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateInstructionSwitchBranchListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateInstructionSwitchBranchListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateInstructionSwitchBranchListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_templateInstructionSwitchBranchListAST_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_templateInstructionSwitchBranchListAST ;
 
} ; // End of GALGAS_templateInstructionSwitchBranchListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_templateInstructionSwitchBranchListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_templateInstructionSwitchBranchListAST (const GALGAS_templateInstructionSwitchBranchListAST & inEnumeratedObject,
                                                              const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS__5B_lstring_5D_ current_constantList (LOCATION_ARGS) const ;
  public: class GALGAS_switchExtractedValuesListAST current_associatedValuesExtraction (LOCATION_ARGS) const ;
  public: class GALGAS_templateInstructionListAST current_instructionList (LOCATION_ARGS) const ;
  public: class GALGAS_location current_endOfBranch (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_templateInstructionSwitchBranchListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @switchExtractedValuesListAST list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_switchExtractedValuesListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_switchExtractedValuesListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_switchExtractedValuesListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mExtractedValueTypeName,
                                                 const class GALGAS_lstring & in_mExtractedValueName,
                                                 const class GALGAS_bool & in_mMarkedAsUnused
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_switchExtractedValuesListAST init (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_switchExtractedValuesListAST extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_switchExtractedValuesListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_switchExtractedValuesListAST class_func_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                     const class GALGAS_lstring & inOperand1,
                                                                                     const class GALGAS_bool & inOperand2
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_switchExtractedValuesListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_bool & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_switchExtractedValuesListAST add_operation (const GALGAS_switchExtractedValuesListAST & inOperand,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_lstring constinArgument1,
                                               class GALGAS_bool constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_bool constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_bool & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                class GALGAS_bool & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_bool & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExtractedValueNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExtractedValueTypeNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                          class GALGAS_uint constinArgument1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMarkedAsUnusedAtIndex (class GALGAS_bool constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_bool & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             class GALGAS_bool & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mExtractedValueNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mExtractedValueTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mMarkedAsUnusedAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_switchExtractedValuesListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_switchExtractedValuesListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_switchExtractedValuesListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_switchExtractedValuesListAST_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_switchExtractedValuesListAST ;
 
} ; // End of GALGAS_switchExtractedValuesListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_switchExtractedValuesListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_switchExtractedValuesListAST (const GALGAS_switchExtractedValuesListAST & inEnumeratedObject,
                                                    const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mExtractedValueTypeName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mExtractedValueName (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mMarkedAsUnused (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_switchExtractedValuesListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchExtractedValuesListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionSwitchBranchListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionSwitchBranchListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS__5B_lstring_5D_ mProperty_constantList ;
  public: inline GALGAS__5B_lstring_5D_ readProperty_constantList (void) const {
    return mProperty_constantList ;
  }

  public: GALGAS_switchExtractedValuesListAST mProperty_associatedValuesExtraction ;
  public: inline GALGAS_switchExtractedValuesListAST readProperty_associatedValuesExtraction (void) const {
    return mProperty_associatedValuesExtraction ;
  }

  public: GALGAS_templateInstructionListAST mProperty_instructionList ;
  public: inline GALGAS_templateInstructionListAST readProperty_instructionList (void) const {
    return mProperty_instructionList ;
  }

  public: GALGAS_location mProperty_endOfBranch ;
  public: inline GALGAS_location readProperty_endOfBranch (void) const {
    return mProperty_endOfBranch ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_templateInstructionSwitchBranchListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setConstantList (const GALGAS__5B_lstring_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_constantList = inValue ;
  }

  public: inline void setter_setAssociatedValuesExtraction (const GALGAS_switchExtractedValuesListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_associatedValuesExtraction = inValue ;
  }

  public: inline void setter_setInstructionList (const GALGAS_templateInstructionListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_instructionList = inValue ;
  }

  public: inline void setter_setEndOfBranch (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_endOfBranch = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_templateInstructionSwitchBranchListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_templateInstructionSwitchBranchListAST_2D_element (const GALGAS__5B_lstring_5D_ & in_constantList,
                                                                    const GALGAS_switchExtractedValuesListAST & in_associatedValuesExtraction,
                                                                    const GALGAS_templateInstructionListAST & in_instructionList,
                                                                    const GALGAS_location & in_endOfBranch) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateInstructionSwitchBranchListAST_2D_element init_21__21__21__21_ (const class GALGAS__5B_lstring_5D_ & inOperand0,
                                                                                                const class GALGAS_switchExtractedValuesListAST & inOperand1,
                                                                                                const class GALGAS_templateInstructionListAST & inOperand2,
                                                                                                const class GALGAS_location & inOperand3,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionSwitchBranchListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateInstructionSwitchBranchListAST_2D_element class_func_new (const class GALGAS__5B_lstring_5D_ & inOperand0,
                                                                                                const class GALGAS_switchExtractedValuesListAST & inOperand1,
                                                                                                const class GALGAS_templateInstructionListAST & inOperand2,
                                                                                                const class GALGAS_location & inOperand3,
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
 
} ; // End of GALGAS_templateInstructionSwitchBranchListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @switchExtractedValuesListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

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
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

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

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_switchExtractedValuesListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_switchExtractedValuesListAST_2D_element (const GALGAS_lstring & in_mExtractedValueTypeName,
                                                          const GALGAS_lstring & in_mExtractedValueName,
                                                          const GALGAS_bool & in_mMarkedAsUnused) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_switchExtractedValuesListAST_2D_element init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_lstring & inOperand1,
                                                                                  const class GALGAS_bool & inOperand2,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_switchExtractedValuesListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_switchExtractedValuesListAST_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_lstring & inOperand1,
                                                                                      const class GALGAS_bool & inOperand2,
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
 
} ; // End of GALGAS_switchExtractedValuesListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchExtractedValuesListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionSwitchAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionSwitchAST : public GALGAS_templateInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionSwitchAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateInstructionSwitchAST (const class cPtr_templateInstructionSwitchAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_templateExpressionAST readProperty_mSwitchExpression (void) const ;

  public: class GALGAS_location readProperty_switchExpressionEndLocation (void) const ;

  public: class GALGAS_templateInstructionSwitchBranchListAST readProperty_templateInstructionSwitchBranchList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateInstructionSwitchAST init_21__21__21_ (const class GALGAS_templateExpressionAST & inOperand0,
                                                                       const class GALGAS_location & inOperand1,
                                                                       const class GALGAS_templateInstructionSwitchBranchListAST & inOperand2,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionSwitchAST extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateInstructionSwitchAST class_func_new (const class GALGAS_templateExpressionAST & inOperand0,
                                                                           const class GALGAS_location & inOperand1,
                                                                           const class GALGAS_templateInstructionSwitchBranchListAST & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateInstructionSwitchAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateInstructionSwitchAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionSwitchAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateInstructionSwitchAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateInstructionSwitchAST : public cPtr_templateInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateInstructionSwitchAST_init_21__21__21_ (const class GALGAS_templateExpressionAST & inOperand0,
                                                              const class GALGAS_location & inOperand1,
                                                              const class GALGAS_templateInstructionSwitchBranchListAST & inOperand2,
                                                              Compiler * inCompiler) ;


//--- Extension method templateInstructionAnalysis
  public: virtual void method_templateInstructionAnalysis (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_templateAnalysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_templateInstructionListForGeneration & arg_ioInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_templateExpressionAST mProperty_mSwitchExpression ;
  public: GALGAS_location mProperty_switchExpressionEndLocation ;
  public: GALGAS_templateInstructionSwitchBranchListAST mProperty_templateInstructionSwitchBranchList ;


//--- Default constructor
  public: cPtr_templateInstructionSwitchAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateInstructionSwitchAST (const GALGAS_templateExpressionAST & in_mSwitchExpression,
                                             const GALGAS_location & in_switchExpressionEndLocation,
                                             const GALGAS_templateInstructionSwitchBranchListAST & in_templateInstructionSwitchBranchList
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionSwitchAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionSwitchAST_2D_weak : public GALGAS_templateInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionSwitchAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateInstructionSwitchAST_2D_weak (const class GALGAS_templateInstructionSwitchAST & inSource) ;

  public: GALGAS_templateInstructionSwitchAST_2D_weak & operator = (const class GALGAS_templateInstructionSwitchAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateInstructionSwitchAST bang_templateInstructionSwitchAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionSwitchAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateInstructionSwitchAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateInstructionSwitchAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateInstructionSwitchAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionSwitchAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionSwitchBranchListForGeneration list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionSwitchBranchListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionSwitchBranchListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_templateInstructionSwitchBranchListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS__5B_lstring_5D_ & in_mConstantList,
                                                 const class GALGAS_extractedAssociatedValuesForGeneration & in_mExtractedAssociatedValuesForGeneration,
                                                 const class GALGAS_uint & in_mEndOfBranchLocationIndex,
                                                 const class GALGAS_templateInstructionListForGeneration & in_mInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateInstructionSwitchBranchListForGeneration init (Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionSwitchBranchListForGeneration extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateInstructionSwitchBranchListForGeneration class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_templateInstructionSwitchBranchListForGeneration class_func_listWithValue (const class GALGAS__5B_lstring_5D_ & inOperand0,
                                                                                                         const class GALGAS_extractedAssociatedValuesForGeneration & inOperand1,
                                                                                                         const class GALGAS_uint & inOperand2,
                                                                                                         const class GALGAS_templateInstructionListForGeneration & inOperand3
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_templateInstructionSwitchBranchListForGeneration inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS__5B_lstring_5D_ & inOperand0,
                                                     const class GALGAS_extractedAssociatedValuesForGeneration & inOperand1,
                                                     const class GALGAS_uint & inOperand2,
                                                     const class GALGAS_templateInstructionListForGeneration & inOperand3
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_templateInstructionSwitchBranchListForGeneration add_operation (const GALGAS_templateInstructionSwitchBranchListForGeneration & inOperand,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS__5B_lstring_5D_ constinArgument0,
                                               class GALGAS_extractedAssociatedValuesForGeneration constinArgument1,
                                               class GALGAS_uint constinArgument2,
                                               class GALGAS_templateInstructionListForGeneration constinArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS__5B_lstring_5D_ constinArgument0,
                                                      class GALGAS_extractedAssociatedValuesForGeneration constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      class GALGAS_templateInstructionListForGeneration constinArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS__5B_lstring_5D_ & outArgument0,
                                                 class GALGAS_extractedAssociatedValuesForGeneration & outArgument1,
                                                 class GALGAS_uint & outArgument2,
                                                 class GALGAS_templateInstructionListForGeneration & outArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS__5B_lstring_5D_ & outArgument0,
                                                class GALGAS_extractedAssociatedValuesForGeneration & outArgument1,
                                                class GALGAS_uint & outArgument2,
                                                class GALGAS_templateInstructionListForGeneration & outArgument3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS__5B_lstring_5D_ & outArgument0,
                                                      class GALGAS_extractedAssociatedValuesForGeneration & outArgument1,
                                                      class GALGAS_uint & outArgument2,
                                                      class GALGAS_templateInstructionListForGeneration & outArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMConstantListAtIndex (class GALGAS__5B_lstring_5D_ constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfBranchLocationIndexAtIndex (class GALGAS_uint constinArgument0,
                                                                            class GALGAS_uint constinArgument1,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExtractedAssociatedValuesForGenerationAtIndex (class GALGAS_extractedAssociatedValuesForGeneration constinArgument0,
                                                                                          class GALGAS_uint constinArgument1,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GALGAS_templateInstructionListForGeneration constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS__5B_lstring_5D_ & outArgument0,
                                              class GALGAS_extractedAssociatedValuesForGeneration & outArgument1,
                                              class GALGAS_uint & outArgument2,
                                              class GALGAS_templateInstructionListForGeneration & outArgument3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS__5B_lstring_5D_ & outArgument0,
                                             class GALGAS_extractedAssociatedValuesForGeneration & outArgument1,
                                             class GALGAS_uint & outArgument2,
                                             class GALGAS_templateInstructionListForGeneration & outArgument3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS__5B_lstring_5D_ getter_mConstantListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mEndOfBranchLocationIndexAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_extractedAssociatedValuesForGeneration getter_mExtractedAssociatedValuesForGenerationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListForGeneration getter_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateInstructionSwitchBranchListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateInstructionSwitchBranchListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateInstructionSwitchBranchListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_templateInstructionSwitchBranchListForGeneration ;
 
} ; // End of GALGAS_templateInstructionSwitchBranchListForGeneration class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_templateInstructionSwitchBranchListForGeneration : public cGenericAbstractEnumerator {
  public: cEnumerator_templateInstructionSwitchBranchListForGeneration (const GALGAS_templateInstructionSwitchBranchListForGeneration & inEnumeratedObject,
                                                                        const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS__5B_lstring_5D_ current_mConstantList (LOCATION_ARGS) const ;
  public: class GALGAS_extractedAssociatedValuesForGeneration current_mExtractedAssociatedValuesForGeneration (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mEndOfBranchLocationIndex (LOCATION_ARGS) const ;
  public: class GALGAS_templateInstructionListForGeneration current_mInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extractedAssociatedValuesForGeneration list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_extractedAssociatedValuesForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_extractedAssociatedValuesForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_extractedAssociatedValuesForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_unifiedTypeMapEntry & in_mType,
                                                 const class GALGAS_string & in_mCppName,
                                                 const class GALGAS_string & in_name
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_extractedAssociatedValuesForGeneration init (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_extractedAssociatedValuesForGeneration extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_extractedAssociatedValuesForGeneration class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_extractedAssociatedValuesForGeneration class_func_listWithValue (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                               const class GALGAS_string & inOperand1,
                                                                                               const class GALGAS_string & inOperand2
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_extractedAssociatedValuesForGeneration inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                     const class GALGAS_string & inOperand1,
                                                     const class GALGAS_string & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_extractedAssociatedValuesForGeneration add_operation (const GALGAS_extractedAssociatedValuesForGeneration & inOperand,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_unifiedTypeMapEntry constinArgument0,
                                               class GALGAS_string constinArgument1,
                                               class GALGAS_string constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_unifiedTypeMapEntry constinArgument0,
                                                      class GALGAS_string constinArgument1,
                                                      class GALGAS_string constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                                class GALGAS_string & outArgument1,
                                                class GALGAS_string & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                                      class GALGAS_string & outArgument1,
                                                      class GALGAS_string & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCppNameAtIndex (class GALGAS_string constinArgument0,
                                                           class GALGAS_uint constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeAtIndex (class GALGAS_unifiedTypeMapEntry constinArgument0,
                                                        class GALGAS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setNameAtIndex (class GALGAS_string constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                             class GALGAS_string & outArgument1,
                                             class GALGAS_string & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mCppNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapEntry getter_mTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_nameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_extractedAssociatedValuesForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_extractedAssociatedValuesForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_extractedAssociatedValuesForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_extractedAssociatedValuesForGeneration_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_extractedAssociatedValuesForGeneration ;
 
} ; // End of GALGAS_extractedAssociatedValuesForGeneration class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_extractedAssociatedValuesForGeneration : public cGenericAbstractEnumerator {
  public: cEnumerator_extractedAssociatedValuesForGeneration (const GALGAS_extractedAssociatedValuesForGeneration & inEnumeratedObject,
                                                              const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_unifiedTypeMapEntry current_mType (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mCppName (LOCATION_ARGS) const ;
  public: class GALGAS_string current_name (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_extractedAssociatedValuesForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extractedAssociatedValuesForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionSwitchBranchListForGeneration_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS__5B_lstring_5D_ mProperty_mConstantList ;
  public: inline GALGAS__5B_lstring_5D_ readProperty_mConstantList (void) const {
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
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMConstantList (const GALGAS__5B_lstring_5D_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
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

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element (const GALGAS__5B_lstring_5D_ & in_mConstantList,
                                                                              const GALGAS_extractedAssociatedValuesForGeneration & in_mExtractedAssociatedValuesForGeneration,
                                                                              const GALGAS_uint & in_mEndOfBranchLocationIndex,
                                                                              const GALGAS_templateInstructionListForGeneration & in_mInstructionList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element init_21__21__21__21_ (const class GALGAS__5B_lstring_5D_ & inOperand0,
                                                                                                          const class GALGAS_extractedAssociatedValuesForGeneration & inOperand1,
                                                                                                          const class GALGAS_uint & inOperand2,
                                                                                                          const class GALGAS_templateInstructionListForGeneration & inOperand3,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element class_func_new (const class GALGAS__5B_lstring_5D_ & inOperand0,
                                                                                                          const class GALGAS_extractedAssociatedValuesForGeneration & inOperand1,
                                                                                                          const class GALGAS_uint & inOperand2,
                                                                                                          const class GALGAS_templateInstructionListForGeneration & inOperand3,
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
 
} ; // End of GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extractedAssociatedValuesForGeneration_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_extractedAssociatedValuesForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_unifiedTypeMapEntry mProperty_mType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mType (void) const {
    return mProperty_mType ;
  }

  public: GALGAS_string mProperty_mCppName ;
  public: inline GALGAS_string readProperty_mCppName (void) const {
    return mProperty_mCppName ;
  }

  public: GALGAS_string mProperty_name ;
  public: inline GALGAS_string readProperty_name (void) const {
    return mProperty_name ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_extractedAssociatedValuesForGeneration_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mType = inValue ;
  }

  public: inline void setter_setMCppName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCppName = inValue ;
  }

  public: inline void setter_setName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_name = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_extractedAssociatedValuesForGeneration_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_extractedAssociatedValuesForGeneration_2D_element (const GALGAS_unifiedTypeMapEntry & in_mType,
                                                                    const GALGAS_string & in_mCppName,
                                                                    const GALGAS_string & in_name) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_extractedAssociatedValuesForGeneration_2D_element init_21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                            const class GALGAS_string & inOperand1,
                                                                                            const class GALGAS_string & inOperand2,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_extractedAssociatedValuesForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_extractedAssociatedValuesForGeneration_2D_element class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                                const class GALGAS_string & inOperand1,
                                                                                                const class GALGAS_string & inOperand2,
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
 
} ; // End of GALGAS_extractedAssociatedValuesForGeneration_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extractedAssociatedValuesForGeneration_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionSwitchForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionSwitchForGeneration : public GALGAS_templateInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionSwitchForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateInstructionSwitchForGeneration (const class cPtr_templateInstructionSwitchForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_unifiedTypeMapEntry readProperty_enumType (void) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_switchExpression (void) const ;

  public: class GALGAS_templateInstructionSwitchBranchListForGeneration readProperty_templateInstructionSwitchBranchList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateInstructionSwitchForGeneration init_21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                 const class GALGAS_semanticExpressionForGeneration & inOperand1,
                                                                                 const class GALGAS_templateInstructionSwitchBranchListForGeneration & inOperand2,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionSwitchForGeneration extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateInstructionSwitchForGeneration class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                     const class GALGAS_semanticExpressionForGeneration & inOperand1,
                                                                                     const class GALGAS_templateInstructionSwitchBranchListForGeneration & inOperand2
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateInstructionSwitchForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateInstructionSwitchForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionSwitchForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateInstructionSwitchForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateInstructionSwitchForGeneration : public cPtr_templateInstructionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateInstructionSwitchForGeneration_init_21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                        const class GALGAS_semanticExpressionForGeneration & inOperand1,
                                                                        const class GALGAS_templateInstructionSwitchBranchListForGeneration & inOperand2,
                                                                        Compiler * inCompiler) ;


//--- Extension method templateCodeGeneration
  public: virtual void method_templateCodeGeneration (class GALGAS_string & arg_ioGeneratedCode,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_uint & arg_ioTemporaryVariableIndex,
           class GALGAS_stringset & arg_ioUnusedVariableCppNameSet,
           class GALGAS_bool & arg_ioUseColumnMarker,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_unifiedTypeMapEntry mProperty_enumType ;
  public: GALGAS_semanticExpressionForGeneration mProperty_switchExpression ;
  public: GALGAS_templateInstructionSwitchBranchListForGeneration mProperty_templateInstructionSwitchBranchList ;


//--- Default constructor
  public: cPtr_templateInstructionSwitchForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateInstructionSwitchForGeneration (const GALGAS_unifiedTypeMapEntry & in_enumType,
                                                       const GALGAS_semanticExpressionForGeneration & in_switchExpression,
                                                       const GALGAS_templateInstructionSwitchBranchListForGeneration & in_templateInstructionSwitchBranchList
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateInstructionSwitchForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateInstructionSwitchForGeneration_2D_weak : public GALGAS_templateInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateInstructionSwitchForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateInstructionSwitchForGeneration_2D_weak (const class GALGAS_templateInstructionSwitchForGeneration & inSource) ;

  public: GALGAS_templateInstructionSwitchForGeneration_2D_weak & operator = (const class GALGAS_templateInstructionSwitchForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateInstructionSwitchForGeneration bang_templateInstructionSwitchForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateInstructionSwitchForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateInstructionSwitchForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateInstructionSwitchForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateInstructionSwitchForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionSwitchForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_semanticDeclarationAST : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_semanticDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_semanticDeclarationAST (const class cPtr_semanticDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_bool readProperty_isPredefined (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_semanticDeclarationAST init_21_isPredefined (const class GALGAS_bool & inOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_semanticDeclarationAST extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_semanticDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_semanticDeclarationAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @semanticDeclarationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_semanticDeclarationAST : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void semanticDeclarationAST_init_21_isPredefined (const class GALGAS_bool & inOperand0,
                                                            Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GALGAS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension method addAssociatedElement
  public: virtual void method_addAssociatedElement (class GALGAS_galgasDeclarationAST & arg_ioDeclarations,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method buildExtensionListMaps
  public: virtual void method_buildExtensionListMaps (class GALGAS_genericExtensionMethodListMap & arg_ioAbstractExtensionSetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioExtensionSetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingExtensionSetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionSetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioAbstractExtensionMethodListMapAST,
           class GALGAS_genericExtensionMethodListMap & arg_ioExtensionMethodListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingExtensionMethodListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionMethodListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioAbstractExtensionGetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioExtensionGetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingExtensionGetterListMap,
           class GALGAS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionGetterListMap,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GALGAS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GALGAS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GALGAS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GALGAS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GALGAS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GALGAS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (const class GALGAS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GALGAS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GALGAS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GALGAS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GALGAS_lstringlist & arg_ioUsefulnessRootEntities,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_string arg_inProductDirectory,
           const class GALGAS_semanticContext arg_inSemanticContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           const class GALGAS_predefinedTypes arg_inPredefinedTypes,
           class GALGAS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties
  public: GALGAS_bool mProperty_isPredefined ;


//--- Default constructor
  public: cPtr_semanticDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_semanticDeclarationAST (const GALGAS_bool & in_isPredefined
                                       COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateDelimitorListAST list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateDelimitorListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_templateDelimitorListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_templateDelimitorListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mStartString,
                                                 const class GALGAS_bool & in_nonAtomicSelection,
                                                 const class GALGAS_bool & in_mTemplateEndMark,
                                                 const class GALGAS_bool & in_mPreserved,
                                                 const class GALGAS_lstring & in_mEndString
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateDelimitorListAST init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateDelimitorListAST extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateDelimitorListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_templateDelimitorListAST class_func_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_bool & inOperand1,
                                                                                 const class GALGAS_bool & inOperand2,
                                                                                 const class GALGAS_bool & inOperand3,
                                                                                 const class GALGAS_lstring & inOperand4
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_templateDelimitorListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_bool & inOperand1,
                                                     const class GALGAS_bool & inOperand2,
                                                     const class GALGAS_bool & inOperand3,
                                                     const class GALGAS_lstring & inOperand4
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_templateDelimitorListAST add_operation (const GALGAS_templateDelimitorListAST & inOperand,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_bool constinArgument1,
                                               class GALGAS_bool constinArgument2,
                                               class GALGAS_bool constinArgument3,
                                               class GALGAS_lstring constinArgument4,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_bool constinArgument1,
                                                      class GALGAS_bool constinArgument2,
                                                      class GALGAS_bool constinArgument3,
                                                      class GALGAS_lstring constinArgument4,
                                                      class GALGAS_uint constinArgument5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_bool & outArgument1,
                                                 class GALGAS_bool & outArgument2,
                                                 class GALGAS_bool & outArgument3,
                                                 class GALGAS_lstring & outArgument4,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_bool & outArgument1,
                                                class GALGAS_bool & outArgument2,
                                                class GALGAS_bool & outArgument3,
                                                class GALGAS_lstring & outArgument4,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_bool & outArgument1,
                                                      class GALGAS_bool & outArgument2,
                                                      class GALGAS_bool & outArgument3,
                                                      class GALGAS_lstring & outArgument4,
                                                      class GALGAS_uint constinArgument5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndStringAtIndex (class GALGAS_lstring constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPreservedAtIndex (class GALGAS_bool constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStartStringAtIndex (class GALGAS_lstring constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTemplateEndMarkAtIndex (class GALGAS_bool constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setNonAtomicSelectionAtIndex (class GALGAS_bool constinArgument0,
                                                                     class GALGAS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_bool & outArgument1,
                                              class GALGAS_bool & outArgument2,
                                              class GALGAS_bool & outArgument3,
                                              class GALGAS_lstring & outArgument4,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_bool & outArgument1,
                                             class GALGAS_bool & outArgument2,
                                             class GALGAS_bool & outArgument3,
                                             class GALGAS_lstring & outArgument4,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mEndStringAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mPreservedAtIndex (const class GALGAS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mStartStringAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mTemplateEndMarkAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_nonAtomicSelectionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateDelimitorListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateDelimitorListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateDelimitorListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_templateDelimitorListAST_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_templateDelimitorListAST ;
 
} ; // End of GALGAS_templateDelimitorListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_templateDelimitorListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_templateDelimitorListAST (const GALGAS_templateDelimitorListAST & inEnumeratedObject,
                                                const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mStartString (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_nonAtomicSelection (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mTemplateEndMark (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mPreserved (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mEndString (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_templateDelimitorListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateDelimitorListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateDelimitorListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateDelimitorListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mStartString ;
  public: inline GALGAS_lstring readProperty_mStartString (void) const {
    return mProperty_mStartString ;
  }

  public: GALGAS_bool mProperty_nonAtomicSelection ;
  public: inline GALGAS_bool readProperty_nonAtomicSelection (void) const {
    return mProperty_nonAtomicSelection ;
  }

  public: GALGAS_bool mProperty_mTemplateEndMark ;
  public: inline GALGAS_bool readProperty_mTemplateEndMark (void) const {
    return mProperty_mTemplateEndMark ;
  }

  public: GALGAS_bool mProperty_mPreserved ;
  public: inline GALGAS_bool readProperty_mPreserved (void) const {
    return mProperty_mPreserved ;
  }

  public: GALGAS_lstring mProperty_mEndString ;
  public: inline GALGAS_lstring readProperty_mEndString (void) const {
    return mProperty_mEndString ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_templateDelimitorListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMStartString (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStartString = inValue ;
  }

  public: inline void setter_setNonAtomicSelection (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_nonAtomicSelection = inValue ;
  }

  public: inline void setter_setMTemplateEndMark (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTemplateEndMark = inValue ;
  }

  public: inline void setter_setMPreserved (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPreserved = inValue ;
  }

  public: inline void setter_setMEndString (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndString = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_templateDelimitorListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_templateDelimitorListAST_2D_element (const GALGAS_lstring & in_mStartString,
                                                      const GALGAS_bool & in_nonAtomicSelection,
                                                      const GALGAS_bool & in_mTemplateEndMark,
                                                      const GALGAS_bool & in_mPreserved,
                                                      const GALGAS_lstring & in_mEndString) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateDelimitorListAST_2D_element init_21__21_nonAtomicSelection_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                                        const class GALGAS_bool & inOperand1,
                                                                                                        const class GALGAS_bool & inOperand2,
                                                                                                        const class GALGAS_bool & inOperand3,
                                                                                                        const class GALGAS_lstring & inOperand4,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateDelimitorListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateDelimitorListAST_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_bool & inOperand1,
                                                                                  const class GALGAS_bool & inOperand2,
                                                                                  const class GALGAS_bool & inOperand3,
                                                                                  const class GALGAS_lstring & inOperand4,
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
 
} ; // End of GALGAS_templateDelimitorListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateDelimitorListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateReplacementListAST list
//
//--------------------------------------------------------------------------------------------------

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

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateReplacementListAST init (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateReplacementListAST extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateReplacementListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_templateReplacementListAST class_func_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_lstring & inOperand1,
                                                                                   const class GALGAS_lstring & inOperand2
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_templateReplacementListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_lstring & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_templateReplacementListAST add_operation (const GALGAS_templateReplacementListAST & inOperand,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_lstring constinArgument1,
                                               class GALGAS_lstring constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_lstring constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                class GALGAS_lstring & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_lstring & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMatchStringAtIndex (class GALGAS_lstring constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReplacementFunctionAtIndex (class GALGAS_lstring constinArgument0,
                                                                       class GALGAS_uint constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReplacementStringAtIndex (class GALGAS_lstring constinArgument0,
                                                                     class GALGAS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             class GALGAS_lstring & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mMatchStringAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mReplacementFunctionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mReplacementStringAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateReplacementListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateReplacementListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateReplacementListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_templateReplacementListAST_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_templateReplacementListAST ;
 
} ; // End of GALGAS_templateReplacementListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_templateReplacementListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_templateReplacementListAST (const GALGAS_templateReplacementListAST & inEnumeratedObject,
                                                  const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mMatchString (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mReplacementString (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mReplacementFunction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_templateReplacementListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateReplacementListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateReplacementListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

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
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

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

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_templateReplacementListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_templateReplacementListAST_2D_element (const GALGAS_lstring & in_mMatchString,
                                                        const GALGAS_lstring & in_mReplacementString,
                                                        const GALGAS_lstring & in_mReplacementFunction) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateReplacementListAST_2D_element init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1,
                                                                                const class GALGAS_lstring & inOperand2,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateReplacementListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateReplacementListAST_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_lstring & inOperand1,
                                                                                    const class GALGAS_lstring & inOperand2,
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
 
} ; // End of GALGAS_templateReplacementListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateReplacementListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalAttributeListAST list
//
//--------------------------------------------------------------------------------------------------

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

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_lexicalAttributeListAST init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalAttributeListAST extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_lexicalAttributeListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalAttributeListAST class_func_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_lexicalAttributeListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_lexicalAttributeListAST add_operation (const GALGAS_lexicalAttributeListAST & inOperand,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_lstring constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNameAtIndex (class GALGAS_lstring constinArgument0,
                                                        class GALGAS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeNameAtIndex (class GALGAS_lstring constinArgument0,
                                                            class GALGAS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalAttributeListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalAttributeListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalAttributeListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_lexicalAttributeListAST_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_lexicalAttributeListAST ;
 
} ; // End of GALGAS_lexicalAttributeListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_lexicalAttributeListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_lexicalAttributeListAST (const GALGAS_lexicalAttributeListAST & inEnumeratedObject,
                                               const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mTypeName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_lexicalAttributeListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalAttributeListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalAttributeListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

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
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_lexicalAttributeListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTypeName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTypeName = inValue ;
  }

  public: inline void setter_setMName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mName = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_lexicalAttributeListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_lexicalAttributeListAST_2D_element (const GALGAS_lstring & in_mTypeName,
                                                     const GALGAS_lstring & in_mName) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_lexicalAttributeListAST_2D_element init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_lstring & inOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalAttributeListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_lexicalAttributeListAST_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1,
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
 
} ; // End of GALGAS_lexicalAttributeListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalAttributeListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalStyleListAST list
//
//--------------------------------------------------------------------------------------------------

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

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_lexicalStyleListAST init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalStyleListAST extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_lexicalStyleListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalStyleListAST class_func_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_lstring & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_lexicalStyleListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_lexicalStyleListAST add_operation (const GALGAS_lexicalStyleListAST & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_lstring constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCommentAtIndex (class GALGAS_lstring constinArgument0,
                                                           class GALGAS_uint constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNameAtIndex (class GALGAS_lstring constinArgument0,
                                                        class GALGAS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mCommentAtIndex (const class GALGAS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalStyleListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalStyleListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalStyleListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_lexicalStyleListAST_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_lexicalStyleListAST ;
 
} ; // End of GALGAS_lexicalStyleListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_lexicalStyleListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_lexicalStyleListAST (const GALGAS_lexicalStyleListAST & inEnumeratedObject,
                                           const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mComment (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_lexicalStyleListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalStyleListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalStyleListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

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
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_lexicalStyleListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mName = inValue ;
  }

  public: inline void setter_setMComment (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mComment = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_lexicalStyleListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_lexicalStyleListAST_2D_element (const GALGAS_lstring & in_mName,
                                                 const GALGAS_lstring & in_mComment) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_lexicalStyleListAST_2D_element init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                     const class GALGAS_lstring & inOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalStyleListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_lexicalStyleListAST_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_lstring & inOperand1,
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
 
} ; // End of GALGAS_lexicalStyleListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalStyleListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @terminalDeclarationListAST list
//
//--------------------------------------------------------------------------------------------------

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
                                                 const class GALGAS_bool & in_nonAtomicSelection,
                                                 const class GALGAS_bool & in_isEndOfTemplateMark
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_terminalDeclarationListAST init (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_terminalDeclarationListAST extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_terminalDeclarationListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_terminalDeclarationListAST class_func_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_sentLexicalAttributeListAST & inOperand1,
                                                                                   const class GALGAS_lstring & inOperand2,
                                                                                   const class GALGAS_lstring & inOperand3,
                                                                                   const class GALGAS_bool & inOperand4,
                                                                                   const class GALGAS_bool & inOperand5
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_terminalDeclarationListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_sentLexicalAttributeListAST & inOperand1,
                                                     const class GALGAS_lstring & inOperand2,
                                                     const class GALGAS_lstring & inOperand3,
                                                     const class GALGAS_bool & inOperand4,
                                                     const class GALGAS_bool & inOperand5
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_terminalDeclarationListAST add_operation (const GALGAS_terminalDeclarationListAST & inOperand,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_sentLexicalAttributeListAST constinArgument1,
                                               class GALGAS_lstring constinArgument2,
                                               class GALGAS_lstring constinArgument3,
                                               class GALGAS_bool constinArgument4,
                                               class GALGAS_bool constinArgument5,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_sentLexicalAttributeListAST constinArgument1,
                                                      class GALGAS_lstring constinArgument2,
                                                      class GALGAS_lstring constinArgument3,
                                                      class GALGAS_bool constinArgument4,
                                                      class GALGAS_bool constinArgument5,
                                                      class GALGAS_uint constinArgument6,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_sentLexicalAttributeListAST & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 class GALGAS_lstring & outArgument3,
                                                 class GALGAS_bool & outArgument4,
                                                 class GALGAS_bool & outArgument5,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_sentLexicalAttributeListAST & outArgument1,
                                                class GALGAS_lstring & outArgument2,
                                                class GALGAS_lstring & outArgument3,
                                                class GALGAS_bool & outArgument4,
                                                class GALGAS_bool & outArgument5,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_sentLexicalAttributeListAST & outArgument1,
                                                      class GALGAS_lstring & outArgument2,
                                                      class GALGAS_lstring & outArgument3,
                                                      class GALGAS_bool & outArgument4,
                                                      class GALGAS_bool & outArgument5,
                                                      class GALGAS_uint constinArgument6,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setIsEndOfTemplateMarkAtIndex (class GALGAS_bool constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNameAtIndex (class GALGAS_lstring constinArgument0,
                                                        class GALGAS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSentAttributeListAtIndex (class GALGAS_sentLexicalAttributeListAST constinArgument0,
                                                                     class GALGAS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStyleAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSyntaxErrorMessageAtIndex (class GALGAS_lstring constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setNonAtomicSelectionAtIndex (class GALGAS_bool constinArgument0,
                                                                     class GALGAS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_sentLexicalAttributeListAST & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              class GALGAS_lstring & outArgument3,
                                              class GALGAS_bool & outArgument4,
                                              class GALGAS_bool & outArgument5,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_sentLexicalAttributeListAST & outArgument1,
                                             class GALGAS_lstring & outArgument2,
                                             class GALGAS_lstring & outArgument3,
                                             class GALGAS_bool & outArgument4,
                                             class GALGAS_bool & outArgument5,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isEndOfTemplateMarkAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_sentLexicalAttributeListAST getter_mSentAttributeListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mStyleAtIndex (const class GALGAS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSyntaxErrorMessageAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_nonAtomicSelectionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_terminalDeclarationListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_terminalDeclarationListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_terminalDeclarationListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_terminalDeclarationListAST_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_terminalDeclarationListAST ;
 
} ; // End of GALGAS_terminalDeclarationListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_terminalDeclarationListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_terminalDeclarationListAST (const GALGAS_terminalDeclarationListAST & inEnumeratedObject,
                                                  const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mName (LOCATION_ARGS) const ;
  public: class GALGAS_sentLexicalAttributeListAST current_mSentAttributeList (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mSyntaxErrorMessage (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mStyle (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_nonAtomicSelection (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_isEndOfTemplateMark (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_terminalDeclarationListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalDeclarationListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @sentLexicalAttributeListAST list
//
//--------------------------------------------------------------------------------------------------

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

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_sentLexicalAttributeListAST init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_sentLexicalAttributeListAST extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_sentLexicalAttributeListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_sentLexicalAttributeListAST class_func_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_lstring & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_sentLexicalAttributeListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_sentLexicalAttributeListAST add_operation (const GALGAS_sentLexicalAttributeListAST & inOperand,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_lstring constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAttributeNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalSelectorAtIndex (class GALGAS_lstring constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mAttributeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalSelectorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_sentLexicalAttributeListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_sentLexicalAttributeListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_sentLexicalAttributeListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_sentLexicalAttributeListAST_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_sentLexicalAttributeListAST ;
 
} ; // End of GALGAS_sentLexicalAttributeListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_sentLexicalAttributeListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_sentLexicalAttributeListAST (const GALGAS_sentLexicalAttributeListAST & inEnumeratedObject,
                                                   const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mFormalSelector (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mAttributeName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_sentLexicalAttributeListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sentLexicalAttributeListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @terminalDeclarationListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

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

  public: GALGAS_bool mProperty_nonAtomicSelection ;
  public: inline GALGAS_bool readProperty_nonAtomicSelection (void) const {
    return mProperty_nonAtomicSelection ;
  }

  public: GALGAS_bool mProperty_isEndOfTemplateMark ;
  public: inline GALGAS_bool readProperty_isEndOfTemplateMark (void) const {
    return mProperty_isEndOfTemplateMark ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

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

  public: inline void setter_setNonAtomicSelection (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_nonAtomicSelection = inValue ;
  }

  public: inline void setter_setIsEndOfTemplateMark (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isEndOfTemplateMark = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_terminalDeclarationListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_terminalDeclarationListAST_2D_element (const GALGAS_lstring & in_mName,
                                                        const GALGAS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                        const GALGAS_lstring & in_mSyntaxErrorMessage,
                                                        const GALGAS_lstring & in_mStyle,
                                                        const GALGAS_bool & in_nonAtomicSelection,
                                                        const GALGAS_bool & in_isEndOfTemplateMark) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_terminalDeclarationListAST_2D_element init_21__21__21__21__21_nonAtomicSelection_21_isEndOfTemplateMark (const class GALGAS_lstring & inOperand0,
                                                                                                                                 const class GALGAS_sentLexicalAttributeListAST & inOperand1,
                                                                                                                                 const class GALGAS_lstring & inOperand2,
                                                                                                                                 const class GALGAS_lstring & inOperand3,
                                                                                                                                 const class GALGAS_bool & inOperand4,
                                                                                                                                 const class GALGAS_bool & inOperand5,
                                                                                                                                 Compiler * inCompiler
                                                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_terminalDeclarationListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_terminalDeclarationListAST_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_sentLexicalAttributeListAST & inOperand1,
                                                                                    const class GALGAS_lstring & inOperand2,
                                                                                    const class GALGAS_lstring & inOperand3,
                                                                                    const class GALGAS_bool & inOperand4,
                                                                                    const class GALGAS_bool & inOperand5,
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
 
} ; // End of GALGAS_terminalDeclarationListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalDeclarationListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalMessageDeclarationListAST list
//
//--------------------------------------------------------------------------------------------------

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

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_lexicalMessageDeclarationListAST init (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalMessageDeclarationListAST extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_lexicalMessageDeclarationListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalMessageDeclarationListAST class_func_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                         const class GALGAS_lstring & inOperand1
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_lexicalMessageDeclarationListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_lexicalMessageDeclarationListAST add_operation (const GALGAS_lexicalMessageDeclarationListAST & inOperand,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_lstring constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMessageNameAtIndex (class GALGAS_lstring constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMessageValueAtIndex (class GALGAS_lstring constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mMessageNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mMessageValueAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalMessageDeclarationListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalMessageDeclarationListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalMessageDeclarationListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_lexicalMessageDeclarationListAST_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_lexicalMessageDeclarationListAST ;
 
} ; // End of GALGAS_lexicalMessageDeclarationListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_lexicalMessageDeclarationListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_lexicalMessageDeclarationListAST (const GALGAS_lexicalMessageDeclarationListAST & inEnumeratedObject,
                                                        const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mMessageName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mMessageValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_lexicalMessageDeclarationListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalMessageDeclarationListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalMessageDeclarationListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

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
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_lexicalMessageDeclarationListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMMessageName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMessageName = inValue ;
  }

  public: inline void setter_setMMessageValue (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMessageValue = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_lexicalMessageDeclarationListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_lexicalMessageDeclarationListAST_2D_element (const GALGAS_lstring & in_mMessageName,
                                                              const GALGAS_lstring & in_mMessageValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_lexicalMessageDeclarationListAST_2D_element init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_lstring & inOperand1,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalMessageDeclarationListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_lexicalMessageDeclarationListAST_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                          const class GALGAS_lstring & inOperand1,
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
 
} ; // End of GALGAS_lexicalMessageDeclarationListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalMessageDeclarationListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalListDeclarationListAST list
//
//--------------------------------------------------------------------------------------------------

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

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_lexicalListDeclarationListAST init (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalListDeclarationListAST extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_lexicalListDeclarationListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalListDeclarationListAST class_func_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_lstring & inOperand1,
                                                                                      const class GALGAS_lstring & inOperand2,
                                                                                      const class GALGAS_sentLexicalAttributeListAST & inOperand3,
                                                                                      const class GALGAS_lexicalListEntryListAST & inOperand4
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_lexicalListDeclarationListAST inOperand,
                                                       class Compiler * inCompiler
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
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_lstring constinArgument1,
                                               class GALGAS_lstring constinArgument2,
                                               class GALGAS_sentLexicalAttributeListAST constinArgument3,
                                               class GALGAS_lexicalListEntryListAST constinArgument4,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_lstring constinArgument2,
                                                      class GALGAS_sentLexicalAttributeListAST constinArgument3,
                                                      class GALGAS_lexicalListEntryListAST constinArgument4,
                                                      class GALGAS_uint constinArgument5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 class GALGAS_sentLexicalAttributeListAST & outArgument3,
                                                 class GALGAS_lexicalListEntryListAST & outArgument4,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                class GALGAS_lstring & outArgument2,
                                                class GALGAS_sentLexicalAttributeListAST & outArgument3,
                                                class GALGAS_lexicalListEntryListAST & outArgument4,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_lstring & outArgument2,
                                                      class GALGAS_sentLexicalAttributeListAST & outArgument3,
                                                      class GALGAS_lexicalListEntryListAST & outArgument4,
                                                      class GALGAS_uint constinArgument5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEntryListAtIndex (class GALGAS_lexicalListEntryListAST constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNameAtIndex (class GALGAS_lstring constinArgument0,
                                                        class GALGAS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSentAttributeListAtIndex (class GALGAS_sentLexicalAttributeListAST constinArgument0,
                                                                     class GALGAS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStyleAtIndex (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSyntaxErrorMessageAtIndex (class GALGAS_lstring constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              class GALGAS_sentLexicalAttributeListAST & outArgument3,
                                              class GALGAS_lexicalListEntryListAST & outArgument4,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             class GALGAS_lstring & outArgument2,
                                             class GALGAS_sentLexicalAttributeListAST & outArgument3,
                                             class GALGAS_lexicalListEntryListAST & outArgument4,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalListEntryListAST getter_mEntryListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_sentLexicalAttributeListAST getter_mSentAttributeListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mStyleAtIndex (const class GALGAS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSyntaxErrorMessageAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalListDeclarationListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalListDeclarationListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalListDeclarationListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_lexicalListDeclarationListAST_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_lexicalListDeclarationListAST ;
 
} ; // End of GALGAS_lexicalListDeclarationListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_lexicalListDeclarationListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_lexicalListDeclarationListAST (const GALGAS_lexicalListDeclarationListAST & inEnumeratedObject,
                                                     const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mStyle (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mSyntaxErrorMessage (LOCATION_ARGS) const ;
  public: class GALGAS_sentLexicalAttributeListAST current_mSentAttributeList (LOCATION_ARGS) const ;
  public: class GALGAS_lexicalListEntryListAST current_mEntryList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_lexicalListDeclarationListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalListDeclarationListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalListEntryListAST list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalListEntryListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_lexicalListEntryListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_lexicalListEntryListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mEntrySpelling,
                                                 const class GALGAS_lstring & in_mTerminalSpelling,
                                                 const class GALGAS_bool & in_nonAtomicSelection,
                                                 const class GALGAS_bool & in_isEndOfTemplateMark
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_lexicalListEntryListAST init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalListEntryListAST extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_lexicalListEntryListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalListEntryListAST class_func_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1,
                                                                                const class GALGAS_bool & inOperand2,
                                                                                const class GALGAS_bool & inOperand3
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_lexicalListEntryListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_bool & inOperand2,
                                                     const class GALGAS_bool & inOperand3
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_lexicalListEntryListAST add_operation (const GALGAS_lexicalListEntryListAST & inOperand,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_lstring constinArgument1,
                                               class GALGAS_bool constinArgument2,
                                               class GALGAS_bool constinArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_bool constinArgument2,
                                                      class GALGAS_bool constinArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_bool & outArgument2,
                                                 class GALGAS_bool & outArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                class GALGAS_bool & outArgument2,
                                                class GALGAS_bool & outArgument3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_bool & outArgument2,
                                                      class GALGAS_bool & outArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setIsEndOfTemplateMarkAtIndex (class GALGAS_bool constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEntrySpellingAtIndex (class GALGAS_lstring constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTerminalSpellingAtIndex (class GALGAS_lstring constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setNonAtomicSelectionAtIndex (class GALGAS_bool constinArgument0,
                                                                     class GALGAS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_bool & outArgument2,
                                              class GALGAS_bool & outArgument3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             class GALGAS_bool & outArgument2,
                                             class GALGAS_bool & outArgument3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isEndOfTemplateMarkAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mEntrySpellingAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTerminalSpellingAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_nonAtomicSelectionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalListEntryListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalListEntryListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalListEntryListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_lexicalListEntryListAST_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_lexicalListEntryListAST ;
 
} ; // End of GALGAS_lexicalListEntryListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_lexicalListEntryListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_lexicalListEntryListAST (const GALGAS_lexicalListEntryListAST & inEnumeratedObject,
                                               const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mEntrySpelling (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mTerminalSpelling (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_nonAtomicSelection (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_isEndOfTemplateMark (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_lexicalListEntryListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalListEntryListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalListDeclarationListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

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
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

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

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_lexicalListDeclarationListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_lexicalListDeclarationListAST_2D_element (const GALGAS_lstring & in_mName,
                                                           const GALGAS_lstring & in_mStyle,
                                                           const GALGAS_lstring & in_mSyntaxErrorMessage,
                                                           const GALGAS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                           const GALGAS_lexicalListEntryListAST & in_mEntryList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_lexicalListDeclarationListAST_2D_element init_21__21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                           const class GALGAS_lstring & inOperand1,
                                                                                           const class GALGAS_lstring & inOperand2,
                                                                                           const class GALGAS_sentLexicalAttributeListAST & inOperand3,
                                                                                           const class GALGAS_lexicalListEntryListAST & inOperand4,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalListDeclarationListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_lexicalListDeclarationListAST_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_lstring & inOperand1,
                                                                                       const class GALGAS_lstring & inOperand2,
                                                                                       const class GALGAS_sentLexicalAttributeListAST & inOperand3,
                                                                                       const class GALGAS_lexicalListEntryListAST & inOperand4,
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
 
} ; // End of GALGAS_lexicalListDeclarationListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalListDeclarationListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalRuleListAST list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalRuleListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_lexicalRuleListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_lexicalRuleListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_abstractLexicalRuleAST & in_mLexicalRule
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_lexicalRuleListAST init (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalRuleListAST extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_lexicalRuleListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalRuleListAST class_func_listWithValue (const class GALGAS_abstractLexicalRuleAST & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_lexicalRuleListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_abstractLexicalRuleAST & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_lexicalRuleListAST add_operation (const GALGAS_lexicalRuleListAST & inOperand,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_abstractLexicalRuleAST constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_abstractLexicalRuleAST constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_abstractLexicalRuleAST & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_abstractLexicalRuleAST & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_abstractLexicalRuleAST & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLexicalRuleAtIndex (class GALGAS_abstractLexicalRuleAST constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_abstractLexicalRuleAST & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_abstractLexicalRuleAST & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_abstractLexicalRuleAST getter_mLexicalRuleAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalRuleListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalRuleListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalRuleListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_lexicalRuleListAST_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_lexicalRuleListAST ;
 
} ; // End of GALGAS_lexicalRuleListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_lexicalRuleListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_lexicalRuleListAST (const GALGAS_lexicalRuleListAST & inEnumeratedObject,
                                          const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_abstractLexicalRuleAST current_mLexicalRule (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_lexicalRuleListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRuleListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractLexicalRuleAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_abstractLexicalRuleAST : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_abstractLexicalRuleAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_abstractLexicalRuleAST (const class cPtr_abstractLexicalRuleAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_abstractLexicalRuleAST init (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractLexicalRuleAST extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_abstractLexicalRuleAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_abstractLexicalRuleAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractLexicalRuleAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractLexicalRuleAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_abstractLexicalRuleAST : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void abstractLexicalRuleAST_init (Compiler * inCompiler) ;


//--- Extension getter generateLexicalRuleCode
  public: virtual class GALGAS_string getter_generateLexicalRuleCode (const class GALGAS_string inScannerClassName,
           const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter generateObjcCocoaCode
  public: virtual class GALGAS_string getter_generateObjcCocoaCode (const class GALGAS_string inScannerClassName,
           const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter generateSwiftCocoaCode
  public: virtual class GALGAS_string getter_generateSwiftCocoaCode (const class GALGAS_string inScannerClassName,
           const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter lexicalRuleUsesLoopLocalVar
  public: virtual class GALGAS_bool getter_lexicalRuleUsesLoopLocalVar (Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension method checkLexicalRule
  public: virtual void method_checkLexicalRule (class GALGAS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties


//--- Default constructor
  public: cPtr_abstractLexicalRuleAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_abstractLexicalRuleAST (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalRuleListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalRuleListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_abstractLexicalRuleAST mProperty_mLexicalRule ;
  public: inline GALGAS_abstractLexicalRuleAST readProperty_mLexicalRule (void) const {
    return mProperty_mLexicalRule ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_lexicalRuleListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLexicalRule (const GALGAS_abstractLexicalRuleAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLexicalRule = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_lexicalRuleListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_lexicalRuleListAST_2D_element (const GALGAS_abstractLexicalRuleAST & in_mLexicalRule) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_lexicalRuleListAST_2D_element init_21_ (const class GALGAS_abstractLexicalRuleAST & inOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalRuleListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_lexicalRuleListAST_2D_element class_func_new (const class GALGAS_abstractLexicalRuleAST & inOperand0,
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
 
} ; // End of GALGAS_lexicalRuleListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRuleListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @indexingListAST list
//
//--------------------------------------------------------------------------------------------------

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

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_indexingListAST init (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_indexingListAST extractObject (const GALGAS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_indexingListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_indexingListAST class_func_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_lstring & inOperand1
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_indexingListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_indexingListAST add_operation (const GALGAS_indexingListAST & inOperand,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_lstring constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIndexCommentAtIndex (class GALGAS_lstring constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIndexNameAtIndex (class GALGAS_lstring constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mIndexCommentAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mIndexNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_indexingListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_indexingListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_indexingListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_indexingListAST_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_indexingListAST ;
 
} ; // End of GALGAS_indexingListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_indexingListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_indexingListAST (const GALGAS_indexingListAST & inEnumeratedObject,
                                       const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mIndexName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mIndexComment (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_indexingListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_indexingListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @indexingListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

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
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_indexingListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMIndexName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIndexName = inValue ;
  }

  public: inline void setter_setMIndexComment (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIndexComment = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_indexingListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_indexingListAST_2D_element (const GALGAS_lstring & in_mIndexName,
                                             const GALGAS_lstring & in_mIndexComment) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_indexingListAST_2D_element init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                 const class GALGAS_lstring & inOperand1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_indexingListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_indexingListAST_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_lstring & inOperand1,
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
 
} ; // End of GALGAS_indexingListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_indexingListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticDeclarationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_semanticDeclarationAST_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_semanticDeclarationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_semanticDeclarationAST_2D_weak (const class GALGAS_semanticDeclarationAST & inSource) ;

  public: GALGAS_semanticDeclarationAST_2D_weak & operator = (const class GALGAS_semanticDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_semanticDeclarationAST bang_semanticDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_semanticDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_semanticDeclarationAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_semanticDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_semanticDeclarationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateLexiqueComponentAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateLexiqueComponentAST : public GALGAS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_templateLexiqueComponentAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_templateLexiqueComponentAST (const class cPtr_templateLexiqueComponentAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mLexiqueComponentName (void) const ;

  public: class GALGAS_lstring readProperty_mLexiqueSuperComponentName (void) const ;

  public: class GALGAS_templateDelimitorListAST readProperty_mTemplateDelimitorList (void) const ;

  public: class GALGAS_templateReplacementListAST readProperty_mTemplateReplacementList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_templateLexiqueComponentAST init_21_isPredefined_21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                          const class GALGAS_lstring & inOperand1,
                                                                                          const class GALGAS_lstring & inOperand2,
                                                                                          const class GALGAS_templateDelimitorListAST & inOperand3,
                                                                                          const class GALGAS_templateReplacementListAST & inOperand4,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateLexiqueComponentAST extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateLexiqueComponentAST class_func_new (const class GALGAS_bool & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1,
                                                                          const class GALGAS_lstring & inOperand2,
                                                                          const class GALGAS_templateDelimitorListAST & inOperand3,
                                                                          const class GALGAS_templateReplacementListAST & inOperand4
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateLexiqueComponentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateLexiqueComponentAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateLexiqueComponentAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @templateLexiqueComponentAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_templateLexiqueComponentAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void templateLexiqueComponentAST_init_21_isPredefined_21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1,
                                                                                 const class GALGAS_lstring & inOperand2,
                                                                                 const class GALGAS_templateDelimitorListAST & inOperand3,
                                                                                 const class GALGAS_templateReplacementListAST & inOperand4,
                                                                                 Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GALGAS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GALGAS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GALGAS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GALGAS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GALGAS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GALGAS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GALGAS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (const class GALGAS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GALGAS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GALGAS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GALGAS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GALGAS_lstringlist & arg_ioUsefulnessRootEntities,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_string arg_inProductDirectory,
           const class GALGAS_semanticContext arg_inSemanticContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           const class GALGAS_predefinedTypes arg_inPredefinedTypes,
           class GALGAS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mLexiqueComponentName ;
  public: GALGAS_lstring mProperty_mLexiqueSuperComponentName ;
  public: GALGAS_templateDelimitorListAST mProperty_mTemplateDelimitorList ;
  public: GALGAS_templateReplacementListAST mProperty_mTemplateReplacementList ;


//--- Default constructor
  public: cPtr_templateLexiqueComponentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_templateLexiqueComponentAST (const GALGAS_bool & in_isPredefined,
                                            const GALGAS_lstring & in_mLexiqueComponentName,
                                            const GALGAS_lstring & in_mLexiqueSuperComponentName,
                                            const GALGAS_templateDelimitorListAST & in_mTemplateDelimitorList,
                                            const GALGAS_templateReplacementListAST & in_mTemplateReplacementList
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @templateLexiqueComponentAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_templateLexiqueComponentAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateLexiqueComponentAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateLexiqueComponentAST_2D_weak (const class GALGAS_templateLexiqueComponentAST & inSource) ;

  public: GALGAS_templateLexiqueComponentAST_2D_weak & operator = (const class GALGAS_templateLexiqueComponentAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateLexiqueComponentAST bang_templateLexiqueComponentAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_templateLexiqueComponentAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_templateLexiqueComponentAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_templateLexiqueComponentAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_templateLexiqueComponentAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateLexiqueComponentAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalExpressionAST : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_lexicalExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalExpressionAST (const class cPtr_lexicalExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_lexicalExpressionAST init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalExpressionAST extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_lexicalExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalExpressionAST : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalExpressionAST_init (Compiler * inCompiler) ;


//--- Extension getter generateConditionCode
  public: virtual class GALGAS_string getter_generateConditionCode (const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter generateObjcCocoaConditionCode
  public: virtual class GALGAS_string getter_generateObjcCocoaConditionCode (const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter generateSwiftCocoaConditionCode
  public: virtual class GALGAS_string getter_generateSwiftCocoaConditionCode (const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension method checkLexicalExpression
  public: virtual void method_checkLexicalExpression (class GALGAS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties


//--- Default constructor
  public: cPtr_lexicalExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalExpressionAST (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalExpressionAST_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_lexicalExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalExpressionAST_2D_weak (const class GALGAS_lexicalExpressionAST & inSource) ;

  public: GALGAS_lexicalExpressionAST_2D_weak & operator = (const class GALGAS_lexicalExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalExpressionAST bang_lexicalExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_lexicalExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_lexicalExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalInstructionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalInstructionAST : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_lexicalInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalInstructionAST (const class cPtr_lexicalInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_lexicalInstructionAST init (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalInstructionAST extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_lexicalInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalInstructionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalInstructionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalInstructionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalInstructionAST : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalInstructionAST_init (Compiler * inCompiler) ;


//--- Extension getter generateLexicalInstructionCode
  public: virtual class GALGAS_string getter_generateLexicalInstructionCode (const class GALGAS_string inScannerClassName,
           const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter generateObjcCocoaInstructionCode
  public: virtual class GALGAS_string getter_generateObjcCocoaInstructionCode (const class GALGAS_string inScannerClassName,
           const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter generateSwiftCocoaInstructionCode
  public: virtual class GALGAS_string getter_generateSwiftCocoaInstructionCode (const class GALGAS_string inScannerClassName,
           const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension getter lexicalInstructionUsesLoopLocalVariable
  public: virtual class GALGAS_bool getter_lexicalInstructionUsesLoopLocalVariable (Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Extension method checkLexicalInstruction
  public: virtual void method_checkLexicalInstruction (class GALGAS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           class GALGAS_lexicalTagMap & arg_ioTagMap,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties


//--- Default constructor
  public: cPtr_lexicalInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalInstructionAST (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalInstructionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalInstructionAST_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_lexicalInstructionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalInstructionAST_2D_weak (const class GALGAS_lexicalInstructionAST & inSource) ;

  public: GALGAS_lexicalInstructionAST_2D_weak & operator = (const class GALGAS_lexicalInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalInstructionAST bang_lexicalInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_lexicalInstructionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_lexicalInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalInstructionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalInstructionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalInstructionListAST list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalInstructionListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_lexicalInstructionListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_lexicalInstructionListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lexicalInstructionAST & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_lexicalInstructionListAST init (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalInstructionListAST extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_lexicalInstructionListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_lexicalInstructionListAST class_func_listWithValue (const class GALGAS_lexicalInstructionAST & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_lexicalInstructionListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lexicalInstructionAST & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_lexicalInstructionListAST add_operation (const GALGAS_lexicalInstructionListAST & inOperand,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lexicalInstructionAST constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lexicalInstructionAST constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lexicalInstructionAST & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lexicalInstructionAST & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lexicalInstructionAST & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GALGAS_lexicalInstructionAST constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lexicalInstructionAST & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lexicalInstructionAST & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalInstructionAST getter_mInstructionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalInstructionListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalInstructionListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lexicalInstructionListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_lexicalInstructionListAST_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_lexicalInstructionListAST ;
 
} ; // End of GALGAS_lexicalInstructionListAST class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_lexicalInstructionListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_lexicalInstructionListAST (const GALGAS_lexicalInstructionListAST & inEnumeratedObject,
                                                 const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lexicalInstructionAST current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_lexicalInstructionListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalInstructionListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalInstructionListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalInstructionListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lexicalInstructionAST mProperty_mInstruction ;
  public: inline GALGAS_lexicalInstructionAST readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_lexicalInstructionListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GALGAS_lexicalInstructionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_lexicalInstructionListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_lexicalInstructionListAST_2D_element (const GALGAS_lexicalInstructionAST & in_mInstruction) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_lexicalInstructionListAST_2D_element init_21_ (const class GALGAS_lexicalInstructionAST & inOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalInstructionListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_lexicalInstructionListAST_2D_element class_func_new (const class GALGAS_lexicalInstructionAST & inOperand0,
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
 
} ; // End of GALGAS_lexicalInstructionListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalInstructionListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractLexicalRuleAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_abstractLexicalRuleAST_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_abstractLexicalRuleAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_abstractLexicalRuleAST_2D_weak (const class GALGAS_abstractLexicalRuleAST & inSource) ;

  public: GALGAS_abstractLexicalRuleAST_2D_weak & operator = (const class GALGAS_abstractLexicalRuleAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_abstractLexicalRuleAST bang_abstractLexicalRuleAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractLexicalRuleAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_abstractLexicalRuleAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_abstractLexicalRuleAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_abstractLexicalRuleAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractLexicalRuleAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@lexicalRuleListAST useLoopLocalVar' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_bool extensionGetter_useLoopLocalVar (const class GALGAS_lexicalRuleListAST & inObject,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractLexicalRuleAST lexicalRuleUsesLoopLocalVar'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_bool callExtensionGetter_lexicalRuleUsesLoopLocalVar (const class cPtr_abstractLexicalRuleAST * inObject,
                                                                   class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalImplicitRuleAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalImplicitRuleAST : public GALGAS_abstractLexicalRuleAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalImplicitRuleAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalImplicitRuleAST (const class cPtr_lexicalImplicitRuleAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mListName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_lexicalImplicitRuleAST init_21_ (const class GALGAS_lstring & inOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalImplicitRuleAST extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_lexicalImplicitRuleAST class_func_new (const class GALGAS_lstring & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_lexicalImplicitRuleAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalImplicitRuleAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalImplicitRuleAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalImplicitRuleAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalImplicitRuleAST : public cPtr_abstractLexicalRuleAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalImplicitRuleAST_init_21_ (const class GALGAS_lstring & inOperand0,
                                                Compiler * inCompiler) ;


//--- Extension getter generateLexicalRuleCode
  public: virtual class GALGAS_string getter_generateLexicalRuleCode (const class GALGAS_string inScannerClassName,
           const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateObjcCocoaCode
  public: virtual class GALGAS_string getter_generateObjcCocoaCode (const class GALGAS_string inScannerClassName,
           const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaCode
  public: virtual class GALGAS_string getter_generateSwiftCocoaCode (const class GALGAS_string inScannerClassName,
           const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter lexicalRuleUsesLoopLocalVar
  public: virtual class GALGAS_bool getter_lexicalRuleUsesLoopLocalVar (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalRule
  public: virtual void method_checkLexicalRule (class GALGAS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mListName ;


//--- Default constructor
  public: cPtr_lexicalImplicitRuleAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalImplicitRuleAST (const GALGAS_lstring & in_mListName
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalImplicitRuleAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalImplicitRuleAST_2D_weak : public GALGAS_abstractLexicalRuleAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexicalImplicitRuleAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalImplicitRuleAST_2D_weak (const class GALGAS_lexicalImplicitRuleAST & inSource) ;

  public: GALGAS_lexicalImplicitRuleAST_2D_weak & operator = (const class GALGAS_lexicalImplicitRuleAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalImplicitRuleAST bang_lexicalImplicitRuleAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalImplicitRuleAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_lexicalImplicitRuleAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_lexicalImplicitRuleAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalImplicitRuleAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalImplicitRuleAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalExplicitRuleAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalExplicitRuleAST : public GALGAS_abstractLexicalRuleAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalExplicitRuleAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalExplicitRuleAST (const class cPtr_lexicalExplicitRuleAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lexicalExpressionAST readProperty_mLexicalRuleExpression (void) const ;

  public: class GALGAS_lexicalInstructionListAST readProperty_mInstructionList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_lexicalExplicitRuleAST init_21__21_ (const class GALGAS_lexicalExpressionAST & inOperand0,
                                                             const class GALGAS_lexicalInstructionListAST & inOperand1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalExplicitRuleAST extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_lexicalExplicitRuleAST class_func_new (const class GALGAS_lexicalExpressionAST & inOperand0,
                                                                     const class GALGAS_lexicalInstructionListAST & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_lexicalExplicitRuleAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalExplicitRuleAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalExplicitRuleAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalExplicitRuleAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalExplicitRuleAST : public cPtr_abstractLexicalRuleAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalExplicitRuleAST_init_21__21_ (const class GALGAS_lexicalExpressionAST & inOperand0,
                                                    const class GALGAS_lexicalInstructionListAST & inOperand1,
                                                    Compiler * inCompiler) ;


//--- Extension getter generateLexicalRuleCode
  public: virtual class GALGAS_string getter_generateLexicalRuleCode (const class GALGAS_string inScannerClassName,
           const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateObjcCocoaCode
  public: virtual class GALGAS_string getter_generateObjcCocoaCode (const class GALGAS_string inScannerClassName,
           const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaCode
  public: virtual class GALGAS_string getter_generateSwiftCocoaCode (const class GALGAS_string inScannerClassName,
           const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter lexicalRuleUsesLoopLocalVar
  public: virtual class GALGAS_bool getter_lexicalRuleUsesLoopLocalVar (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalRule
  public: virtual void method_checkLexicalRule (class GALGAS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lexicalExpressionAST mProperty_mLexicalRuleExpression ;
  public: GALGAS_lexicalInstructionListAST mProperty_mInstructionList ;


//--- Default constructor
  public: cPtr_lexicalExplicitRuleAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalExplicitRuleAST (const GALGAS_lexicalExpressionAST & in_mLexicalRuleExpression,
                                       const GALGAS_lexicalInstructionListAST & in_mInstructionList
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalExplicitRuleAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalExplicitRuleAST_2D_weak : public GALGAS_abstractLexicalRuleAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexicalExplicitRuleAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalExplicitRuleAST_2D_weak (const class GALGAS_lexicalExplicitRuleAST & inSource) ;

  public: GALGAS_lexicalExplicitRuleAST_2D_weak & operator = (const class GALGAS_lexicalExplicitRuleAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalExplicitRuleAST bang_lexicalExplicitRuleAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalExplicitRuleAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_lexicalExplicitRuleAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_lexicalExplicitRuleAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalExplicitRuleAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalExplicitRuleAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @sentLexicalAttributeListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

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
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_sentLexicalAttributeListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFormalSelector (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalSelector = inValue ;
  }

  public: inline void setter_setMAttributeName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAttributeName = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_sentLexicalAttributeListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_sentLexicalAttributeListAST_2D_element (const GALGAS_lstring & in_mFormalSelector,
                                                         const GALGAS_lstring & in_mAttributeName) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_sentLexicalAttributeListAST_2D_element init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_lstring & inOperand1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_sentLexicalAttributeListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_sentLexicalAttributeListAST_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                     const class GALGAS_lstring & inOperand1,
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
 
} ; // End of GALGAS_sentLexicalAttributeListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sentLexicalAttributeListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalListEntryListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

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

  public: GALGAS_bool mProperty_nonAtomicSelection ;
  public: inline GALGAS_bool readProperty_nonAtomicSelection (void) const {
    return mProperty_nonAtomicSelection ;
  }

  public: GALGAS_bool mProperty_isEndOfTemplateMark ;
  public: inline GALGAS_bool readProperty_isEndOfTemplateMark (void) const {
    return mProperty_isEndOfTemplateMark ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_lexicalListEntryListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMEntrySpelling (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEntrySpelling = inValue ;
  }

  public: inline void setter_setMTerminalSpelling (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTerminalSpelling = inValue ;
  }

  public: inline void setter_setNonAtomicSelection (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_nonAtomicSelection = inValue ;
  }

  public: inline void setter_setIsEndOfTemplateMark (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isEndOfTemplateMark = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_lexicalListEntryListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_lexicalListEntryListAST_2D_element (const GALGAS_lstring & in_mEntrySpelling,
                                                     const GALGAS_lstring & in_mTerminalSpelling,
                                                     const GALGAS_bool & in_nonAtomicSelection,
                                                     const GALGAS_bool & in_isEndOfTemplateMark) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_lexicalListEntryListAST_2D_element init_21__21__21_nonAtomicSelection_21_isEndOfTemplateMark (const class GALGAS_lstring & inOperand0,
                                                                                                                      const class GALGAS_lstring & inOperand1,
                                                                                                                      const class GALGAS_bool & inOperand2,
                                                                                                                      const class GALGAS_bool & inOperand3,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalListEntryListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_lexicalListEntryListAST_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1,
                                                                                 const class GALGAS_bool & inOperand2,
                                                                                 const class GALGAS_bool & inOperand3,
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
 
} ; // End of GALGAS_lexicalListEntryListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalListEntryListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalOrExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalOrExpressionAST : public GALGAS_lexicalExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalOrExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalOrExpressionAST (const class cPtr_lexicalOrExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lexicalExpressionAST readProperty_mLeftOperand (void) const ;

  public: class GALGAS_lexicalExpressionAST readProperty_mRightOperand (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_lexicalOrExpressionAST init_21__21_ (const class GALGAS_lexicalExpressionAST & inOperand0,
                                                             const class GALGAS_lexicalExpressionAST & inOperand1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalOrExpressionAST extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_lexicalOrExpressionAST class_func_new (const class GALGAS_lexicalExpressionAST & inOperand0,
                                                                     const class GALGAS_lexicalExpressionAST & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_lexicalOrExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalOrExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalOrExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalOrExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalOrExpressionAST : public cPtr_lexicalExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalOrExpressionAST_init_21__21_ (const class GALGAS_lexicalExpressionAST & inOperand0,
                                                    const class GALGAS_lexicalExpressionAST & inOperand1,
                                                    Compiler * inCompiler) ;


//--- Extension getter generateConditionCode
  public: virtual class GALGAS_string getter_generateConditionCode (const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateObjcCocoaConditionCode
  public: virtual class GALGAS_string getter_generateObjcCocoaConditionCode (const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaConditionCode
  public: virtual class GALGAS_string getter_generateSwiftCocoaConditionCode (const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalExpression
  public: virtual void method_checkLexicalExpression (class GALGAS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lexicalExpressionAST mProperty_mLeftOperand ;
  public: GALGAS_lexicalExpressionAST mProperty_mRightOperand ;


//--- Default constructor
  public: cPtr_lexicalOrExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalOrExpressionAST (const GALGAS_lexicalExpressionAST & in_mLeftOperand,
                                       const GALGAS_lexicalExpressionAST & in_mRightOperand
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalOrExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalOrExpressionAST_2D_weak : public GALGAS_lexicalExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexicalOrExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalOrExpressionAST_2D_weak (const class GALGAS_lexicalOrExpressionAST & inSource) ;

  public: GALGAS_lexicalOrExpressionAST_2D_weak & operator = (const class GALGAS_lexicalOrExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalOrExpressionAST bang_lexicalOrExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalOrExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_lexicalOrExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_lexicalOrExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalOrExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalOrExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalCharacterSetMatchAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalCharacterSetMatchAST : public GALGAS_lexicalExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalCharacterSetMatchAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalCharacterSetMatchAST (const class cPtr_lexicalCharacterSetMatchAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mCharacterSetName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_lexicalCharacterSetMatchAST init_21_ (const class GALGAS_lstring & inOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalCharacterSetMatchAST extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_lexicalCharacterSetMatchAST class_func_new (const class GALGAS_lstring & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_lexicalCharacterSetMatchAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalCharacterSetMatchAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalCharacterSetMatchAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalCharacterSetMatchAST : public cPtr_lexicalExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalCharacterSetMatchAST_init_21_ (const class GALGAS_lstring & inOperand0,
                                                     Compiler * inCompiler) ;


//--- Extension getter generateConditionCode
  public: virtual class GALGAS_string getter_generateConditionCode (const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateObjcCocoaConditionCode
  public: virtual class GALGAS_string getter_generateObjcCocoaConditionCode (const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaConditionCode
  public: virtual class GALGAS_string getter_generateSwiftCocoaConditionCode (const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalExpression
  public: virtual void method_checkLexicalExpression (class GALGAS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mCharacterSetName ;


//--- Default constructor
  public: cPtr_lexicalCharacterSetMatchAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalCharacterSetMatchAST (const GALGAS_lstring & in_mCharacterSetName
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalCharacterSetMatchAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalCharacterSetMatchAST_2D_weak : public GALGAS_lexicalExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexicalCharacterSetMatchAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalCharacterSetMatchAST_2D_weak (const class GALGAS_lexicalCharacterSetMatchAST & inSource) ;

  public: GALGAS_lexicalCharacterSetMatchAST_2D_weak & operator = (const class GALGAS_lexicalCharacterSetMatchAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalCharacterSetMatchAST bang_lexicalCharacterSetMatchAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalCharacterSetMatchAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_lexicalCharacterSetMatchAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_lexicalCharacterSetMatchAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalCharacterSetMatchAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalCharacterMatchAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalCharacterMatchAST : public GALGAS_lexicalExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexicalCharacterMatchAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_lexicalCharacterMatchAST (const class cPtr_lexicalCharacterMatchAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lchar readProperty_mCharacter (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_lexicalCharacterMatchAST init_21_ (const class GALGAS_lchar & inOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalCharacterMatchAST extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_lexicalCharacterMatchAST class_func_new (const class GALGAS_lchar & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_lexicalCharacterMatchAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalCharacterMatchAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCharacterMatchAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexicalCharacterMatchAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_lexicalCharacterMatchAST : public cPtr_lexicalExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexicalCharacterMatchAST_init_21_ (const class GALGAS_lchar & inOperand0,
                                                  Compiler * inCompiler) ;


//--- Extension getter generateConditionCode
  public: virtual class GALGAS_string getter_generateConditionCode (const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateObjcCocoaConditionCode
  public: virtual class GALGAS_string getter_generateObjcCocoaConditionCode (const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter generateSwiftCocoaConditionCode
  public: virtual class GALGAS_string getter_generateSwiftCocoaConditionCode (const class GALGAS_lexiqueAnalysisContext inLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method checkLexicalExpression
  public: virtual void method_checkLexicalExpression (class GALGAS_lexiqueAnalysisContext & arg_ioLexiqueAnalysisContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lchar mProperty_mCharacter ;


//--- Default constructor
  public: cPtr_lexicalCharacterMatchAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexicalCharacterMatchAST (const GALGAS_lchar & in_mCharacter
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexicalCharacterMatchAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexicalCharacterMatchAST_2D_weak : public GALGAS_lexicalExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexicalCharacterMatchAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexicalCharacterMatchAST_2D_weak (const class GALGAS_lexicalCharacterMatchAST & inSource) ;

  public: GALGAS_lexicalCharacterMatchAST_2D_weak & operator = (const class GALGAS_lexicalCharacterMatchAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexicalCharacterMatchAST bang_lexicalCharacterMatchAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexicalCharacterMatchAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_lexicalCharacterMatchAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_lexicalCharacterMatchAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexicalCharacterMatchAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCharacterMatchAST_2D_weak ;

