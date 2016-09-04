#ifndef all_2D_declarations_2D__31__33__ENTITIES_DEFINED
#define all_2D_declarations_2D__31__33__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "all-predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-12.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @plusEqualnstructionForGeneration class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_plusEqualnstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--- Constructor
  public : GALGAS_plusEqualnstructionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_plusEqualnstructionForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_plusEqualnstructionForGeneration * ptr (void) const { return (const cPtr_plusEqualnstructionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_plusEqualnstructionForGeneration (const cPtr_plusEqualnstructionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_plusEqualnstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_plusEqualnstructionForGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                                 const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                 const class GALGAS_string & inOperand2,
                                                                                 const class GALGAS_location & inOperand3,
                                                                                 const class GALGAS_lstringlist & inOperand4,
                                                                                 const class GALGAS_semanticExpressionListForGeneration & inOperand5
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_plusEqualnstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionListForGeneration getter_mExpressionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mInstructionLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mNameForCheckingFormalParameterUsing (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mReceiverCppName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mStructAttributeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mTargetType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_plusEqualnstructionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_plusEqualnstructionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @plusEqualnstructionForGeneration class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_plusEqualnstructionForGeneration : public cPtr_semanticInstructionForGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mReceiverCppName ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mTargetType ;
  public : GALGAS_string mAttribute_mNameForCheckingFormalParameterUsing ;
  public : GALGAS_location mAttribute_mInstructionLocation ;
  public : GALGAS_lstringlist mAttribute_mStructAttributeList ;
  public : GALGAS_semanticExpressionListForGeneration mAttribute_mExpressionList ;

//--- Constructor
  public : cPtr_plusEqualnstructionForGeneration (const GALGAS_string & in_mReceiverCppName,
                                                  const GALGAS_unifiedTypeMap_2D_proxy & in_mTargetType,
                                                  const GALGAS_string & in_mNameForCheckingFormalParameterUsing,
                                                  const GALGAS_location & in_mInstructionLocation,
                                                  const GALGAS_lstringlist & in_mStructAttributeList,
                                                  const GALGAS_semanticExpressionListForGeneration & in_mExpressionList
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mReceiverCppName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy getter_mTargetType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mNameForCheckingFormalParameterUsing (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mInstructionLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mStructAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticExpressionListForGeneration getter_mExpressionList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @incDecInstructionForGeneration class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_incDecInstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--- Constructor
  public : GALGAS_incDecInstructionForGeneration (void) ;

//---
  public : inline const class cPtr_incDecInstructionForGeneration * ptr (void) const { return (const cPtr_incDecInstructionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_incDecInstructionForGeneration (const cPtr_incDecInstructionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_incDecInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_incDecInstructionForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                               const class GALGAS_string & inOperand1,
                                                                               const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                               const class GALGAS_lstringlist & inOperand3,
                                                                               const class GALGAS_incDecKind & inOperand4
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_incDecInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mInstructionLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_incDecKind getter_mKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mReceiverCppName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mReceiverType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mStructAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_incDecInstructionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecInstructionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @incDecInstructionForGeneration class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_incDecInstructionForGeneration : public cPtr_semanticInstructionForGeneration {
//--- Attributes
  public : GALGAS_location mAttribute_mInstructionLocation ;
  public : GALGAS_string mAttribute_mReceiverCppName ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mReceiverType ;
  public : GALGAS_lstringlist mAttribute_mStructAttributeList ;
  public : GALGAS_incDecKind mAttribute_mKind ;

//--- Constructor
  public : cPtr_incDecInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_string & in_mReceiverCppName,
                                                const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                const GALGAS_lstringlist & in_mStructAttributeList,
                                                const GALGAS_incDecKind & in_mKind
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mInstructionLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mReceiverCppName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy getter_mReceiverType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mStructAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_incDecKind getter_mKind (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @incDecNoOVFInstructionForGeneration class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_incDecNoOVFInstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--- Constructor
  public : GALGAS_incDecNoOVFInstructionForGeneration (void) ;

//---
  public : inline const class cPtr_incDecNoOVFInstructionForGeneration * ptr (void) const { return (const cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_incDecNoOVFInstructionForGeneration (const cPtr_incDecNoOVFInstructionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_incDecNoOVFInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_incDecNoOVFInstructionForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                                    const class GALGAS_string & inOperand1,
                                                                                    const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                                    const class GALGAS_lstringlist & inOperand3,
                                                                                    const class GALGAS_incDecKind & inOperand4
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_incDecNoOVFInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mInstructionLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_incDecKind getter_mKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mReceiverCppName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mReceiverType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mStructAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_incDecNoOVFInstructionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecNoOVFInstructionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @incDecNoOVFInstructionForGeneration class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_incDecNoOVFInstructionForGeneration : public cPtr_semanticInstructionForGeneration {
//--- Attributes
  public : GALGAS_location mAttribute_mInstructionLocation ;
  public : GALGAS_string mAttribute_mReceiverCppName ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mReceiverType ;
  public : GALGAS_lstringlist mAttribute_mStructAttributeList ;
  public : GALGAS_incDecKind mAttribute_mKind ;

//--- Constructor
  public : cPtr_incDecNoOVFInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                     const GALGAS_string & in_mReceiverCppName,
                                                     const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                     const GALGAS_lstringlist & in_mStructAttributeList,
                                                     const GALGAS_incDecKind & in_mKind
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mInstructionLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mReceiverCppName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy getter_mReceiverType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mStructAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_incDecKind getter_mKind (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @undefinedLocalConstantDeclarationForGeneration class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_undefinedLocalConstantDeclarationForGeneration : public GALGAS_semanticInstructionForGeneration {
//--- Constructor
  public : GALGAS_undefinedLocalConstantDeclarationForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_undefinedLocalConstantDeclarationForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_undefinedLocalConstantDeclarationForGeneration * ptr (void) const { return (const cPtr_undefinedLocalConstantDeclarationForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_undefinedLocalConstantDeclarationForGeneration (const cPtr_undefinedLocalConstantDeclarationForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_undefinedLocalConstantDeclarationForGeneration extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_undefinedLocalConstantDeclarationForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                               const class GALGAS_string & inOperand1
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_undefinedLocalConstantDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mCppVariableName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mTargetType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_undefinedLocalConstantDeclarationForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Pointer class for @undefinedLocalConstantDeclarationForGeneration class                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_undefinedLocalConstantDeclarationForGeneration : public cPtr_semanticInstructionForGeneration {
//--- Attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mTargetType ;
  public : GALGAS_string mAttribute_mCppVariableName ;

//--- Constructor
  public : cPtr_undefinedLocalConstantDeclarationForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mTargetType,
                                                                const GALGAS_string & in_mCppVariableName
                                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy getter_mTargetType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mCppVariableName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @procCallInstructionForGeneration class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_procCallInstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--- Constructor
  public : GALGAS_procCallInstructionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_procCallInstructionForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_procCallInstructionForGeneration * ptr (void) const { return (const cPtr_procCallInstructionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_procCallInstructionForGeneration (const cPtr_procCallInstructionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_procCallInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_procCallInstructionForGeneration constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_actualParameterListForGeneration & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_procCallInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actualParameterListForGeneration getter_mActualParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRoutineName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_procCallInstructionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procCallInstructionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @procCallInstructionForGeneration class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_procCallInstructionForGeneration : public cPtr_semanticInstructionForGeneration {
//--- Attributes
  public : GALGAS_lstring mAttribute_mRoutineName ;
  public : GALGAS_actualParameterListForGeneration mAttribute_mActualParameterList ;

//--- Constructor
  public : cPtr_procCallInstructionForGeneration (const GALGAS_lstring & in_mRoutineName,
                                                  const GALGAS_actualParameterListForGeneration & in_mActualParameterList
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mRoutineName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_actualParameterListForGeneration getter_mActualParameterList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @setterCallInstructionForGeneration class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_setterCallInstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--- Constructor
  public : GALGAS_setterCallInstructionForGeneration (void) ;

//---
  public : inline const class cPtr_setterCallInstructionForGeneration * ptr (void) const { return (const cPtr_setterCallInstructionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_setterCallInstructionForGeneration (const cPtr_setterCallInstructionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_setterCallInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_setterCallInstructionForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                                   const class GALGAS_string & inOperand1,
                                                                                   const class GALGAS_string & inOperand2,
                                                                                   const class GALGAS_lstringlist & inOperand3,
                                                                                   const class GALGAS_unifiedTypeMap_2D_proxy & inOperand4,
                                                                                   const class GALGAS_unifiedTypeMap_2D_proxy & inOperand5,
                                                                                   const class GALGAS_lstring & inOperand6,
                                                                                   const class GALGAS_methodKind & inOperand7,
                                                                                   const class GALGAS_actualParameterListForGeneration & inOperand8,
                                                                                   const class GALGAS_bool & inOperand9,
                                                                                   const class GALGAS_unifiedTypeMap_2D_proxy & inOperand10
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_setterCallInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actualParameterListForGeneration getter_mActualParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mCastType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasCompilerArgument (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mInstructionLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_methodKind getter_mKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mMethodBaseType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mReceiverBaseName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mReceiverCppName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mReceiverStructAttributes (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mReceiverType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSetterName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_setterCallInstructionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_setterCallInstructionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @setterCallInstructionForGeneration class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_setterCallInstructionForGeneration : public cPtr_semanticInstructionForGeneration {
//--- Attributes
  public : GALGAS_location mAttribute_mInstructionLocation ;
  public : GALGAS_string mAttribute_mReceiverCppName ;
  public : GALGAS_string mAttribute_mReceiverBaseName ;
  public : GALGAS_lstringlist mAttribute_mReceiverStructAttributes ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mCastType ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mReceiverType ;
  public : GALGAS_lstring mAttribute_mSetterName ;
  public : GALGAS_methodKind mAttribute_mKind ;
  public : GALGAS_actualParameterListForGeneration mAttribute_mActualParameterList ;
  public : GALGAS_bool mAttribute_mHasCompilerArgument ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mMethodBaseType ;

//--- Constructor
  public : cPtr_setterCallInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                    const GALGAS_string & in_mReceiverCppName,
                                                    const GALGAS_string & in_mReceiverBaseName,
                                                    const GALGAS_lstringlist & in_mReceiverStructAttributes,
                                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mCastType,
                                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                    const GALGAS_lstring & in_mSetterName,
                                                    const GALGAS_methodKind & in_mKind,
                                                    const GALGAS_actualParameterListForGeneration & in_mActualParameterList,
                                                    const GALGAS_bool & in_mHasCompilerArgument,
                                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mMethodBaseType
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mInstructionLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mReceiverCppName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mReceiverBaseName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mReceiverStructAttributes (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy getter_mCastType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy getter_mReceiverType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mSetterName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_methodKind getter_mKind (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_actualParameterListForGeneration getter_mActualParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mHasCompilerArgument (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy getter_mMethodBaseType (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @selfSetterCallInstructionForGeneration class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_selfSetterCallInstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--- Constructor
  public : GALGAS_selfSetterCallInstructionForGeneration (void) ;

//---
  public : inline const class cPtr_selfSetterCallInstructionForGeneration * ptr (void) const { return (const cPtr_selfSetterCallInstructionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_selfSetterCallInstructionForGeneration (const cPtr_selfSetterCallInstructionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_selfSetterCallInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_selfSetterCallInstructionForGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                                       const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                       const class GALGAS_lstring & inOperand2,
                                                                                       const class GALGAS_methodKind & inOperand3,
                                                                                       const class GALGAS_actualParameterListForGeneration & inOperand4,
                                                                                       const class GALGAS_bool & inOperand5
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_selfSetterCallInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actualParameterListForGeneration getter_mActualParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasCompilerArgument (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_methodKind getter_mKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mReceiverType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mSelfCppName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSetterName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selfSetterCallInstructionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfSetterCallInstructionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @selfSetterCallInstructionForGeneration class                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_selfSetterCallInstructionForGeneration : public cPtr_semanticInstructionForGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mSelfCppName ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mReceiverType ;
  public : GALGAS_lstring mAttribute_mSetterName ;
  public : GALGAS_methodKind mAttribute_mKind ;
  public : GALGAS_actualParameterListForGeneration mAttribute_mActualParameterList ;
  public : GALGAS_bool mAttribute_mHasCompilerArgument ;

//--- Constructor
  public : cPtr_selfSetterCallInstructionForGeneration (const GALGAS_string & in_mSelfCppName,
                                                        const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                        const GALGAS_lstring & in_mSetterName,
                                                        const GALGAS_methodKind & in_mKind,
                                                        const GALGAS_actualParameterListForGeneration & in_mActualParameterList,
                                                        const GALGAS_bool & in_mHasCompilerArgument
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mSelfCppName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy getter_mReceiverType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mSetterName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_methodKind getter_mKind (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_actualParameterListForGeneration getter_mActualParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mHasCompilerArgument (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @typeMethodCallInstructionForGeneration class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_typeMethodCallInstructionForGeneration : public GALGAS_semanticInstructionForGeneration {
//--- Constructor
  public : GALGAS_typeMethodCallInstructionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_typeMethodCallInstructionForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_typeMethodCallInstructionForGeneration * ptr (void) const { return (const cPtr_typeMethodCallInstructionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_typeMethodCallInstructionForGeneration (const cPtr_typeMethodCallInstructionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_typeMethodCallInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_typeMethodCallInstructionForGeneration constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_lstring & inOperand1,
                                                                                       const class GALGAS_actualParameterListForGeneration & inOperand2,
                                                                                       const class GALGAS_bool & inOperand3
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_typeMethodCallInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actualParameterListForGeneration getter_mActualParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasCompilerArgument (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mMethodName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_typeMethodCallInstructionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeMethodCallInstructionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @typeMethodCallInstructionForGeneration class                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_typeMethodCallInstructionForGeneration : public cPtr_semanticInstructionForGeneration {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTypeName ;
  public : GALGAS_lstring mAttribute_mMethodName ;
  public : GALGAS_actualParameterListForGeneration mAttribute_mActualParameterList ;
  public : GALGAS_bool mAttribute_mHasCompilerArgument ;

//--- Constructor
  public : cPtr_typeMethodCallInstructionForGeneration (const GALGAS_lstring & in_mTypeName,
                                                        const GALGAS_lstring & in_mMethodName,
                                                        const GALGAS_actualParameterListForGeneration & in_mActualParameterList,
                                                        const GALGAS_bool & in_mHasCompilerArgument
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mMethodName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_actualParameterListForGeneration getter_mActualParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mHasCompilerArgument (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @localVariableDeclarationForGeneration class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_localVariableDeclarationForGeneration : public GALGAS_semanticInstructionForGeneration {
//--- Constructor
  public : GALGAS_localVariableDeclarationForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_localVariableDeclarationForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_localVariableDeclarationForGeneration * ptr (void) const { return (const cPtr_localVariableDeclarationForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_localVariableDeclarationForGeneration (const cPtr_localVariableDeclarationForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_localVariableDeclarationForGeneration extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_localVariableDeclarationForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                      const class GALGAS_string & inOperand1
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_localVariableDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mCppVariableName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mVariableType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_localVariableDeclarationForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableDeclarationForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @localVariableDeclarationForGeneration class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_localVariableDeclarationForGeneration : public cPtr_semanticInstructionForGeneration {
//--- Attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mVariableType ;
  public : GALGAS_string mAttribute_mCppVariableName ;

//--- Constructor
  public : cPtr_localVariableDeclarationForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mVariableType,
                                                       const GALGAS_string & in_mCppVariableName
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy getter_mVariableType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mCppVariableName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @terminalCheckInstructionForGeneration class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_terminalCheckInstructionForGeneration : public GALGAS_syntaxInstructionForGeneration {
//--- Constructor
  public : GALGAS_terminalCheckInstructionForGeneration (void) ;

//---
  public : inline const class cPtr_terminalCheckInstructionForGeneration * ptr (void) const { return (const cPtr_terminalCheckInstructionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_terminalCheckInstructionForGeneration (const cPtr_terminalCheckInstructionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_terminalCheckInstructionForGeneration extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_terminalCheckInstructionForGeneration constructor_new (const class GALGAS_location & inOperand0,
                                                                                      const class GALGAS_lstring & inOperand1,
                                                                                      const class GALGAS_string & inOperand2,
                                                                                      const class GALGAS_terminalCheckAssignementList & inOperand3,
                                                                                      const class GALGAS__32_lstringlist & inOperand4,
                                                                                      const class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand5,
                                                                                      const class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand6
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_terminalCheckInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult getter_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult getter_mGrammarInstructionSyntaxDirectedTranslationToken (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS__32_lstringlist getter_mIndexingKeyList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mLexiqueIdentifier (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_terminalCheckAssignementList getter_mTerminalCheckAssignementList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTerminalName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_terminalCheckInstructionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @terminalCheckInstructionForGeneration class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_terminalCheckInstructionForGeneration : public cPtr_syntaxInstructionForGeneration {
//--- Attributes
  public : GALGAS_lstring mAttribute_mTerminalName ;
  public : GALGAS_string mAttribute_mLexiqueIdentifier ;
  public : GALGAS_terminalCheckAssignementList mAttribute_mTerminalCheckAssignementList ;
  public : GALGAS__32_lstringlist mAttribute_mIndexingKeyList ;
  public : GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult mAttribute_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ;
  public : GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult mAttribute_mGrammarInstructionSyntaxDirectedTranslationToken ;

//--- Constructor
  public : cPtr_terminalCheckInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                       const GALGAS_lstring & in_mTerminalName,
                                                       const GALGAS_string & in_mLexiqueIdentifier,
                                                       const GALGAS_terminalCheckAssignementList & in_mTerminalCheckAssignementList,
                                                       const GALGAS__32_lstringlist & in_mIndexingKeyList,
                                                       const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor,
                                                       const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationToken
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTerminalName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mLexiqueIdentifier (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_terminalCheckAssignementList getter_mTerminalCheckAssignementList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS__32_lstringlist getter_mIndexingKeyList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult getter_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult getter_mGrammarInstructionSyntaxDirectedTranslationToken (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @terminalInstructionForGrammarAnalysis class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_terminalInstructionForGrammarAnalysis : public GALGAS_abstractSyntaxInstructionForGrammarAnalysis {
//--- Constructor
  public : GALGAS_terminalInstructionForGrammarAnalysis (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_terminalInstructionForGrammarAnalysis constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_terminalInstructionForGrammarAnalysis * ptr (void) const { return (const cPtr_terminalInstructionForGrammarAnalysis *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_terminalInstructionForGrammarAnalysis (const cPtr_terminalInstructionForGrammarAnalysis * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_terminalInstructionForGrammarAnalysis extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_terminalInstructionForGrammarAnalysis constructor_new (const class GALGAS_location & inOperand0,
                                                                                      const class GALGAS_lstring & inOperand1,
                                                                                      const class GALGAS_uint & inOperand2
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_terminalInstructionForGrammarAnalysis & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mTerminalSymbolIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTerminalSymbolName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_terminalInstructionForGrammarAnalysis class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalInstructionForGrammarAnalysis ;

#include "separateHeaderFor_terminalInstructionForGrammarAnalysis.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @nonTerminalInstructionForGrammarAnalysis class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_nonTerminalInstructionForGrammarAnalysis : public GALGAS_abstractSyntaxInstructionForGrammarAnalysis {
//--- Constructor
  public : GALGAS_nonTerminalInstructionForGrammarAnalysis (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_nonTerminalInstructionForGrammarAnalysis constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_nonTerminalInstructionForGrammarAnalysis * ptr (void) const { return (const cPtr_nonTerminalInstructionForGrammarAnalysis *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_nonTerminalInstructionForGrammarAnalysis (const cPtr_nonTerminalInstructionForGrammarAnalysis * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_nonTerminalInstructionForGrammarAnalysis extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_nonTerminalInstructionForGrammarAnalysis constructor_new (const class GALGAS_location & inOperand0,
                                                                                         const class GALGAS_lstring & inOperand1,
                                                                                         const class GALGAS_uint & inOperand2
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_nonTerminalInstructionForGrammarAnalysis & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mNonterminalSymbolIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mNonterminalSymbolName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_nonTerminalInstructionForGrammarAnalysis class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalInstructionForGrammarAnalysis ;

#include "separateHeaderFor_nonTerminalInstructionForGrammarAnalysis.h"

//---------------------------------------------------------------------------------------------------------------------*
//  GRAMMAR galgas3ProjectGrammar
//---------------------------------------------------------------------------------------------------------------------*

class cGrammar_galgas_33_ProjectGrammar : public cParser_galgas_33_ProjectSyntax {
//------------------------------------- 'project_component_start_symbol' non terminal
//--- 'parse' label
  public : virtual void nt_project_5F_component_5F_start_5F_symbol_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_project_5F_component_5F_start_5F_symbol_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_project_5F_component_5F_start_5F_symbol_ (GALGAS_galgas_33_ProjectComponentAST & outArgument0,
                                                                     C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- Start symbol
  public : static void _performSourceFileParsing_ (C_Compiler * inCompiler,
                                                   GALGAS_lstring inFileName,
                                                   GALGAS_galgas_33_ProjectComponentAST & outArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public : static void _performSourceStringParsing_ (C_Compiler * inCompiler,
                                                     GALGAS_string inSourceString,
                                                     GALGAS_string inNameString,
                                                     GALGAS_galgas_33_ProjectComponentAST & outArgument0
                                                     COMMA_LOCATION_ARGS) ;

//--- Indexing
  public : static void performIndexing (C_Compiler * inCompiler,
                                        const C_String & inSourceFilePath) ;

//--- Only lexical analysis
  public : static void performOnlyLexicalAnalysis (C_Compiler * inCompiler,
                                                   const C_String & inSourceFilePath) ;

//--- Only syntax analysis
  public : static void performOnlySyntaxAnalysis (C_Compiler * inCompiler,
                                                  const C_String & inSourceFilePath) ;

//------------------------------------- 'project_header' non terminal
//--- 'parse' label
  public : virtual void nt_project_5F_header_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_project_5F_header_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_project_5F_header_ (GALGAS_luint & outArgument0,
                                               GALGAS_luint & outArgument1,
                                               GALGAS_luint & outArgument2,
                                               GALGAS_lstring & outArgument3,
                                               C_Lexique_galgas_33_Scanner * inCompiler) ;

  public : virtual int32_t select_galgas_33_ProjectSyntax_0 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ProjectSyntax_1 (C_Lexique_galgas_33_Scanner *) ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//---------------------------------------------------------------------------------------------------------------------*
//  GRAMMAR galgas3Grammar
//---------------------------------------------------------------------------------------------------------------------*

class cGrammar_galgas_33_Grammar : public cParser_galgas_33_ExpressionSyntax,
                                   public cParser_galgas_33_ParameterArgumentSyntax,
                                   public cParser_galgas_33_InstructionsSyntax,
                                   public cParser_galgas_33_DeclarationsSyntax,
                                   public cParser_galgas_33_LexiqueComponentSyntax,
                                   public cParser_galgas_33_OptionComponentSyntax,
                                   public cParser_galgas_33_GuiComponentSyntax,
                                   public cParser_galgas_33_SyntaxComponentSyntax,
                                   public cParser_galgas_33_GrammarComponentSyntax,
                                   public cParser_galgas_33_ProgramDeclarations {
//------------------------------------- 'actual_input_parameter_list' non terminal
//--- 'parse' label
  public : virtual void nt_actual_5F_input_5F_parameter_5F_list_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_actual_5F_input_5F_parameter_5F_list_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_actual_5F_input_5F_parameter_5F_list_ (GALGAS_actualInputParameterListAST & outArgument0,
                                                                  C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'actual_parameter_list' non terminal
//--- 'parse' label
  public : virtual void nt_actual_5F_parameter_5F_list_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_actual_5F_parameter_5F_list_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_actual_5F_parameter_5F_list_ (GALGAS_actualParameterListAST & outArgument0,
                                                         C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'branchOfParseWhithInstruction' non terminal
//--- 'parse' label
  public : virtual void nt_branchOfParseWhithInstruction_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_branchOfParseWhithInstruction_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_branchOfParseWhithInstruction_ (GALGAS_syntaxInstructionList & outArgument0,
                                                           C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'cast_else_or_default' non terminal
//--- 'parse' label
  public : virtual void nt_cast_5F_else_5F_or_5F_default_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_cast_5F_else_5F_or_5F_default_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_cast_5F_else_5F_or_5F_default_ (GALGAS_semanticInstructionListAST & outArgument0,
                                                           C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'cast_instruction_branch' non terminal
//--- 'parse' label
  public : virtual void nt_cast_5F_instruction_5F_branch_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_cast_5F_instruction_5F_branch_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_cast_5F_instruction_5F_branch_ (GALGAS_castInstructionBranchListAST & ioArgument0,
                                                           C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'casted_expression' non terminal
//--- 'parse' label
  public : virtual void nt_casted_5F_expression_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_casted_5F_expression_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_casted_5F_expression_ (GALGAS_semanticExpressionAST & outArgument0,
                                                  C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'collection_value_element' non terminal
//--- 'parse' label
  public : virtual void nt_collection_5F_value_5F_element_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_collection_5F_value_5F_element_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_collection_5F_value_5F_element_ (GALGAS_abstractCollectionValueElement & outArgument0,
                                                            C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'declaration' non terminal
//--- 'parse' label
  public : virtual void nt_declaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_declaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_declaration_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                         C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'declaration_with_private' non terminal
//--- 'parse' label
  public : virtual void nt_declaration_5F_with_5F_private_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_declaration_5F_with_5F_private_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_declaration_5F_with_5F_private_ (const GALGAS_bool inArgument0,
                                                            GALGAS_galgas_33_DeclarationAST & ioArgument1,
                                                            C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'expression' non terminal
//--- 'parse' label
  public : virtual void nt_expression_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_expression_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_ (GALGAS_semanticExpressionAST & outArgument0,
                                        C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'extern_function_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_extern_5F_function_5F_declaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_extern_5F_function_5F_declaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_extern_5F_function_5F_declaration_ (GALGAS_externFunctionListAST & ioArgument0,
                                                               C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'extern_routine_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_extern_5F_routine_5F_declaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_extern_5F_routine_5F_declaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_extern_5F_routine_5F_declaration_ (GALGAS_externRoutineListAST & ioArgument0,
                                                              C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'externtype_constructor' non terminal
//--- 'parse' label
  public : virtual void nt_externtype_5F_constructor_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_externtype_5F_constructor_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_externtype_5F_constructor_ (GALGAS_externTypeConstructorList & ioArgument0,
                                                       C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'externtype_cpp_classdeclaration' non terminal
//--- 'parse' label
  public : virtual void nt_externtype_5F_cpp_5F_classdeclaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_externtype_5F_cpp_5F_classdeclaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_externtype_5F_cpp_5F_classdeclaration_ (GALGAS_string & outArgument0,
                                                                   C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'externtype_cpp_predeclaration' non terminal
//--- 'parse' label
  public : virtual void nt_externtype_5F_cpp_5F_predeclaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_externtype_5F_cpp_5F_predeclaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_externtype_5F_cpp_5F_predeclaration_ (GALGAS_string & outArgument0,
                                                                 C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'externtype_getter' non terminal
//--- 'parse' label
  public : virtual void nt_externtype_5F_getter_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_externtype_5F_getter_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_externtype_5F_getter_ (GALGAS_externTypeGetterList & ioArgument0,
                                                  C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'externtype_method' non terminal
//--- 'parse' label
  public : virtual void nt_externtype_5F_method_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_externtype_5F_method_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_externtype_5F_method_ (GALGAS_externTypeMethodList & ioArgument0,
                                                  C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'externtype_setter' non terminal
//--- 'parse' label
  public : virtual void nt_externtype_5F_setter_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_externtype_5F_setter_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_externtype_5F_setter_ (GALGAS_externTypeSetterList & ioArgument0,
                                                  C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'factor' non terminal
//--- 'parse' label
  public : virtual void nt_factor_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_factor_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_factor_ (GALGAS_semanticExpressionAST & outArgument0,
                                    C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'filewrapper_binary_files' non terminal
//--- 'parse' label
  public : virtual void nt_filewrapper_5F_binary_5F_files_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_filewrapper_5F_binary_5F_files_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_filewrapper_5F_binary_5F_files_ (GALGAS_lstringlist & outArgument0,
                                                            C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'filewrapper_templates' non terminal
//--- 'parse' label
  public : virtual void nt_filewrapper_5F_templates_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_filewrapper_5F_templates_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_filewrapper_5F_templates_ (GALGAS_filewrapperTemplateListAST & outArgument0,
                                                      C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'filewrapper_text_files' non terminal
//--- 'parse' label
  public : virtual void nt_filewrapper_5F_text_5F_files_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_filewrapper_5F_text_5F_files_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_filewrapper_5F_text_5F_files_ (GALGAS_lstringlist & outArgument0,
                                                          C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'for_instruction_element' non terminal
//--- 'parse' label
  public : virtual void nt_for_5F_instruction_5F_element_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_for_5F_instruction_5F_element_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_for_5F_instruction_5F_element_ (GALGAS_forInstructionEnumeratedObjectElementListAST & ioArgument0,
                                                           C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'for_instruction_enumerated_object' non terminal
//--- 'parse' label
  public : virtual void nt_for_5F_instruction_5F_enumerated_5F_object_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_for_5F_instruction_5F_enumerated_5F_object_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_for_5F_instruction_5F_enumerated_5F_object_ (GALGAS_abstractEnumeratedCollectionAST & outArgument0,
                                                                        C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'formal_input_parameter_list' non terminal
//--- 'parse' label
  public : virtual void nt_formal_5F_input_5F_parameter_5F_list_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_formal_5F_input_5F_parameter_5F_list_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_formal_5F_input_5F_parameter_5F_list_ (const GALGAS_bool inArgument0,
                                                                  GALGAS_formalInputParameterListAST & outArgument1,
                                                                  C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'formal_parameter_list' non terminal
//--- 'parse' label
  public : virtual void nt_formal_5F_parameter_5F_list_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_formal_5F_parameter_5F_list_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_formal_5F_parameter_5F_list_ (GALGAS_formalParameterListAST & outArgument0,
                                                         C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'grammar_instruction_core' non terminal
//--- 'parse' label
  public : virtual void nt_grammar_5F_instruction_5F_core_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_grammar_5F_instruction_5F_core_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_grammar_5F_instruction_5F_core_ (const GALGAS_location inArgument0,
                                                            const GALGAS_lstring inArgument1,
                                                            const GALGAS_lstring inArgument2,
                                                            GALGAS_semanticInstructionAST & outArgument3,
                                                            C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'grammar_start_symbol_label' non terminal
//--- 'parse' label
  public : virtual void nt_grammar_5F_start_5F_symbol_5F_label_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_grammar_5F_start_5F_symbol_5F_label_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_grammar_5F_start_5F_symbol_5F_label_ (const GALGAS_lstring inArgument0,
                                                                 GALGAS_nonTerminalLabelListAST & ioArgument1,
                                                                 C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'gui_attributes' non terminal
//--- 'parse' label
  public : virtual void nt_gui_5F_attributes_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_gui_5F_attributes_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gui_5F_attributes_ (GALGAS_guiSimpleAttributeListAST & ioArgument0,
                                               C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'gui_with_lexique_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_gui_5F_with_5F_lexique_5F_declaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_gui_5F_with_5F_lexique_5F_declaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gui_5F_with_5F_lexique_5F_declaration_ (GALGAS_withLexiqueListAST & ioArgument0,
                                                                   C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'gui_with_option_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_gui_5F_with_5F_option_5F_declaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_gui_5F_with_5F_option_5F_declaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_gui_5F_with_5F_option_5F_declaration_ (GALGAS_lstringlist & ioArgument0,
                                                                  C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'if_instruction_core' non terminal
//--- 'parse' label
  public : virtual void nt_if_5F_instruction_5F_core_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_if_5F_instruction_5F_core_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_if_5F_instruction_5F_core_ (GALGAS_semanticInstructionAST & outArgument0,
                                                       C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'insert_or_replace_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_insert_5F_or_5F_replace_5F_declaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_insert_5F_or_5F_replace_5F_declaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_insert_5F_or_5F_replace_5F_declaration_ (GALGAS_insertOrReplaceDeclarationListAST & ioArgument0,
                                                                    C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'issue_fixit' non terminal
//--- 'parse' label
  public : virtual void nt_issue_5F_fixit_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_issue_5F_fixit_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_issue_5F_fixit_ (GALGAS_fixitListAST & outArgument0,
                                            C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'label_formal_parameter' non terminal
//--- 'parse' label
  public : virtual void nt_label_5F_formal_5F_parameter_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_label_5F_formal_5F_parameter_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_label_5F_formal_5F_parameter_ (GALGAS_lstring & outArgument0,
                                                          GALGAS_formalParameterListAST & ioArgument1,
                                                          C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'lexical_attribute_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_attribute_5F_declaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_attribute_5F_declaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_attribute_5F_declaration_ (GALGAS_lexicalAttributeListAST & ioArgument0,
                                                                 C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'lexical_explicit_rule' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_explicit_5F_rule_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_explicit_5F_rule_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_explicit_5F_rule_ (GALGAS_lexicalRuleListAST & ioArgument0,
                                                         C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'lexical_expression' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_expression_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_expression_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_expression_ (GALGAS_lexicalExpressionAST & outArgument0,
                                                   C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'lexical_factor' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_factor_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_factor_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_factor_ (GALGAS_lexicalExpressionAST & outArgument0,
                                               C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'lexical_implicit_rule' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_implicit_5F_rule_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_implicit_5F_rule_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_implicit_5F_rule_ (GALGAS_lexicalRuleListAST & ioArgument0,
                                                         C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'lexical_indexing_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_indexing_5F_declaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_indexing_5F_declaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_indexing_5F_declaration_ (GALGAS_indexingListAST & ioArgument0,
                                                                C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'lexical_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_instruction_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_instruction_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_instruction_ (GALGAS_lexicalInstructionListAST & ioArgument0,
                                                    C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'lexical_list_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_list_5F_declaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_list_5F_declaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_list_5F_declaration_ (GALGAS_lexicalListDeclarationListAST & ioArgument0,
                                                            C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'lexical_list_entry' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_list_5F_entry_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_list_5F_entry_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_list_5F_entry_ (GALGAS_lexicalListEntryListAST & ioArgument0,
                                                      C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'lexical_message_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_message_5F_declaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_message_5F_declaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_message_5F_declaration_ (GALGAS_lexicalMessageDeclarationListAST & ioArgument0,
                                                               C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'lexical_output_effective_argument' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_output_5F_effective_5F_argument_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_output_5F_effective_5F_argument_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_output_5F_effective_5F_argument_ (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outArgument0,
                                                                        C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'lexical_send_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_send_5F_instruction_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_send_5F_instruction_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_send_5F_instruction_ (GALGAS_lexicalInstructionAST & outArgument0,
                                                            C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'lexical_term' non terminal
//--- 'parse' label
  public : virtual void nt_lexical_5F_term_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_lexical_5F_term_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_lexical_5F_term_ (GALGAS_lexicalExpressionAST & outArgument0,
                                             C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'map_insert_setter_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_map_5F_insert_5F_setter_5F_declaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_map_5F_insert_5F_setter_5F_declaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_map_5F_insert_5F_setter_5F_declaration_ (GALGAS_insertMethodListAST & ioArgument0,
                                                                    C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'match_entry' non terminal
//--- 'parse' label
  public : virtual void nt_match_5F_entry_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_match_5F_entry_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_match_5F_entry_ (GALGAS_matchEntryListAST & ioArgument0,
                                            C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'match_instruction_branch' non terminal
//--- 'parse' label
  public : virtual void nt_match_5F_instruction_5F_branch_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_match_5F_instruction_5F_branch_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_match_5F_instruction_5F_branch_ (GALGAS_matchInstructionBranchListAST & ioArgument0,
                                                            C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'non_empty_output_expression_list' non terminal
//--- 'parse' label
  public : virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_non_5F_empty_5F_output_5F_expression_5F_list_ (GALGAS_actualOutputExpressionList & outArgument0,
                                                                          C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'nonterminal_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_nonterminal_5F_declaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_nonterminal_5F_declaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_nonterminal_5F_declaration_ (GALGAS_nonterminalDeclarationListAST & ioArgument0,
                                                        C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'option_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_option_5F_declaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_option_5F_declaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_option_5F_declaration_ (GALGAS_commandLineOptionListAST & ioArgument0,
                                                   C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'optional_type' non terminal
//--- 'parse' label
  public : virtual void nt_optional_5F_type_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_optional_5F_type_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_optional_5F_type_ (GALGAS_lstring & outArgument0,
                                              C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'output_expression_list' non terminal
//--- 'parse' label
  public : virtual void nt_output_5F_expression_5F_list_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_output_5F_expression_5F_list_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_output_5F_expression_5F_list_ (GALGAS_actualOutputExpressionList & outArgument0,
                                                          C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'primary' non terminal
//--- 'parse' label
  public : virtual void nt_primary_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_primary_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_primary_ (GALGAS_semanticExpressionAST & outArgument0,
                                     C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'property_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_property_5F_declaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_property_5F_declaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_property_5F_declaration_ (GALGAS_propertyInCollectionListAST & ioArgument0,
                                                     C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'relation_factor' non terminal
//--- 'parse' label
  public : virtual void nt_relation_5F_factor_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_relation_5F_factor_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_relation_5F_factor_ (GALGAS_semanticExpressionAST & outArgument0,
                                                C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'relation_term' non terminal
//--- 'parse' label
  public : virtual void nt_relation_5F_term_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_relation_5F_term_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_relation_5F_term_ (GALGAS_semanticExpressionAST & outArgument0,
                                              C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'remove_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_remove_5F_declaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_remove_5F_declaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_remove_5F_declaration_ (GALGAS_mapRemoveMethodListAST & ioArgument0,
                                                   C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'repeat_while_branch' non terminal
//--- 'parse' label
  public : virtual void nt_repeat_5F_while_5F_branch_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_repeat_5F_while_5F_branch_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_repeat_5F_while_5F_branch_ (GALGAS_lexicalWhileBranchListAST & ioArgument0,
                                                       C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'search_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_search_5F_declaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_search_5F_declaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_search_5F_declaration_ (GALGAS_mapSearchMethodListAST & ioArgument0,
                                                   C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'semantic_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_semantic_5F_instruction_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_semantic_5F_instruction_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_semantic_5F_instruction_ (GALGAS_semanticInstructionAST & outArgument0,
                                                     C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'semantic_instruction_list' non terminal
//--- 'parse' label
  public : virtual void nt_semantic_5F_instruction_5F_list_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_semantic_5F_instruction_5F_list_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_semantic_5F_instruction_5F_list_ (GALGAS_semanticInstructionListAST & outArgument0,
                                                             C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'sharedmap_attribute' non terminal
//--- 'parse' label
  public : virtual void nt_sharedmap_5F_attribute_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_sharedmap_5F_attribute_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_sharedmap_5F_attribute_ (GALGAS_sharedMapAttributeListAST & ioArgument0,
                                                    C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'sharedmap_override' non terminal
//--- 'parse' label
  public : virtual void nt_sharedmap_5F_override_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_sharedmap_5F_override_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_sharedmap_5F_override_ (GALGAS_mapOverrideBlockListAST & ioArgument0,
                                                   C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'sharedmap_search_method_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_sharedmap_5F_search_5F_method_5F_declaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_sharedmap_5F_search_5F_method_5F_declaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_sharedmap_5F_search_5F_method_5F_declaration_ (GALGAS_mapSearchMethodListAST & ioArgument0,
                                                                          C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'sharedmap_state_list' non terminal
//--- 'parse' label
  public : virtual void nt_sharedmap_5F_state_5F_list_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_sharedmap_5F_state_5F_list_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_sharedmap_5F_state_5F_list_ (GALGAS_mapStateList & ioArgument0,
                                                        C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'sharedmap_state_transition' non terminal
//--- 'parse' label
  public : virtual void nt_sharedmap_5F_state_5F_transition_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_sharedmap_5F_state_5F_transition_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_sharedmap_5F_state_5F_transition_ (GALGAS_mapStateTransitionList & ioArgument0,
                                                              C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'simple_expression' non terminal
//--- 'parse' label
  public : virtual void nt_simple_5F_expression_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_simple_5F_expression_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_simple_5F_expression_ (GALGAS_semanticExpressionAST & outArgument0,
                                                  C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'sortedlist_sort_descriptor' non terminal
//--- 'parse' label
  public : virtual void nt_sortedlist_5F_sort_5F_descriptor_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_sortedlist_5F_sort_5F_descriptor_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_sortedlist_5F_sort_5F_descriptor_ (GALGAS_sortedListSortDescriptorListAST & ioArgument0,
                                                              C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'start_symbol' non terminal
//--- 'parse' label
  public : virtual void nt_start_5F_symbol_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_start_5F_symbol_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_start_5F_symbol_ (GALGAS_galgas_33_DeclarationAST & ioArgument0,
                                             C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- Start symbol
  public : static void _performSourceFileParsing_ (C_Compiler * inCompiler,
                                                   GALGAS_lstring inFileName,
                                                   GALGAS_galgas_33_DeclarationAST & ioArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public : static void _performSourceStringParsing_ (C_Compiler * inCompiler,
                                                     GALGAS_string inSourceString,
                                                     GALGAS_string inNameString,
                                                     GALGAS_galgas_33_DeclarationAST & ioArgument0
                                                     COMMA_LOCATION_ARGS) ;

//--- Indexing
  public : static void performIndexing (C_Compiler * inCompiler,
                                        const C_String & inSourceFilePath) ;

//--- Only lexical analysis
  public : static void performOnlyLexicalAnalysis (C_Compiler * inCompiler,
                                                   const C_String & inSourceFilePath) ;

//--- Only syntax analysis
  public : static void performOnlySyntaxAnalysis (C_Compiler * inCompiler,
                                                  const C_String & inSourceFilePath) ;

//------------------------------------- 'style_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_style_5F_declaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_style_5F_declaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_style_5F_declaration_ (GALGAS_lexicalStyleListAST & ioArgument0,
                                                  C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'switch_case' non terminal
//--- 'parse' label
  public : virtual void nt_switch_5F_case_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_switch_5F_case_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_switch_5F_case_ (GALGAS_lstringlist & outArgument0,
                                            GALGAS_switchExtractedValuesListAST & outArgument1,
                                            C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'syntax_directed_translation_result' non terminal
//--- 'parse' label
  public : virtual void nt_syntax_5F_directed_5F_translation_5F_result_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_syntax_5F_directed_5F_translation_5F_result_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_syntax_5F_directed_5F_translation_5F_result_ (GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument0,
                                                                         C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'syntax_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_syntax_5F_instruction_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_syntax_5F_instruction_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_syntax_5F_instruction_ (GALGAS_syntaxInstructionAST & outArgument0,
                                                   C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'syntax_instruction_list' non terminal
//--- 'parse' label
  public : virtual void nt_syntax_5F_instruction_5F_list_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_syntax_5F_instruction_5F_list_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_syntax_5F_instruction_5F_list_ (GALGAS_syntaxInstructionList & outArgument0,
                                                           C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'syntax_rule_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_syntax_5F_rule_5F_declaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_syntax_5F_rule_5F_declaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_syntax_5F_rule_5F_declaration_ (GALGAS_syntaxRuleListAST & ioArgument0,
                                                           C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'syntax_rule_label' non terminal
//--- 'parse' label
  public : virtual void nt_syntax_5F_rule_5F_label_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_syntax_5F_rule_5F_label_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_syntax_5F_rule_5F_label_ (const GALGAS_lstring inArgument0,
                                                     GALGAS_syntaxRuleLabelListAST & ioArgument1,
                                                     C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'template_delimitor' non terminal
//--- 'parse' label
  public : virtual void nt_template_5F_delimitor_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_template_5F_delimitor_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_template_5F_delimitor_ (GALGAS_metamodelTemplateDelimitorListAST & ioArgument0,
                                                   C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'template_replacement' non terminal
//--- 'parse' label
  public : virtual void nt_template_5F_replacement_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_template_5F_replacement_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_template_5F_replacement_ (GALGAS_templateReplacementListAST & ioArgument0,
                                                     C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'term' non terminal
//--- 'parse' label
  public : virtual void nt_term_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_term_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_term_ (GALGAS_semanticExpressionAST & outArgument0,
                                  C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'terminal_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_terminal_5F_declaration_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_terminal_5F_declaration_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_terminal_5F_declaration_ (GALGAS_terminalDeclarationListAST & ioArgument0,
                                                     C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'terminal_instruction_indexing' non terminal
//--- 'parse' label
  public : virtual void nt_terminal_5F_instruction_5F_indexing_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_terminal_5F_instruction_5F_indexing_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_terminal_5F_instruction_5F_indexing_ (GALGAS__32_lstringlist & outArgument0,
                                                                 C_Lexique_galgas_33_Scanner * inCompiler) ;

//------------------------------------- 'with_instruction_core' non terminal
//--- 'parse' label
  public : virtual void nt_with_5F_instruction_5F_core_parse (C_Lexique_galgas_33_Scanner * inCompiler) ;

//--- indexing
  public : virtual void nt_with_5F_instruction_5F_core_indexing (C_Lexique_galgas_33_Scanner * inCompiler) ;

//----------- '' label
  public : virtual void nt_with_5F_instruction_5F_core_ (const GALGAS_location inArgument0,
                                                         const GALGAS_semanticExpressionAST inArgument1,
                                                         const GALGAS_location inArgument2,
                                                         const GALGAS_lstring inArgument3,
                                                         GALGAS_semanticInstructionAST & outArgument4,
                                                         C_Lexique_galgas_33_Scanner * inCompiler) ;

  public : virtual int32_t select_galgas_33_ExpressionSyntax_0 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ExpressionSyntax_1 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ExpressionSyntax_2 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ExpressionSyntax_3 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ExpressionSyntax_4 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ExpressionSyntax_5 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ExpressionSyntax_6 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ExpressionSyntax_7 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ExpressionSyntax_8 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ExpressionSyntax_9 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ExpressionSyntax_10 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ExpressionSyntax_11 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ExpressionSyntax_12 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ExpressionSyntax_13 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ExpressionSyntax_14 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ExpressionSyntax_15 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ExpressionSyntax_16 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ParameterArgumentSyntax_0 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ParameterArgumentSyntax_1 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ParameterArgumentSyntax_2 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ParameterArgumentSyntax_3 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ParameterArgumentSyntax_4 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ParameterArgumentSyntax_5 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ParameterArgumentSyntax_6 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ParameterArgumentSyntax_7 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ParameterArgumentSyntax_8 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ParameterArgumentSyntax_9 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ParameterArgumentSyntax_10 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ParameterArgumentSyntax_11 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_0 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_1 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_2 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_3 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_4 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_5 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_6 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_7 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_8 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_9 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_10 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_11 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_12 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_13 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_14 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_15 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_16 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_17 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_18 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_19 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_20 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_21 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_22 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_23 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_24 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_25 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_26 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_27 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_28 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_29 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_30 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_31 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_32 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_33 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_34 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_35 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_36 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_37 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_38 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_39 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_40 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_41 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_42 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_43 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_44 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_45 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_46 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_47 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_48 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_49 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_50 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_51 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_52 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_53 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_54 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_55 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_56 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_57 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_58 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_59 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_60 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_61 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_62 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_63 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_64 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_65 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_66 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_67 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_68 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_69 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_70 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_71 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_InstructionsSyntax_72 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_0 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_1 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_2 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_3 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_4 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_5 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_6 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_7 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_8 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_9 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_10 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_11 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_12 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_13 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_14 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_15 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_16 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_17 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_18 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_19 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_20 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_21 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_22 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_23 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_24 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_25 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_26 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_27 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_28 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_29 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_30 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_31 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_32 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_33 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_34 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_35 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_36 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_37 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_38 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_39 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_40 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_41 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_42 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_43 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_44 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_45 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_46 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_47 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_DeclarationsSyntax_48 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_0 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_1 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_2 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_3 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_4 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_5 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_6 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_7 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_8 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_9 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_10 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_11 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_12 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_13 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_14 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_15 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_16 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_17 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_18 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_19 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_20 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_21 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_22 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_23 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_24 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_25 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_26 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_27 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_28 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_29 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_30 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_31 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_LexiqueComponentSyntax_32 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_OptionComponentSyntax_0 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_OptionComponentSyntax_1 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_OptionComponentSyntax_2 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_GuiComponentSyntax_0 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_GuiComponentSyntax_1 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_GuiComponentSyntax_2 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_GuiComponentSyntax_3 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_GuiComponentSyntax_4 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_GuiComponentSyntax_5 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_GuiComponentSyntax_6 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_0 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_1 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_2 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_3 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_4 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_5 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_6 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_7 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_8 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_9 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_10 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_11 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_12 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_13 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_14 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_15 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_16 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_17 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_18 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_19 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_SyntaxComponentSyntax_20 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_GrammarComponentSyntax_0 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_GrammarComponentSyntax_1 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_GrammarComponentSyntax_2 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_GrammarComponentSyntax_3 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_GrammarComponentSyntax_4 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_GrammarComponentSyntax_5 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_GrammarComponentSyntax_6 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_GrammarComponentSyntax_7 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_GrammarComponentSyntax_8 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ProgramDeclarations_0 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ProgramDeclarations_1 (C_Lexique_galgas_33_Scanner *) ;

  public : virtual int32_t select_galgas_33_ProgramDeclarations_2 (C_Lexique_galgas_33_Scanner *) ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
#endif
