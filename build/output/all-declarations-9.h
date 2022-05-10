#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-8.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractCollectionValueElementForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_abstractCollectionValueElementForGeneration_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_abstractCollectionValueElementForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_abstractCollectionValueElementForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_abstractCollectionValueElementForGeneration_2D_weak (const class GALGAS_abstractCollectionValueElementForGeneration & inSource) ;

  public: GALGAS_abstractCollectionValueElementForGeneration_2D_weak & operator = (const class GALGAS_abstractCollectionValueElementForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_abstractCollectionValueElementForGeneration bang_abstractCollectionValueElementForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractCollectionValueElementForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_abstractCollectionValueElementForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_abstractCollectionValueElementForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractCollectionValueElementForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractCollectionValueElementForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractCollectionValueElementForGeneration generateCollectionElementCode'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_abstractCollectionValueElementForGeneration_generateCollectionElementCode) (const class cPtr_abstractCollectionValueElementForGeneration * inObject,
                                                                                                                    const class GALGAS_unifiedTypeMap_2D_entry constinArgument0,
                                                                                                                    class GALGAS_string & ioArgument1,
                                                                                                                    class GALGAS_stringset & ioArgument2,
                                                                                                                    class GALGAS_uint & ioArgument3,
                                                                                                                    class GALGAS_stringset & ioArgument4,
                                                                                                                    const class GALGAS_string constinArgument5,
                                                                                                                    class C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_generateCollectionElementCode (const int32_t inClassIndex,
                                                         extensionMethodSignature_abstractCollectionValueElementForGeneration_generateCollectionElementCode inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_generateCollectionElementCode (const class cPtr_abstractCollectionValueElementForGeneration * inObject,
                                                        const GALGAS_unifiedTypeMap_2D_entry constin_inTargetType,
                                                        GALGAS_string & io_ioGeneratedCode,
                                                        GALGAS_stringset & io_ioInclusionSet,
                                                        GALGAS_uint & io_ioTemporaryVariableIndex,
                                                        GALGAS_stringset & io_ioUnusedVariableCppNameSet,
                                                        const GALGAS_string constin_inCppTargetVar,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @expressionCollectionValueForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_expressionCollectionValueForGeneration : public GALGAS_abstractCollectionValueElementForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_expressionCollectionValueForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_expressionCollectionValueForGeneration (const class cPtr_expressionCollectionValueForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_semanticExpressionForGeneration readProperty_mExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_expressionCollectionValueForGeneration extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_expressionCollectionValueForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                                      const class GALGAS_semanticExpressionForGeneration & inOperand1
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_expressionCollectionValueForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMExpression (class GALGAS_semanticExpressionForGeneration inArgument0
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_expressionCollectionValueForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_expressionCollectionValueForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @expressionCollectionValueForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_expressionCollectionValueForGeneration : public cPtr_abstractCollectionValueElementForGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_semanticExpressionForGeneration mProperty_mExpression ;

//--- Constructor
  public: cPtr_expressionCollectionValueForGeneration (const GALGAS_location & in_mExpressionLocation,
                                                       const GALGAS_semanticExpressionForGeneration & in_mExpression
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
// Phase 1: @expressionCollectionValueForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_expressionCollectionValueForGeneration_2D_weak : public GALGAS_abstractCollectionValueElementForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_expressionCollectionValueForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_expressionCollectionValueForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_expressionCollectionValueForGeneration_2D_weak (const class GALGAS_expressionCollectionValueForGeneration & inSource) ;

  public: GALGAS_expressionCollectionValueForGeneration_2D_weak & operator = (const class GALGAS_expressionCollectionValueForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_expressionCollectionValueForGeneration bang_expressionCollectionValueForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_expressionCollectionValueForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_expressionCollectionValueForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_expressionCollectionValueForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_expressionCollectionValueForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_expressionCollectionValueForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @expressionListCollectionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_expressionListCollectionForGeneration : public GALGAS_abstractCollectionValueElementForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_expressionListCollectionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_expressionListCollectionForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_expressionListCollectionForGeneration (const class cPtr_expressionListCollectionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_semanticExpressionListForGeneration readProperty_mExpressionList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_expressionListCollectionForGeneration extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_expressionListCollectionForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                                     const class GALGAS_semanticExpressionListForGeneration & inOperand1
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_expressionListCollectionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMExpressionList (class GALGAS_semanticExpressionListForGeneration inArgument0
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_expressionListCollectionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_expressionListCollectionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @expressionListCollectionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_expressionListCollectionForGeneration : public cPtr_abstractCollectionValueElementForGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_semanticExpressionListForGeneration mProperty_mExpressionList ;

//--- Constructor
  public: cPtr_expressionListCollectionForGeneration (const GALGAS_location & in_mExpressionLocation,
                                                      const GALGAS_semanticExpressionListForGeneration & in_mExpressionList
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
// Phase 1: @expressionListCollectionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_expressionListCollectionForGeneration_2D_weak : public GALGAS_abstractCollectionValueElementForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_expressionListCollectionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_expressionListCollectionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_expressionListCollectionForGeneration_2D_weak (const class GALGAS_expressionListCollectionForGeneration & inSource) ;

  public: GALGAS_expressionListCollectionForGeneration_2D_weak & operator = (const class GALGAS_expressionListCollectionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_expressionListCollectionForGeneration bang_expressionListCollectionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_expressionListCollectionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_expressionListCollectionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_expressionListCollectionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_expressionListCollectionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_expressionListCollectionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @expressionCollectionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_expressionCollectionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_expressionCollectionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_expressionCollectionForGeneration (const class cPtr_expressionCollectionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_collectionValueElementListForGeneration readProperty_mElementList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_expressionCollectionForGeneration extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_expressionCollectionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                 const class GALGAS_location & inOperand1,
                                                                                 const class GALGAS_collectionValueElementListForGeneration & inOperand2
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_expressionCollectionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMElementList (class GALGAS_collectionValueElementListForGeneration inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_expressionCollectionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_expressionCollectionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @expressionCollectionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_expressionCollectionForGeneration : public cPtr_semanticExpressionForGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_collectionValueElementListForGeneration mProperty_mElementList ;

//--- Constructor
  public: cPtr_expressionCollectionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                  const GALGAS_location & in_mLocation,
                                                  const GALGAS_collectionValueElementListForGeneration & in_mElementList
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
// Phase 1: @expressionCollectionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_expressionCollectionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_expressionCollectionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_expressionCollectionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_expressionCollectionForGeneration_2D_weak (const class GALGAS_expressionCollectionForGeneration & inSource) ;

  public: GALGAS_expressionCollectionForGeneration_2D_weak & operator = (const class GALGAS_expressionCollectionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_expressionCollectionForGeneration bang_expressionCollectionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_expressionCollectionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_expressionCollectionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_expressionCollectionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_expressionCollectionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_expressionCollectionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @selfInExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_selfInExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_selfInExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_selfInExpressionAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_selfInExpressionAST (const class cPtr_selfInExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mSelfLocation (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_selfInExpressionAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_selfInExpressionAST constructor_new (const class GALGAS_location & inOperand0
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_selfInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selfInExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfInExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @selfInExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_selfInExpressionAST : public cPtr_semanticExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_location mProperty_mSelfLocation ;

//--- Constructor
  public: cPtr_selfInExpressionAST (const GALGAS_location & in_mSelfLocation
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
// Phase 1: @selfInExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_selfInExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_selfInExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_selfInExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_selfInExpressionAST_2D_weak (const class GALGAS_selfInExpressionAST & inSource) ;

  public: GALGAS_selfInExpressionAST_2D_weak & operator = (const class GALGAS_selfInExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_selfInExpressionAST bang_selfInExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_selfInExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_selfInExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_selfInExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selfInExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfInExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @selfInExpressionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_selfInExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_selfInExpressionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_selfInExpressionForGeneration (const class cPtr_selfInExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mSelfCppName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_selfInExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_selfInExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                             const class GALGAS_location & inOperand1,
                                                                             const class GALGAS_string & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_selfInExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selfInExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfInExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @selfInExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_selfInExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_string mProperty_mSelfCppName ;

//--- Constructor
  public: cPtr_selfInExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                              const GALGAS_location & in_mLocation,
                                              const GALGAS_string & in_mSelfCppName
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
// Phase 1: @selfInExpressionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_selfInExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_selfInExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_selfInExpressionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_selfInExpressionForGeneration_2D_weak (const class GALGAS_selfInExpressionForGeneration & inSource) ;

  public: GALGAS_selfInExpressionForGeneration_2D_weak & operator = (const class GALGAS_selfInExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_selfInExpressionForGeneration bang_selfInExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_selfInExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_selfInExpressionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_selfInExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selfInExpressionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfInExpressionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @structPropertyAccessExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_structPropertyAccessExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_structPropertyAccessExpressionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_structPropertyAccessExpressionAST (const class cPtr_structPropertyAccessExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mExpression (void) const ;

  public: class GALGAS_lstring readProperty_mPropertyName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_structPropertyAccessExpressionAST extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_structPropertyAccessExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                 const class GALGAS_semanticExpressionAST & inOperand1,
                                                                                 const class GALGAS_lstring & inOperand2
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_structPropertyAccessExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMExpression (class GALGAS_semanticExpressionAST inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyName (class GALGAS_lstring inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_structPropertyAccessExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structPropertyAccessExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @structPropertyAccessExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_structPropertyAccessExpressionAST : public cPtr_semanticExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_semanticExpressionAST mProperty_mExpression ;
  public: GALGAS_lstring mProperty_mPropertyName ;

//--- Constructor
  public: cPtr_structPropertyAccessExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                  const GALGAS_semanticExpressionAST & in_mExpression,
                                                  const GALGAS_lstring & in_mPropertyName
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
// Phase 1: @structPropertyAccessExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_structPropertyAccessExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_structPropertyAccessExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_structPropertyAccessExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_structPropertyAccessExpressionAST_2D_weak (const class GALGAS_structPropertyAccessExpressionAST & inSource) ;

  public: GALGAS_structPropertyAccessExpressionAST_2D_weak & operator = (const class GALGAS_structPropertyAccessExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_structPropertyAccessExpressionAST bang_structPropertyAccessExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_structPropertyAccessExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_structPropertyAccessExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_structPropertyAccessExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_structPropertyAccessExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structPropertyAccessExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @structPropertyAccessExpressionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_structPropertyAccessExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_structPropertyAccessExpressionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_structPropertyAccessExpressionForGeneration (const class cPtr_structPropertyAccessExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_semanticExpressionForGeneration readProperty_mExpression (void) const ;

  public: class GALGAS_string readProperty_mStructFieldName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_structPropertyAccessExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_structPropertyAccessExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                           const class GALGAS_location & inOperand1,
                                                                                           const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                                           const class GALGAS_string & inOperand3
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_structPropertyAccessExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMExpression (class GALGAS_semanticExpressionForGeneration inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStructFieldName (class GALGAS_string inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_structPropertyAccessExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structPropertyAccessExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @structPropertyAccessExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_structPropertyAccessExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_semanticExpressionForGeneration mProperty_mExpression ;
  public: GALGAS_string mProperty_mStructFieldName ;

//--- Constructor
  public: cPtr_structPropertyAccessExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                            const GALGAS_location & in_mLocation,
                                                            const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                            const GALGAS_string & in_mStructFieldName
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
// Phase 1: @structPropertyAccessExpressionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_structPropertyAccessExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_structPropertyAccessExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_structPropertyAccessExpressionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_structPropertyAccessExpressionForGeneration_2D_weak (const class GALGAS_structPropertyAccessExpressionForGeneration & inSource) ;

  public: GALGAS_structPropertyAccessExpressionForGeneration_2D_weak & operator = (const class GALGAS_structPropertyAccessExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_structPropertyAccessExpressionForGeneration bang_structPropertyAccessExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_structPropertyAccessExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_structPropertyAccessExpressionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_structPropertyAccessExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_structPropertyAccessExpressionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structPropertyAccessExpressionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @notExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_notExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_notExpressionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_notExpressionAST (const class cPtr_notExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_notExpressionAST extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_notExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                const class GALGAS_semanticExpressionAST & inOperand1
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_notExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_notExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_notExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @notExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_notExpressionAST : public cPtr_semanticExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_semanticExpressionAST mProperty_mExpression ;

//--- Constructor
  public: cPtr_notExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                 const GALGAS_semanticExpressionAST & in_mExpression
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
// Phase 1: @notExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_notExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_notExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_notExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_notExpressionAST_2D_weak (const class GALGAS_notExpressionAST & inSource) ;

  public: GALGAS_notExpressionAST_2D_weak & operator = (const class GALGAS_notExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_notExpressionAST bang_notExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_notExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_notExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_notExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_notExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_notExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @notExpressionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_notExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_notExpressionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_notExpressionForGeneration (const class cPtr_notExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_semanticExpressionForGeneration readProperty_mExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_notExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_notExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                          const class GALGAS_location & inOperand1,
                                                                          const class GALGAS_semanticExpressionForGeneration & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_notExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_notExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_notExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @notExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_notExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_semanticExpressionForGeneration mProperty_mExpression ;

//--- Constructor
  public: cPtr_notExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                           const GALGAS_location & in_mLocation,
                                           const GALGAS_semanticExpressionForGeneration & in_mExpression
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
// Phase 1: @notExpressionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_notExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_notExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_notExpressionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_notExpressionForGeneration_2D_weak (const class GALGAS_notExpressionForGeneration & inSource) ;

  public: GALGAS_notExpressionForGeneration_2D_weak & operator = (const class GALGAS_notExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_notExpressionForGeneration bang_notExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_notExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_notExpressionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_notExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_notExpressionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_notExpressionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @tildeExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_tildeExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_tildeExpressionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_tildeExpressionAST (const class cPtr_tildeExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_tildeExpressionAST extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_tildeExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                  const class GALGAS_semanticExpressionAST & inOperand1
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_tildeExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_tildeExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tildeExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @tildeExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_tildeExpressionAST : public cPtr_semanticExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_semanticExpressionAST mProperty_mExpression ;

//--- Constructor
  public: cPtr_tildeExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                   const GALGAS_semanticExpressionAST & in_mExpression
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
// Phase 1: @tildeExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_tildeExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_tildeExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_tildeExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_tildeExpressionAST_2D_weak (const class GALGAS_tildeExpressionAST & inSource) ;

  public: GALGAS_tildeExpressionAST_2D_weak & operator = (const class GALGAS_tildeExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_tildeExpressionAST bang_tildeExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_tildeExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_tildeExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_tildeExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_tildeExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tildeExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @tildeExpressionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_tildeExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_tildeExpressionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_tildeExpressionForGeneration (const class cPtr_tildeExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_semanticExpressionForGeneration readProperty_mExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_tildeExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_tildeExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                            const class GALGAS_location & inOperand1,
                                                                            const class GALGAS_semanticExpressionForGeneration & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_tildeExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_tildeExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tildeExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @tildeExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_tildeExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_semanticExpressionForGeneration mProperty_mExpression ;

//--- Constructor
  public: cPtr_tildeExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                             const GALGAS_location & in_mLocation,
                                             const GALGAS_semanticExpressionForGeneration & in_mExpression
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
// Phase 1: @tildeExpressionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_tildeExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_tildeExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_tildeExpressionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_tildeExpressionForGeneration_2D_weak (const class GALGAS_tildeExpressionForGeneration & inSource) ;

  public: GALGAS_tildeExpressionForGeneration_2D_weak & operator = (const class GALGAS_tildeExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_tildeExpressionForGeneration bang_tildeExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_tildeExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_tildeExpressionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_tildeExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_tildeExpressionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tildeExpressionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @bangExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bangExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_bangExpressionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_bangExpressionAST (const class cPtr_bangExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_bangExpressionAST extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_bangExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                 const class GALGAS_semanticExpressionAST & inOperand1
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_bangExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMExpression (class GALGAS_semanticExpressionAST inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_bangExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bangExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @bangExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_bangExpressionAST : public cPtr_semanticExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_semanticExpressionAST mProperty_mExpression ;

//--- Constructor
  public: cPtr_bangExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                  const GALGAS_semanticExpressionAST & in_mExpression
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
// Phase 1: @bangExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bangExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_bangExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_bangExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_bangExpressionAST_2D_weak (const class GALGAS_bangExpressionAST & inSource) ;

  public: GALGAS_bangExpressionAST_2D_weak & operator = (const class GALGAS_bangExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_bangExpressionAST bang_bangExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_bangExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_bangExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_bangExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_bangExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bangExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @bangExpressionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bangExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_bangExpressionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_bangExpressionForGeneration (const class cPtr_bangExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_semanticExpressionForGeneration readProperty_mExpression (void) const ;

  public: class GALGAS_string readProperty_mReceiverTypeName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_bangExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_bangExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                           const class GALGAS_location & inOperand1,
                                                                           const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                           const class GALGAS_string & inOperand3
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_bangExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMExpression (class GALGAS_semanticExpressionForGeneration inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReceiverTypeName (class GALGAS_string inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_bangExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bangExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @bangExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_bangExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_semanticExpressionForGeneration mProperty_mExpression ;
  public: GALGAS_string mProperty_mReceiverTypeName ;

//--- Constructor
  public: cPtr_bangExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                            const GALGAS_location & in_mLocation,
                                            const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                            const GALGAS_string & in_mReceiverTypeName
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
// Phase 1: @bangExpressionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bangExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_bangExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_bangExpressionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_bangExpressionForGeneration_2D_weak (const class GALGAS_bangExpressionForGeneration & inSource) ;

  public: GALGAS_bangExpressionForGeneration_2D_weak & operator = (const class GALGAS_bangExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_bangExpressionForGeneration bang_bangExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_bangExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_bangExpressionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_bangExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_bangExpressionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bangExpressionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @unaryWrappingMinusExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_unaryWrappingMinusExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_unaryWrappingMinusExpressionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_unaryWrappingMinusExpressionAST (const class cPtr_unaryWrappingMinusExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_unaryWrappingMinusExpressionAST extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_unaryWrappingMinusExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                               const class GALGAS_semanticExpressionAST & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_unaryWrappingMinusExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_unaryWrappingMinusExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @unaryWrappingMinusExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_unaryWrappingMinusExpressionAST : public cPtr_semanticExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_semanticExpressionAST mProperty_mExpression ;

//--- Constructor
  public: cPtr_unaryWrappingMinusExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                const GALGAS_semanticExpressionAST & in_mExpression
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
// Phase 1: @unaryWrappingMinusExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_unaryWrappingMinusExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_unaryWrappingMinusExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_unaryWrappingMinusExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_unaryWrappingMinusExpressionAST_2D_weak (const class GALGAS_unaryWrappingMinusExpressionAST & inSource) ;

  public: GALGAS_unaryWrappingMinusExpressionAST_2D_weak & operator = (const class GALGAS_unaryWrappingMinusExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_unaryWrappingMinusExpressionAST bang_unaryWrappingMinusExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_unaryWrappingMinusExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_unaryWrappingMinusExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_unaryWrappingMinusExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_unaryWrappingMinusExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @unaryWrappingMinusExpressionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_unaryWrappingMinusExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_unaryWrappingMinusExpressionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_unaryWrappingMinusExpressionForGeneration (const class cPtr_unaryWrappingMinusExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_semanticExpressionForGeneration readProperty_mExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_unaryWrappingMinusExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_unaryWrappingMinusExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                         const class GALGAS_location & inOperand1,
                                                                                         const class GALGAS_semanticExpressionForGeneration & inOperand2
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_unaryWrappingMinusExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_unaryWrappingMinusExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @unaryWrappingMinusExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_unaryWrappingMinusExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_semanticExpressionForGeneration mProperty_mExpression ;

//--- Constructor
  public: cPtr_unaryWrappingMinusExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                          const GALGAS_location & in_mLocation,
                                                          const GALGAS_semanticExpressionForGeneration & in_mExpression
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
// Phase 1: @unaryWrappingMinusExpressionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_unaryWrappingMinusExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_unaryWrappingMinusExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_unaryWrappingMinusExpressionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_unaryWrappingMinusExpressionForGeneration_2D_weak (const class GALGAS_unaryWrappingMinusExpressionForGeneration & inSource) ;

  public: GALGAS_unaryWrappingMinusExpressionForGeneration_2D_weak & operator = (const class GALGAS_unaryWrappingMinusExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_unaryWrappingMinusExpressionForGeneration bang_unaryWrappingMinusExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_unaryWrappingMinusExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_unaryWrappingMinusExpressionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_unaryWrappingMinusExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_unaryWrappingMinusExpressionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @orExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_orExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_orExpressionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_orExpressionAST (const class cPtr_orExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_orExpressionAST extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_orExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                               const class GALGAS_semanticExpressionAST & inOperand1,
                                                               const class GALGAS_semanticExpressionAST & inOperand2
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_orExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_orExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @orExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_orExpressionAST : public cPtr_semanticExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_semanticExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_orExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                const GALGAS_semanticExpressionAST & in_mRightExpression
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
// Phase 1: @orExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_orExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_orExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_orExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_orExpressionAST_2D_weak (const class GALGAS_orExpressionAST & inSource) ;

  public: GALGAS_orExpressionAST_2D_weak & operator = (const class GALGAS_orExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_orExpressionAST bang_orExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_orExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_orExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_orExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_orExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @orShortExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_orShortExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_orShortExpressionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_orShortExpressionAST (const class cPtr_orShortExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_orShortExpressionAST extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_orShortExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                    const class GALGAS_semanticExpressionAST & inOperand1,
                                                                    const class GALGAS_semanticExpressionAST & inOperand2
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_orShortExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_orShortExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orShortExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @orShortExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_orShortExpressionAST : public cPtr_semanticExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_semanticExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_orShortExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                     const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                     const GALGAS_semanticExpressionAST & in_mRightExpression
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
// Phase 1: @orShortExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_orShortExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_orShortExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_orShortExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_orShortExpressionAST_2D_weak (const class GALGAS_orShortExpressionAST & inSource) ;

  public: GALGAS_orShortExpressionAST_2D_weak & operator = (const class GALGAS_orShortExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_orShortExpressionAST bang_orShortExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_orShortExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_orShortExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_orShortExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_orShortExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orShortExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @xorExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_xorExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_xorExpressionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_xorExpressionAST (const class cPtr_xorExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_xorExpressionAST extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_xorExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                const class GALGAS_semanticExpressionAST & inOperand1,
                                                                const class GALGAS_semanticExpressionAST & inOperand2
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_xorExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_xorExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_xorExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @xorExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_xorExpressionAST : public cPtr_semanticExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_semanticExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_xorExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                 const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                 const GALGAS_semanticExpressionAST & in_mRightExpression
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
// Phase 1: @xorExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_xorExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_xorExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_xorExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_xorExpressionAST_2D_weak (const class GALGAS_xorExpressionAST & inSource) ;

  public: GALGAS_xorExpressionAST_2D_weak & operator = (const class GALGAS_xorExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_xorExpressionAST bang_xorExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_xorExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_xorExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_xorExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_xorExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_xorExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @closedSliceExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_closedSliceExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_closedSliceExpressionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_closedSliceExpressionAST (const class cPtr_closedSliceExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_closedSliceExpressionAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_closedSliceExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                        const class GALGAS_semanticExpressionAST & inOperand1,
                                                                        const class GALGAS_semanticExpressionAST & inOperand2
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_closedSliceExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_closedSliceExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_closedSliceExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @closedSliceExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_closedSliceExpressionAST : public cPtr_semanticExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_semanticExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_closedSliceExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                         const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                         const GALGAS_semanticExpressionAST & in_mRightExpression
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
// Phase 1: @closedSliceExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_closedSliceExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_closedSliceExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_closedSliceExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_closedSliceExpressionAST_2D_weak (const class GALGAS_closedSliceExpressionAST & inSource) ;

  public: GALGAS_closedSliceExpressionAST_2D_weak & operator = (const class GALGAS_closedSliceExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_closedSliceExpressionAST bang_closedSliceExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_closedSliceExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_closedSliceExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_closedSliceExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_closedSliceExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_closedSliceExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @openedSliceExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_openedSliceExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_openedSliceExpressionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_openedSliceExpressionAST (const class cPtr_openedSliceExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_openedSliceExpressionAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_openedSliceExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                        const class GALGAS_semanticExpressionAST & inOperand1,
                                                                        const class GALGAS_semanticExpressionAST & inOperand2
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_openedSliceExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_openedSliceExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_openedSliceExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @openedSliceExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_openedSliceExpressionAST : public cPtr_semanticExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_semanticExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_openedSliceExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                         const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                         const GALGAS_semanticExpressionAST & in_mRightExpression
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
// Phase 1: @openedSliceExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_openedSliceExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_openedSliceExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_openedSliceExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_openedSliceExpressionAST_2D_weak (const class GALGAS_openedSliceExpressionAST & inSource) ;

  public: GALGAS_openedSliceExpressionAST_2D_weak & operator = (const class GALGAS_openedSliceExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_openedSliceExpressionAST bang_openedSliceExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_openedSliceExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_openedSliceExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_openedSliceExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_openedSliceExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_openedSliceExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @orShortExpressionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_orShortExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_orShortExpressionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_orShortExpressionForGeneration (const class cPtr_orShortExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_semanticExpressionForGeneration readProperty_mLeftExpression (void) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_orShortExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_orShortExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                              const class GALGAS_location & inOperand1,
                                                                              const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                              const class GALGAS_semanticExpressionForGeneration & inOperand3
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_orShortExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_orShortExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orShortExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @orShortExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_orShortExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_semanticExpressionForGeneration mProperty_mLeftExpression ;
  public: GALGAS_semanticExpressionForGeneration mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_orShortExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                               const GALGAS_location & in_mLocation,
                                               const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                               const GALGAS_semanticExpressionForGeneration & in_mRightExpression
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
// Phase 1: @orShortExpressionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_orShortExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_orShortExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_orShortExpressionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_orShortExpressionForGeneration_2D_weak (const class GALGAS_orShortExpressionForGeneration & inSource) ;

  public: GALGAS_orShortExpressionForGeneration_2D_weak & operator = (const class GALGAS_orShortExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_orShortExpressionForGeneration bang_orShortExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_orShortExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_orShortExpressionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_orShortExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_orShortExpressionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orShortExpressionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @openedSliceExpressionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_openedSliceExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_openedSliceExpressionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_openedSliceExpressionForGeneration (const class cPtr_openedSliceExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_semanticExpressionForGeneration readProperty_mLeftExpression (void) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_openedSliceExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_openedSliceExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                  const class GALGAS_location & inOperand1,
                                                                                  const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                                  const class GALGAS_semanticExpressionForGeneration & inOperand3
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_openedSliceExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_openedSliceExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_openedSliceExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @openedSliceExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_openedSliceExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_semanticExpressionForGeneration mProperty_mLeftExpression ;
  public: GALGAS_semanticExpressionForGeneration mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_openedSliceExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                   const GALGAS_location & in_mLocation,
                                                   const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                   const GALGAS_semanticExpressionForGeneration & in_mRightExpression
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
// Phase 1: @openedSliceExpressionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_openedSliceExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_openedSliceExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_openedSliceExpressionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_openedSliceExpressionForGeneration_2D_weak (const class GALGAS_openedSliceExpressionForGeneration & inSource) ;

  public: GALGAS_openedSliceExpressionForGeneration_2D_weak & operator = (const class GALGAS_openedSliceExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_openedSliceExpressionForGeneration bang_openedSliceExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_openedSliceExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_openedSliceExpressionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_openedSliceExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_openedSliceExpressionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_openedSliceExpressionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @closedSliceExpressionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_closedSliceExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_closedSliceExpressionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_closedSliceExpressionForGeneration (const class cPtr_closedSliceExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_semanticExpressionForGeneration readProperty_mLeftExpression (void) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_closedSliceExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_closedSliceExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                  const class GALGAS_location & inOperand1,
                                                                                  const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                                  const class GALGAS_semanticExpressionForGeneration & inOperand3
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_closedSliceExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_closedSliceExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_closedSliceExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @closedSliceExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_closedSliceExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_semanticExpressionForGeneration mProperty_mLeftExpression ;
  public: GALGAS_semanticExpressionForGeneration mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_closedSliceExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                   const GALGAS_location & in_mLocation,
                                                   const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                   const GALGAS_semanticExpressionForGeneration & in_mRightExpression
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
// Phase 1: @closedSliceExpressionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_closedSliceExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_closedSliceExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_closedSliceExpressionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_closedSliceExpressionForGeneration_2D_weak (const class GALGAS_closedSliceExpressionForGeneration & inSource) ;

  public: GALGAS_closedSliceExpressionForGeneration_2D_weak & operator = (const class GALGAS_closedSliceExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_closedSliceExpressionForGeneration bang_closedSliceExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_closedSliceExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_closedSliceExpressionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_closedSliceExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_closedSliceExpressionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_closedSliceExpressionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @andShortExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_andShortExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_andShortExpressionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_andShortExpressionAST (const class cPtr_andShortExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_andShortExpressionAST extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_andShortExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                     const class GALGAS_semanticExpressionAST & inOperand1,
                                                                     const class GALGAS_semanticExpressionAST & inOperand2
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_andShortExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_semanticExpressionAST inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_semanticExpressionAST inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_andShortExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andShortExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @andShortExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_andShortExpressionAST : public cPtr_semanticExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_semanticExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_andShortExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                      const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                      const GALGAS_semanticExpressionAST & in_mRightExpression
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
// Phase 1: @andShortExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_andShortExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_andShortExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_andShortExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_andShortExpressionAST_2D_weak (const class GALGAS_andShortExpressionAST & inSource) ;

  public: GALGAS_andShortExpressionAST_2D_weak & operator = (const class GALGAS_andShortExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_andShortExpressionAST bang_andShortExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_andShortExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_andShortExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_andShortExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_andShortExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andShortExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @andExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_andExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_andExpressionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_andExpressionAST (const class cPtr_andExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_andExpressionAST extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_andExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                const class GALGAS_semanticExpressionAST & inOperand1,
                                                                const class GALGAS_semanticExpressionAST & inOperand2
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_andExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_semanticExpressionAST inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_semanticExpressionAST inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_andExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @andExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_andExpressionAST : public cPtr_semanticExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_semanticExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_andExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                 const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                 const GALGAS_semanticExpressionAST & in_mRightExpression
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
// Phase 1: @andExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_andExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_andExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_andExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_andExpressionAST_2D_weak (const class GALGAS_andExpressionAST & inSource) ;

  public: GALGAS_andExpressionAST_2D_weak & operator = (const class GALGAS_andExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_andExpressionAST bang_andExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_andExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_andExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_andExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_andExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @andShortExpressionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_andShortExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_andShortExpressionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_andShortExpressionForGeneration (const class cPtr_andShortExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_semanticExpressionForGeneration readProperty_mLeftExpression (void) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_andShortExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_andShortExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                               const class GALGAS_location & inOperand1,
                                                                               const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                               const class GALGAS_semanticExpressionForGeneration & inOperand3
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_andShortExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_semanticExpressionForGeneration inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_semanticExpressionForGeneration inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_andShortExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andShortExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @andShortExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_andShortExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_semanticExpressionForGeneration mProperty_mLeftExpression ;
  public: GALGAS_semanticExpressionForGeneration mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_andShortExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                const GALGAS_location & in_mLocation,
                                                const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                const GALGAS_semanticExpressionForGeneration & in_mRightExpression
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
// Phase 1: @andShortExpressionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_andShortExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_andShortExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_andShortExpressionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_andShortExpressionForGeneration_2D_weak (const class GALGAS_andShortExpressionForGeneration & inSource) ;

  public: GALGAS_andShortExpressionForGeneration_2D_weak & operator = (const class GALGAS_andShortExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_andShortExpressionForGeneration bang_andShortExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_andShortExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_andShortExpressionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_andShortExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_andShortExpressionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andShortExpressionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @selfAvailability enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_selfAvailability_available : public cEnumAssociatedValues {
  public: const GALGAS_unifiedTypeMap_2D_entry mAssociatedValue0 ;
  public: const GALGAS_bool mAssociatedValue1 ;
  public: const GALGAS_bool mAssociatedValue2 ;

//--- Constructor
  public: cEnumAssociatedValues_selfAvailability_available (const GALGAS_unifiedTypeMap_2D_entry & inAssociatedValue0,
                                                            const GALGAS_bool & inAssociatedValue1,
                                                            const GALGAS_bool & inAssociatedValue2
                                                            COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_selfAvailability_available (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_semanticExpressionAST_analyzeSemanticExpression) (const class cPtr_semanticExpressionAST * inObject,
                                                                                          const class GALGAS_lstring constinArgument0,
                                                                                          class GALGAS_usefulEntitiesGraph & ioArgument1,
                                                                                          const class GALGAS_unifiedTypeMap_2D_entry constinArgument2,
                                                                                          const class GALGAS_analysisContext constinArgument3,
                                                                                          class GALGAS_localVarManager & ioArgument4,
                                                                                          class GALGAS_semanticExpressionForGeneration & outArgument5,
                                                                                          class C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_analyzeSemanticExpression (const int32_t inClassIndex,
                                                     extensionMethodSignature_semanticExpressionAST_analyzeSemanticExpression inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeSemanticExpression (const class cPtr_semanticExpressionAST * inObject,
                                                    const GALGAS_lstring constin_inUsefulnessCallerEntityName,
                                                    GALGAS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                    const GALGAS_unifiedTypeMap_2D_entry constin_inType,
                                                    const GALGAS_analysisContext constin_inAnalysisContext,
                                                    GALGAS_localVarManager & io_ioVariableMap,
                                                    GALGAS_semanticExpressionForGeneration & out_outExpression,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @assignmentInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_assignmentInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_assignmentInstructionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_assignmentInstructionAST (const class cPtr_assignmentInstructionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mTargetVariableName (void) const ;

  public: class GALGAS_lstring readProperty_mOptionalProperty (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mSourceExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_assignmentInstructionAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_assignmentInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                        const class GALGAS_lstring & inOperand1,
                                                                        const class GALGAS_lstring & inOperand2,
                                                                        const class GALGAS_semanticExpressionAST & inOperand3
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_assignmentInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_assignmentInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @assignmentInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_assignmentInstructionAST : public cPtr_semanticInstructionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mTargetVariableName ;
  public: GALGAS_lstring mProperty_mOptionalProperty ;
  public: GALGAS_semanticExpressionAST mProperty_mSourceExpression ;

//--- Constructor
  public: cPtr_assignmentInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                         const GALGAS_lstring & in_mTargetVariableName,
                                         const GALGAS_lstring & in_mOptionalProperty,
                                         const GALGAS_semanticExpressionAST & in_mSourceExpression
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
// Phase 1: @assignmentInstructionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_assignmentInstructionAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_assignmentInstructionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_assignmentInstructionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_assignmentInstructionAST_2D_weak (const class GALGAS_assignmentInstructionAST & inSource) ;

  public: GALGAS_assignmentInstructionAST_2D_weak & operator = (const class GALGAS_assignmentInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_assignmentInstructionAST bang_assignmentInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_assignmentInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_assignmentInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_assignmentInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_assignmentInstructionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentInstructionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @selfPropertyAssignmentInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_selfPropertyAssignmentInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_selfPropertyAssignmentInstructionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_selfPropertyAssignmentInstructionAST (const class cPtr_selfPropertyAssignmentInstructionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mTargetSelfPropertyName (void) const ;

  public: class GALGAS_lstring readProperty_mOptionalProperty (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mSourceExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_selfPropertyAssignmentInstructionAST extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_selfPropertyAssignmentInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                    const class GALGAS_lstring & inOperand1,
                                                                                    const class GALGAS_lstring & inOperand2,
                                                                                    const class GALGAS_semanticExpressionAST & inOperand3
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_selfPropertyAssignmentInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selfPropertyAssignmentInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfPropertyAssignmentInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @selfPropertyAssignmentInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_selfPropertyAssignmentInstructionAST : public cPtr_semanticInstructionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mTargetSelfPropertyName ;
  public: GALGAS_lstring mProperty_mOptionalProperty ;
  public: GALGAS_semanticExpressionAST mProperty_mSourceExpression ;

//--- Constructor
  public: cPtr_selfPropertyAssignmentInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                     const GALGAS_lstring & in_mTargetSelfPropertyName,
                                                     const GALGAS_lstring & in_mOptionalProperty,
                                                     const GALGAS_semanticExpressionAST & in_mSourceExpression
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
// Phase 1: @selfPropertyAssignmentInstructionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_selfPropertyAssignmentInstructionAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_selfPropertyAssignmentInstructionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_selfPropertyAssignmentInstructionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_selfPropertyAssignmentInstructionAST_2D_weak (const class GALGAS_selfPropertyAssignmentInstructionAST & inSource) ;

  public: GALGAS_selfPropertyAssignmentInstructionAST_2D_weak & operator = (const class GALGAS_selfPropertyAssignmentInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_selfPropertyAssignmentInstructionAST bang_selfPropertyAssignmentInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_selfPropertyAssignmentInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_selfPropertyAssignmentInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_selfPropertyAssignmentInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selfPropertyAssignmentInstructionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfPropertyAssignmentInstructionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @assignmentInstructionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_assignmentInstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_assignmentInstructionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_assignmentInstructionForGeneration (const class cPtr_assignmentInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_unifiedTypeMap_2D_entry readProperty_mTargetType (void) const ;

  public: class GALGAS_string readProperty_mTargetCppName (void) const ;

  public: class GALGAS_string readProperty_mNameForCheckingFormalParameterUsing (void) const ;

  public: class GALGAS_string readProperty_mOptionalProperty (void) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_mSourceExpression (void) const ;

  public: class GALGAS_location readProperty_mSourceLocation (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_assignmentInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_assignmentInstructionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                  const class GALGAS_string & inOperand1,
                                                                                  const class GALGAS_string & inOperand2,
                                                                                  const class GALGAS_string & inOperand3,
                                                                                  const class GALGAS_semanticExpressionForGeneration & inOperand4,
                                                                                  const class GALGAS_location & inOperand5
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_assignmentInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_assignmentInstructionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentInstructionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @assignmentInstructionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_assignmentInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mTargetType ;
  public: GALGAS_string mProperty_mTargetCppName ;
  public: GALGAS_string mProperty_mNameForCheckingFormalParameterUsing ;
  public: GALGAS_string mProperty_mOptionalProperty ;
  public: GALGAS_semanticExpressionForGeneration mProperty_mSourceExpression ;
  public: GALGAS_location mProperty_mSourceLocation ;

//--- Constructor
  public: cPtr_assignmentInstructionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mTargetType,
                                                   const GALGAS_string & in_mTargetCppName,
                                                   const GALGAS_string & in_mNameForCheckingFormalParameterUsing,
                                                   const GALGAS_string & in_mOptionalProperty,
                                                   const GALGAS_semanticExpressionForGeneration & in_mSourceExpression,
                                                   const GALGAS_location & in_mSourceLocation
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
// Phase 1: @assignmentInstructionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_assignmentInstructionForGeneration_2D_weak : public GALGAS_semanticInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_assignmentInstructionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_assignmentInstructionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_assignmentInstructionForGeneration_2D_weak (const class GALGAS_assignmentInstructionForGeneration & inSource) ;

  public: GALGAS_assignmentInstructionForGeneration_2D_weak & operator = (const class GALGAS_assignmentInstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_assignmentInstructionForGeneration bang_assignmentInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_assignmentInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_assignmentInstructionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_assignmentInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_assignmentInstructionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentInstructionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @castInstructionBranchListAST list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_castInstructionBranchListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_castInstructionBranchListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_castInstructionBranchListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mTypeName,
                                                 const class GALGAS_lstring & in_mConstantVarName,
                                                 const class GALGAS_semanticInstructionListAST & in_mInstructionList,
                                                 const class GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                 const class GALGAS_location & in_mEndOfInstructions
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_castInstructionBranchListAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_castInstructionBranchListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_castInstructionBranchListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_lstring & inOperand1,
                                                                                      const class GALGAS_semanticInstructionListAST & inOperand2,
                                                                                      const class GALGAS_dynamicTypeComparisonKind & inOperand3,
                                                                                      const class GALGAS_location & inOperand4
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_castInstructionBranchListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_semanticInstructionListAST & inOperand2,
                                                     const class GALGAS_dynamicTypeComparisonKind & inOperand3,
                                                     const class GALGAS_location & inOperand4
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_castInstructionBranchListAST add_operation (const GALGAS_castInstructionBranchListAST & inOperand,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_castInstructionBranchListAST_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_semanticInstructionListAST constinArgument2,
                                                      class GALGAS_dynamicTypeComparisonKind constinArgument3,
                                                      class GALGAS_location constinArgument4,
                                                      class GALGAS_uint constinArgument5,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_semanticInstructionListAST & outArgument2,
                                                 class GALGAS_dynamicTypeComparisonKind & outArgument3,
                                                 class GALGAS_location & outArgument4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                class GALGAS_semanticInstructionListAST & outArgument2,
                                                class GALGAS_dynamicTypeComparisonKind & outArgument3,
                                                class GALGAS_location & outArgument4,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_semanticInstructionListAST & outArgument2,
                                                      class GALGAS_dynamicTypeComparisonKind & outArgument3,
                                                      class GALGAS_location & outArgument4,
                                                      class GALGAS_uint constinArgument5,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMConstantVarNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfInstructionsAtIndex (class GALGAS_location constinArgument0,
                                                                     class GALGAS_uint constinArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GALGAS_semanticInstructionListAST constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeComparisonKindAtIndex (class GALGAS_dynamicTypeComparisonKind constinArgument0,
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
                                              class GALGAS_semanticInstructionListAST & outArgument2,
                                              class GALGAS_dynamicTypeComparisonKind & outArgument3,
                                              class GALGAS_location & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             class GALGAS_semanticInstructionListAST & outArgument2,
                                             class GALGAS_dynamicTypeComparisonKind & outArgument3,
                                             class GALGAS_location & outArgument4,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mConstantVarNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfInstructionsAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListAST getter_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_dynamicTypeComparisonKind getter_mTypeComparisonKindAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_castInstructionBranchListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_castInstructionBranchListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_castInstructionBranchListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_castInstructionBranchListAST ;
 
} ; // End of GALGAS_castInstructionBranchListAST class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_castInstructionBranchListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_castInstructionBranchListAST (const GALGAS_castInstructionBranchListAST & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mTypeName (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mConstantVarName (LOCATION_ARGS) const ;
  public: class GALGAS_semanticInstructionListAST current_mInstructionList (LOCATION_ARGS) const ;
  public: class GALGAS_dynamicTypeComparisonKind current_mTypeComparisonKind (LOCATION_ARGS) const ;
  public: class GALGAS_location current_mEndOfInstructions (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_castInstructionBranchListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_castInstructionBranchListAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @castInstructionBranchListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_castInstructionBranchListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mTypeName ;
  public: inline GALGAS_lstring readProperty_mTypeName (void) const {
    return mProperty_mTypeName ;
  }

  public: GALGAS_lstring mProperty_mConstantVarName ;
  public: inline GALGAS_lstring readProperty_mConstantVarName (void) const {
    return mProperty_mConstantVarName ;
  }

  public: GALGAS_semanticInstructionListAST mProperty_mInstructionList ;
  public: inline GALGAS_semanticInstructionListAST readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

  public: GALGAS_dynamicTypeComparisonKind mProperty_mTypeComparisonKind ;
  public: inline GALGAS_dynamicTypeComparisonKind readProperty_mTypeComparisonKind (void) const {
    return mProperty_mTypeComparisonKind ;
  }

  public: GALGAS_location mProperty_mEndOfInstructions ;
  public: inline GALGAS_location readProperty_mEndOfInstructions (void) const {
    return mProperty_mEndOfInstructions ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_castInstructionBranchListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTypeName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTypeName = inValue ;
  }

  public: inline void setter_setMConstantVarName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConstantVarName = inValue ;
  }

  public: inline void setter_setMInstructionList (const GALGAS_semanticInstructionListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

  public: inline void setter_setMTypeComparisonKind (const GALGAS_dynamicTypeComparisonKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTypeComparisonKind = inValue ;
  }

  public: inline void setter_setMEndOfInstructions (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfInstructions = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_castInstructionBranchListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_castInstructionBranchListAST_2D_element (const GALGAS_lstring & in_mTypeName,
                                                          const GALGAS_lstring & in_mConstantVarName,
                                                          const GALGAS_semanticInstructionListAST & in_mInstructionList,
                                                          const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                          const GALGAS_location & in_mEndOfInstructions) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_castInstructionBranchListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_castInstructionBranchListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_lstring & inOperand1,
                                                                                       const class GALGAS_semanticInstructionListAST & inOperand2,
                                                                                       const class GALGAS_dynamicTypeComparisonKind & inOperand3,
                                                                                       const class GALGAS_location & inOperand4
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_castInstructionBranchListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_castInstructionBranchListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_castInstructionBranchListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @structuredCastInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_structuredCastInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_structuredCastInstructionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_structuredCastInstructionAST (const class cPtr_structuredCastInstructionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_semanticExpressionAST readProperty_mCastExpression (void) const ;

  public: class GALGAS_castInstructionBranchListAST readProperty_mCastInstructionBranchList (void) const ;

  public: class GALGAS_semanticInstructionListAST readProperty_mElseInstructionList (void) const ;

  public: class GALGAS_location readProperty_mEndOfCastInstruction (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_structuredCastInstructionAST extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_structuredCastInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                            const class GALGAS_semanticExpressionAST & inOperand1,
                                                                            const class GALGAS_castInstructionBranchListAST & inOperand2,
                                                                            const class GALGAS_semanticInstructionListAST & inOperand3,
                                                                            const class GALGAS_location & inOperand4
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_structuredCastInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_structuredCastInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structuredCastInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @structuredCastInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_structuredCastInstructionAST : public cPtr_semanticInstructionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_semanticExpressionAST mProperty_mCastExpression ;
  public: GALGAS_castInstructionBranchListAST mProperty_mCastInstructionBranchList ;
  public: GALGAS_semanticInstructionListAST mProperty_mElseInstructionList ;
  public: GALGAS_location mProperty_mEndOfCastInstruction ;

//--- Constructor
  public: cPtr_structuredCastInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                             const GALGAS_semanticExpressionAST & in_mCastExpression,
                                             const GALGAS_castInstructionBranchListAST & in_mCastInstructionBranchList,
                                             const GALGAS_semanticInstructionListAST & in_mElseInstructionList,
                                             const GALGAS_location & in_mEndOfCastInstruction
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
// Phase 1: @structuredCastInstructionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_structuredCastInstructionAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_structuredCastInstructionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_structuredCastInstructionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_structuredCastInstructionAST_2D_weak (const class GALGAS_structuredCastInstructionAST & inSource) ;

  public: GALGAS_structuredCastInstructionAST_2D_weak & operator = (const class GALGAS_structuredCastInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_structuredCastInstructionAST bang_structuredCastInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_structuredCastInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_structuredCastInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_structuredCastInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_structuredCastInstructionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structuredCastInstructionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @castInstructionBranchListForGeneration list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_castInstructionBranchListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_castInstructionBranchListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_castInstructionBranchListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                 const class GALGAS_unifiedTypeMap_2D_entry & in_mType,
                                                 const class GALGAS_string & in_mCastedVarCppName,
                                                 const class GALGAS_semanticInstructionListForGeneration & in_mInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_castInstructionBranchListForGeneration extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_castInstructionBranchListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_castInstructionBranchListForGeneration constructor_listWithValue (const class GALGAS_dynamicTypeComparisonKind & inOperand0,
                                                                                                const class GALGAS_unifiedTypeMap_2D_entry & inOperand1,
                                                                                                const class GALGAS_string & inOperand2,
                                                                                                const class GALGAS_semanticInstructionListForGeneration & inOperand3
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_castInstructionBranchListForGeneration inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_dynamicTypeComparisonKind & inOperand0,
                                                     const class GALGAS_unifiedTypeMap_2D_entry & inOperand1,
                                                     const class GALGAS_string & inOperand2,
                                                     const class GALGAS_semanticInstructionListForGeneration & inOperand3
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_castInstructionBranchListForGeneration add_operation (const GALGAS_castInstructionBranchListForGeneration & inOperand,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_castInstructionBranchListForGeneration_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_dynamicTypeComparisonKind constinArgument0,
                                                      class GALGAS_unifiedTypeMap_2D_entry constinArgument1,
                                                      class GALGAS_string constinArgument2,
                                                      class GALGAS_semanticInstructionListForGeneration constinArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_dynamicTypeComparisonKind & outArgument0,
                                                 class GALGAS_unifiedTypeMap_2D_entry & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 class GALGAS_semanticInstructionListForGeneration & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_dynamicTypeComparisonKind & outArgument0,
                                                class GALGAS_unifiedTypeMap_2D_entry & outArgument1,
                                                class GALGAS_string & outArgument2,
                                                class GALGAS_semanticInstructionListForGeneration & outArgument3,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_dynamicTypeComparisonKind & outArgument0,
                                                      class GALGAS_unifiedTypeMap_2D_entry & outArgument1,
                                                      class GALGAS_string & outArgument2,
                                                      class GALGAS_semanticInstructionListForGeneration & outArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCastedVarCppNameAtIndex (class GALGAS_string constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GALGAS_semanticInstructionListForGeneration constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeAtIndex (class GALGAS_unifiedTypeMap_2D_entry constinArgument0,
                                                        class GALGAS_uint constinArgument1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeComparisonKindAtIndex (class GALGAS_dynamicTypeComparisonKind constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_dynamicTypeComparisonKind & outArgument0,
                                              class GALGAS_unifiedTypeMap_2D_entry & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              class GALGAS_semanticInstructionListForGeneration & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_dynamicTypeComparisonKind & outArgument0,
                                             class GALGAS_unifiedTypeMap_2D_entry & outArgument1,
                                             class GALGAS_string & outArgument2,
                                             class GALGAS_semanticInstructionListForGeneration & outArgument3,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mCastedVarCppNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListForGeneration getter_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_dynamicTypeComparisonKind getter_mTypeComparisonKindAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_castInstructionBranchListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_castInstructionBranchListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_castInstructionBranchListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_castInstructionBranchListForGeneration ;
 
} ; // End of GALGAS_castInstructionBranchListForGeneration class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_castInstructionBranchListForGeneration : public cGenericAbstractEnumerator {
  public: cEnumerator_castInstructionBranchListForGeneration (const GALGAS_castInstructionBranchListForGeneration & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_dynamicTypeComparisonKind current_mTypeComparisonKind (LOCATION_ARGS) const ;
  public: class GALGAS_unifiedTypeMap_2D_entry current_mType (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mCastedVarCppName (LOCATION_ARGS) const ;
  public: class GALGAS_semanticInstructionListForGeneration current_mInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_castInstructionBranchListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_castInstructionBranchListForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @castInstructionBranchListForGeneration_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_castInstructionBranchListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_dynamicTypeComparisonKind mProperty_mTypeComparisonKind ;
  public: inline GALGAS_dynamicTypeComparisonKind readProperty_mTypeComparisonKind (void) const {
    return mProperty_mTypeComparisonKind ;
  }

  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mType ;
  public: inline GALGAS_unifiedTypeMap_2D_entry readProperty_mType (void) const {
    return mProperty_mType ;
  }

  public: GALGAS_string mProperty_mCastedVarCppName ;
  public: inline GALGAS_string readProperty_mCastedVarCppName (void) const {
    return mProperty_mCastedVarCppName ;
  }

  public: GALGAS_semanticInstructionListForGeneration mProperty_mInstructionList ;
  public: inline GALGAS_semanticInstructionListForGeneration readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_castInstructionBranchListForGeneration_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTypeComparisonKind (const GALGAS_dynamicTypeComparisonKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTypeComparisonKind = inValue ;
  }

  public: inline void setter_setMType (const GALGAS_unifiedTypeMap_2D_entry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mType = inValue ;
  }

  public: inline void setter_setMCastedVarCppName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCastedVarCppName = inValue ;
  }

  public: inline void setter_setMInstructionList (const GALGAS_semanticInstructionListForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_castInstructionBranchListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_castInstructionBranchListForGeneration_2D_element (const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                    const GALGAS_unifiedTypeMap_2D_entry & in_mType,
                                                                    const GALGAS_string & in_mCastedVarCppName,
                                                                    const GALGAS_semanticInstructionListForGeneration & in_mInstructionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_castInstructionBranchListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_castInstructionBranchListForGeneration_2D_element constructor_new (const class GALGAS_dynamicTypeComparisonKind & inOperand0,
                                                                                                 const class GALGAS_unifiedTypeMap_2D_entry & inOperand1,
                                                                                                 const class GALGAS_string & inOperand2,
                                                                                                 const class GALGAS_semanticInstructionListForGeneration & inOperand3
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_castInstructionBranchListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_castInstructionBranchListForGeneration_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_castInstructionBranchListForGeneration_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @structuredCastInstructionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_structuredCastInstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_structuredCastInstructionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_structuredCastInstructionForGeneration (const class cPtr_structuredCastInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_semanticExpressionForGeneration readProperty_mExpression (void) const ;

  public: class GALGAS_castInstructionBranchListForGeneration readProperty_mCastBranchList (void) const ;

  public: class GALGAS_semanticInstructionListForGeneration readProperty_mElseInstructionList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_structuredCastInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_structuredCastInstructionForGeneration constructor_new (const class GALGAS_semanticExpressionForGeneration & inOperand0,
                                                                                      const class GALGAS_castInstructionBranchListForGeneration & inOperand1,
                                                                                      const class GALGAS_semanticInstructionListForGeneration & inOperand2
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_structuredCastInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_structuredCastInstructionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structuredCastInstructionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @structuredCastInstructionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_structuredCastInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_semanticExpressionForGeneration mProperty_mExpression ;
  public: GALGAS_castInstructionBranchListForGeneration mProperty_mCastBranchList ;
  public: GALGAS_semanticInstructionListForGeneration mProperty_mElseInstructionList ;

//--- Constructor
  public: cPtr_structuredCastInstructionForGeneration (const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                       const GALGAS_castInstructionBranchListForGeneration & in_mCastBranchList,
                                                       const GALGAS_semanticInstructionListForGeneration & in_mElseInstructionList
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
// Phase 1: @structuredCastInstructionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_structuredCastInstructionForGeneration_2D_weak : public GALGAS_semanticInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_structuredCastInstructionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_structuredCastInstructionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_structuredCastInstructionForGeneration_2D_weak (const class GALGAS_structuredCastInstructionForGeneration & inSource) ;

  public: GALGAS_structuredCastInstructionForGeneration_2D_weak & operator = (const class GALGAS_structuredCastInstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_structuredCastInstructionForGeneration bang_structuredCastInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_structuredCastInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_structuredCastInstructionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_structuredCastInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_structuredCastInstructionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structuredCastInstructionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @plusEqualElementsInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_plusEqualElementsInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_plusEqualElementsInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_plusEqualElementsInstructionAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_plusEqualElementsInstructionAST (const class cPtr_plusEqualElementsInstructionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_mPrefixedBySelf (void) const ;

  public: class GALGAS_lstring readProperty_mReceiverName (void) const ;

  public: class GALGAS_lstringlist readProperty_mStructAttributeList (void) const ;

  public: class GALGAS_actualOutputExpressionList readProperty_mExpressions (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_plusEqualElementsInstructionAST extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_plusEqualElementsInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                               const class GALGAS_bool & inOperand1,
                                                                               const class GALGAS_lstring & inOperand2,
                                                                               const class GALGAS_lstringlist & inOperand3,
                                                                               const class GALGAS_actualOutputExpressionList & inOperand4
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_plusEqualElementsInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_plusEqualElementsInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_plusEqualElementsInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @plusEqualElementsInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_plusEqualElementsInstructionAST : public cPtr_semanticInstructionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_bool mProperty_mPrefixedBySelf ;
  public: GALGAS_lstring mProperty_mReceiverName ;
  public: GALGAS_lstringlist mProperty_mStructAttributeList ;
  public: GALGAS_actualOutputExpressionList mProperty_mExpressions ;

//--- Constructor
  public: cPtr_plusEqualElementsInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_bool & in_mPrefixedBySelf,
                                                const GALGAS_lstring & in_mReceiverName,
                                                const GALGAS_lstringlist & in_mStructAttributeList,
                                                const GALGAS_actualOutputExpressionList & in_mExpressions
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
// Phase 1: @plusEqualElementsInstructionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_plusEqualElementsInstructionAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_plusEqualElementsInstructionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_plusEqualElementsInstructionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_plusEqualElementsInstructionAST_2D_weak (const class GALGAS_plusEqualElementsInstructionAST & inSource) ;

  public: GALGAS_plusEqualElementsInstructionAST_2D_weak & operator = (const class GALGAS_plusEqualElementsInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_plusEqualElementsInstructionAST bang_plusEqualElementsInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_plusEqualElementsInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_plusEqualElementsInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_plusEqualElementsInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_plusEqualElementsInstructionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_plusEqualElementsInstructionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @plusEqualExpressionInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_plusEqualExpressionInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_plusEqualExpressionInstructionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_plusEqualExpressionInstructionAST (const class cPtr_plusEqualExpressionInstructionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_mPrefixedBySelf (void) const ;

  public: class GALGAS_lstring readProperty_mReceiverName (void) const ;

  public: class GALGAS_lstringlist readProperty_mStructAttributeList (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_plusEqualExpressionInstructionAST extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_plusEqualExpressionInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                 const class GALGAS_bool & inOperand1,
                                                                                 const class GALGAS_lstring & inOperand2,
                                                                                 const class GALGAS_lstringlist & inOperand3,
                                                                                 const class GALGAS_semanticExpressionAST & inOperand4
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_plusEqualExpressionInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_plusEqualExpressionInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_plusEqualExpressionInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @plusEqualExpressionInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_plusEqualExpressionInstructionAST : public cPtr_semanticInstructionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_bool mProperty_mPrefixedBySelf ;
  public: GALGAS_lstring mProperty_mReceiverName ;
  public: GALGAS_lstringlist mProperty_mStructAttributeList ;
  public: GALGAS_semanticExpressionAST mProperty_mExpression ;

//--- Constructor
  public: cPtr_plusEqualExpressionInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                  const GALGAS_bool & in_mPrefixedBySelf,
                                                  const GALGAS_lstring & in_mReceiverName,
                                                  const GALGAS_lstringlist & in_mStructAttributeList,
                                                  const GALGAS_semanticExpressionAST & in_mExpression
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
// Phase 1: @plusEqualExpressionInstructionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_plusEqualExpressionInstructionAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_plusEqualExpressionInstructionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_plusEqualExpressionInstructionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_plusEqualExpressionInstructionAST_2D_weak (const class GALGAS_plusEqualExpressionInstructionAST & inSource) ;

  public: GALGAS_plusEqualExpressionInstructionAST_2D_weak & operator = (const class GALGAS_plusEqualExpressionInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_plusEqualExpressionInstructionAST bang_plusEqualExpressionInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_plusEqualExpressionInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_plusEqualExpressionInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_plusEqualExpressionInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_plusEqualExpressionInstructionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_plusEqualExpressionInstructionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @minusEqualExpressionInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_minusEqualExpressionInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_minusEqualExpressionInstructionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_minusEqualExpressionInstructionAST (const class cPtr_minusEqualExpressionInstructionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_mPrefixedBySelf (void) const ;

  public: class GALGAS_lstring readProperty_mReceiverName (void) const ;

  public: class GALGAS_lstringlist readProperty_mStructAttributeList (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_minusEqualExpressionInstructionAST extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_minusEqualExpressionInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                  const class GALGAS_bool & inOperand1,
                                                                                  const class GALGAS_lstring & inOperand2,
                                                                                  const class GALGAS_lstringlist & inOperand3,
                                                                                  const class GALGAS_semanticExpressionAST & inOperand4
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_minusEqualExpressionInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_minusEqualExpressionInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_minusEqualExpressionInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @minusEqualExpressionInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_minusEqualExpressionInstructionAST : public cPtr_semanticInstructionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_bool mProperty_mPrefixedBySelf ;
  public: GALGAS_lstring mProperty_mReceiverName ;
  public: GALGAS_lstringlist mProperty_mStructAttributeList ;
  public: GALGAS_semanticExpressionAST mProperty_mExpression ;

//--- Constructor
  public: cPtr_minusEqualExpressionInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                   const GALGAS_bool & in_mPrefixedBySelf,
                                                   const GALGAS_lstring & in_mReceiverName,
                                                   const GALGAS_lstringlist & in_mStructAttributeList,
                                                   const GALGAS_semanticExpressionAST & in_mExpression
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
// Phase 1: @minusEqualExpressionInstructionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_minusEqualExpressionInstructionAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_minusEqualExpressionInstructionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_minusEqualExpressionInstructionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_minusEqualExpressionInstructionAST_2D_weak (const class GALGAS_minusEqualExpressionInstructionAST & inSource) ;

  public: GALGAS_minusEqualExpressionInstructionAST_2D_weak & operator = (const class GALGAS_minusEqualExpressionInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_minusEqualExpressionInstructionAST bang_minusEqualExpressionInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_minusEqualExpressionInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_minusEqualExpressionInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_minusEqualExpressionInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_minusEqualExpressionInstructionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_minusEqualExpressionInstructionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @mulEqualExpressionInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_mulEqualExpressionInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_mulEqualExpressionInstructionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_mulEqualExpressionInstructionAST (const class cPtr_mulEqualExpressionInstructionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_mPrefixedBySelf (void) const ;

  public: class GALGAS_lstring readProperty_mReceiverName (void) const ;

  public: class GALGAS_lstringlist readProperty_mStructAttributeList (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_mulEqualExpressionInstructionAST extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_mulEqualExpressionInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                const class GALGAS_bool & inOperand1,
                                                                                const class GALGAS_lstring & inOperand2,
                                                                                const class GALGAS_lstringlist & inOperand3,
                                                                                const class GALGAS_semanticExpressionAST & inOperand4
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_mulEqualExpressionInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_mulEqualExpressionInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mulEqualExpressionInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @mulEqualExpressionInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_mulEqualExpressionInstructionAST : public cPtr_semanticInstructionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_bool mProperty_mPrefixedBySelf ;
  public: GALGAS_lstring mProperty_mReceiverName ;
  public: GALGAS_lstringlist mProperty_mStructAttributeList ;
  public: GALGAS_semanticExpressionAST mProperty_mExpression ;

//--- Constructor
  public: cPtr_mulEqualExpressionInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_bool & in_mPrefixedBySelf,
                                                 const GALGAS_lstring & in_mReceiverName,
                                                 const GALGAS_lstringlist & in_mStructAttributeList,
                                                 const GALGAS_semanticExpressionAST & in_mExpression
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
// Phase 1: @mulEqualExpressionInstructionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_mulEqualExpressionInstructionAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_mulEqualExpressionInstructionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_mulEqualExpressionInstructionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_mulEqualExpressionInstructionAST_2D_weak (const class GALGAS_mulEqualExpressionInstructionAST & inSource) ;

  public: GALGAS_mulEqualExpressionInstructionAST_2D_weak & operator = (const class GALGAS_mulEqualExpressionInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_mulEqualExpressionInstructionAST bang_mulEqualExpressionInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_mulEqualExpressionInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_mulEqualExpressionInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_mulEqualExpressionInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_mulEqualExpressionInstructionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mulEqualExpressionInstructionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @divEqualExpressionInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_divEqualExpressionInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_divEqualExpressionInstructionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_divEqualExpressionInstructionAST (const class cPtr_divEqualExpressionInstructionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_mPrefixedBySelf (void) const ;

  public: class GALGAS_lstring readProperty_mReceiverName (void) const ;

  public: class GALGAS_lstringlist readProperty_mStructAttributeList (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_divEqualExpressionInstructionAST extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_divEqualExpressionInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                const class GALGAS_bool & inOperand1,
                                                                                const class GALGAS_lstring & inOperand2,
                                                                                const class GALGAS_lstringlist & inOperand3,
                                                                                const class GALGAS_semanticExpressionAST & inOperand4
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_divEqualExpressionInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_divEqualExpressionInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_divEqualExpressionInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @divEqualExpressionInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_divEqualExpressionInstructionAST : public cPtr_semanticInstructionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_bool mProperty_mPrefixedBySelf ;
  public: GALGAS_lstring mProperty_mReceiverName ;
  public: GALGAS_lstringlist mProperty_mStructAttributeList ;
  public: GALGAS_semanticExpressionAST mProperty_mExpression ;

//--- Constructor
  public: cPtr_divEqualExpressionInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_bool & in_mPrefixedBySelf,
                                                 const GALGAS_lstring & in_mReceiverName,
                                                 const GALGAS_lstringlist & in_mStructAttributeList,
                                                 const GALGAS_semanticExpressionAST & in_mExpression
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
// Phase 1: @divEqualExpressionInstructionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_divEqualExpressionInstructionAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_divEqualExpressionInstructionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_divEqualExpressionInstructionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_divEqualExpressionInstructionAST_2D_weak (const class GALGAS_divEqualExpressionInstructionAST & inSource) ;

  public: GALGAS_divEqualExpressionInstructionAST_2D_weak & operator = (const class GALGAS_divEqualExpressionInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_divEqualExpressionInstructionAST bang_divEqualExpressionInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_divEqualExpressionInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_divEqualExpressionInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_divEqualExpressionInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_divEqualExpressionInstructionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_divEqualExpressionInstructionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @plusEqualnstructionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_plusEqualnstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_plusEqualnstructionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_plusEqualnstructionForGeneration (const class cPtr_plusEqualnstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mReceiverCppName (void) const ;

  public: class GALGAS_unifiedTypeMap_2D_entry readProperty_mTargetType (void) const ;

  public: class GALGAS_string readProperty_mNameForCheckingFormalParameterUsing (void) const ;

  public: class GALGAS_location readProperty_mInstructionLocation (void) const ;

  public: class GALGAS_lstringlist readProperty_mStructAttributeList (void) const ;

  public: class GALGAS_semanticExpressionListForGeneration readProperty_mExpressionList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_plusEqualnstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_plusEqualnstructionForGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                                const class GALGAS_unifiedTypeMap_2D_entry & inOperand1,
                                                                                const class GALGAS_string & inOperand2,
                                                                                const class GALGAS_location & inOperand3,
                                                                                const class GALGAS_lstringlist & inOperand4,
                                                                                const class GALGAS_semanticExpressionListForGeneration & inOperand5
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_plusEqualnstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_plusEqualnstructionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_plusEqualnstructionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @plusEqualnstructionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_plusEqualnstructionForGeneration : public cPtr_semanticInstructionForGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_string mProperty_mReceiverCppName ;
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mTargetType ;
  public: GALGAS_string mProperty_mNameForCheckingFormalParameterUsing ;
  public: GALGAS_location mProperty_mInstructionLocation ;
  public: GALGAS_lstringlist mProperty_mStructAttributeList ;
  public: GALGAS_semanticExpressionListForGeneration mProperty_mExpressionList ;

//--- Constructor
  public: cPtr_plusEqualnstructionForGeneration (const GALGAS_string & in_mReceiverCppName,
                                                 const GALGAS_unifiedTypeMap_2D_entry & in_mTargetType,
                                                 const GALGAS_string & in_mNameForCheckingFormalParameterUsing,
                                                 const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_lstringlist & in_mStructAttributeList,
                                                 const GALGAS_semanticExpressionListForGeneration & in_mExpressionList
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
// Phase 1: @plusEqualnstructionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_plusEqualnstructionForGeneration_2D_weak : public GALGAS_semanticInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_plusEqualnstructionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_plusEqualnstructionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_plusEqualnstructionForGeneration_2D_weak (const class GALGAS_plusEqualnstructionForGeneration & inSource) ;

  public: GALGAS_plusEqualnstructionForGeneration_2D_weak & operator = (const class GALGAS_plusEqualnstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_plusEqualnstructionForGeneration bang_plusEqualnstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_plusEqualnstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_plusEqualnstructionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_plusEqualnstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_plusEqualnstructionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_plusEqualnstructionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @opEqualInstructionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_opEqualInstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_opEqualInstructionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_opEqualInstructionForGeneration (const class cPtr_opEqualInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mInstructionLocation (void) const ;

  public: class GALGAS_unifiedTypeMap_2D_entry readProperty_mTargetType (void) const ;

  public: class GALGAS_string readProperty_mTargetVariableCppName (void) const ;

  public: class GALGAS_string readProperty_mNameForCheckingFormalParameterUsing (void) const ;

  public: class GALGAS_lstringlist readProperty_mStructAttributeList (void) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_mSourceExpression (void) const ;

  public: class GALGAS_string readProperty_mGeneratedMethod (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_opEqualInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_opEqualInstructionForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                               const class GALGAS_unifiedTypeMap_2D_entry & inOperand1,
                                                                               const class GALGAS_string & inOperand2,
                                                                               const class GALGAS_string & inOperand3,
                                                                               const class GALGAS_lstringlist & inOperand4,
                                                                               const class GALGAS_semanticExpressionForGeneration & inOperand5,
                                                                               const class GALGAS_string & inOperand6
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_opEqualInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_opEqualInstructionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_opEqualInstructionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @opEqualInstructionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_opEqualInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_location mProperty_mInstructionLocation ;
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mTargetType ;
  public: GALGAS_string mProperty_mTargetVariableCppName ;
  public: GALGAS_string mProperty_mNameForCheckingFormalParameterUsing ;
  public: GALGAS_lstringlist mProperty_mStructAttributeList ;
  public: GALGAS_semanticExpressionForGeneration mProperty_mSourceExpression ;
  public: GALGAS_string mProperty_mGeneratedMethod ;

//--- Constructor
  public: cPtr_opEqualInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_unifiedTypeMap_2D_entry & in_mTargetType,
                                                const GALGAS_string & in_mTargetVariableCppName,
                                                const GALGAS_string & in_mNameForCheckingFormalParameterUsing,
                                                const GALGAS_lstringlist & in_mStructAttributeList,
                                                const GALGAS_semanticExpressionForGeneration & in_mSourceExpression,
                                                const GALGAS_string & in_mGeneratedMethod
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
// Phase 1: @opEqualInstructionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_opEqualInstructionForGeneration_2D_weak : public GALGAS_semanticInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_opEqualInstructionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_opEqualInstructionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_opEqualInstructionForGeneration_2D_weak (const class GALGAS_opEqualInstructionForGeneration & inSource) ;

  public: GALGAS_opEqualInstructionForGeneration_2D_weak & operator = (const class GALGAS_opEqualInstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_opEqualInstructionForGeneration bang_opEqualInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_opEqualInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_opEqualInstructionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_opEqualInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_opEqualInstructionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_opEqualInstructionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @dropInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_dropInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_dropInstructionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_dropInstructionAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_dropInstructionAST (const class cPtr_dropInstructionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstringlist readProperty_mDropList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_dropInstructionAST extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_dropInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                  const class GALGAS_lstringlist & inOperand1
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_dropInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_dropInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dropInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @dropInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_dropInstructionAST : public cPtr_semanticInstructionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstringlist mProperty_mDropList ;

//--- Constructor
  public: cPtr_dropInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                   const GALGAS_lstringlist & in_mDropList
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
// Phase 1: @dropInstructionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_dropInstructionAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_dropInstructionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_dropInstructionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_dropInstructionAST_2D_weak (const class GALGAS_dropInstructionAST & inSource) ;

  public: GALGAS_dropInstructionAST_2D_weak & operator = (const class GALGAS_dropInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_dropInstructionAST bang_dropInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_dropInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_dropInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_dropInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_dropInstructionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dropInstructionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                            Phase 1: @fixitElementAST enum                                           *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_fixitElementAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_fixitElementAST (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_fixItRemove,
    kEnum_fixItReplace,
    kEnum_fixItInsertAfter,
    kEnum_fixItInsertBefore
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
  public: static GALGAS_fixitElementAST extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_fixitElementAST constructor_fixItInsertAfter (const class GALGAS_semanticExpressionAST & inOperand0,
                                                                            const class GALGAS_location & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_fixitElementAST constructor_fixItInsertBefore (const class GALGAS_semanticExpressionAST & inOperand0,
                                                                             const class GALGAS_location & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_fixitElementAST constructor_fixItRemove (LOCATION_ARGS) ;

  public: static class GALGAS_fixitElementAST constructor_fixItReplace (const class GALGAS_semanticExpressionAST & inOperand0,
                                                                        const class GALGAS_location & inOperand1
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_fixitElementAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_fixItInsertAfter (class GALGAS_semanticExpressionAST & outArgument0,
                                                         class GALGAS_location & outArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_fixItInsertBefore (class GALGAS_semanticExpressionAST & outArgument0,
                                                          class GALGAS_location & outArgument1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_fixItReplace (class GALGAS_semanticExpressionAST & outArgument0,
                                                     class GALGAS_location & outArgument1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isFixItInsertAfter (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isFixItInsertBefore (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isFixItRemove (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isFixItReplace (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_fixItInsertAfter (class GALGAS_semanticExpressionAST & outOperand0,
                                                           class GALGAS_location & outOperand1) const ;

  public: VIRTUAL_IN_DEBUG bool optional_fixItInsertBefore (class GALGAS_semanticExpressionAST & outOperand0,
                                                            class GALGAS_location & outOperand1) const ;

  public: VIRTUAL_IN_DEBUG bool optional_fixItRemove () const ;

  public: VIRTUAL_IN_DEBUG bool optional_fixItReplace (class GALGAS_semanticExpressionAST & outOperand0,
                                                       class GALGAS_location & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_fixitElementAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitElementAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @fixitElementAST enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_fixitElementAST_fixItReplace : public cEnumAssociatedValues {
  public: const GALGAS_semanticExpressionAST mAssociatedValue0 ;
  public: const GALGAS_location mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_fixitElementAST_fixItReplace (const GALGAS_semanticExpressionAST & inAssociatedValue0,
                                                              const GALGAS_location & inAssociatedValue1
                                                              COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_fixitElementAST_fixItReplace (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_fixitElementAST_fixItInsertAfter : public cEnumAssociatedValues {
  public: const GALGAS_semanticExpressionAST mAssociatedValue0 ;
  public: const GALGAS_location mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_fixitElementAST_fixItInsertAfter (const GALGAS_semanticExpressionAST & inAssociatedValue0,
                                                                  const GALGAS_location & inAssociatedValue1
                                                                  COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_fixitElementAST_fixItInsertAfter (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_fixitElementAST_fixItInsertBefore : public cEnumAssociatedValues {
  public: const GALGAS_semanticExpressionAST mAssociatedValue0 ;
  public: const GALGAS_location mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_fixitElementAST_fixItInsertBefore (const GALGAS_semanticExpressionAST & inAssociatedValue0,
                                                                   const GALGAS_location & inAssociatedValue1
                                                                   COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_fixitElementAST_fixItInsertBefore (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @fixitListAST list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_fixitListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_fixitListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_fixitListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_fixitElementAST & in_mElement
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_fixitListAST extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_fixitListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_fixitListAST constructor_listWithValue (const class GALGAS_fixitElementAST & inOperand0
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_fixitListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_fixitElementAST & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_fixitListAST add_operation (const GALGAS_fixitListAST & inOperand,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_fixitListAST_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_fixitElementAST constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_fixitElementAST & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_fixitElementAST & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_fixitElementAST & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMElementAtIndex (class GALGAS_fixitElementAST constinArgument0,
                                                           class GALGAS_uint constinArgument1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_fixitElementAST & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_fixitElementAST & outArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_fixitElementAST getter_mElementAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_fixitListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_fixitListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_fixitListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_fixitListAST ;
 
} ; // End of GALGAS_fixitListAST class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_fixitListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_fixitListAST (const GALGAS_fixitListAST & inEnumeratedObject,
                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_fixitElementAST current_mElement (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_fixitListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitListAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @fixitListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_fixitListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_fixitElementAST mProperty_mElement ;
  public: inline GALGAS_fixitElementAST readProperty_mElement (void) const {
    return mProperty_mElement ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_fixitListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMElement (const GALGAS_fixitElementAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mElement = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_fixitListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_fixitListAST_2D_element (const GALGAS_fixitElementAST & in_mElement) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_fixitListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_fixitListAST_2D_element constructor_new (const class GALGAS_fixitElementAST & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_fixitListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_fixitListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @errorInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_errorInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_errorInstructionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_errorInstructionAST (const class cPtr_errorInstructionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_semanticExpressionAST readProperty_mLocationExpression (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mMessageExpression (void) const ;

  public: class GALGAS_lstringlist readProperty_mBuiltVariableList (void) const ;

  public: class GALGAS_fixitListAST readProperty_mFixitListAST (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_errorInstructionAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_errorInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                   const class GALGAS_semanticExpressionAST & inOperand1,
                                                                   const class GALGAS_semanticExpressionAST & inOperand2,
                                                                   const class GALGAS_lstringlist & inOperand3,
                                                                   const class GALGAS_fixitListAST & inOperand4
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_errorInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_errorInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_errorInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @errorInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_errorInstructionAST : public cPtr_semanticInstructionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_semanticExpressionAST mProperty_mLocationExpression ;
  public: GALGAS_semanticExpressionAST mProperty_mMessageExpression ;
  public: GALGAS_lstringlist mProperty_mBuiltVariableList ;
  public: GALGAS_fixitListAST mProperty_mFixitListAST ;

//--- Constructor
  public: cPtr_errorInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                    const GALGAS_semanticExpressionAST & in_mLocationExpression,
                                    const GALGAS_semanticExpressionAST & in_mMessageExpression,
                                    const GALGAS_lstringlist & in_mBuiltVariableList,
                                    const GALGAS_fixitListAST & in_mFixitListAST
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
// Phase 1: @errorInstructionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_errorInstructionAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_errorInstructionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_errorInstructionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_errorInstructionAST_2D_weak (const class GALGAS_errorInstructionAST & inSource) ;

  public: GALGAS_errorInstructionAST_2D_weak & operator = (const class GALGAS_errorInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_errorInstructionAST bang_errorInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_errorInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_errorInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_errorInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_errorInstructionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_errorInstructionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@fixitListAST enterFixItListInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_enterFixItListInSemanticContext (const class GALGAS_fixitListAST inObject,
                                                      class GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                       Phase 1: @fixitElementForGeneration enum                                      *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_fixitElementForGeneration : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_fixitElementForGeneration (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_fixItRemove,
    kEnum_fixItReplace,
    kEnum_fixItInsertBefore,
    kEnum_fixItInsertAfter
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
  public: static GALGAS_fixitElementForGeneration extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_fixitElementForGeneration constructor_fixItInsertAfter (const class GALGAS_semanticExpressionForGeneration & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_fixitElementForGeneration constructor_fixItInsertBefore (const class GALGAS_semanticExpressionForGeneration & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_fixitElementForGeneration constructor_fixItRemove (LOCATION_ARGS) ;

  public: static class GALGAS_fixitElementForGeneration constructor_fixItReplace (const class GALGAS_semanticExpressionForGeneration & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_fixitElementForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_fixItInsertAfter (class GALGAS_semanticExpressionForGeneration & outArgument0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_fixItInsertBefore (class GALGAS_semanticExpressionForGeneration & outArgument0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_fixItReplace (class GALGAS_semanticExpressionForGeneration & outArgument0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isFixItInsertAfter (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isFixItInsertBefore (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isFixItRemove (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isFixItReplace (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_fixItInsertAfter (class GALGAS_semanticExpressionForGeneration & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_fixItInsertBefore (class GALGAS_semanticExpressionForGeneration & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_fixItRemove () const ;

  public: VIRTUAL_IN_DEBUG bool optional_fixItReplace (class GALGAS_semanticExpressionForGeneration & outOperand0) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_fixitElementForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitElementForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @fixitElementForGeneration enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_fixitElementForGeneration_fixItReplace : public cEnumAssociatedValues {
  public: const GALGAS_semanticExpressionForGeneration mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_fixitElementForGeneration_fixItReplace (const GALGAS_semanticExpressionForGeneration & inAssociatedValue0
                                                                        COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_fixitElementForGeneration_fixItReplace (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_fixitElementForGeneration_fixItInsertBefore : public cEnumAssociatedValues {
  public: const GALGAS_semanticExpressionForGeneration mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_fixitElementForGeneration_fixItInsertBefore (const GALGAS_semanticExpressionForGeneration & inAssociatedValue0
                                                                             COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_fixitElementForGeneration_fixItInsertBefore (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_fixitElementForGeneration_fixItInsertAfter : public cEnumAssociatedValues {
  public: const GALGAS_semanticExpressionForGeneration mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_fixitElementForGeneration_fixItInsertAfter (const GALGAS_semanticExpressionForGeneration & inAssociatedValue0
                                                                            COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_fixitElementForGeneration_fixItInsertAfter (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @fixitListForGeneration list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_fixitListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_fixitListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_fixitListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_fixitElementForGeneration & in_mElement
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_fixitListForGeneration extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_fixitListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_fixitListForGeneration constructor_listWithValue (const class GALGAS_fixitElementForGeneration & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_fixitListForGeneration inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_fixitElementForGeneration & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_fixitListForGeneration add_operation (const GALGAS_fixitListForGeneration & inOperand,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_fixitListForGeneration_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_fixitElementForGeneration constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_fixitElementForGeneration & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_fixitElementForGeneration & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_fixitElementForGeneration & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_fixitElementForGeneration & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_fixitElementForGeneration & outArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_fixitElementForGeneration getter_mElementAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_fixitListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_fixitListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_fixitListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_fixitListForGeneration ;
 
} ; // End of GALGAS_fixitListForGeneration class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_fixitListForGeneration : public cGenericAbstractEnumerator {
  public: cEnumerator_fixitListForGeneration (const GALGAS_fixitListForGeneration & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_fixitElementForGeneration current_mElement (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_fixitListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitListForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @fixitListForGeneration_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_fixitListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_fixitElementForGeneration mProperty_mElement ;
  public: inline GALGAS_fixitElementForGeneration readProperty_mElement (void) const {
    return mProperty_mElement ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_fixitListForGeneration_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMElement (const GALGAS_fixitElementForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mElement = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_fixitListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_fixitListForGeneration_2D_element (const GALGAS_fixitElementForGeneration & in_mElement) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_fixitListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_fixitListForGeneration_2D_element constructor_new (const class GALGAS_fixitElementForGeneration & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_fixitListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_fixitListForGeneration_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitListForGeneration_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@fixitListForGeneration generateFixIt'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_generateFixIt (const class GALGAS_fixitListForGeneration inObject,
                                    class GALGAS_stringset & io_ioInclusionSet,
                                    class GALGAS_uint & io_ioTemporaryVariableIndex,
                                    class GALGAS_stringset & io_ioUnusedVariableCppNameSet,
                                    const class GALGAS_bool constin_inGenerateSyntaxDirectedTranslationString,
                                    class GALGAS_string & io_ioGeneratedCode,
                                    class GALGAS_string & out_outFixItArrayCppName,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_semanticExpressionForGeneration_generateExpression) (const class cPtr_semanticExpressionForGeneration * inObject,
                                                                                             class GALGAS_string & ioArgument0,
                                                                                             class GALGAS_stringset & ioArgument1,
                                                                                             class GALGAS_uint & ioArgument2,
                                                                                             class GALGAS_stringset & ioArgument3,
                                                                                             class GALGAS_string & outArgument4,
                                                                                             class C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_generateExpression (const int32_t inClassIndex,
                                              extensionMethodSignature_semanticExpressionForGeneration_generateExpression inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_generateExpression (const class cPtr_semanticExpressionForGeneration * inObject,
                                             GALGAS_string & io_ioGeneratedCode,
                                             GALGAS_stringset & io_ioInclusionSet,
                                             GALGAS_uint & io_ioTemporaryVariableIndex,
                                             GALGAS_stringset & io_ioUnusedVariableCppNameSet,
                                             GALGAS_string & out_outCppExpression,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @errorInstructionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_errorInstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_errorInstructionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_errorInstructionForGeneration (const class cPtr_errorInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mInstructionLocation (void) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_mReceiverExpression (void) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_mErrorExpression (void) const ;

  public: class GALGAS_stringlist readProperty_mBuiltVariableCppNameList (void) const ;

  public: class GALGAS_fixitListForGeneration readProperty_mFixitListForGeneration (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_errorInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_errorInstructionForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                             const class GALGAS_semanticExpressionForGeneration & inOperand1,
                                                                             const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                             const class GALGAS_stringlist & inOperand3,
                                                                             const class GALGAS_fixitListForGeneration & inOperand4
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_errorInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_errorInstructionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_errorInstructionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @errorInstructionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_errorInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_location mProperty_mInstructionLocation ;
  public: GALGAS_semanticExpressionForGeneration mProperty_mReceiverExpression ;
  public: GALGAS_semanticExpressionForGeneration mProperty_mErrorExpression ;
  public: GALGAS_stringlist mProperty_mBuiltVariableCppNameList ;
  public: GALGAS_fixitListForGeneration mProperty_mFixitListForGeneration ;

//--- Constructor
  public: cPtr_errorInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                                              const GALGAS_semanticExpressionForGeneration & in_mErrorExpression,
                                              const GALGAS_stringlist & in_mBuiltVariableCppNameList,
                                              const GALGAS_fixitListForGeneration & in_mFixitListForGeneration
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
// Phase 1: @errorInstructionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_errorInstructionForGeneration_2D_weak : public GALGAS_semanticInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_errorInstructionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_errorInstructionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_errorInstructionForGeneration_2D_weak (const class GALGAS_errorInstructionForGeneration & inSource) ;

  public: GALGAS_errorInstructionForGeneration_2D_weak & operator = (const class GALGAS_errorInstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_errorInstructionForGeneration bang_errorInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_errorInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_errorInstructionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_errorInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_errorInstructionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_errorInstructionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @forInstructionEnumeratedObjectElementListAST list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_forInstructionEnumeratedObjectElementListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_forInstructionEnumeratedObjectElementListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_forInstructionEnumeratedObjectElementListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mOptionalTypeName,
                                                 const class GALGAS_bool & in_mDeclaredAsUnused,
                                                 const class GALGAS_lstring & in_mOptionalConstantName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_forInstructionEnumeratedObjectElementListAST extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_forInstructionEnumeratedObjectElementListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_forInstructionEnumeratedObjectElementListAST constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                                      const class GALGAS_bool & inOperand1,
                                                                                                      const class GALGAS_lstring & inOperand2
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_forInstructionEnumeratedObjectElementListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_bool & inOperand1,
                                                     const class GALGAS_lstring & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_forInstructionEnumeratedObjectElementListAST add_operation (const GALGAS_forInstructionEnumeratedObjectElementListAST & inOperand,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_bool constinArgument1,
                                                      class GALGAS_lstring constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_bool & outArgument1,
                                                 class GALGAS_lstring & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_bool & outArgument1,
                                                class GALGAS_lstring & outArgument2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_bool & outArgument1,
                                                      class GALGAS_lstring & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDeclaredAsUnusedAtIndex (class GALGAS_bool constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOptionalConstantNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                        class GALGAS_uint constinArgument1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOptionalTypeNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_bool & outArgument1,
                                              class GALGAS_lstring & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_bool & outArgument1,
                                             class GALGAS_lstring & outArgument2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mDeclaredAsUnusedAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOptionalConstantNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOptionalTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_forInstructionEnumeratedObjectElementListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_forInstructionEnumeratedObjectElementListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_forInstructionEnumeratedObjectElementListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_forInstructionEnumeratedObjectElementListAST ;
 
} ; // End of GALGAS_forInstructionEnumeratedObjectElementListAST class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_forInstructionEnumeratedObjectElementListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_forInstructionEnumeratedObjectElementListAST (const GALGAS_forInstructionEnumeratedObjectElementListAST & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mOptionalTypeName (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mDeclaredAsUnused (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mOptionalConstantName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectElementListAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @forInstructionEnumeratedObjectElementListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mOptionalTypeName ;
  public: inline GALGAS_lstring readProperty_mOptionalTypeName (void) const {
    return mProperty_mOptionalTypeName ;
  }

  public: GALGAS_bool mProperty_mDeclaredAsUnused ;
  public: inline GALGAS_bool readProperty_mDeclaredAsUnused (void) const {
    return mProperty_mDeclaredAsUnused ;
  }

  public: GALGAS_lstring mProperty_mOptionalConstantName ;
  public: inline GALGAS_lstring readProperty_mOptionalConstantName (void) const {
    return mProperty_mOptionalConstantName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOptionalTypeName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionalTypeName = inValue ;
  }

  public: inline void setter_setMDeclaredAsUnused (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeclaredAsUnused = inValue ;
  }

  public: inline void setter_setMOptionalConstantName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionalConstantName = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element (const GALGAS_lstring & in_mOptionalTypeName,
                                                                          const GALGAS_bool & in_mDeclaredAsUnused,
                                                                          const GALGAS_lstring & in_mOptionalConstantName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                                       const class GALGAS_bool & inOperand1,
                                                                                                       const class GALGAS_lstring & inOperand2
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractEnumeratedCollectionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_abstractEnumeratedCollectionAST : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_abstractEnumeratedCollectionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_abstractEnumeratedCollectionAST (const class cPtr_abstractEnumeratedCollectionAST * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractEnumeratedCollectionAST extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_abstractEnumeratedCollectionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractEnumeratedCollectionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractEnumeratedCollectionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_abstractEnumeratedCollectionAST : public acStrongPtr_class {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties

//--- Constructor
  public: cPtr_abstractEnumeratedCollectionAST (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractEnumeratedCollectionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_abstractEnumeratedCollectionAST_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_abstractEnumeratedCollectionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_abstractEnumeratedCollectionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_abstractEnumeratedCollectionAST_2D_weak (const class GALGAS_abstractEnumeratedCollectionAST & inSource) ;

  public: GALGAS_abstractEnumeratedCollectionAST_2D_weak & operator = (const class GALGAS_abstractEnumeratedCollectionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_abstractEnumeratedCollectionAST bang_abstractEnumeratedCollectionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractEnumeratedCollectionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_abstractEnumeratedCollectionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_abstractEnumeratedCollectionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractEnumeratedCollectionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @enumeratedCollectionImplicitVarInExpAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_enumeratedCollectionImplicitVarInExpAST : public GALGAS_abstractEnumeratedCollectionAST {
//--------------------------------- Default constructor
  public: GALGAS_enumeratedCollectionImplicitVarInExpAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_enumeratedCollectionImplicitVarInExpAST (const class cPtr_enumeratedCollectionImplicitVarInExpAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mPrefix (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mEnumeratedExpression (void) const ;

  public: class GALGAS_location readProperty_mEndOfAnonymousEnumeration (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_enumeratedCollectionImplicitVarInExpAST extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_enumeratedCollectionImplicitVarInExpAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_semanticExpressionAST & inOperand1,
                                                                                       const class GALGAS_location & inOperand2
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_enumeratedCollectionImplicitVarInExpAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumeratedCollectionImplicitVarInExpAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumeratedCollectionImplicitVarInExpAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @enumeratedCollectionImplicitVarInExpAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_enumeratedCollectionImplicitVarInExpAST : public cPtr_abstractEnumeratedCollectionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mPrefix ;
  public: GALGAS_semanticExpressionAST mProperty_mEnumeratedExpression ;
  public: GALGAS_location mProperty_mEndOfAnonymousEnumeration ;

//--- Constructor
  public: cPtr_enumeratedCollectionImplicitVarInExpAST (const GALGAS_lstring & in_mPrefix,
                                                        const GALGAS_semanticExpressionAST & in_mEnumeratedExpression,
                                                        const GALGAS_location & in_mEndOfAnonymousEnumeration
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
// Phase 1: @enumeratedCollectionImplicitVarInExpAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak : public GALGAS_abstractEnumeratedCollectionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak (const class GALGAS_enumeratedCollectionImplicitVarInExpAST & inSource) ;

  public: GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak & operator = (const class GALGAS_enumeratedCollectionImplicitVarInExpAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_enumeratedCollectionImplicitVarInExpAST bang_enumeratedCollectionImplicitVarInExpAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumeratedCollectionImplicitVarInExpAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @enumeratedCollectionVarInExpAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_enumeratedCollectionVarInExpAST : public GALGAS_abstractEnumeratedCollectionAST {
//--------------------------------- Default constructor
  public: GALGAS_enumeratedCollectionVarInExpAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_enumeratedCollectionVarInExpAST (const class cPtr_enumeratedCollectionVarInExpAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mEnumerationOptionalTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mEnumerationVariable (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mEnumeratedExpression (void) const ;

  public: class GALGAS_location readProperty_mEndOfEnumerationExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_enumeratedCollectionVarInExpAST extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_enumeratedCollectionVarInExpAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_lstring & inOperand1,
                                                                               const class GALGAS_semanticExpressionAST & inOperand2,
                                                                               const class GALGAS_location & inOperand3
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_enumeratedCollectionVarInExpAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumeratedCollectionVarInExpAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @enumeratedCollectionVarInExpAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_enumeratedCollectionVarInExpAST : public cPtr_abstractEnumeratedCollectionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mEnumerationOptionalTypeName ;
  public: GALGAS_lstring mProperty_mEnumerationVariable ;
  public: GALGAS_semanticExpressionAST mProperty_mEnumeratedExpression ;
  public: GALGAS_location mProperty_mEndOfEnumerationExpression ;

//--- Constructor
  public: cPtr_enumeratedCollectionVarInExpAST (const GALGAS_lstring & in_mEnumerationOptionalTypeName,
                                                const GALGAS_lstring & in_mEnumerationVariable,
                                                const GALGAS_semanticExpressionAST & in_mEnumeratedExpression,
                                                const GALGAS_location & in_mEndOfEnumerationExpression
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
// Phase 1: @enumeratedCollectionVarInExpAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_enumeratedCollectionVarInExpAST_2D_weak : public GALGAS_abstractEnumeratedCollectionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_enumeratedCollectionVarInExpAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_enumeratedCollectionVarInExpAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_enumeratedCollectionVarInExpAST_2D_weak (const class GALGAS_enumeratedCollectionVarInExpAST & inSource) ;

  public: GALGAS_enumeratedCollectionVarInExpAST_2D_weak & operator = (const class GALGAS_enumeratedCollectionVarInExpAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_enumeratedCollectionVarInExpAST bang_enumeratedCollectionVarInExpAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_enumeratedCollectionVarInExpAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_enumeratedCollectionVarInExpAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_enumeratedCollectionVarInExpAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumeratedCollectionVarInExpAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @enumeratedCollectionCstListInExpAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_enumeratedCollectionCstListInExpAST : public GALGAS_abstractEnumeratedCollectionAST {
//--------------------------------- Default constructor
  public: GALGAS_enumeratedCollectionCstListInExpAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_enumeratedCollectionCstListInExpAST (const class cPtr_enumeratedCollectionCstListInExpAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_forInstructionEnumeratedObjectElementListAST readProperty_mElementList (void) const ;

  public: class GALGAS_bool readProperty_mEndsWithEllipsis (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mEnumeratedExpression (void) const ;

  public: class GALGAS_location readProperty_mEndOfEnumerationExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_enumeratedCollectionCstListInExpAST extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_enumeratedCollectionCstListInExpAST constructor_new (const class GALGAS_forInstructionEnumeratedObjectElementListAST & inOperand0,
                                                                                   const class GALGAS_bool & inOperand1,
                                                                                   const class GALGAS_semanticExpressionAST & inOperand2,
                                                                                   const class GALGAS_location & inOperand3
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_enumeratedCollectionCstListInExpAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumeratedCollectionCstListInExpAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumeratedCollectionCstListInExpAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @enumeratedCollectionCstListInExpAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_enumeratedCollectionCstListInExpAST : public cPtr_abstractEnumeratedCollectionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_forInstructionEnumeratedObjectElementListAST mProperty_mElementList ;
  public: GALGAS_bool mProperty_mEndsWithEllipsis ;
  public: GALGAS_semanticExpressionAST mProperty_mEnumeratedExpression ;
  public: GALGAS_location mProperty_mEndOfEnumerationExpression ;

//--- Constructor
  public: cPtr_enumeratedCollectionCstListInExpAST (const GALGAS_forInstructionEnumeratedObjectElementListAST & in_mElementList,
                                                    const GALGAS_bool & in_mEndsWithEllipsis,
                                                    const GALGAS_semanticExpressionAST & in_mEnumeratedExpression,
                                                    const GALGAS_location & in_mEndOfEnumerationExpression
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
// Phase 1: @enumeratedCollectionCstListInExpAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_enumeratedCollectionCstListInExpAST_2D_weak : public GALGAS_abstractEnumeratedCollectionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_enumeratedCollectionCstListInExpAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_enumeratedCollectionCstListInExpAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_enumeratedCollectionCstListInExpAST_2D_weak (const class GALGAS_enumeratedCollectionCstListInExpAST & inSource) ;

  public: GALGAS_enumeratedCollectionCstListInExpAST_2D_weak & operator = (const class GALGAS_enumeratedCollectionCstListInExpAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_enumeratedCollectionCstListInExpAST bang_enumeratedCollectionCstListInExpAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_enumeratedCollectionCstListInExpAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_enumeratedCollectionCstListInExpAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_enumeratedCollectionCstListInExpAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumeratedCollectionCstListInExpAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumeratedCollectionCstListInExpAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @forInstructionEnumeratedObjectListAST list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_forInstructionEnumeratedObjectListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_forInstructionEnumeratedObjectListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_forInstructionEnumeratedObjectListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_bool & in_mAscending,
                                                 const class GALGAS_abstractEnumeratedCollectionAST & in_mEnumeratedCollection
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_forInstructionEnumeratedObjectListAST extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_forInstructionEnumeratedObjectListAST constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_forInstructionEnumeratedObjectListAST constructor_listWithValue (const class GALGAS_bool & inOperand0,
                                                                                               const class GALGAS_abstractEnumeratedCollectionAST & inOperand1
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_forInstructionEnumeratedObjectListAST inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_bool & inOperand0,
                                                     const class GALGAS_abstractEnumeratedCollectionAST & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_forInstructionEnumeratedObjectListAST add_operation (const GALGAS_forInstructionEnumeratedObjectListAST & inOperand,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_forInstructionEnumeratedObjectListAST_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_bool constinArgument0,
                                                      class GALGAS_abstractEnumeratedCollectionAST constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_bool & outArgument0,
                                                 class GALGAS_abstractEnumeratedCollectionAST & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_bool & outArgument0,
                                                class GALGAS_abstractEnumeratedCollectionAST & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_bool & outArgument0,
                                                      class GALGAS_abstractEnumeratedCollectionAST & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_bool & outArgument0,
                                              class GALGAS_abstractEnumeratedCollectionAST & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_bool & outArgument0,
                                             class GALGAS_abstractEnumeratedCollectionAST & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mAscendingAtIndex (const class GALGAS_uint & constinOperand0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_abstractEnumeratedCollectionAST getter_mEnumeratedCollectionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_forInstructionEnumeratedObjectListAST getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_forInstructionEnumeratedObjectListAST getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_forInstructionEnumeratedObjectListAST getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_forInstructionEnumeratedObjectListAST ;
 
} ; // End of GALGAS_forInstructionEnumeratedObjectListAST class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_forInstructionEnumeratedObjectListAST : public cGenericAbstractEnumerator {
  public: cEnumerator_forInstructionEnumeratedObjectListAST (const GALGAS_forInstructionEnumeratedObjectListAST & inEnumeratedObject,
                                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_bool current_mAscending (LOCATION_ARGS) const ;
  public: class GALGAS_abstractEnumeratedCollectionAST current_mEnumeratedCollection (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_forInstructionEnumeratedObjectListAST_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @forInstructionEnumeratedObjectListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_forInstructionEnumeratedObjectListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_bool mProperty_mAscending ;
  public: inline GALGAS_bool readProperty_mAscending (void) const {
    return mProperty_mAscending ;
  }

  public: GALGAS_abstractEnumeratedCollectionAST mProperty_mEnumeratedCollection ;
  public: inline GALGAS_abstractEnumeratedCollectionAST readProperty_mEnumeratedCollection (void) const {
    return mProperty_mEnumeratedCollection ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_forInstructionEnumeratedObjectListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMAscending (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAscending = inValue ;
  }

  public: inline void setter_setMEnumeratedCollection (const GALGAS_abstractEnumeratedCollectionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnumeratedCollection = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_forInstructionEnumeratedObjectListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_forInstructionEnumeratedObjectListAST_2D_element (const GALGAS_bool & in_mAscending,
                                                                   const GALGAS_abstractEnumeratedCollectionAST & in_mEnumeratedCollection) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_forInstructionEnumeratedObjectListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_forInstructionEnumeratedObjectListAST_2D_element constructor_new (const class GALGAS_bool & inOperand0,
                                                                                                const class GALGAS_abstractEnumeratedCollectionAST & inOperand1
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_forInstructionEnumeratedObjectListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_forInstructionEnumeratedObjectListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @forInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_forInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_forInstructionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_forInstructionAST (const class cPtr_forInstructionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_forInstructionEnumeratedObjectListAST readProperty_mEnumeratedObjectList (void) const ;

  public: class GALGAS_lstring readProperty_mIndexVariableName (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mWhileExpression (void) const ;

  public: class GALGAS_location readProperty_mEndOf_5F_while_5F_expression (void) const ;

  public: class GALGAS_semanticInstructionListAST readProperty_mBeforeInstructionList (void) const ;

  public: class GALGAS_location readProperty_mEndOf_5F_before_5F_branch (void) const ;

  public: class GALGAS_semanticInstructionListAST readProperty_mBetweenInstructionList (void) const ;

  public: class GALGAS_location readProperty_mEndOf_5F_between_5F_branch (void) const ;

  public: class GALGAS_semanticInstructionListAST readProperty_mDoInstructionList (void) const ;

  public: class GALGAS_location readProperty_mEndOf_5F_do_5F_branch (void) const ;

  public: class GALGAS_semanticInstructionListAST readProperty_mAfterInstructionList (void) const ;

  public: class GALGAS_location readProperty_mEndOf_5F_after_5F_branch (void) const ;

  public: class GALGAS_location readProperty_mEndOf_5F_foreach_5F_instruction (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_forInstructionAST extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_forInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                 const class GALGAS_forInstructionEnumeratedObjectListAST & inOperand1,
                                                                 const class GALGAS_lstring & inOperand2,
                                                                 const class GALGAS_semanticExpressionAST & inOperand3,
                                                                 const class GALGAS_location & inOperand4,
                                                                 const class GALGAS_semanticInstructionListAST & inOperand5,
                                                                 const class GALGAS_location & inOperand6,
                                                                 const class GALGAS_semanticInstructionListAST & inOperand7,
                                                                 const class GALGAS_location & inOperand8,
                                                                 const class GALGAS_semanticInstructionListAST & inOperand9,
                                                                 const class GALGAS_location & inOperand10,
                                                                 const class GALGAS_semanticInstructionListAST & inOperand11,
                                                                 const class GALGAS_location & inOperand12,
                                                                 const class GALGAS_location & inOperand13
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_forInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_forInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @forInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_forInstructionAST : public cPtr_semanticInstructionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_forInstructionEnumeratedObjectListAST mProperty_mEnumeratedObjectList ;
  public: GALGAS_lstring mProperty_mIndexVariableName ;
  public: GALGAS_semanticExpressionAST mProperty_mWhileExpression ;
  public: GALGAS_location mProperty_mEndOf_5F_while_5F_expression ;
  public: GALGAS_semanticInstructionListAST mProperty_mBeforeInstructionList ;
  public: GALGAS_location mProperty_mEndOf_5F_before_5F_branch ;
  public: GALGAS_semanticInstructionListAST mProperty_mBetweenInstructionList ;
  public: GALGAS_location mProperty_mEndOf_5F_between_5F_branch ;
  public: GALGAS_semanticInstructionListAST mProperty_mDoInstructionList ;
  public: GALGAS_location mProperty_mEndOf_5F_do_5F_branch ;
  public: GALGAS_semanticInstructionListAST mProperty_mAfterInstructionList ;
  public: GALGAS_location mProperty_mEndOf_5F_after_5F_branch ;
  public: GALGAS_location mProperty_mEndOf_5F_foreach_5F_instruction ;

//--- Constructor
  public: cPtr_forInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                  const GALGAS_forInstructionEnumeratedObjectListAST & in_mEnumeratedObjectList,
                                  const GALGAS_lstring & in_mIndexVariableName,
                                  const GALGAS_semanticExpressionAST & in_mWhileExpression,
                                  const GALGAS_location & in_mEndOf_5F_while_5F_expression,
                                  const GALGAS_semanticInstructionListAST & in_mBeforeInstructionList,
                                  const GALGAS_location & in_mEndOf_5F_before_5F_branch,
                                  const GALGAS_semanticInstructionListAST & in_mBetweenInstructionList,
                                  const GALGAS_location & in_mEndOf_5F_between_5F_branch,
                                  const GALGAS_semanticInstructionListAST & in_mDoInstructionList,
                                  const GALGAS_location & in_mEndOf_5F_do_5F_branch,
                                  const GALGAS_semanticInstructionListAST & in_mAfterInstructionList,
                                  const GALGAS_location & in_mEndOf_5F_after_5F_branch,
                                  const GALGAS_location & in_mEndOf_5F_foreach_5F_instruction
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
// Phase 1: @forInstructionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_forInstructionAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_forInstructionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_forInstructionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_forInstructionAST_2D_weak (const class GALGAS_forInstructionAST & inSource) ;

  public: GALGAS_forInstructionAST_2D_weak & operator = (const class GALGAS_forInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_forInstructionAST bang_forInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_forInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_forInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_forInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_forInstructionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractEnumeratedCollectionAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_abstractEnumeratedCollectionAST_enterInSemanticContext) (const class cPtr_abstractEnumeratedCollectionAST * inObject,
                                                                                                 class GALGAS_unifiedTypeMap & ioArgument0,
                                                                                                 class C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_enterInSemanticContext (const int32_t inClassIndex,
                                                  extensionMethodSignature_abstractEnumeratedCollectionAST_enterInSemanticContext inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInSemanticContext (const class cPtr_abstractEnumeratedCollectionAST * inObject,
                                                 GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractEnumeratedCollectionAST analyzeEnumeration'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_abstractEnumeratedCollectionAST_analyzeEnumeration) (const class cPtr_abstractEnumeratedCollectionAST * inObject,
                                                                                             const class GALGAS_lstring constinArgument0,
                                                                                             class GALGAS_usefulEntitiesGraph & ioArgument1,
                                                                                             const class GALGAS_analysisContext constinArgument2,
                                                                                             class GALGAS_localVarManager & ioArgument3,
                                                                                             class GALGAS_localConstantList & ioArgument4,
                                                                                             class GALGAS_string & outArgument5,
                                                                                             class GALGAS_semanticExpressionForGeneration & outArgument6,
                                                                                             class C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_analyzeEnumeration (const int32_t inClassIndex,
                                              extensionMethodSignature_abstractEnumeratedCollectionAST_analyzeEnumeration inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeEnumeration (const class cPtr_abstractEnumeratedCollectionAST * inObject,
                                             const GALGAS_lstring constin_inUsefulnessCallerEntityName,
                                             GALGAS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                             const GALGAS_analysisContext constin_inAnalysisContext,
                                             GALGAS_localVarManager & io_ioVariableMap,
                                             GALGAS_localConstantList & io_ioLocalConstantListForDoBranch,
                                             GALGAS_string & out_outEnumeratorCppName,
                                             GALGAS_semanticExpressionForGeneration & out_outEnumerationExpression,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @forInstructionEnumeratedObjectListForGeneration list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_forInstructionEnumeratedObjectListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_forInstructionEnumeratedObjectListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_forInstructionEnumeratedObjectListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_string & in_mEnumerationOrder,
                                                 const class GALGAS_semanticExpressionForGeneration & in_mEnumeratedExpression,
                                                 const class GALGAS_string & in_mEnumeratorCppName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_forInstructionEnumeratedObjectListForGeneration extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_forInstructionEnumeratedObjectListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_forInstructionEnumeratedObjectListForGeneration constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                                         const class GALGAS_semanticExpressionForGeneration & inOperand1,
                                                                                                         const class GALGAS_string & inOperand2
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_forInstructionEnumeratedObjectListForGeneration inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_semanticExpressionForGeneration & inOperand1,
                                                     const class GALGAS_string & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_forInstructionEnumeratedObjectListForGeneration add_operation (const GALGAS_forInstructionEnumeratedObjectListForGeneration & inOperand,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_semanticExpressionForGeneration constinArgument1,
                                                      class GALGAS_string constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_semanticExpressionForGeneration & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_semanticExpressionForGeneration & outArgument1,
                                                class GALGAS_string & outArgument2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_semanticExpressionForGeneration & outArgument1,
                                                      class GALGAS_string & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEnumeratedExpressionAtIndex (class GALGAS_semanticExpressionForGeneration constinArgument0,
                                                                        class GALGAS_uint constinArgument1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEnumerationOrderAtIndex (class GALGAS_string constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEnumeratorCppNameAtIndex (class GALGAS_string constinArgument0,
                                                                     class GALGAS_uint constinArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_semanticExpressionForGeneration & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_semanticExpressionForGeneration & outArgument1,
                                             class GALGAS_string & outArgument2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mEnumeratedExpressionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mEnumerationOrderAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mEnumeratorCppNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_forInstructionEnumeratedObjectListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_forInstructionEnumeratedObjectListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_forInstructionEnumeratedObjectListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_forInstructionEnumeratedObjectListForGeneration ;
 
} ; // End of GALGAS_forInstructionEnumeratedObjectListForGeneration class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_forInstructionEnumeratedObjectListForGeneration : public cGenericAbstractEnumerator {
  public: cEnumerator_forInstructionEnumeratedObjectListForGeneration (const GALGAS_forInstructionEnumeratedObjectListForGeneration & inEnumeratedObject,
                                                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mEnumerationOrder (LOCATION_ARGS) const ;
  public: class GALGAS_semanticExpressionForGeneration current_mEnumeratedExpression (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mEnumeratorCppName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @forInstructionEnumeratedObjectListForGeneration_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mEnumerationOrder ;
  public: inline GALGAS_string readProperty_mEnumerationOrder (void) const {
    return mProperty_mEnumerationOrder ;
  }

  public: GALGAS_semanticExpressionForGeneration mProperty_mEnumeratedExpression ;
  public: inline GALGAS_semanticExpressionForGeneration readProperty_mEnumeratedExpression (void) const {
    return mProperty_mEnumeratedExpression ;
  }

  public: GALGAS_string mProperty_mEnumeratorCppName ;
  public: inline GALGAS_string readProperty_mEnumeratorCppName (void) const {
    return mProperty_mEnumeratorCppName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMEnumerationOrder (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnumerationOrder = inValue ;
  }

  public: inline void setter_setMEnumeratedExpression (const GALGAS_semanticExpressionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnumeratedExpression = inValue ;
  }

  public: inline void setter_setMEnumeratorCppName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnumeratorCppName = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element (const GALGAS_string & in_mEnumerationOrder,
                                                                             const GALGAS_semanticExpressionForGeneration & in_mEnumeratedExpression,
                                                                             const GALGAS_string & in_mEnumeratorCppName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                                          const class GALGAS_semanticExpressionForGeneration & inOperand1,
                                                                                                          const class GALGAS_string & inOperand2
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListForGeneration_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @forInstructionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_forInstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_forInstructionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_forInstructionForGeneration (const class cPtr_forInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mInstructionLocation (void) const ;

  public: class GALGAS_forInstructionEnumeratedObjectListForGeneration readProperty_mEnumeratedObjectList (void) const ;

  public: class GALGAS_string readProperty_mIndexVariableCppName (void) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_mWhileExpression (void) const ;

  public: class GALGAS_semanticInstructionListForGeneration readProperty_mBeforeInstructionList (void) const ;

  public: class GALGAS_semanticInstructionListForGeneration readProperty_mBetweenInstructionList (void) const ;

  public: class GALGAS_semanticInstructionListForGeneration readProperty_mDoInstructionList (void) const ;

  public: class GALGAS_semanticInstructionListForGeneration readProperty_mAfterInstructionList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_forInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_forInstructionForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                           const class GALGAS_forInstructionEnumeratedObjectListForGeneration & inOperand1,
                                                                           const class GALGAS_string & inOperand2,
                                                                           const class GALGAS_semanticExpressionForGeneration & inOperand3,
                                                                           const class GALGAS_semanticInstructionListForGeneration & inOperand4,
                                                                           const class GALGAS_semanticInstructionListForGeneration & inOperand5,
                                                                           const class GALGAS_semanticInstructionListForGeneration & inOperand6,
                                                                           const class GALGAS_semanticInstructionListForGeneration & inOperand7
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_forInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_forInstructionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @forInstructionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_forInstructionForGeneration : public cPtr_semanticInstructionForGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_location mProperty_mInstructionLocation ;
  public: GALGAS_forInstructionEnumeratedObjectListForGeneration mProperty_mEnumeratedObjectList ;
  public: GALGAS_string mProperty_mIndexVariableCppName ;
  public: GALGAS_semanticExpressionForGeneration mProperty_mWhileExpression ;
  public: GALGAS_semanticInstructionListForGeneration mProperty_mBeforeInstructionList ;
  public: GALGAS_semanticInstructionListForGeneration mProperty_mBetweenInstructionList ;
  public: GALGAS_semanticInstructionListForGeneration mProperty_mDoInstructionList ;
  public: GALGAS_semanticInstructionListForGeneration mProperty_mAfterInstructionList ;

//--- Constructor
  public: cPtr_forInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                            const GALGAS_forInstructionEnumeratedObjectListForGeneration & in_mEnumeratedObjectList,
                                            const GALGAS_string & in_mIndexVariableCppName,
                                            const GALGAS_semanticExpressionForGeneration & in_mWhileExpression,
                                            const GALGAS_semanticInstructionListForGeneration & in_mBeforeInstructionList,
                                            const GALGAS_semanticInstructionListForGeneration & in_mBetweenInstructionList,
                                            const GALGAS_semanticInstructionListForGeneration & in_mDoInstructionList,
                                            const GALGAS_semanticInstructionListForGeneration & in_mAfterInstructionList
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
// Phase 1: @forInstructionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_forInstructionForGeneration_2D_weak : public GALGAS_semanticInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_forInstructionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_forInstructionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_forInstructionForGeneration_2D_weak (const class GALGAS_forInstructionForGeneration & inSource) ;

  public: GALGAS_forInstructionForGeneration_2D_weak & operator = (const class GALGAS_forInstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_forInstructionForGeneration bang_forInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_forInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_forInstructionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_forInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_forInstructionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak (const class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inSource) ;

  public: GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak & operator = (const class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult bang_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarInstructionSyntaxDirectedTranslationResultNone reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone : public GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult {
//--------------------------------- Default constructor
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone (const class cPtr_grammarInstructionSyntaxDirectedTranslationResultNone * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone extractObject (const GALGAS_object & inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @grammarInstructionSyntaxDirectedTranslationResultNone class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_grammarInstructionSyntaxDirectedTranslationResultNone : public cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties

//--- Constructor
  public: cPtr_grammarInstructionSyntaxDirectedTranslationResultNone (LOCATION_ARGS) ;

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
// Phase 1: @grammarInstructionSyntaxDirectedTranslationResultNone_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone_2D_weak : public GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone_2D_weak (const class GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone & inSource) ;

  public: GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone_2D_weak & operator = (const class GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone bang_grammarInstructionSyntaxDirectedTranslationResultNone_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarInstructionSyntaxDirectedTranslationDropResult reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult : public GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult {
//--------------------------------- Default constructor
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult (const class cPtr_grammarInstructionSyntaxDirectedTranslationDropResult * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mLocation (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult extractObject (const GALGAS_object & inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult constructor_new (const class GALGAS_location & inOperand0
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @grammarInstructionSyntaxDirectedTranslationDropResult class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_grammarInstructionSyntaxDirectedTranslationDropResult : public cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_location mProperty_mLocation ;

//--- Constructor
  public: cPtr_grammarInstructionSyntaxDirectedTranslationDropResult (const GALGAS_location & in_mLocation
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
// Phase 1: @grammarInstructionSyntaxDirectedTranslationDropResult_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult_2D_weak : public GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult_2D_weak (const class GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult & inSource) ;

  public: GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult_2D_weak & operator = (const class GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult bang_grammarInstructionSyntaxDirectedTranslationDropResult_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarInstructionSyntaxDirectedTranslationResultInVar reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar : public GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult {
//--------------------------------- Default constructor
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar (const class cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mActualParameterName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar constructor_new (const class GALGAS_lstring & inOperand0
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @grammarInstructionSyntaxDirectedTranslationResultInVar class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar : public cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mActualParameterName ;

//--- Constructor
  public: cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar (const GALGAS_lstring & in_mActualParameterName
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
// Phase 1: @grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak : public GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak (const class GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar & inSource) ;

  public: GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak & operator = (const class GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar bang_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar : public GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult {
//--------------------------------- Default constructor
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (const class cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mActualParameterTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mActualParameterName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                                              const class GALGAS_lstring & inOperand1
                                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar : public cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mActualParameterTypeName ;
  public: GALGAS_lstring mProperty_mActualParameterName ;

//--- Constructor
  public: cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (const GALGAS_lstring & in_mActualParameterTypeName,
                                                                               const GALGAS_lstring & in_mActualParameterName
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
// Phase 1: @grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak : public GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak (const class GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar & inSource) ;

  public: GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak & operator = (const class GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar bang_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst : public GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult {
//--------------------------------- Default constructor
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (const class cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mActualParameterTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mActualParameterName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                                                const class GALGAS_lstring & inOperand1
                                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst : public cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mActualParameterTypeName ;
  public: GALGAS_lstring mProperty_mActualParameterName ;

//--- Constructor
  public: cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (const GALGAS_lstring & in_mActualParameterTypeName,
                                                                                 const GALGAS_lstring & in_mActualParameterName
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
// Phase 1: @grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak : public GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak (const class GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst & inSource) ;

  public: GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak & operator = (const class GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst bang_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarInFileInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_grammarInFileInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_grammarInFileInstructionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_grammarInFileInstructionAST (const class cPtr_grammarInFileInstructionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mGrammarComponentName (void) const ;

  public: class GALGAS_lstring readProperty_mLabelName (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mSourceExpression (void) const ;

  public: class GALGAS_location readProperty_mEndOfSourceExpression (void) const ;

  public: class GALGAS_actualParameterListAST readProperty_mActualParameterList (void) const ;

  public: class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult readProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_grammarInFileInstructionAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_grammarInFileInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                           const class GALGAS_lstring & inOperand1,
                                                                           const class GALGAS_lstring & inOperand2,
                                                                           const class GALGAS_semanticExpressionAST & inOperand3,
                                                                           const class GALGAS_location & inOperand4,
                                                                           const class GALGAS_actualParameterListAST & inOperand5,
                                                                           const class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand6
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_grammarInFileInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_grammarInFileInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInFileInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @grammarInFileInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_grammarInFileInstructionAST : public cPtr_semanticInstructionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mGrammarComponentName ;
  public: GALGAS_lstring mProperty_mLabelName ;
  public: GALGAS_semanticExpressionAST mProperty_mSourceExpression ;
  public: GALGAS_location mProperty_mEndOfSourceExpression ;
  public: GALGAS_actualParameterListAST mProperty_mActualParameterList ;
  public: GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ;

//--- Constructor
  public: cPtr_grammarInFileInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                            const GALGAS_lstring & in_mGrammarComponentName,
                                            const GALGAS_lstring & in_mLabelName,
                                            const GALGAS_semanticExpressionAST & in_mSourceExpression,
                                            const GALGAS_location & in_mEndOfSourceExpression,
                                            const GALGAS_actualParameterListAST & in_mActualParameterList,
                                            const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mAbstractGrammarInstructionSyntaxDirectedTranslationResult
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
// Phase 1: @grammarInFileInstructionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_grammarInFileInstructionAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_grammarInFileInstructionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_grammarInFileInstructionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_grammarInFileInstructionAST_2D_weak (const class GALGAS_grammarInFileInstructionAST & inSource) ;

  public: GALGAS_grammarInFileInstructionAST_2D_weak & operator = (const class GALGAS_grammarInFileInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_grammarInFileInstructionAST bang_grammarInFileInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_grammarInFileInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_grammarInFileInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_grammarInFileInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_grammarInFileInstructionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInFileInstructionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarInStringInstructionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_grammarInStringInstructionAST : public GALGAS_semanticInstructionAST {
//--------------------------------- Default constructor
  public: GALGAS_grammarInStringInstructionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_grammarInStringInstructionAST (const class cPtr_grammarInStringInstructionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mGrammarComponentName (void) const ;

  public: class GALGAS_lstring readProperty_mLabelName (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mSourceExpression (void) const ;

  public: class GALGAS_location readProperty_mEndOfSourceExpression (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mNameExpression (void) const ;

  public: class GALGAS_location readProperty_mEndOfNameExpression (void) const ;

  public: class GALGAS_actualParameterListAST readProperty_mActualParameterList (void) const ;

  public: class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult readProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_grammarInStringInstructionAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_grammarInStringInstructionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                             const class GALGAS_lstring & inOperand1,
                                                                             const class GALGAS_lstring & inOperand2,
                                                                             const class GALGAS_semanticExpressionAST & inOperand3,
                                                                             const class GALGAS_location & inOperand4,
                                                                             const class GALGAS_semanticExpressionAST & inOperand5,
                                                                             const class GALGAS_location & inOperand6,
                                                                             const class GALGAS_actualParameterListAST & inOperand7,
                                                                             const class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand8
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_grammarInStringInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_grammarInStringInstructionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInStringInstructionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @grammarInStringInstructionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_grammarInStringInstructionAST : public cPtr_semanticInstructionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mGrammarComponentName ;
  public: GALGAS_lstring mProperty_mLabelName ;
  public: GALGAS_semanticExpressionAST mProperty_mSourceExpression ;
  public: GALGAS_location mProperty_mEndOfSourceExpression ;
  public: GALGAS_semanticExpressionAST mProperty_mNameExpression ;
  public: GALGAS_location mProperty_mEndOfNameExpression ;
  public: GALGAS_actualParameterListAST mProperty_mActualParameterList ;
  public: GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ;

//--- Constructor
  public: cPtr_grammarInStringInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_lstring & in_mGrammarComponentName,
                                              const GALGAS_lstring & in_mLabelName,
                                              const GALGAS_semanticExpressionAST & in_mSourceExpression,
                                              const GALGAS_location & in_mEndOfSourceExpression,
                                              const GALGAS_semanticExpressionAST & in_mNameExpression,
                                              const GALGAS_location & in_mEndOfNameExpression,
                                              const GALGAS_actualParameterListAST & in_mActualParameterList,
                                              const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mAbstractGrammarInstructionSyntaxDirectedTranslationResult
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
// Phase 1: @grammarInStringInstructionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_grammarInStringInstructionAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_grammarInStringInstructionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_grammarInStringInstructionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_grammarInStringInstructionAST_2D_weak (const class GALGAS_grammarInStringInstructionAST & inSource) ;

  public: GALGAS_grammarInStringInstructionAST_2D_weak & operator = (const class GALGAS_grammarInStringInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_grammarInStringInstructionAST bang_grammarInStringInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_grammarInStringInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_grammarInStringInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_grammarInStringInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_grammarInStringInstructionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInStringInstructionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @grammarInstructionWithSourceFileForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_grammarInstructionWithSourceFileForGeneration : public GALGAS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_grammarInstructionWithSourceFileForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_grammarInstructionWithSourceFileForGeneration (const class cPtr_grammarInstructionWithSourceFileForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mInstructionLocation (void) const ;

  public: class GALGAS_string readProperty_mGrammarName (void) const ;

  public: class GALGAS_string readProperty_mLabelName (void) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_mSourceFileExpression (void) const ;

  public: class GALGAS_actualParameterListForGeneration readProperty_mActualParameterList (void) const ;

  public: class GALGAS_bool readProperty_mGrammarHasTranslateFeature (void) const ;

  public: class GALGAS_stringlist readProperty_mAssignementList (void) const ;

  public: class GALGAS_string readProperty_mSyntaxDirectedTranslationResultVarName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_grammarInstructionWithSourceFileForGeneration extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_grammarInstructionWithSourceFileForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                                             const class GALGAS_string & inOperand1,
                                                                                             const class GALGAS_string & inOperand2,
                                                                                             const class GALGAS_semanticExpressionForGeneration & inOperand3,
                                                                                             const class GALGAS_actualParameterListForGeneration & inOperand4,
                                                                                             const class GALGAS_bool & inOperand5,
                                                                                             const class GALGAS_stringlist & inOperand6,
                                                                                             const class GALGAS_string & inOperand7
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_grammarInstructionWithSourceFileForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_grammarInstructionWithSourceFileForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionWithSourceFileForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @grammarInstructionWithSourceFileForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_grammarInstructionWithSourceFileForGeneration : public cPtr_semanticInstructionForGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_location mProperty_mInstructionLocation ;
  public: GALGAS_string mProperty_mGrammarName ;
  public: GALGAS_string mProperty_mLabelName ;
  public: GALGAS_semanticExpressionForGeneration mProperty_mSourceFileExpression ;
  public: GALGAS_actualParameterListForGeneration mProperty_mActualParameterList ;
  public: GALGAS_bool mProperty_mGrammarHasTranslateFeature ;
  public: GALGAS_stringlist mProperty_mAssignementList ;
  public: GALGAS_string mProperty_mSyntaxDirectedTranslationResultVarName ;

//--- Constructor
  public: cPtr_grammarInstructionWithSourceFileForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                              const GALGAS_string & in_mGrammarName,
                                                              const GALGAS_string & in_mLabelName,
                                                              const GALGAS_semanticExpressionForGeneration & in_mSourceFileExpression,
                                                              const GALGAS_actualParameterListForGeneration & in_mActualParameterList,
                                                              const GALGAS_bool & in_mGrammarHasTranslateFeature,
                                                              const GALGAS_stringlist & in_mAssignementList,
                                                              const GALGAS_string & in_mSyntaxDirectedTranslationResultVarName
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
// Phase 1: @grammarInstructionWithSourceFileForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak : public GALGAS_semanticInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak (const class GALGAS_grammarInstructionWithSourceFileForGeneration & inSource) ;

  public: GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak & operator = (const class GALGAS_grammarInstructionWithSourceFileForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_grammarInstructionWithSourceFileForGeneration bang_grammarInstructionWithSourceFileForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak ;

