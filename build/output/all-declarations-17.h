#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-16.h"

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

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_plusEqualnstructionForGeneration constructor_default (LOCATION_ARGS) ;

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
  public: VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionListForGeneration getter_mExpressionList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mInstructionLocation (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mNameForCheckingFormalParameterUsing (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mReceiverCppName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mStructAttributeList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mTargetType (LOCATION_ARGS) const ;


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
// Phase 1: @incDecInstructionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_incDecInstructionAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_incDecInstructionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_incDecInstructionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_incDecInstructionAST_2D_weak (const class GALGAS_incDecInstructionAST & inSource) ;

  public: GALGAS_incDecInstructionAST_2D_weak & operator = (const class GALGAS_incDecInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_incDecInstructionAST bang_incDecInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_incDecInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_incDecInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_incDecInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_incDecInstructionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecInstructionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @incDecNoOVFInstructionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_incDecNoOVFInstructionAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_incDecNoOVFInstructionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_incDecNoOVFInstructionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_incDecNoOVFInstructionAST_2D_weak (const class GALGAS_incDecNoOVFInstructionAST & inSource) ;

  public: GALGAS_incDecNoOVFInstructionAST_2D_weak & operator = (const class GALGAS_incDecNoOVFInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_incDecNoOVFInstructionAST bang_incDecNoOVFInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_incDecNoOVFInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_incDecNoOVFInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_incDecNoOVFInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_incDecNoOVFInstructionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecNoOVFInstructionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @incDecInstructionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_incDecInstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_incDecInstructionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_incDecInstructionForGeneration (const class cPtr_incDecInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mInstructionLocation (void) const ;

  public: class GALGAS_string readProperty_mReceiverCppName (void) const ;

  public: class GALGAS_unifiedTypeMap_2D_entry readProperty_mReceiverType (void) const ;

  public: class GALGAS_lstringlist readProperty_mStructAttributeList (void) const ;

  public: class GALGAS_incDecKind readProperty_mKind (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_incDecInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_incDecInstructionForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                              const class GALGAS_string & inOperand1,
                                                                              const class GALGAS_unifiedTypeMap_2D_entry & inOperand2,
                                                                              const class GALGAS_lstringlist & inOperand3,
                                                                              const class GALGAS_incDecKind & inOperand4
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_incDecInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMInstructionLocation (class GALGAS_location inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMKind (class GALGAS_incDecKind inArgument0
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReceiverCppName (class GALGAS_string inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReceiverType (class GALGAS_unifiedTypeMap_2D_entry inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStructAttributeList (class GALGAS_lstringlist inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mInstructionLocation (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_incDecKind getter_mKind (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mReceiverCppName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mReceiverType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mStructAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_incDecInstructionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecInstructionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @incDecInstructionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_incDecInstructionForGeneration : public cPtr_semanticInstructionForGeneration {
//--- Properties
  public: GALGAS_location mProperty_mInstructionLocation ;
  public: GALGAS_string mProperty_mReceiverCppName ;
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mReceiverType ;
  public: GALGAS_lstringlist mProperty_mStructAttributeList ;
  public: GALGAS_incDecKind mProperty_mKind ;

//--- Constructor
  public: cPtr_incDecInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                               const GALGAS_string & in_mReceiverCppName,
                                               const GALGAS_unifiedTypeMap_2D_entry & in_mReceiverType,
                                               const GALGAS_lstringlist & in_mStructAttributeList,
                                               const GALGAS_incDecKind & in_mKind
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
// Phase 1: @incDecInstructionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_incDecInstructionForGeneration_2D_weak : public GALGAS_semanticInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_incDecInstructionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_incDecInstructionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_incDecInstructionForGeneration_2D_weak (const class GALGAS_incDecInstructionForGeneration & inSource) ;

  public: GALGAS_incDecInstructionForGeneration_2D_weak & operator = (const class GALGAS_incDecInstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_incDecInstructionForGeneration bang_incDecInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_incDecInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_incDecInstructionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_incDecInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_incDecInstructionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecInstructionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @incDecNoOVFInstructionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_incDecNoOVFInstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_incDecNoOVFInstructionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_incDecNoOVFInstructionForGeneration (const class cPtr_incDecNoOVFInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mInstructionLocation (void) const ;

  public: class GALGAS_string readProperty_mReceiverCppName (void) const ;

  public: class GALGAS_unifiedTypeMap_2D_entry readProperty_mReceiverType (void) const ;

  public: class GALGAS_lstringlist readProperty_mStructAttributeList (void) const ;

  public: class GALGAS_incDecKind readProperty_mKind (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_incDecNoOVFInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_incDecNoOVFInstructionForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                                   const class GALGAS_string & inOperand1,
                                                                                   const class GALGAS_unifiedTypeMap_2D_entry & inOperand2,
                                                                                   const class GALGAS_lstringlist & inOperand3,
                                                                                   const class GALGAS_incDecKind & inOperand4
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_incDecNoOVFInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMInstructionLocation (class GALGAS_location inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMKind (class GALGAS_incDecKind inArgument0
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReceiverCppName (class GALGAS_string inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReceiverType (class GALGAS_unifiedTypeMap_2D_entry inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStructAttributeList (class GALGAS_lstringlist inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mInstructionLocation (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_incDecKind getter_mKind (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mReceiverCppName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mReceiverType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mStructAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_incDecNoOVFInstructionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecNoOVFInstructionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @incDecNoOVFInstructionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_incDecNoOVFInstructionForGeneration : public cPtr_semanticInstructionForGeneration {
//--- Properties
  public: GALGAS_location mProperty_mInstructionLocation ;
  public: GALGAS_string mProperty_mReceiverCppName ;
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mReceiverType ;
  public: GALGAS_lstringlist mProperty_mStructAttributeList ;
  public: GALGAS_incDecKind mProperty_mKind ;

//--- Constructor
  public: cPtr_incDecNoOVFInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                    const GALGAS_string & in_mReceiverCppName,
                                                    const GALGAS_unifiedTypeMap_2D_entry & in_mReceiverType,
                                                    const GALGAS_lstringlist & in_mStructAttributeList,
                                                    const GALGAS_incDecKind & in_mKind
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
// Phase 1: @incDecNoOVFInstructionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_incDecNoOVFInstructionForGeneration_2D_weak : public GALGAS_semanticInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_incDecNoOVFInstructionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_incDecNoOVFInstructionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_incDecNoOVFInstructionForGeneration_2D_weak (const class GALGAS_incDecNoOVFInstructionForGeneration & inSource) ;

  public: GALGAS_incDecNoOVFInstructionForGeneration_2D_weak & operator = (const class GALGAS_incDecNoOVFInstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_incDecNoOVFInstructionForGeneration bang_incDecNoOVFInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_incDecNoOVFInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_incDecNoOVFInstructionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_incDecNoOVFInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_incDecNoOVFInstructionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecNoOVFInstructionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @localVariableOrConstantDeclarationWithAssignmentAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak (const class GALGAS_localVariableOrConstantDeclarationWithAssignmentAST & inSource) ;

  public: GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak & operator = (const class GALGAS_localVariableOrConstantDeclarationWithAssignmentAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_localVariableOrConstantDeclarationWithAssignmentAST bang_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @undefinedLocalConstantDeclarationAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_undefinedLocalConstantDeclarationAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_undefinedLocalConstantDeclarationAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_undefinedLocalConstantDeclarationAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_undefinedLocalConstantDeclarationAST_2D_weak (const class GALGAS_undefinedLocalConstantDeclarationAST & inSource) ;

  public: GALGAS_undefinedLocalConstantDeclarationAST_2D_weak & operator = (const class GALGAS_undefinedLocalConstantDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_undefinedLocalConstantDeclarationAST bang_undefinedLocalConstantDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_undefinedLocalConstantDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_undefinedLocalConstantDeclarationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_undefinedLocalConstantDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_undefinedLocalConstantDeclarationAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @localConstantDeclarationWithAssignmentAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak (const class GALGAS_localConstantDeclarationWithAssignmentAST & inSource) ;

  public: GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak & operator = (const class GALGAS_localConstantDeclarationWithAssignmentAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_localConstantDeclarationWithAssignmentAST bang_localConstantDeclarationWithAssignmentAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @undefinedLocalConstantDeclarationForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_undefinedLocalConstantDeclarationForGeneration : public GALGAS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_undefinedLocalConstantDeclarationForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_undefinedLocalConstantDeclarationForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_undefinedLocalConstantDeclarationForGeneration (const class cPtr_undefinedLocalConstantDeclarationForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_unifiedTypeMap_2D_entry readProperty_mTargetType (void) const ;

  public: class GALGAS_string readProperty_mCppVariableName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_undefinedLocalConstantDeclarationForGeneration extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_undefinedLocalConstantDeclarationForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                              const class GALGAS_string & inOperand1
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_undefinedLocalConstantDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mCppVariableName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mTargetType (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_undefinedLocalConstantDeclarationForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @undefinedLocalConstantDeclarationForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_undefinedLocalConstantDeclarationForGeneration : public cPtr_semanticInstructionForGeneration {
//--- Properties
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mTargetType ;
  public: GALGAS_string mProperty_mCppVariableName ;

//--- Constructor
  public: cPtr_undefinedLocalConstantDeclarationForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mTargetType,
                                                               const GALGAS_string & in_mCppVariableName
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
// Phase 1: @undefinedLocalConstantDeclarationForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak : public GALGAS_semanticInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak (const class GALGAS_undefinedLocalConstantDeclarationForGeneration & inSource) ;

  public: GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak & operator = (const class GALGAS_undefinedLocalConstantDeclarationForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_undefinedLocalConstantDeclarationForGeneration bang_undefinedLocalConstantDeclarationForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @methodCallInstructionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_methodCallInstructionAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_methodCallInstructionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_methodCallInstructionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_methodCallInstructionAST_2D_weak (const class GALGAS_methodCallInstructionAST & inSource) ;

  public: GALGAS_methodCallInstructionAST_2D_weak & operator = (const class GALGAS_methodCallInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_methodCallInstructionAST bang_methodCallInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_methodCallInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_methodCallInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_methodCallInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_methodCallInstructionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_methodCallInstructionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @procCallInstructionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_procCallInstructionAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_procCallInstructionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_procCallInstructionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_procCallInstructionAST_2D_weak (const class GALGAS_procCallInstructionAST & inSource) ;

  public: GALGAS_procCallInstructionAST_2D_weak & operator = (const class GALGAS_procCallInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_procCallInstructionAST bang_procCallInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_procCallInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_procCallInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_procCallInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_procCallInstructionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procCallInstructionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @procCallInstructionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_procCallInstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_procCallInstructionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_procCallInstructionForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_procCallInstructionForGeneration (const class cPtr_procCallInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mRoutineName (void) const ;

  public: class GALGAS_actualParameterListForGeneration readProperty_mActualParameterList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_procCallInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_procCallInstructionForGeneration constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_actualParameterListForGeneration & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_procCallInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_actualParameterListForGeneration getter_mActualParameterList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRoutineName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_procCallInstructionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procCallInstructionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @procCallInstructionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_procCallInstructionForGeneration : public cPtr_semanticInstructionForGeneration {
//--- Properties
  public: GALGAS_lstring mProperty_mRoutineName ;
  public: GALGAS_actualParameterListForGeneration mProperty_mActualParameterList ;

//--- Constructor
  public: cPtr_procCallInstructionForGeneration (const GALGAS_lstring & in_mRoutineName,
                                                 const GALGAS_actualParameterListForGeneration & in_mActualParameterList
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
// Phase 1: @procCallInstructionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_procCallInstructionForGeneration_2D_weak : public GALGAS_semanticInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_procCallInstructionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_procCallInstructionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_procCallInstructionForGeneration_2D_weak (const class GALGAS_procCallInstructionForGeneration & inSource) ;

  public: GALGAS_procCallInstructionForGeneration_2D_weak & operator = (const class GALGAS_procCallInstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_procCallInstructionForGeneration bang_procCallInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_procCallInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_procCallInstructionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_procCallInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_procCallInstructionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procCallInstructionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @setterCallInstructionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_setterCallInstructionAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_setterCallInstructionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_setterCallInstructionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_setterCallInstructionAST_2D_weak (const class GALGAS_setterCallInstructionAST & inSource) ;

  public: GALGAS_setterCallInstructionAST_2D_weak & operator = (const class GALGAS_setterCallInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_setterCallInstructionAST bang_setterCallInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_setterCallInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_setterCallInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_setterCallInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_setterCallInstructionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_setterCallInstructionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @selfSetterCallInstructionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_selfSetterCallInstructionAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_selfSetterCallInstructionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_selfSetterCallInstructionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_selfSetterCallInstructionAST_2D_weak (const class GALGAS_selfSetterCallInstructionAST & inSource) ;

  public: GALGAS_selfSetterCallInstructionAST_2D_weak & operator = (const class GALGAS_selfSetterCallInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_selfSetterCallInstructionAST bang_selfSetterCallInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_selfSetterCallInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_selfSetterCallInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_selfSetterCallInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selfSetterCallInstructionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfSetterCallInstructionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @setterCallInstructionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_setterCallInstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_setterCallInstructionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_setterCallInstructionForGeneration (const class cPtr_setterCallInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mInstructionLocation (void) const ;

  public: class GALGAS_string readProperty_mReceiverCppName (void) const ;

  public: class GALGAS_string readProperty_mReceiverBaseName (void) const ;

  public: class GALGAS_lstringlist readProperty_mReceiverStructAttributes (void) const ;

  public: class GALGAS_unifiedTypeMap_2D_entry readProperty_mCastType (void) const ;

  public: class GALGAS_unifiedTypeMap_2D_entry readProperty_mReceiverType (void) const ;

  public: class GALGAS_lstring readProperty_mSetterName (void) const ;

  public: class GALGAS_methodKind readProperty_mKind (void) const ;

  public: class GALGAS_actualParameterListForGeneration readProperty_mActualParameterList (void) const ;

  public: class GALGAS_bool readProperty_mHasCompilerArgument (void) const ;

  public: class GALGAS_unifiedTypeMap_2D_entry readProperty_mMethodBaseType (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_setterCallInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_setterCallInstructionForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                                  const class GALGAS_string & inOperand1,
                                                                                  const class GALGAS_string & inOperand2,
                                                                                  const class GALGAS_lstringlist & inOperand3,
                                                                                  const class GALGAS_unifiedTypeMap_2D_entry & inOperand4,
                                                                                  const class GALGAS_unifiedTypeMap_2D_entry & inOperand5,
                                                                                  const class GALGAS_lstring & inOperand6,
                                                                                  const class GALGAS_methodKind & inOperand7,
                                                                                  const class GALGAS_actualParameterListForGeneration & inOperand8,
                                                                                  const class GALGAS_bool & inOperand9,
                                                                                  const class GALGAS_unifiedTypeMap_2D_entry & inOperand10
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_setterCallInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_actualParameterListForGeneration getter_mActualParameterList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mCastType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasCompilerArgument (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mInstructionLocation (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_methodKind getter_mKind (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mMethodBaseType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mReceiverBaseName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mReceiverCppName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mReceiverStructAttributes (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mReceiverType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSetterName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_setterCallInstructionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_setterCallInstructionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @setterCallInstructionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_setterCallInstructionForGeneration : public cPtr_semanticInstructionForGeneration {
//--- Properties
  public: GALGAS_location mProperty_mInstructionLocation ;
  public: GALGAS_string mProperty_mReceiverCppName ;
  public: GALGAS_string mProperty_mReceiverBaseName ;
  public: GALGAS_lstringlist mProperty_mReceiverStructAttributes ;
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mCastType ;
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mReceiverType ;
  public: GALGAS_lstring mProperty_mSetterName ;
  public: GALGAS_methodKind mProperty_mKind ;
  public: GALGAS_actualParameterListForGeneration mProperty_mActualParameterList ;
  public: GALGAS_bool mProperty_mHasCompilerArgument ;
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mMethodBaseType ;

//--- Constructor
  public: cPtr_setterCallInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                   const GALGAS_string & in_mReceiverCppName,
                                                   const GALGAS_string & in_mReceiverBaseName,
                                                   const GALGAS_lstringlist & in_mReceiverStructAttributes,
                                                   const GALGAS_unifiedTypeMap_2D_entry & in_mCastType,
                                                   const GALGAS_unifiedTypeMap_2D_entry & in_mReceiverType,
                                                   const GALGAS_lstring & in_mSetterName,
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
// Phase 1: @setterCallInstructionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_setterCallInstructionForGeneration_2D_weak : public GALGAS_semanticInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_setterCallInstructionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_setterCallInstructionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_setterCallInstructionForGeneration_2D_weak (const class GALGAS_setterCallInstructionForGeneration & inSource) ;

  public: GALGAS_setterCallInstructionForGeneration_2D_weak & operator = (const class GALGAS_setterCallInstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_setterCallInstructionForGeneration bang_setterCallInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_setterCallInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_setterCallInstructionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_setterCallInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_setterCallInstructionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_setterCallInstructionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @selfSetterCallInstructionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_selfSetterCallInstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_selfSetterCallInstructionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_selfSetterCallInstructionForGeneration (const class cPtr_selfSetterCallInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mSelfCppName (void) const ;

  public: class GALGAS_unifiedTypeMap_2D_entry readProperty_mReceiverType (void) const ;

  public: class GALGAS_lstring readProperty_mSetterName (void) const ;

  public: class GALGAS_methodKind readProperty_mKind (void) const ;

  public: class GALGAS_actualParameterListForGeneration readProperty_mActualParameterList (void) const ;

  public: class GALGAS_bool readProperty_mHasCompilerArgument (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_selfSetterCallInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_selfSetterCallInstructionForGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                                      const class GALGAS_unifiedTypeMap_2D_entry & inOperand1,
                                                                                      const class GALGAS_lstring & inOperand2,
                                                                                      const class GALGAS_methodKind & inOperand3,
                                                                                      const class GALGAS_actualParameterListForGeneration & inOperand4,
                                                                                      const class GALGAS_bool & inOperand5
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_selfSetterCallInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_actualParameterListForGeneration getter_mActualParameterList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasCompilerArgument (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_methodKind getter_mKind (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mReceiverType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mSelfCppName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSetterName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selfSetterCallInstructionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfSetterCallInstructionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @selfSetterCallInstructionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_selfSetterCallInstructionForGeneration : public cPtr_semanticInstructionForGeneration {
//--- Properties
  public: GALGAS_string mProperty_mSelfCppName ;
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mReceiverType ;
  public: GALGAS_lstring mProperty_mSetterName ;
  public: GALGAS_methodKind mProperty_mKind ;
  public: GALGAS_actualParameterListForGeneration mProperty_mActualParameterList ;
  public: GALGAS_bool mProperty_mHasCompilerArgument ;

//--- Constructor
  public: cPtr_selfSetterCallInstructionForGeneration (const GALGAS_string & in_mSelfCppName,
                                                       const GALGAS_unifiedTypeMap_2D_entry & in_mReceiverType,
                                                       const GALGAS_lstring & in_mSetterName,
                                                       const GALGAS_methodKind & in_mKind,
                                                       const GALGAS_actualParameterListForGeneration & in_mActualParameterList,
                                                       const GALGAS_bool & in_mHasCompilerArgument
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
// Phase 1: @selfSetterCallInstructionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_selfSetterCallInstructionForGeneration_2D_weak : public GALGAS_semanticInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_selfSetterCallInstructionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_selfSetterCallInstructionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_selfSetterCallInstructionForGeneration_2D_weak (const class GALGAS_selfSetterCallInstructionForGeneration & inSource) ;

  public: GALGAS_selfSetterCallInstructionForGeneration_2D_weak & operator = (const class GALGAS_selfSetterCallInstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_selfSetterCallInstructionForGeneration bang_selfSetterCallInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_selfSetterCallInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_selfSetterCallInstructionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_selfSetterCallInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selfSetterCallInstructionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfSetterCallInstructionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @typeMethodCallInstructionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_typeMethodCallInstructionAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_typeMethodCallInstructionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_typeMethodCallInstructionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_typeMethodCallInstructionAST_2D_weak (const class GALGAS_typeMethodCallInstructionAST & inSource) ;

  public: GALGAS_typeMethodCallInstructionAST_2D_weak & operator = (const class GALGAS_typeMethodCallInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_typeMethodCallInstructionAST bang_typeMethodCallInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_typeMethodCallInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_typeMethodCallInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_typeMethodCallInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_typeMethodCallInstructionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeMethodCallInstructionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @typeMethodCallInstructionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_typeMethodCallInstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_typeMethodCallInstructionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_typeMethodCallInstructionForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_typeMethodCallInstructionForGeneration (const class cPtr_typeMethodCallInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mMethodName (void) const ;

  public: class GALGAS_actualParameterListForGeneration readProperty_mActualParameterList (void) const ;

  public: class GALGAS_bool readProperty_mHasCompilerArgument (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_typeMethodCallInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_typeMethodCallInstructionForGeneration constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_lstring & inOperand1,
                                                                                      const class GALGAS_actualParameterListForGeneration & inOperand2,
                                                                                      const class GALGAS_bool & inOperand3
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_typeMethodCallInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_actualParameterListForGeneration getter_mActualParameterList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasCompilerArgument (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mMethodName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_typeMethodCallInstructionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeMethodCallInstructionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @typeMethodCallInstructionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_typeMethodCallInstructionForGeneration : public cPtr_semanticInstructionForGeneration {
//--- Properties
  public: GALGAS_lstring mProperty_mTypeName ;
  public: GALGAS_lstring mProperty_mMethodName ;
  public: GALGAS_actualParameterListForGeneration mProperty_mActualParameterList ;
  public: GALGAS_bool mProperty_mHasCompilerArgument ;

//--- Constructor
  public: cPtr_typeMethodCallInstructionForGeneration (const GALGAS_lstring & in_mTypeName,
                                                       const GALGAS_lstring & in_mMethodName,
                                                       const GALGAS_actualParameterListForGeneration & in_mActualParameterList,
                                                       const GALGAS_bool & in_mHasCompilerArgument
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
// Phase 1: @typeMethodCallInstructionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_typeMethodCallInstructionForGeneration_2D_weak : public GALGAS_semanticInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_typeMethodCallInstructionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_typeMethodCallInstructionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_typeMethodCallInstructionForGeneration_2D_weak (const class GALGAS_typeMethodCallInstructionForGeneration & inSource) ;

  public: GALGAS_typeMethodCallInstructionForGeneration_2D_weak & operator = (const class GALGAS_typeMethodCallInstructionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_typeMethodCallInstructionForGeneration bang_typeMethodCallInstructionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_typeMethodCallInstructionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_typeMethodCallInstructionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_typeMethodCallInstructionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_typeMethodCallInstructionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeMethodCallInstructionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @localVariableDeclarationAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_localVariableDeclarationAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_localVariableDeclarationAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_localVariableDeclarationAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_localVariableDeclarationAST_2D_weak (const class GALGAS_localVariableDeclarationAST & inSource) ;

  public: GALGAS_localVariableDeclarationAST_2D_weak & operator = (const class GALGAS_localVariableDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_localVariableDeclarationAST bang_localVariableDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_localVariableDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_localVariableDeclarationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_localVariableDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_localVariableDeclarationAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableDeclarationAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @localVariableDeclarationForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_localVariableDeclarationForGeneration : public GALGAS_semanticInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_localVariableDeclarationForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_localVariableDeclarationForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_localVariableDeclarationForGeneration (const class cPtr_localVariableDeclarationForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_unifiedTypeMap_2D_entry readProperty_mVariableType (void) const ;

  public: class GALGAS_string readProperty_mCppVariableName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_localVariableDeclarationForGeneration extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_localVariableDeclarationForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                     const class GALGAS_string & inOperand1
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_localVariableDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mCppVariableName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mVariableType (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_localVariableDeclarationForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableDeclarationForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @localVariableDeclarationForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_localVariableDeclarationForGeneration : public cPtr_semanticInstructionForGeneration {
//--- Properties
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mVariableType ;
  public: GALGAS_string mProperty_mCppVariableName ;

//--- Constructor
  public: cPtr_localVariableDeclarationForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mVariableType,
                                                      const GALGAS_string & in_mCppVariableName
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
// Phase 1: @localVariableDeclarationForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_localVariableDeclarationForGeneration_2D_weak : public GALGAS_semanticInstructionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_localVariableDeclarationForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_localVariableDeclarationForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_localVariableDeclarationForGeneration_2D_weak (const class GALGAS_localVariableDeclarationForGeneration & inSource) ;

  public: GALGAS_localVariableDeclarationForGeneration_2D_weak & operator = (const class GALGAS_localVariableDeclarationForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_localVariableDeclarationForGeneration bang_localVariableDeclarationForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_localVariableDeclarationForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_localVariableDeclarationForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_localVariableDeclarationForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_localVariableDeclarationForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableDeclarationForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @localVariableDeclarationWithAssignmentAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak (const class GALGAS_localVariableDeclarationWithAssignmentAST & inSource) ;

  public: GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak & operator = (const class GALGAS_localVariableDeclarationWithAssignmentAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_localVariableDeclarationWithAssignmentAST bang_localVariableDeclarationWithAssignmentAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @readAccessWithInstructionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_readAccessWithInstructionAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_readAccessWithInstructionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_readAccessWithInstructionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_readAccessWithInstructionAST_2D_weak (const class GALGAS_readAccessWithInstructionAST & inSource) ;

  public: GALGAS_readAccessWithInstructionAST_2D_weak & operator = (const class GALGAS_readAccessWithInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_readAccessWithInstructionAST bang_readAccessWithInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_readAccessWithInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_readAccessWithInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_readAccessWithInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_readAccessWithInstructionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_readAccessWithInstructionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @readWriteAccessWithInstructionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_readWriteAccessWithInstructionAST_2D_weak : public GALGAS_semanticInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_readWriteAccessWithInstructionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_readWriteAccessWithInstructionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_readWriteAccessWithInstructionAST_2D_weak (const class GALGAS_readWriteAccessWithInstructionAST & inSource) ;

  public: GALGAS_readWriteAccessWithInstructionAST_2D_weak & operator = (const class GALGAS_readWriteAccessWithInstructionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_readWriteAccessWithInstructionAST bang_readWriteAccessWithInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_readWriteAccessWithInstructionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_readWriteAccessWithInstructionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_readWriteAccessWithInstructionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_readWriteAccessWithInstructionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_readWriteAccessWithInstructionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @nonterminalCallInstruction_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_nonterminalCallInstruction_2D_weak : public GALGAS_syntaxInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_nonterminalCallInstruction_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_nonterminalCallInstruction_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_nonterminalCallInstruction_2D_weak (const class GALGAS_nonterminalCallInstruction & inSource) ;

  public: GALGAS_nonterminalCallInstruction_2D_weak & operator = (const class GALGAS_nonterminalCallInstruction & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_nonterminalCallInstruction bang_nonterminalCallInstruction_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_nonterminalCallInstruction_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_nonterminalCallInstruction_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_nonterminalCallInstruction_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_nonterminalCallInstruction_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalCallInstruction_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @terminalCheckInstruction_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_terminalCheckInstruction_2D_weak : public GALGAS_syntaxInstructionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_terminalCheckInstruction_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_terminalCheckInstruction_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_terminalCheckInstruction_2D_weak (const class GALGAS_terminalCheckInstruction & inSource) ;

  public: GALGAS_terminalCheckInstruction_2D_weak & operator = (const class GALGAS_terminalCheckInstruction & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_terminalCheckInstruction bang_terminalCheckInstruction_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_terminalCheckInstruction_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_terminalCheckInstruction_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_terminalCheckInstruction_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_terminalCheckInstruction_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalCheckInstruction_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @terminalCheckInstructionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_terminalCheckInstructionForGeneration : public GALGAS_syntaxInstructionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_terminalCheckInstructionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_terminalCheckInstructionForGeneration (const class cPtr_terminalCheckInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mTerminalName (void) const ;

  public: class GALGAS_string readProperty_mLexiqueIdentifier (void) const ;

  public: class GALGAS_terminalCheckAssignementList readProperty_mTerminalCheckAssignementList (void) const ;

  public: class GALGAS__32_lstringlist readProperty_mIndexingKeyList (void) const ;

  public: class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult readProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (void) const ;

  public: class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult readProperty_mGrammarInstructionSyntaxDirectedTranslationToken (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_terminalCheckInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_terminalCheckInstructionForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                                     const class GALGAS_lstring & inOperand1,
                                                                                     const class GALGAS_string & inOperand2,
                                                                                     const class GALGAS_terminalCheckAssignementList & inOperand3,
                                                                                     const class GALGAS__32_lstringlist & inOperand4,
                                                                                     const class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand5,
                                                                                     const class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand6
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_terminalCheckInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult getter_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult getter_mGrammarInstructionSyntaxDirectedTranslationToken (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS__32_lstringlist getter_mIndexingKeyList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mLexiqueIdentifier (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_terminalCheckAssignementList getter_mTerminalCheckAssignementList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTerminalName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_terminalCheckInstructionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @terminalCheckInstructionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_terminalCheckInstructionForGeneration : public cPtr_syntaxInstructionForGeneration {
//--- Properties
  public: GALGAS_lstring mProperty_mTerminalName ;
  public: GALGAS_string mProperty_mLexiqueIdentifier ;
  public: GALGAS_terminalCheckAssignementList mProperty_mTerminalCheckAssignementList ;
  public: GALGAS__32_lstringlist mProperty_mIndexingKeyList ;
  public: GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ;
  public: GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult mProperty_mGrammarInstructionSyntaxDirectedTranslationToken ;

//--- Constructor
  public: cPtr_terminalCheckInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                      const GALGAS_lstring & in_mTerminalName,
                                                      const GALGAS_string & in_mLexiqueIdentifier,
                                                      const GALGAS_terminalCheckAssignementList & in_mTerminalCheckAssignementList,
                                                      const GALGAS__32_lstringlist & in_mIndexingKeyList,
                                                      const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor,
                                                      const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationToken
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

