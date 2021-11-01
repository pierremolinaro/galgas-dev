#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-21.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @loopInstructionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_loopInstructionForGeneration_2D_weak : public GALGAS_semanticInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_loopInstructionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_loopInstructionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_loopInstructionForGeneration_2D_weak (const class GALGAS_loopInstructionForGeneration & inSource) ;

  public: GALGAS_loopInstructionForGeneration_2D_weak & operator = (const class GALGAS_loopInstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_loopInstructionForGeneration bang_loopInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_loopInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_loopInstructionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_loopInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_loopInstructionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_loopInstructionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @messageInstructionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_messageInstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_messageInstructionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_messageInstructionForGeneration (const class cPtr_messageInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_semanticExpressionForGeneration readProperty_mExpression (void) const ;

  public: class GALGAS_location readProperty_mInstructionLocation (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_messageInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_messageInstructionForGeneration constructor_new (const class GALGAS_semanticExpressionForGeneration & inOperand0,
                                                                               const class GALGAS_location & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_messageInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mExpression (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mInstructionLocation (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_messageInstructionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_messageInstructionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @messageInstructionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_messageInstructionForGeneration : public cPtr_semanticInstructionForGeneration {
//--- Properties
  public: GALGAS_semanticExpressionForGeneration mProperty_mExpression ;
  public: GALGAS_location mProperty_mInstructionLocation ;

//--- Constructor
  public: cPtr_messageInstructionForGeneration (const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                const GALGAS_location & in_mInstructionLocation
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
// Phase 1: @messageInstructionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_messageInstructionForGeneration_2D_weak : public GALGAS_semanticInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_messageInstructionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_messageInstructionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_messageInstructionForGeneration_2D_weak (const class GALGAS_messageInstructionForGeneration & inSource) ;

  public: GALGAS_messageInstructionForGeneration_2D_weak & operator = (const class GALGAS_messageInstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_messageInstructionForGeneration bang_messageInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_messageInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_messageInstructionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_messageInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_messageInstructionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_messageInstructionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @methodCallInstructionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_methodCallInstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_methodCallInstructionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_methodCallInstructionForGeneration (const class cPtr_methodCallInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mInstructionLocation (void) const ;

  public: class GALGAS_unifiedTypeMap_2D_entry readProperty_mReceiverType (void) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_mReceiverExpression (void) const ;

  public: class GALGAS_string readProperty_mMethodName (void) const ;

  public: class GALGAS_methodKind readProperty_mKind (void) const ;

  public: class GALGAS_actualParameterListForGeneration readProperty_mActualParameterList (void) const ;

  public: class GALGAS_bool readProperty_mHasCompilerArgument (void) const ;

  public: class GALGAS_unifiedTypeMap_2D_entry readProperty_mMethodBaseType (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_methodCallInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_methodCallInstructionForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                                  const class GALGAS_unifiedTypeMap_2D_entry & inOperand1,
                                                                                  const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                                  const class GALGAS_string & inOperand3,
                                                                                  const class GALGAS_methodKind & inOperand4,
                                                                                  const class GALGAS_actualParameterListForGeneration & inOperand5,
                                                                                  const class GALGAS_bool & inOperand6,
                                                                                  const class GALGAS_unifiedTypeMap_2D_entry & inOperand7
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_methodCallInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_actualParameterListForGeneration getter_mActualParameterList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasCompilerArgument (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mInstructionLocation (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_methodKind getter_mKind (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mMethodBaseType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mMethodName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mReceiverExpression (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mReceiverType (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_methodCallInstructionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_methodCallInstructionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @methodCallInstructionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_methodCallInstructionForGeneration : public cPtr_semanticInstructionForGeneration {
//--- Properties
  public: GALGAS_location mProperty_mInstructionLocation ;
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mReceiverType ;
  public: GALGAS_semanticExpressionForGeneration mProperty_mReceiverExpression ;
  public: GALGAS_string mProperty_mMethodName ;
  public: GALGAS_methodKind mProperty_mKind ;
  public: GALGAS_actualParameterListForGeneration mProperty_mActualParameterList ;
  public: GALGAS_bool mProperty_mHasCompilerArgument ;
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mMethodBaseType ;

//--- Constructor
  public: cPtr_methodCallInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                   const GALGAS_unifiedTypeMap_2D_entry & in_mReceiverType,
                                                   const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                   const GALGAS_string & in_mMethodName,
                                                   const GALGAS_methodKind & in_mKind,
                                                   const GALGAS_actualParameterListForGeneration & in_mActualParameterList,
                                                   const GALGAS_bool & in_mHasCompilerArgument,
                                                   const GALGAS_unifiedTypeMap_2D_entry & in_mMethodBaseType
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
// Phase 1: @methodCallInstructionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_methodCallInstructionForGeneration_2D_weak : public GALGAS_semanticInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_methodCallInstructionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_methodCallInstructionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_methodCallInstructionForGeneration_2D_weak (const class GALGAS_methodCallInstructionForGeneration & inSource) ;

  public: GALGAS_methodCallInstructionForGeneration_2D_weak & operator = (const class GALGAS_methodCallInstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_methodCallInstructionForGeneration bang_methodCallInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_methodCallInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_methodCallInstructionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_methodCallInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_methodCallInstructionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_methodCallInstructionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @switchInstructionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_switchInstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_switchInstructionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_switchInstructionForGeneration (const class cPtr_switchInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_unifiedTypeMap_2D_entry readProperty_mEnumType (void) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_mSwitchExpression (void) const ;

  public: class GALGAS_switchBranchesForGeneration readProperty_mBranches (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_switchInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_switchInstructionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                              const class GALGAS_semanticExpressionForGeneration & inOperand1,
                                                                              const class GALGAS_switchBranchesForGeneration & inOperand2
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_switchInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_switchBranchesForGeneration getter_mBranches (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mEnumType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mSwitchExpression (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_switchInstructionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchInstructionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @switchInstructionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_switchInstructionForGeneration : public cPtr_semanticInstructionForGeneration {
//--- Properties
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mEnumType ;
  public: GALGAS_semanticExpressionForGeneration mProperty_mSwitchExpression ;
  public: GALGAS_switchBranchesForGeneration mProperty_mBranches ;

//--- Constructor
  public: cPtr_switchInstructionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mEnumType,
                                               const GALGAS_semanticExpressionForGeneration & in_mSwitchExpression,
                                               const GALGAS_switchBranchesForGeneration & in_mBranches
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
// Phase 1: @switchInstructionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_switchInstructionForGeneration_2D_weak : public GALGAS_semanticInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_switchInstructionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_switchInstructionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_switchInstructionForGeneration_2D_weak (const class GALGAS_switchInstructionForGeneration & inSource) ;

  public: GALGAS_switchInstructionForGeneration_2D_weak & operator = (const class GALGAS_switchInstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_switchInstructionForGeneration bang_switchInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_switchInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_switchInstructionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_switchInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_switchInstructionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchInstructionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @warningInstructionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_warningInstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_warningInstructionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_warningInstructionForGeneration (const class cPtr_warningInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mInstructionLocation (void) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_mReceiverExpression (void) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_mWarningExpression (void) const ;

  public: class GALGAS_fixitListForGeneration readProperty_mFixitListForGeneration (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_warningInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_warningInstructionForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                               const class GALGAS_semanticExpressionForGeneration & inOperand1,
                                                                               const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                               const class GALGAS_fixitListForGeneration & inOperand3
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_warningInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMFixitListForGeneration (class GALGAS_fixitListForGeneration inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionLocation (class GALGAS_location inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReceiverExpression (class GALGAS_semanticExpressionForGeneration inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMWarningExpression (class GALGAS_semanticExpressionForGeneration inArgument0
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_fixitListForGeneration getter_mFixitListForGeneration (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mInstructionLocation (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mReceiverExpression (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mWarningExpression (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_warningInstructionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_warningInstructionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @warningInstructionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_warningInstructionForGeneration : public cPtr_semanticInstructionForGeneration {
//--- Properties
  public: GALGAS_location mProperty_mInstructionLocation ;
  public: GALGAS_semanticExpressionForGeneration mProperty_mReceiverExpression ;
  public: GALGAS_semanticExpressionForGeneration mProperty_mWarningExpression ;
  public: GALGAS_fixitListForGeneration mProperty_mFixitListForGeneration ;

//--- Constructor
  public: cPtr_warningInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                const GALGAS_semanticExpressionForGeneration & in_mWarningExpression,
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
// Phase 1: @warningInstructionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_warningInstructionForGeneration_2D_weak : public GALGAS_semanticInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_warningInstructionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_warningInstructionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_warningInstructionForGeneration_2D_weak (const class GALGAS_warningInstructionForGeneration & inSource) ;

  public: GALGAS_warningInstructionForGeneration_2D_weak & operator = (const class GALGAS_warningInstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_warningInstructionForGeneration bang_warningInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_warningInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_warningInstructionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_warningInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_warningInstructionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_warningInstructionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @readOnlyWithInstructionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_readOnlyWithInstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_readOnlyWithInstructionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_readOnlyWithInstructionForGeneration (const class cPtr_readOnlyWithInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mInstructionLocation (void) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_mReceiverExpression (void) const ;

  public: class GALGAS_string readProperty_mObjectArrayCppName (void) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_mKeyExpression (void) const ;

  public: class GALGAS_string readProperty_mSearchMethodNameForErrorSignaling (void) const ;

  public: class GALGAS_semanticInstructionListForGeneration readProperty_mDoBranchInstructions (void) const ;

  public: class GALGAS_semanticInstructionListForGeneration readProperty_mElseBranchInstructions (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_readOnlyWithInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_readOnlyWithInstructionForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                                    const class GALGAS_semanticExpressionForGeneration & inOperand1,
                                                                                    const class GALGAS_string & inOperand2,
                                                                                    const class GALGAS_semanticExpressionForGeneration & inOperand3,
                                                                                    const class GALGAS_string & inOperand4,
                                                                                    const class GALGAS_semanticInstructionListForGeneration & inOperand5,
                                                                                    const class GALGAS_semanticInstructionListForGeneration & inOperand6
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_readOnlyWithInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMDoBranchInstructions (class GALGAS_semanticInstructionListForGeneration inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMElseBranchInstructions (class GALGAS_semanticInstructionListForGeneration inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionLocation (class GALGAS_location inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMKeyExpression (class GALGAS_semanticExpressionForGeneration inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMObjectArrayCppName (class GALGAS_string inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReceiverExpression (class GALGAS_semanticExpressionForGeneration inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSearchMethodNameForErrorSignaling (class GALGAS_string inArgument0
                                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListForGeneration getter_mDoBranchInstructions (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListForGeneration getter_mElseBranchInstructions (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mInstructionLocation (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mKeyExpression (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mObjectArrayCppName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mReceiverExpression (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mSearchMethodNameForErrorSignaling (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_readOnlyWithInstructionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_readOnlyWithInstructionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @readOnlyWithInstructionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_readOnlyWithInstructionForGeneration : public cPtr_semanticInstructionForGeneration {
//--- Properties
  public: GALGAS_location mProperty_mInstructionLocation ;
  public: GALGAS_semanticExpressionForGeneration mProperty_mReceiverExpression ;
  public: GALGAS_string mProperty_mObjectArrayCppName ;
  public: GALGAS_semanticExpressionForGeneration mProperty_mKeyExpression ;
  public: GALGAS_string mProperty_mSearchMethodNameForErrorSignaling ;
  public: GALGAS_semanticInstructionListForGeneration mProperty_mDoBranchInstructions ;
  public: GALGAS_semanticInstructionListForGeneration mProperty_mElseBranchInstructions ;

//--- Constructor
  public: cPtr_readOnlyWithInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                     const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                     const GALGAS_string & in_mObjectArrayCppName,
                                                     const GALGAS_semanticExpressionForGeneration & in_mKeyExpression,
                                                     const GALGAS_string & in_mSearchMethodNameForErrorSignaling,
                                                     const GALGAS_semanticInstructionListForGeneration & in_mDoBranchInstructions,
                                                     const GALGAS_semanticInstructionListForGeneration & in_mElseBranchInstructions
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
// Phase 1: @readOnlyWithInstructionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_readOnlyWithInstructionForGeneration_2D_weak : public GALGAS_semanticInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_readOnlyWithInstructionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_readOnlyWithInstructionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_readOnlyWithInstructionForGeneration_2D_weak (const class GALGAS_readOnlyWithInstructionForGeneration & inSource) ;

  public: GALGAS_readOnlyWithInstructionForGeneration_2D_weak & operator = (const class GALGAS_readOnlyWithInstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_readOnlyWithInstructionForGeneration bang_readOnlyWithInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_readOnlyWithInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_readOnlyWithInstructionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_readOnlyWithInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_readOnlyWithInstructionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_readOnlyWithInstructionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @readWriteWithInstructionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_readWriteWithInstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_readWriteWithInstructionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_readWriteWithInstructionForGeneration (const class cPtr_readWriteWithInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mInstructionLocation (void) const ;

  public: class GALGAS_string readProperty_mReceiverVariableCppName (void) const ;

  public: class GALGAS_unifiedTypeMap_2D_entry readProperty_mReceiverType (void) const ;

  public: class GALGAS_lstringlist readProperty_mStructAttributeList (void) const ;

  public: class GALGAS_string readProperty_mObjectArrayCppName (void) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_mKeyExpression (void) const ;

  public: class GALGAS_string readProperty_mSearchMethodNameForErrorSignaling (void) const ;

  public: class GALGAS_semanticInstructionListForGeneration readProperty_mDoBranchInstructions (void) const ;

  public: class GALGAS_semanticInstructionListForGeneration readProperty_mElseBranchInstructions (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_readWriteWithInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_readWriteWithInstructionForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                                     const class GALGAS_string & inOperand1,
                                                                                     const class GALGAS_unifiedTypeMap_2D_entry & inOperand2,
                                                                                     const class GALGAS_lstringlist & inOperand3,
                                                                                     const class GALGAS_string & inOperand4,
                                                                                     const class GALGAS_semanticExpressionForGeneration & inOperand5,
                                                                                     const class GALGAS_string & inOperand6,
                                                                                     const class GALGAS_semanticInstructionListForGeneration & inOperand7,
                                                                                     const class GALGAS_semanticInstructionListForGeneration & inOperand8
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_readWriteWithInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMDoBranchInstructions (class GALGAS_semanticInstructionListForGeneration inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMElseBranchInstructions (class GALGAS_semanticInstructionListForGeneration inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionLocation (class GALGAS_location inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMKeyExpression (class GALGAS_semanticExpressionForGeneration inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMObjectArrayCppName (class GALGAS_string inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReceiverType (class GALGAS_unifiedTypeMap_2D_entry inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReceiverVariableCppName (class GALGAS_string inArgument0
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSearchMethodNameForErrorSignaling (class GALGAS_string inArgument0
                                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStructAttributeList (class GALGAS_lstringlist inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListForGeneration getter_mDoBranchInstructions (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListForGeneration getter_mElseBranchInstructions (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mInstructionLocation (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mKeyExpression (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mObjectArrayCppName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mReceiverType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mReceiverVariableCppName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mSearchMethodNameForErrorSignaling (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mStructAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_readWriteWithInstructionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_readWriteWithInstructionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @readWriteWithInstructionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_readWriteWithInstructionForGeneration : public cPtr_semanticInstructionForGeneration {
//--- Properties
  public: GALGAS_location mProperty_mInstructionLocation ;
  public: GALGAS_string mProperty_mReceiverVariableCppName ;
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mReceiverType ;
  public: GALGAS_lstringlist mProperty_mStructAttributeList ;
  public: GALGAS_string mProperty_mObjectArrayCppName ;
  public: GALGAS_semanticExpressionForGeneration mProperty_mKeyExpression ;
  public: GALGAS_string mProperty_mSearchMethodNameForErrorSignaling ;
  public: GALGAS_semanticInstructionListForGeneration mProperty_mDoBranchInstructions ;
  public: GALGAS_semanticInstructionListForGeneration mProperty_mElseBranchInstructions ;

//--- Constructor
  public: cPtr_readWriteWithInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                      const GALGAS_string & in_mReceiverVariableCppName,
                                                      const GALGAS_unifiedTypeMap_2D_entry & in_mReceiverType,
                                                      const GALGAS_lstringlist & in_mStructAttributeList,
                                                      const GALGAS_string & in_mObjectArrayCppName,
                                                      const GALGAS_semanticExpressionForGeneration & in_mKeyExpression,
                                                      const GALGAS_string & in_mSearchMethodNameForErrorSignaling,
                                                      const GALGAS_semanticInstructionListForGeneration & in_mDoBranchInstructions,
                                                      const GALGAS_semanticInstructionListForGeneration & in_mElseBranchInstructions
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
// Phase 1: @readWriteWithInstructionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_readWriteWithInstructionForGeneration_2D_weak : public GALGAS_semanticInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_readWriteWithInstructionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_readWriteWithInstructionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_readWriteWithInstructionForGeneration_2D_weak (const class GALGAS_readWriteWithInstructionForGeneration & inSource) ;

  public: GALGAS_readWriteWithInstructionForGeneration_2D_weak & operator = (const class GALGAS_readWriteWithInstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_readWriteWithInstructionForGeneration bang_readWriteWithInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_readWriteWithInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_readWriteWithInstructionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_readWriteWithInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_readWriteWithInstructionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_readWriteWithInstructionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @parseLoopInstructionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_parseLoopInstructionForGeneration : public GALGAS_syntaxInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_parseLoopInstructionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_parseLoopInstructionForGeneration (const class cPtr_parseLoopInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_semanticExpressionForGeneration readProperty_mVariantExpression (void) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_mWhileExpression (void) const ;

  public: class GALGAS_semanticInstructionListForGeneration readProperty_mInstructionList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_parseLoopInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_parseLoopInstructionForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                                 const class GALGAS_semanticExpressionForGeneration & inOperand1,
                                                                                 const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                                 const class GALGAS_semanticInstructionListForGeneration & inOperand3
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_parseLoopInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListForGeneration getter_mInstructionList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mVariantExpression (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mWhileExpression (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_parseLoopInstructionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_parseLoopInstructionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @parseLoopInstructionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_parseLoopInstructionForGeneration : public cPtr_syntaxInstructionForGeneration {
//--- Properties
  public: GALGAS_semanticExpressionForGeneration mProperty_mVariantExpression ;
  public: GALGAS_semanticExpressionForGeneration mProperty_mWhileExpression ;
  public: GALGAS_semanticInstructionListForGeneration mProperty_mInstructionList ;

//--- Constructor
  public: cPtr_parseLoopInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                  const GALGAS_semanticExpressionForGeneration & in_mVariantExpression,
                                                  const GALGAS_semanticExpressionForGeneration & in_mWhileExpression,
                                                  const GALGAS_semanticInstructionListForGeneration & in_mInstructionList
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
// Phase 1: @parseLoopInstructionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_parseLoopInstructionForGeneration_2D_weak : public GALGAS_syntaxInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_parseLoopInstructionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_parseLoopInstructionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_parseLoopInstructionForGeneration_2D_weak (const class GALGAS_parseLoopInstructionForGeneration & inSource) ;

  public: GALGAS_parseLoopInstructionForGeneration_2D_weak & operator = (const class GALGAS_parseLoopInstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_parseLoopInstructionForGeneration bang_parseLoopInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_parseLoopInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_parseLoopInstructionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_parseLoopInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_parseLoopInstructionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_parseLoopInstructionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @parseWhenInstructionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_parseWhenInstructionForGeneration : public GALGAS_syntaxInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_parseWhenInstructionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_parseWhenInstructionForGeneration (const class cPtr_parseWhenInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_semanticExpressionForGeneration readProperty_mWhenExpression (void) const ;

  public: class GALGAS_semanticInstructionListForGeneration readProperty_mInstructionList (void) const ;

  public: class GALGAS_semanticInstructionListForGeneration readProperty_mElseInstructionList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_parseWhenInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_parseWhenInstructionForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                                 const class GALGAS_semanticExpressionForGeneration & inOperand1,
                                                                                 const class GALGAS_semanticInstructionListForGeneration & inOperand2,
                                                                                 const class GALGAS_semanticInstructionListForGeneration & inOperand3
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_parseWhenInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListForGeneration getter_mElseInstructionList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListForGeneration getter_mInstructionList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mWhenExpression (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_parseWhenInstructionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_parseWhenInstructionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @parseWhenInstructionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_parseWhenInstructionForGeneration : public cPtr_syntaxInstructionForGeneration {
//--- Properties
  public: GALGAS_semanticExpressionForGeneration mProperty_mWhenExpression ;
  public: GALGAS_semanticInstructionListForGeneration mProperty_mInstructionList ;
  public: GALGAS_semanticInstructionListForGeneration mProperty_mElseInstructionList ;

//--- Constructor
  public: cPtr_parseWhenInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                  const GALGAS_semanticExpressionForGeneration & in_mWhenExpression,
                                                  const GALGAS_semanticInstructionListForGeneration & in_mInstructionList,
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
// Phase 1: @parseWhenInstructionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_parseWhenInstructionForGeneration_2D_weak : public GALGAS_syntaxInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_parseWhenInstructionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_parseWhenInstructionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_parseWhenInstructionForGeneration_2D_weak (const class GALGAS_parseWhenInstructionForGeneration & inSource) ;

  public: GALGAS_parseWhenInstructionForGeneration_2D_weak & operator = (const class GALGAS_parseWhenInstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_parseWhenInstructionForGeneration bang_parseWhenInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_parseWhenInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_parseWhenInstructionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_parseWhenInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_parseWhenInstructionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_parseWhenInstructionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxSendInstructionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_syntaxSendInstructionForGeneration : public GALGAS_syntaxInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_syntaxSendInstructionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_syntaxSendInstructionForGeneration (const class cPtr_syntaxSendInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_semanticExpressionForGeneration readProperty_mExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_syntaxSendInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_syntaxSendInstructionForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                                  const class GALGAS_semanticExpressionForGeneration & inOperand1
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_syntaxSendInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mExpression (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_syntaxSendInstructionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxSendInstructionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @syntaxSendInstructionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_syntaxSendInstructionForGeneration : public cPtr_syntaxInstructionForGeneration {
//--- Properties
  public: GALGAS_semanticExpressionForGeneration mProperty_mExpression ;

//--- Constructor
  public: cPtr_syntaxSendInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
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
// Phase 1: @syntaxSendInstructionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_syntaxSendInstructionForGeneration_2D_weak : public GALGAS_syntaxInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_syntaxSendInstructionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_syntaxSendInstructionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_syntaxSendInstructionForGeneration_2D_weak (const class GALGAS_syntaxSendInstructionForGeneration & inSource) ;

  public: GALGAS_syntaxSendInstructionForGeneration_2D_weak & operator = (const class GALGAS_syntaxSendInstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_syntaxSendInstructionForGeneration bang_syntaxSendInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_syntaxSendInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_syntaxSendInstructionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_syntaxSendInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_syntaxSendInstructionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxSendInstructionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@productionRuleListForGrammarAnalysis-element displayRule'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_displayRule (const class GALGAS_productionRuleListForGrammarAnalysis_2D_element inObject,
                                  const class GALGAS_string constin_inSyntaxCompnentName,
                                  class GALGAS_string & io_ioGeneratedCode,
                                  class C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

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
  public: VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mExpression (LOCATION_ARGS) const ;


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
//Filewrapper 'projectCreationFileWrapper'
//
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------

extern const cDirectoryWrapper gWrapperDirectory_0_projectCreationFileWrapper ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_project'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_project (class C_Compiler * inCompiler,
                                                                                 const class GALGAS_string & in_PROJECT_5F_NAME
                                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_cocoa'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_cocoa (class C_Compiler * inCompiler,
                                                                               const class GALGAS_string & in_PROJECT_5F_NAME
                                                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_grammar'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_grammar (class C_Compiler * inCompiler,
                                                                                 const class GALGAS_string & in_PROJECT_5F_NAME
                                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_lexique'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_lexique (class C_Compiler * inCompiler,
                                                                                 const class GALGAS_string & in_PROJECT_5F_NAME
                                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_options'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_options (class C_Compiler * inCompiler,
                                                                                 const class GALGAS_string & in_PROJECT_5F_NAME
                                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_program'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_program (class C_Compiler * inCompiler,
                                                                                 const class GALGAS_string & in_PROJECT_5F_NAME
                                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_semantics'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_semantics (class C_Compiler * inCompiler,
                                                                                   const class GALGAS_string & in_PROJECT_5F_NAME
                                                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_syntax'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_syntax (class C_Compiler * inCompiler,
                                                                                const class GALGAS_string & in_PROJECT_5F_NAME
                                                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'performProjectCreation'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_performProjectCreation (const class GALGAS_string constinArgument0,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'projectCreation'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_projectCreation (const class GALGAS_string constinArgument0,
                              class C_Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'checkAssignmentTypeWithImplicitGetterCall'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_checkAssignmentTypeWithImplicitGetterCall (const class GALGAS_unifiedTypeMap_2D_entry constinArgument0,
                                                        const class GALGAS_unifiedTypeMap_2D_entry constinArgument1,
                                                        const class GALGAS_location constinArgument2,
                                                        class GALGAS_semanticExpressionForGeneration & ioArgument3,
                                                        class C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'checkDiadicOperator'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_checkDiadicOperator (const class GALGAS_unifiedTypeMap_2D_entry constinArgument0,
                                  const class GALGAS_unifiedTypeMap_2D_entry constinArgument1,
                                  const class GALGAS_bool constinArgument2,
                                  const class GALGAS_string constinArgument3,
                                  const class GALGAS_location constinArgument4,
                                  class GALGAS_semanticExpressionForGeneration & ioArgument5,
                                  class C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'optionNameForUsefulEntitiesGraph'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lstring function_optionNameForUsefulEntitiesGraph (const class GALGAS_lstring & constinArgument0,
                                                                class C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'functionNameForUsefulEntitiesGraph'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lstring function_functionNameForUsefulEntitiesGraph (const class GALGAS_lstring & constinArgument0,
                                                                  class C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'templateInstructionListAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_templateInstructionListAnalysis (const class GALGAS_lstring constinArgument0,
                                              class GALGAS_usefulEntitiesGraph & ioArgument1,
                                              const class GALGAS_templateAnalysisContext constinArgument2,
                                              const class GALGAS_templateInstructionListAST constinArgument3,
                                              class GALGAS_templateInstructionListForGeneration & ioArgument4,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'templateCodeGenerationForListInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_templateCodeGenerationForListInstruction (const class GALGAS_templateInstructionListForGeneration constinArgument0,
                                                       class GALGAS_string & ioArgument1,
                                                       class GALGAS_stringset & ioArgument2,
                                                       class GALGAS_uint & ioArgument3,
                                                       class GALGAS_stringset & ioArgument4,
                                                       class GALGAS_bool & ioArgument5,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'buildLexicalTypeMap'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexicalTypeMap function_buildLexicalTypeMap (class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildLexicalAttributeMap'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildLexicalAttributeMap (const class GALGAS_lexicalTypeMap constinArgument0,
                                       const class GALGAS_lexicalAttributeListAST constinArgument1,
                                       class GALGAS_lexicalAttributeMap & ioArgument2,
                                       class C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'lexicalUnicodeTestFunctionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_lexicalUnicodeTestFunctionAnalysis (const class GALGAS_lexicalFunctionListAST constinArgument0,
                                                 class GALGAS_stringset & outArgument1,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildLexicalRoutineMap'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildLexicalRoutineMap (class GALGAS_lexicalRoutineMap & outArgument0,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildLexicalFunctionMap'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildLexicalFunctionMap (class GALGAS_lexicalFunctionMap & outArgument0,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'printPredefinedLexicalActions'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_printPredefinedLexicalActions (class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

