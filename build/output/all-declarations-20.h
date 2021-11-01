#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-19.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateLiteralUIntExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateLiteralUIntExpressionAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateLiteralUIntExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateLiteralUIntExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateLiteralUIntExpressionAST_2D_weak (const class GALGAS_templateLiteralUIntExpressionAST & inSource) ;

  public: GALGAS_templateLiteralUIntExpressionAST_2D_weak & operator = (const class GALGAS_templateLiteralUIntExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateLiteralUIntExpressionAST bang_templateLiteralUIntExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateLiteralUIntExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateLiteralUIntExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateLiteralUIntExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateLiteralUIntExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateLiteralUIntExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateLiteralSIntExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateLiteralSIntExpressionAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateLiteralSIntExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateLiteralSIntExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateLiteralSIntExpressionAST_2D_weak (const class GALGAS_templateLiteralSIntExpressionAST & inSource) ;

  public: GALGAS_templateLiteralSIntExpressionAST_2D_weak & operator = (const class GALGAS_templateLiteralSIntExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateLiteralSIntExpressionAST bang_templateLiteralSIntExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateLiteralSIntExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateLiteralSIntExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateLiteralSIntExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateLiteralSIntExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateLiteralSIntExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateLiteralUInt_36__34_ExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak (const class GALGAS_templateLiteralUInt_36__34_ExpressionAST & inSource) ;

  public: GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak & operator = (const class GALGAS_templateLiteralUInt_36__34_ExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateLiteralUInt_36__34_ExpressionAST bang_templateLiteralUInt_36__34_ExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateLiteralUInt_36__34_ExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateLiteralSInt_36__34_ExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak (const class GALGAS_templateLiteralSInt_36__34_ExpressionAST & inSource) ;

  public: GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak & operator = (const class GALGAS_templateLiteralSInt_36__34_ExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateLiteralSInt_36__34_ExpressionAST bang_templateLiteralSInt_36__34_ExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateLiteralSInt_36__34_ExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateLiteralCharExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateLiteralCharExpressionAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateLiteralCharExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateLiteralCharExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateLiteralCharExpressionAST_2D_weak (const class GALGAS_templateLiteralCharExpressionAST & inSource) ;

  public: GALGAS_templateLiteralCharExpressionAST_2D_weak & operator = (const class GALGAS_templateLiteralCharExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateLiteralCharExpressionAST bang_templateLiteralCharExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateLiteralCharExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateLiteralCharExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateLiteralCharExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateLiteralCharExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateLiteralCharExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @templateLiteralDoubleExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_templateLiteralDoubleExpressionAST_2D_weak : public GALGAS_templateExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_templateLiteralDoubleExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_templateLiteralDoubleExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_templateLiteralDoubleExpressionAST_2D_weak (const class GALGAS_templateLiteralDoubleExpressionAST & inSource) ;

  public: GALGAS_templateLiteralDoubleExpressionAST_2D_weak & operator = (const class GALGAS_templateLiteralDoubleExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_templateLiteralDoubleExpressionAST bang_templateLiteralDoubleExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_templateLiteralDoubleExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_templateLiteralDoubleExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_templateLiteralDoubleExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_templateLiteralDoubleExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateLiteralDoubleExpressionAST_2D_weak ;

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
  public: class GALGAS_semanticExpressionForGeneration readProperty_mExpression (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

  public: class GALGAS_location readProperty_mLocation (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

  public: class GALGAS_templateInstructionListForGeneration readProperty_mBlockInstructionList (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListForGeneration getter_mBlockInstructionList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mExpression (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mLocation (LOCATION_ARGS) const ;


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
  public: class GALGAS_bool readProperty_mIsAscending (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_mExpression (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

  public: class GALGAS_string readProperty_mEnumeratorCppName (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

  public: class GALGAS_templateInstructionListForGeneration readProperty_mBeforeInstructionList (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

  public: class GALGAS_templateInstructionListForGeneration readProperty_mDoInstructionList (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

  public: class GALGAS_string readProperty_mIndexCppName (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

  public: class GALGAS_templateInstructionListForGeneration readProperty_mBetweenInstructionList (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

  public: class GALGAS_templateInstructionListForGeneration readProperty_mAfterInstructionList (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListForGeneration getter_mAfterInstructionList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListForGeneration getter_mBeforeInstructionList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListForGeneration getter_mBetweenInstructionList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateInstructionListForGeneration getter_mDoInstructionList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mEnumeratorCppName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mExpression (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mIndexCppName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsAscending (LOCATION_ARGS) const ;


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
  public: class GALGAS_unifiedTypeMap_2D_entry readProperty_mEnumType (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_mSwitchExpression (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

  public: class GALGAS_templateInstructionSwitchBranchListForGeneration readProperty_mTemplateInstructionSwitchBranchList (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mEnumType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mSwitchExpression (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_templateInstructionSwitchBranchListForGeneration getter_mTemplateInstructionSwitchBranchList (LOCATION_ARGS) const ;


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
// Phase 1: @optionComponentForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_optionComponentForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_optionComponentForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_optionComponentForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_optionComponentForGeneration (const class cPtr_optionComponentForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_mIsPredefined (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

  public: class GALGAS_string readProperty_mOptionComponentName (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

  public: class GALGAS_commandLineOptionMap readProperty_mBoolOptionMap (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

  public: class GALGAS_commandLineOptionMap readProperty_mUIntOptionMap (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

  public: class GALGAS_commandLineOptionMap readProperty_mStringOptionMap (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

  public: class GALGAS_commandLineOptionMap readProperty_mStringListOptionMap (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_optionComponentForGeneration extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_optionComponentForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                                            const class GALGAS_string & inOperand1,
                                                                            const class GALGAS_bool & inOperand2,
                                                                            const class GALGAS_string & inOperand3,
                                                                            const class GALGAS_commandLineOptionMap & inOperand4,
                                                                            const class GALGAS_commandLineOptionMap & inOperand5,
                                                                            const class GALGAS_commandLineOptionMap & inOperand6,
                                                                            const class GALGAS_commandLineOptionMap & inOperand7
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_optionComponentForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMBoolOptionMap (class GALGAS_commandLineOptionMap inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsPredefined (class GALGAS_bool inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOptionComponentName (class GALGAS_string inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStringListOptionMap (class GALGAS_commandLineOptionMap inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStringOptionMap (class GALGAS_commandLineOptionMap inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMUIntOptionMap (class GALGAS_commandLineOptionMap inArgument0
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_commandLineOptionMap getter_mBoolOptionMap (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsPredefined (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mOptionComponentName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_commandLineOptionMap getter_mStringListOptionMap (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_commandLineOptionMap getter_mStringOptionMap (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_commandLineOptionMap getter_mUIntOptionMap (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_optionComponentForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionComponentForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @optionComponentForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_optionComponentForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Properties
  public: GALGAS_bool mProperty_mIsPredefined ;
  public: GALGAS_string mProperty_mOptionComponentName ;
  public: GALGAS_commandLineOptionMap mProperty_mBoolOptionMap ;
  public: GALGAS_commandLineOptionMap mProperty_mUIntOptionMap ;
  public: GALGAS_commandLineOptionMap mProperty_mStringOptionMap ;
  public: GALGAS_commandLineOptionMap mProperty_mStringListOptionMap ;

//--- Constructor
  public: cPtr_optionComponentForGeneration (const GALGAS_bool & in_mHasHeader,
                                             const GALGAS_string & in_mImplementationCppFileName,
                                             const GALGAS_bool & in_mIsPredefined,
                                             const GALGAS_string & in_mOptionComponentName,
                                             const GALGAS_commandLineOptionMap & in_mBoolOptionMap,
                                             const GALGAS_commandLineOptionMap & in_mUIntOptionMap,
                                             const GALGAS_commandLineOptionMap & in_mStringOptionMap,
                                             const GALGAS_commandLineOptionMap & in_mStringListOptionMap
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
// Phase 1: @optionComponentForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_optionComponentForGeneration_2D_weak : public GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_optionComponentForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_optionComponentForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_optionComponentForGeneration_2D_weak (const class GALGAS_optionComponentForGeneration & inSource) ;

  public: GALGAS_optionComponentForGeneration_2D_weak & operator = (const class GALGAS_optionComponentForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_optionComponentForGeneration bang_optionComponentForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_optionComponentForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_optionComponentForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_optionComponentForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_optionComponentForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionComponentForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @arrayTypeForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_arrayTypeForGeneration : public GALGAS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_arrayTypeForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_arrayTypeForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_arrayTypeForGeneration (const class cPtr_arrayTypeForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_unifiedTypeMap_2D_entry readProperty_mElementTypeEntry (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

  public: class GALGAS_uint readProperty_mDimension (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_arrayTypeForGeneration extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_arrayTypeForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                      const class GALGAS_unifiedTypeMap_2D_entry & inOperand1,
                                                                      const class GALGAS_uint & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_arrayTypeForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mDimension (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mElementTypeEntry (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_arrayTypeForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayTypeForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @arrayTypeForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_arrayTypeForGeneration : public cPtr_semanticTypeForGeneration {
//--- Properties
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mElementTypeEntry ;
  public: GALGAS_uint mProperty_mDimension ;

//--- Constructor
  public: cPtr_arrayTypeForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mSelfTypeEntry,
                                       const GALGAS_unifiedTypeMap_2D_entry & in_mElementTypeEntry,
                                       const GALGAS_uint & in_mDimension
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
// Phase 1: @arrayTypeForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_arrayTypeForGeneration_2D_weak : public GALGAS_semanticTypeForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_arrayTypeForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_arrayTypeForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_arrayTypeForGeneration_2D_weak (const class GALGAS_arrayTypeForGeneration & inSource) ;

  public: GALGAS_arrayTypeForGeneration_2D_weak & operator = (const class GALGAS_arrayTypeForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_arrayTypeForGeneration bang_arrayTypeForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_arrayTypeForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_arrayTypeForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_arrayTypeForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_arrayTypeForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayTypeForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticExpressionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_semanticExpressionForGeneration_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_semanticExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_semanticExpressionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_semanticExpressionForGeneration_2D_weak (const class GALGAS_semanticExpressionForGeneration & inSource) ;

  public: GALGAS_semanticExpressionForGeneration_2D_weak & operator = (const class GALGAS_semanticExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_semanticExpressionForGeneration bang_semanticExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_semanticExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_semanticExpressionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_semanticExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_semanticExpressionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @castInExpressionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_castInExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_castInExpressionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_castInExpressionForGeneration (const class cPtr_castInExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_semanticExpressionForGeneration readProperty_mReceiverExpression (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

  public: class GALGAS_string readProperty_mTypeName (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

  public: class GALGAS_unifiedTypeMap_2D_entry readProperty_mCastType (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_castInExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_castInExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                             const class GALGAS_location & inOperand1,
                                                                             const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                             const class GALGAS_string & inOperand3,
                                                                             const class GALGAS_unifiedTypeMap_2D_entry & inOperand4
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_castInExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMCastType (class GALGAS_unifiedTypeMap_2D_entry inArgument0
                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReceiverExpression (class GALGAS_semanticExpressionForGeneration inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeName (class GALGAS_string inArgument0
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mCastType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mReceiverExpression (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_castInExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_castInExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @castInExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_castInExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Properties
  public: GALGAS_semanticExpressionForGeneration mProperty_mReceiverExpression ;
  public: GALGAS_string mProperty_mTypeName ;
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mCastType ;

//--- Constructor
  public: cPtr_castInExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                              const GALGAS_location & in_mLocation,
                                              const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                                              const GALGAS_string & in_mTypeName,
                                              const GALGAS_unifiedTypeMap_2D_entry & in_mCastType
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
// Phase 1: @castInExpressionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_castInExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_castInExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_castInExpressionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_castInExpressionForGeneration_2D_weak (const class GALGAS_castInExpressionForGeneration & inSource) ;

  public: GALGAS_castInExpressionForGeneration_2D_weak & operator = (const class GALGAS_castInExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_castInExpressionForGeneration bang_castInExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_castInExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_castInExpressionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_castInExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_castInExpressionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_castInExpressionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @outputActualParameterForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_outputActualParameterForGeneration : public GALGAS_actualParameterForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_outputActualParameterForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_outputActualParameterForGeneration (const class cPtr_outputActualParameterForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_semanticExpressionForGeneration readProperty_mOutputActualParameterExpression (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_outputActualParameterForGeneration extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_outputActualParameterForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                  const class GALGAS_semanticExpressionForGeneration & inOperand1
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_outputActualParameterForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMOutputActualParameterExpression (class GALGAS_semanticExpressionForGeneration inArgument0
                                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mOutputActualParameterExpression (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_outputActualParameterForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputActualParameterForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @outputActualParameterForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_outputActualParameterForGeneration : public cPtr_actualParameterForGeneration {
//--- Properties
  public: GALGAS_semanticExpressionForGeneration mProperty_mOutputActualParameterExpression ;

//--- Constructor
  public: cPtr_outputActualParameterForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mFormalArgumentType,
                                                   const GALGAS_semanticExpressionForGeneration & in_mOutputActualParameterExpression
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
// Phase 1: @outputActualParameterForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_outputActualParameterForGeneration_2D_weak : public GALGAS_actualParameterForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_outputActualParameterForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_outputActualParameterForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_outputActualParameterForGeneration_2D_weak (const class GALGAS_outputActualParameterForGeneration & inSource) ;

  public: GALGAS_outputActualParameterForGeneration_2D_weak & operator = (const class GALGAS_outputActualParameterForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_outputActualParameterForGeneration bang_outputActualParameterForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_outputActualParameterForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_outputActualParameterForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_outputActualParameterForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_outputActualParameterForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputActualParameterForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @ifExpressionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_ifExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_ifExpressionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_ifExpressionForGeneration (const class cPtr_ifExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_semanticExpressionForGeneration readProperty_mIfExpression (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_mThenExpression (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_mElseExpression (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_ifExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ifExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                         const class GALGAS_location & inOperand1,
                                                                         const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                         const class GALGAS_semanticExpressionForGeneration & inOperand3,
                                                                         const class GALGAS_semanticExpressionForGeneration & inOperand4
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ifExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMElseExpression (class GALGAS_semanticExpressionForGeneration inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIfExpression (class GALGAS_semanticExpressionForGeneration inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMThenExpression (class GALGAS_semanticExpressionForGeneration inArgument0
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mElseExpression (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mIfExpression (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mThenExpression (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ifExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @ifExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_ifExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Properties
  public: GALGAS_semanticExpressionForGeneration mProperty_mIfExpression ;
  public: GALGAS_semanticExpressionForGeneration mProperty_mThenExpression ;
  public: GALGAS_semanticExpressionForGeneration mProperty_mElseExpression ;

//--- Constructor
  public: cPtr_ifExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                          const GALGAS_location & in_mLocation,
                                          const GALGAS_semanticExpressionForGeneration & in_mIfExpression,
                                          const GALGAS_semanticExpressionForGeneration & in_mThenExpression,
                                          const GALGAS_semanticExpressionForGeneration & in_mElseExpression
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
// Phase 1: @ifExpressionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_ifExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ifExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_ifExpressionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ifExpressionForGeneration_2D_weak (const class GALGAS_ifExpressionForGeneration & inSource) ;

  public: GALGAS_ifExpressionForGeneration_2D_weak & operator = (const class GALGAS_ifExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ifExpressionForGeneration bang_ifExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_ifExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ifExpressionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @unaryMinusExpressionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_unaryMinusExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_unaryMinusExpressionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_unaryMinusExpressionForGeneration (const class cPtr_unaryMinusExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_semanticExpressionForGeneration readProperty_mExpression (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_unaryMinusExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_unaryMinusExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                 const class GALGAS_location & inOperand1,
                                                                                 const class GALGAS_semanticExpressionForGeneration & inOperand2
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_unaryMinusExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionForGeneration getter_mExpression (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_unaryMinusExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unaryMinusExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @unaryMinusExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_unaryMinusExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Properties
  public: GALGAS_semanticExpressionForGeneration mProperty_mExpression ;

//--- Constructor
  public: cPtr_unaryMinusExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
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
// Phase 1: @unaryMinusExpressionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_unaryMinusExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_unaryMinusExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_unaryMinusExpressionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_unaryMinusExpressionForGeneration_2D_weak (const class GALGAS_unaryMinusExpressionForGeneration & inSource) ;

  public: GALGAS_unaryMinusExpressionForGeneration_2D_weak & operator = (const class GALGAS_unaryMinusExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_unaryMinusExpressionForGeneration bang_unaryMinusExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_unaryMinusExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_unaryMinusExpressionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unaryMinusExpressionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @varInExpressionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_varInExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_varInExpressionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_varInExpressionForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_varInExpressionForGeneration (const class cPtr_varInExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mCppVarName (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

  public: class GALGAS_string readProperty_mNameForCheckingFormalParameterUsing (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_varInExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_varInExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                            const class GALGAS_location & inOperand1,
                                                                            const class GALGAS_string & inOperand2,
                                                                            const class GALGAS_string & inOperand3
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_varInExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMCppVarName (class GALGAS_string inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNameForCheckingFormalParameterUsing (class GALGAS_string inArgument0
                                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mCppVarName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mNameForCheckingFormalParameterUsing (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_varInExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varInExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @varInExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_varInExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Properties
  public: GALGAS_string mProperty_mCppVarName ;
  public: GALGAS_string mProperty_mNameForCheckingFormalParameterUsing ;

//--- Constructor
  public: cPtr_varInExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                             const GALGAS_location & in_mLocation,
                                             const GALGAS_string & in_mCppVarName,
                                             const GALGAS_string & in_mNameForCheckingFormalParameterUsing
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
// Phase 1: @varInExpressionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_varInExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_varInExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_varInExpressionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_varInExpressionForGeneration_2D_weak (const class GALGAS_varInExpressionForGeneration & inSource) ;

  public: GALGAS_varInExpressionForGeneration_2D_weak & operator = (const class GALGAS_varInExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_varInExpressionForGeneration bang_varInExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_varInExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_varInExpressionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varInExpressionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @trueExpressionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_trueExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_trueExpressionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_trueExpressionForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_trueExpressionForGeneration (const class cPtr_trueExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_trueExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_trueExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_trueExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_trueExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @trueExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_trueExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Properties

//--- Constructor
  public: cPtr_trueExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                            const GALGAS_location & in_mLocation
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
// Phase 1: @trueExpressionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_trueExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_trueExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_trueExpressionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_trueExpressionForGeneration_2D_weak (const class GALGAS_trueExpressionForGeneration & inSource) ;

  public: GALGAS_trueExpressionForGeneration_2D_weak & operator = (const class GALGAS_trueExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_trueExpressionForGeneration bang_trueExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_trueExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_trueExpressionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_trueExpressionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @falseExpressionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_falseExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_falseExpressionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_falseExpressionForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_falseExpressionForGeneration (const class cPtr_falseExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_falseExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_falseExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_falseExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_falseExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @falseExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_falseExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Properties

//--- Constructor
  public: cPtr_falseExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                             const GALGAS_location & in_mLocation
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
// Phase 1: @falseExpressionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_falseExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_falseExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_falseExpressionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_falseExpressionForGeneration_2D_weak (const class GALGAS_falseExpressionForGeneration & inSource) ;

  public: GALGAS_falseExpressionForGeneration_2D_weak & operator = (const class GALGAS_falseExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_falseExpressionForGeneration bang_falseExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_falseExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_falseExpressionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_falseExpressionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@semanticExpressionForGeneration isTrueExpression'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_bool (*enterExtensionGetter_semanticExpressionForGeneration_isTrueExpression) (const class cPtr_semanticExpressionForGeneration * inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;
 
//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_isTrueExpression (const int32_t inClassIndex,
                                            enterExtensionGetter_semanticExpressionForGeneration_isTrueExpression inGetter) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool callExtensionGetter_isTrueExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                        class C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @literalStringExpressionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalStringExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_literalStringExpressionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_literalStringExpressionForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_literalStringExpressionForGeneration (const class cPtr_literalStringExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mString (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_literalStringExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalStringExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                    const class GALGAS_location & inOperand1,
                                                                                    const class GALGAS_string & inOperand2
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalStringExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mString (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalStringExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalStringExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @literalStringExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_literalStringExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Properties
  public: GALGAS_string mProperty_mString ;

//--- Constructor
  public: cPtr_literalStringExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                     const GALGAS_location & in_mLocation,
                                                     const GALGAS_string & in_mString
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
// Phase 1: @literalStringExpressionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalStringExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_literalStringExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_literalStringExpressionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_literalStringExpressionForGeneration_2D_weak (const class GALGAS_literalStringExpressionForGeneration & inSource) ;

  public: GALGAS_literalStringExpressionForGeneration_2D_weak & operator = (const class GALGAS_literalStringExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_literalStringExpressionForGeneration bang_literalStringExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_literalStringExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalStringExpressionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalStringExpressionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @literalCharExpressionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalCharExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_literalCharExpressionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_literalCharExpressionForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_literalCharExpressionForGeneration (const class cPtr_literalCharExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_char readProperty_mCharacter (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_literalCharExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalCharExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                  const class GALGAS_location & inOperand1,
                                                                                  const class GALGAS_char & inOperand2
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalCharExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_char getter_mCharacter (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalCharExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalCharExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @literalCharExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_literalCharExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Properties
  public: GALGAS_char mProperty_mCharacter ;

//--- Constructor
  public: cPtr_literalCharExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                   const GALGAS_location & in_mLocation,
                                                   const GALGAS_char & in_mCharacter
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
// Phase 1: @literalCharExpressionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalCharExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_literalCharExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_literalCharExpressionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_literalCharExpressionForGeneration_2D_weak (const class GALGAS_literalCharExpressionForGeneration & inSource) ;

  public: GALGAS_literalCharExpressionForGeneration_2D_weak & operator = (const class GALGAS_literalCharExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_literalCharExpressionForGeneration bang_literalCharExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_literalCharExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalCharExpressionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalCharExpressionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @literalDoubleExpressionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalDoubleExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_literalDoubleExpressionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_literalDoubleExpressionForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_literalDoubleExpressionForGeneration (const class cPtr_literalDoubleExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_double readProperty_mValue (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_literalDoubleExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalDoubleExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                    const class GALGAS_location & inOperand1,
                                                                                    const class GALGAS_double & inOperand2
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalDoubleExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_double getter_mValue (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalDoubleExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalDoubleExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @literalDoubleExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_literalDoubleExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Properties
  public: GALGAS_double mProperty_mValue ;

//--- Constructor
  public: cPtr_literalDoubleExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                     const GALGAS_location & in_mLocation,
                                                     const GALGAS_double & in_mValue
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
// Phase 1: @literalDoubleExpressionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalDoubleExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_literalDoubleExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_literalDoubleExpressionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_literalDoubleExpressionForGeneration_2D_weak (const class GALGAS_literalDoubleExpressionForGeneration & inSource) ;

  public: GALGAS_literalDoubleExpressionForGeneration_2D_weak & operator = (const class GALGAS_literalDoubleExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_literalDoubleExpressionForGeneration bang_literalDoubleExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_literalDoubleExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalDoubleExpressionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalDoubleExpressionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @literalBigIntExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalBigIntExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_literalBigIntExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_literalBigIntExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_literalBigIntExpressionAST_2D_weak (const class GALGAS_literalBigIntExpressionAST & inSource) ;

  public: GALGAS_literalBigIntExpressionAST_2D_weak & operator = (const class GALGAS_literalBigIntExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_literalBigIntExpressionAST bang_literalBigIntExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_literalBigIntExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalBigIntExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalBigIntExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @literalUIntExpressionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalUIntExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_literalUIntExpressionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_literalUIntExpressionForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_literalUIntExpressionForGeneration (const class cPtr_literalUIntExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_uint readProperty_mValue (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_literalUIntExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalUIntExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                  const class GALGAS_location & inOperand1,
                                                                                  const class GALGAS_uint & inOperand2
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalUIntExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMValue (class GALGAS_uint inArgument0
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mValue (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalUIntExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalUIntExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @literalUIntExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_literalUIntExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Properties
  public: GALGAS_uint mProperty_mValue ;

//--- Constructor
  public: cPtr_literalUIntExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                   const GALGAS_location & in_mLocation,
                                                   const GALGAS_uint & in_mValue
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
// Phase 1: @literalUIntExpressionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalUIntExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_literalUIntExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_literalUIntExpressionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_literalUIntExpressionForGeneration_2D_weak (const class GALGAS_literalUIntExpressionForGeneration & inSource) ;

  public: GALGAS_literalUIntExpressionForGeneration_2D_weak & operator = (const class GALGAS_literalUIntExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_literalUIntExpressionForGeneration bang_literalUIntExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_literalUIntExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalUIntExpressionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalUIntExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalUIntExpressionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalUIntExpressionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @literalUInt_36__34_ExpressionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalUInt_36__34_ExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_literalUInt_36__34_ExpressionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_literalUInt_36__34_ExpressionForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_literalUInt_36__34_ExpressionForGeneration (const class cPtr_literalUInt_36__34_ExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_uint_36__34_ readProperty_mValue (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_literalUInt_36__34_ExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalUInt_36__34_ExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                          const class GALGAS_location & inOperand1,
                                                                                          const class GALGAS_uint_36__34_ & inOperand2
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalUInt_36__34_ExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint_36__34_ getter_mValue (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalUInt_36__34_ExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @literalUInt64ExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_literalUInt_36__34_ExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Properties
  public: GALGAS_uint_36__34_ mProperty_mValue ;

//--- Constructor
  public: cPtr_literalUInt_36__34_ExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                           const GALGAS_location & in_mLocation,
                                                           const GALGAS_uint_36__34_ & in_mValue
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
// Phase 1: @literalUInt_36__34_ExpressionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalUInt_36__34_ExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_literalUInt_36__34_ExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_literalUInt_36__34_ExpressionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_literalUInt_36__34_ExpressionForGeneration_2D_weak (const class GALGAS_literalUInt_36__34_ExpressionForGeneration & inSource) ;

  public: GALGAS_literalUInt_36__34_ExpressionForGeneration_2D_weak & operator = (const class GALGAS_literalUInt_36__34_ExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_literalUInt_36__34_ExpressionForGeneration bang_literalUInt_36__34_ExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_literalUInt_36__34_ExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalUInt_36__34_ExpressionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalUInt_36__34_ExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalUInt_36__34_ExpressionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @literalSIntExpressionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalSIntExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_literalSIntExpressionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_literalSIntExpressionForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_literalSIntExpressionForGeneration (const class cPtr_literalSIntExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_sint readProperty_mValue (C_Compiler * COMMA_UNUSED_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_literalSIntExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalSIntExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                  const class GALGAS_location & inOperand1,
                                                                                  const class GALGAS_sint & inOperand2
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalSIntExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_sint getter_mValue (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalSIntExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalSIntExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @literalSIntExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_literalSIntExpressionForGeneration : public cPtr_semanticExpressionForGeneration {
//--- Properties
  public: GALGAS_sint mProperty_mValue ;

//--- Constructor
  public: cPtr_literalSIntExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                   const GALGAS_location & in_mLocation,
                                                   const GALGAS_sint & in_mValue
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

