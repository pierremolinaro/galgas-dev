#ifndef all_2D_declarations_2D__31__34__ENTITIES_DEFINED
#define all_2D_declarations_2D__31__34__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-13.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @abstractCategoryMethodForGeneration class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_abstractCategoryMethodForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--- Constructor
  public : GALGAS_abstractCategoryMethodForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_abstractCategoryMethodForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_abstractCategoryMethodForGeneration * ptr (void) const { return (const cPtr_abstractCategoryMethodForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_abstractCategoryMethodForGeneration (const cPtr_abstractCategoryMethodForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_abstractCategoryMethodForGeneration extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_abstractCategoryMethodForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                                              const class GALGAS_string & inOperand1,
                                                                              const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                              const class GALGAS_string & inOperand3,
                                                                              const class GALGAS_formalParameterListForGeneration & inOperand4
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_abstractCategoryMethodForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListForGeneration reader_mAbstractCategoryMethodFormalParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mAbstractCategoryMethodName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mReceiverType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractCategoryMethodForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractCategoryMethodForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @abstractCategoryMethodForGeneration class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_abstractCategoryMethodForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mReceiverType ;
  public : GALGAS_string mAttribute_mAbstractCategoryMethodName ;
  public : GALGAS_formalParameterListForGeneration mAttribute_mAbstractCategoryMethodFormalParameterList ;

//--- Constructor
  public : cPtr_abstractCategoryMethodForGeneration (const GALGAS_bool & in_mHasHeader,
                                                     const GALGAS_string & in_mImplementationCppFileName,
                                                     const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                     const GALGAS_string & in_mAbstractCategoryMethodName,
                                                     const GALGAS_formalParameterListForGeneration & in_mAbstractCategoryMethodFormalParameterList
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy reader_mReceiverType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mAbstractCategoryMethodName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalParameterListForGeneration reader_mAbstractCategoryMethodFormalParameterList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @abstractCategoryModifierForGeneration class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_abstractCategoryModifierForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--- Constructor
  public : GALGAS_abstractCategoryModifierForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_abstractCategoryModifierForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_abstractCategoryModifierForGeneration * ptr (void) const { return (const cPtr_abstractCategoryModifierForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_abstractCategoryModifierForGeneration (const cPtr_abstractCategoryModifierForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_abstractCategoryModifierForGeneration extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_abstractCategoryModifierForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                                                const class GALGAS_string & inOperand1,
                                                                                const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                                const class GALGAS_string & inOperand3,
                                                                                const class GALGAS_formalParameterListForGeneration & inOperand4
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_abstractCategoryModifierForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListForGeneration reader_mAbstractCategoryModifierFormalParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mAbstractCategoryModifierName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mReceiverType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractCategoryModifierForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractCategoryModifierForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @abstractCategoryModifierForGeneration class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_abstractCategoryModifierForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mReceiverType ;
  public : GALGAS_string mAttribute_mAbstractCategoryModifierName ;
  public : GALGAS_formalParameterListForGeneration mAttribute_mAbstractCategoryModifierFormalParameterList ;

//--- Constructor
  public : cPtr_abstractCategoryModifierForGeneration (const GALGAS_bool & in_mHasHeader,
                                                       const GALGAS_string & in_mImplementationCppFileName,
                                                       const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                       const GALGAS_string & in_mAbstractCategoryModifierName,
                                                       const GALGAS_formalParameterListForGeneration & in_mAbstractCategoryModifierFormalParameterList
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy reader_mReceiverType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mAbstractCategoryModifierName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalParameterListForGeneration reader_mAbstractCategoryModifierFormalParameterList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @abstractCategoryReaderForGeneration class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_abstractCategoryReaderForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--- Constructor
  public : GALGAS_abstractCategoryReaderForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_abstractCategoryReaderForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_abstractCategoryReaderForGeneration * ptr (void) const { return (const cPtr_abstractCategoryReaderForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_abstractCategoryReaderForGeneration (const cPtr_abstractCategoryReaderForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_abstractCategoryReaderForGeneration extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_abstractCategoryReaderForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                                              const class GALGAS_string & inOperand1,
                                                                              const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                              const class GALGAS_string & inOperand3,
                                                                              const class GALGAS_unifiedTypeMap_2D_proxy & inOperand4,
                                                                              const class GALGAS_formalInputParameterListForGeneration & inOperand5
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_abstractCategoryReaderForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_formalInputParameterListForGeneration reader_mAbstractCategoryReaderFormalParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mAbstractCategoryReaderName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mReceiverType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mResultType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractCategoryReaderForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractCategoryReaderForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @abstractCategoryReaderForGeneration class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_abstractCategoryReaderForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mReceiverType ;
  public : GALGAS_string mAttribute_mAbstractCategoryReaderName ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mResultType ;
  public : GALGAS_formalInputParameterListForGeneration mAttribute_mAbstractCategoryReaderFormalParameterList ;

//--- Constructor
  public : cPtr_abstractCategoryReaderForGeneration (const GALGAS_bool & in_mHasHeader,
                                                     const GALGAS_string & in_mImplementationCppFileName,
                                                     const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                     const GALGAS_string & in_mAbstractCategoryReaderName,
                                                     const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                     const GALGAS_formalInputParameterListForGeneration & in_mAbstractCategoryReaderFormalParameterList
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy reader_mReceiverType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mAbstractCategoryReaderName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy reader_mResultType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalInputParameterListForGeneration reader_mAbstractCategoryReaderFormalParameterList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @categoryMethodForGeneration class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_categoryMethodForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--- Constructor
  public : GALGAS_categoryMethodForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_categoryMethodForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_categoryMethodForGeneration * ptr (void) const { return (const cPtr_categoryMethodForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_categoryMethodForGeneration (const cPtr_categoryMethodForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_categoryMethodForGeneration extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_categoryMethodForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                                      const class GALGAS_string & inOperand1,
                                                                      const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                      const class GALGAS_string & inOperand3,
                                                                      const class GALGAS_bool & inOperand4,
                                                                      const class GALGAS_formalParameterListForGeneration & inOperand5,
                                                                      const class GALGAS_typedPropertyList & inOperand6,
                                                                      const class GALGAS_semanticInstructionListForGeneration & inOperand7
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_categoryMethodForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListForGeneration reader_mCategoryMethodFormalParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mCategoryMethodName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mImplementedAsFunction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mReceiverType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListForGeneration reader_mSemanticInstructionListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typedPropertyList reader_mTypedAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_categoryMethodForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_categoryMethodForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @categoryMethodForGeneration class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_categoryMethodForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mReceiverType ;
  public : GALGAS_string mAttribute_mCategoryMethodName ;
  public : GALGAS_bool mAttribute_mImplementedAsFunction ;
  public : GALGAS_formalParameterListForGeneration mAttribute_mCategoryMethodFormalParameterList ;
  public : GALGAS_typedPropertyList mAttribute_mTypedAttributeList ;
  public : GALGAS_semanticInstructionListForGeneration mAttribute_mSemanticInstructionListForGeneration ;

//--- Constructor
  public : cPtr_categoryMethodForGeneration (const GALGAS_bool & in_mHasHeader,
                                             const GALGAS_string & in_mImplementationCppFileName,
                                             const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                             const GALGAS_string & in_mCategoryMethodName,
                                             const GALGAS_bool & in_mImplementedAsFunction,
                                             const GALGAS_formalParameterListForGeneration & in_mCategoryMethodFormalParameterList,
                                             const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                             const GALGAS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy reader_mReceiverType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mCategoryMethodName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mImplementedAsFunction (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalParameterListForGeneration reader_mCategoryMethodFormalParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_typedPropertyList reader_mTypedAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListForGeneration reader_mSemanticInstructionListForGeneration (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @categoryModifierForGeneration class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_categoryModifierForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--- Constructor
  public : GALGAS_categoryModifierForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_categoryModifierForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_categoryModifierForGeneration * ptr (void) const { return (const cPtr_categoryModifierForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_categoryModifierForGeneration (const cPtr_categoryModifierForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_categoryModifierForGeneration extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_categoryModifierForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                                        const class GALGAS_string & inOperand1,
                                                                        const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                        const class GALGAS_string & inOperand3,
                                                                        const class GALGAS_bool & inOperand4,
                                                                        const class GALGAS_formalParameterListForGeneration & inOperand5,
                                                                        const class GALGAS_typedPropertyList & inOperand6,
                                                                        const class GALGAS_semanticInstructionListForGeneration & inOperand7
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_categoryModifierForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListForGeneration reader_mCategoryModifierFormalParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mCategoryModifierName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mImplementedAsFunction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mReceiverType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListForGeneration reader_mSemanticInstructionListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typedPropertyList reader_mTypedAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_categoryModifierForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_categoryModifierForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @categoryModifierForGeneration class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_categoryModifierForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mReceiverType ;
  public : GALGAS_string mAttribute_mCategoryModifierName ;
  public : GALGAS_bool mAttribute_mImplementedAsFunction ;
  public : GALGAS_formalParameterListForGeneration mAttribute_mCategoryModifierFormalParameterList ;
  public : GALGAS_typedPropertyList mAttribute_mTypedAttributeList ;
  public : GALGAS_semanticInstructionListForGeneration mAttribute_mSemanticInstructionListForGeneration ;

//--- Constructor
  public : cPtr_categoryModifierForGeneration (const GALGAS_bool & in_mHasHeader,
                                               const GALGAS_string & in_mImplementationCppFileName,
                                               const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                               const GALGAS_string & in_mCategoryModifierName,
                                               const GALGAS_bool & in_mImplementedAsFunction,
                                               const GALGAS_formalParameterListForGeneration & in_mCategoryModifierFormalParameterList,
                                               const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                               const GALGAS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy reader_mReceiverType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mCategoryModifierName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mImplementedAsFunction (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalParameterListForGeneration reader_mCategoryModifierFormalParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_typedPropertyList reader_mTypedAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListForGeneration reader_mSemanticInstructionListForGeneration (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @categoryReaderForGeneration class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_categoryReaderForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--- Constructor
  public : GALGAS_categoryReaderForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_categoryReaderForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_categoryReaderForGeneration * ptr (void) const { return (const cPtr_categoryReaderForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_categoryReaderForGeneration (const cPtr_categoryReaderForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_categoryReaderForGeneration extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_categoryReaderForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                                      const class GALGAS_string & inOperand1,
                                                                      const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                      const class GALGAS_string & inOperand3,
                                                                      const class GALGAS_bool & inOperand4,
                                                                      const class GALGAS_unifiedTypeMap_2D_proxy & inOperand5,
                                                                      const class GALGAS_string & inOperand6,
                                                                      const class GALGAS_formalInputParameterListForGeneration & inOperand7,
                                                                      const class GALGAS_typedPropertyList & inOperand8,
                                                                      const class GALGAS_semanticInstructionListForGeneration & inOperand9
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_categoryReaderForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_formalInputParameterListForGeneration reader_mCategoryReaderFormalParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mCategoryReaderName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mImplementedAsFunction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mReceiverType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mResultType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mResultVarCppName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListForGeneration reader_mSemanticInstructionListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typedPropertyList reader_mTypedAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_categoryReaderForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_categoryReaderForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @categoryReaderForGeneration class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_categoryReaderForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mReceiverType ;
  public : GALGAS_string mAttribute_mCategoryReaderName ;
  public : GALGAS_bool mAttribute_mImplementedAsFunction ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mResultType ;
  public : GALGAS_string mAttribute_mResultVarCppName ;
  public : GALGAS_formalInputParameterListForGeneration mAttribute_mCategoryReaderFormalParameterList ;
  public : GALGAS_typedPropertyList mAttribute_mTypedAttributeList ;
  public : GALGAS_semanticInstructionListForGeneration mAttribute_mSemanticInstructionListForGeneration ;

//--- Constructor
  public : cPtr_categoryReaderForGeneration (const GALGAS_bool & in_mHasHeader,
                                             const GALGAS_string & in_mImplementationCppFileName,
                                             const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                             const GALGAS_string & in_mCategoryReaderName,
                                             const GALGAS_bool & in_mImplementedAsFunction,
                                             const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                             const GALGAS_string & in_mResultVarCppName,
                                             const GALGAS_formalInputParameterListForGeneration & in_mCategoryReaderFormalParameterList,
                                             const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                             const GALGAS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy reader_mReceiverType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mCategoryReaderName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mImplementedAsFunction (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy reader_mResultType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mResultVarCppName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalInputParameterListForGeneration reader_mCategoryReaderFormalParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_typedPropertyList reader_mTypedAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListForGeneration reader_mSemanticInstructionListForGeneration (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @filewrapperDeclarationForGeneration class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_filewrapperDeclarationForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--- Constructor
  public : GALGAS_filewrapperDeclarationForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_filewrapperDeclarationForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_filewrapperDeclarationForGeneration * ptr (void) const { return (const cPtr_filewrapperDeclarationForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_filewrapperDeclarationForGeneration (const cPtr_filewrapperDeclarationForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_filewrapperDeclarationForGeneration extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_filewrapperDeclarationForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                                              const class GALGAS_string & inOperand1,
                                                                              const class GALGAS_string & inOperand2,
                                                                              const class GALGAS_string & inOperand3,
                                                                              const class GALGAS_wrapperFileMap & inOperand4,
                                                                              const class GALGAS_wrapperDirectoryMap & inOperand5,
                                                                              const class GALGAS_filewrapperTemplateListForGeneration & inOperand6
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_filewrapperDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mFilewrapperAbsolutePath (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_wrapperDirectoryMap reader_mFilewrapperDirectoryMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_wrapperFileMap reader_mFilewrapperFileMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mFilewrapperName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_filewrapperTemplateListForGeneration reader_mFilewrapperTemplateListForGeneration (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_filewrapperDeclarationForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @filewrapperDeclarationForGeneration class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_filewrapperDeclarationForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mFilewrapperName ;
  public : GALGAS_string mAttribute_mFilewrapperAbsolutePath ;
  public : GALGAS_wrapperFileMap mAttribute_mFilewrapperFileMap ;
  public : GALGAS_wrapperDirectoryMap mAttribute_mFilewrapperDirectoryMap ;
  public : GALGAS_filewrapperTemplateListForGeneration mAttribute_mFilewrapperTemplateListForGeneration ;

//--- Constructor
  public : cPtr_filewrapperDeclarationForGeneration (const GALGAS_bool & in_mHasHeader,
                                                     const GALGAS_string & in_mImplementationCppFileName,
                                                     const GALGAS_string & in_mFilewrapperName,
                                                     const GALGAS_string & in_mFilewrapperAbsolutePath,
                                                     const GALGAS_wrapperFileMap & in_mFilewrapperFileMap,
                                                     const GALGAS_wrapperDirectoryMap & in_mFilewrapperDirectoryMap,
                                                     const GALGAS_filewrapperTemplateListForGeneration & in_mFilewrapperTemplateListForGeneration
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mFilewrapperName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mFilewrapperAbsolutePath (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_wrapperFileMap reader_mFilewrapperFileMap (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_wrapperDirectoryMap reader_mFilewrapperDirectoryMap (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_filewrapperTemplateListForGeneration reader_mFilewrapperTemplateListForGeneration (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @functionPrototypeDeclarationForGeneration class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_functionPrototypeDeclarationForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--- Constructor
  public : GALGAS_functionPrototypeDeclarationForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_functionPrototypeDeclarationForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_functionPrototypeDeclarationForGeneration * ptr (void) const { return (const cPtr_functionPrototypeDeclarationForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_functionPrototypeDeclarationForGeneration (const cPtr_functionPrototypeDeclarationForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_functionPrototypeDeclarationForGeneration extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_functionPrototypeDeclarationForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                                                    const class GALGAS_string & inOperand1,
                                                                                    const class GALGAS_string & inOperand2,
                                                                                    const class GALGAS_formalInputParameterListForGeneration & inOperand3,
                                                                                    const class GALGAS_unifiedTypeMap_2D_proxy & inOperand4
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_functionPrototypeDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_formalInputParameterListForGeneration reader_mFormalArgumentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mFunctionName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mReturnType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_functionPrototypeDeclarationForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Pointer class for @functionPrototypeDeclarationForGeneration class                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_functionPrototypeDeclarationForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mFunctionName ;
  public : GALGAS_formalInputParameterListForGeneration mAttribute_mFormalArgumentList ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mReturnType ;

//--- Constructor
  public : cPtr_functionPrototypeDeclarationForGeneration (const GALGAS_bool & in_mHasHeader,
                                                           const GALGAS_string & in_mImplementationCppFileName,
                                                           const GALGAS_string & in_mFunctionName,
                                                           const GALGAS_formalInputParameterListForGeneration & in_mFormalArgumentList,
                                                           const GALGAS_unifiedTypeMap_2D_proxy & in_mReturnType
                                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mFunctionName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalInputParameterListForGeneration reader_mFormalArgumentList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy reader_mReturnType (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @functionImplementationForGeneration class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_functionImplementationForGeneration : public GALGAS_functionPrototypeDeclarationForGeneration {
//--- Constructor
  public : GALGAS_functionImplementationForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_functionImplementationForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_functionImplementationForGeneration * ptr (void) const { return (const cPtr_functionImplementationForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_functionImplementationForGeneration (const cPtr_functionImplementationForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_functionImplementationForGeneration extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_functionImplementationForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                                              const class GALGAS_string & inOperand1,
                                                                              const class GALGAS_string & inOperand2,
                                                                              const class GALGAS_formalInputParameterListForGeneration & inOperand3,
                                                                              const class GALGAS_unifiedTypeMap_2D_proxy & inOperand4,
                                                                              const class GALGAS_string & inOperand5,
                                                                              const class GALGAS_semanticInstructionListForGeneration & inOperand6
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_functionImplementationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListForGeneration reader_mFunctionInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mResultVariableCppName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_functionImplementationForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionImplementationForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @functionImplementationForGeneration class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_functionImplementationForGeneration : public cPtr_functionPrototypeDeclarationForGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mResultVariableCppName ;
  public : GALGAS_semanticInstructionListForGeneration mAttribute_mFunctionInstructionList ;

//--- Constructor
  public : cPtr_functionImplementationForGeneration (const GALGAS_bool & in_mHasHeader,
                                                     const GALGAS_string & in_mImplementationCppFileName,
                                                     const GALGAS_string & in_mFunctionName,
                                                     const GALGAS_formalInputParameterListForGeneration & in_mFormalArgumentList,
                                                     const GALGAS_unifiedTypeMap_2D_proxy & in_mReturnType,
                                                     const GALGAS_string & in_mResultVariableCppName,
                                                     const GALGAS_semanticInstructionListForGeneration & in_mFunctionInstructionList
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mResultVariableCppName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListForGeneration reader_mFunctionInstructionList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @grammarForGeneration class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_grammarForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--- Constructor
  public : GALGAS_grammarForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_grammarForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_grammarForGeneration * ptr (void) const { return (const cPtr_grammarForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_grammarForGeneration (const cPtr_grammarForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_grammarForGeneration extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_grammarForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                               const class GALGAS_string & inOperand1,
                                                               const class GALGAS_string & inOperand2,
                                                               const class GALGAS_string & inOperand3,
                                                               const class GALGAS_nonTerminalSymbolMapForGrammarAnalysis & inOperand4,
                                                               const class GALGAS_nonTerminalToAddList & inOperand5,
                                                               const class GALGAS_bool & inOperand6,
                                                               const class GALGAS_lstringlist & inOperand7,
                                                               const class GALGAS_string & inOperand8,
                                                               const class GALGAS_bool & inOperand9,
                                                               const class GALGAS_string & inOperand10
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_grammarForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mCppFileContents (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mGrammarName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mHasIndexing (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mHasTranslateFeature (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mLexiqueName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_nonTerminalSymbolMapForGrammarAnalysis reader_mNonTerminalMapForGrammarAnalysis (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_nonTerminalToAddList reader_mNonTerminalToAddList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mStartSymbolName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist reader_mSyntaxComponents (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_grammarForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @grammarForGeneration class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_grammarForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mGrammarName ;
  public : GALGAS_string mAttribute_mLexiqueName ;
  public : GALGAS_nonTerminalSymbolMapForGrammarAnalysis mAttribute_mNonTerminalMapForGrammarAnalysis ;
  public : GALGAS_nonTerminalToAddList mAttribute_mNonTerminalToAddList ;
  public : GALGAS_bool mAttribute_mHasIndexing ;
  public : GALGAS_lstringlist mAttribute_mSyntaxComponents ;
  public : GALGAS_string mAttribute_mStartSymbolName ;
  public : GALGAS_bool mAttribute_mHasTranslateFeature ;
  public : GALGAS_string mAttribute_mCppFileContents ;

//--- Constructor
  public : cPtr_grammarForGeneration (const GALGAS_bool & in_mHasHeader,
                                      const GALGAS_string & in_mImplementationCppFileName,
                                      const GALGAS_string & in_mGrammarName,
                                      const GALGAS_string & in_mLexiqueName,
                                      const GALGAS_nonTerminalSymbolMapForGrammarAnalysis & in_mNonTerminalMapForGrammarAnalysis,
                                      const GALGAS_nonTerminalToAddList & in_mNonTerminalToAddList,
                                      const GALGAS_bool & in_mHasIndexing,
                                      const GALGAS_lstringlist & in_mSyntaxComponents,
                                      const GALGAS_string & in_mStartSymbolName,
                                      const GALGAS_bool & in_mHasTranslateFeature,
                                      const GALGAS_string & in_mCppFileContents
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mGrammarName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mLexiqueName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_nonTerminalSymbolMapForGrammarAnalysis reader_mNonTerminalMapForGrammarAnalysis (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_nonTerminalToAddList reader_mNonTerminalToAddList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mHasIndexing (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist reader_mSyntaxComponents (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mStartSymbolName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mHasTranslateFeature (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mCppFileContents (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @lexiqueDeclarationForGeneration class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lexiqueDeclarationForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--- Constructor
  public : GALGAS_lexiqueDeclarationForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_lexiqueDeclarationForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_lexiqueDeclarationForGeneration * ptr (void) const { return (const cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_lexiqueDeclarationForGeneration (const cPtr_lexiqueDeclarationForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_lexiqueDeclarationForGeneration extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_lexiqueDeclarationForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                                          const class GALGAS_string & inOperand1,
                                                                          const class GALGAS_string & inOperand2,
                                                                          const class GALGAS_string & inOperand3,
                                                                          const class GALGAS_string & inOperand4,
                                                                          const class GALGAS_string & inOperand5,
                                                                          const class GALGAS_string & inOperand6
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_lexiqueDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mCocoaHeader (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mCocoaImplementation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mCppContents (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mHeaderContents (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mLexiqueName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexiqueDeclarationForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Pointer class for @lexiqueDeclarationForGeneration class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_lexiqueDeclarationForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mLexiqueName ;
  public : GALGAS_string mAttribute_mHeaderContents ;
  public : GALGAS_string mAttribute_mCppContents ;
  public : GALGAS_string mAttribute_mCocoaHeader ;
  public : GALGAS_string mAttribute_mCocoaImplementation ;

//--- Constructor
  public : cPtr_lexiqueDeclarationForGeneration (const GALGAS_bool & in_mHasHeader,
                                                 const GALGAS_string & in_mImplementationCppFileName,
                                                 const GALGAS_string & in_mLexiqueName,
                                                 const GALGAS_string & in_mHeaderContents,
                                                 const GALGAS_string & in_mCppContents,
                                                 const GALGAS_string & in_mCocoaHeader,
                                                 const GALGAS_string & in_mCocoaImplementation
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mLexiqueName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mHeaderContents (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mCppContents (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mCocoaHeader (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mCocoaImplementation (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @onceFunctionDeclarationForGeneration class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_onceFunctionDeclarationForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--- Constructor
  public : GALGAS_onceFunctionDeclarationForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_onceFunctionDeclarationForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_onceFunctionDeclarationForGeneration * ptr (void) const { return (const cPtr_onceFunctionDeclarationForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_onceFunctionDeclarationForGeneration (const cPtr_onceFunctionDeclarationForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_onceFunctionDeclarationForGeneration extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_onceFunctionDeclarationForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                                               const class GALGAS_string & inOperand1,
                                                                               const class GALGAS_string & inOperand2,
                                                                               const class GALGAS_unifiedTypeMap_2D_proxy & inOperand3,
                                                                               const class GALGAS_string & inOperand4,
                                                                               const class GALGAS_semanticInstructionListForGeneration & inOperand5
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_onceFunctionDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListForGeneration reader_mFunctionInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mFunctionName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mResultVariableCppName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mReturnType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_onceFunctionDeclarationForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @onceFunctionDeclarationForGeneration class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_onceFunctionDeclarationForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mFunctionName ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mReturnType ;
  public : GALGAS_string mAttribute_mResultVariableCppName ;
  public : GALGAS_semanticInstructionListForGeneration mAttribute_mFunctionInstructionList ;

//--- Constructor
  public : cPtr_onceFunctionDeclarationForGeneration (const GALGAS_bool & in_mHasHeader,
                                                      const GALGAS_string & in_mImplementationCppFileName,
                                                      const GALGAS_string & in_mFunctionName,
                                                      const GALGAS_unifiedTypeMap_2D_proxy & in_mReturnType,
                                                      const GALGAS_string & in_mResultVariableCppName,
                                                      const GALGAS_semanticInstructionListForGeneration & in_mFunctionInstructionList
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mFunctionName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy reader_mReturnType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mResultVariableCppName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListForGeneration reader_mFunctionInstructionList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @optionComponentForGeneration class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_optionComponentForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--- Constructor
  public : GALGAS_optionComponentForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_optionComponentForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_optionComponentForGeneration * ptr (void) const { return (const cPtr_optionComponentForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_optionComponentForGeneration (const cPtr_optionComponentForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_optionComponentForGeneration extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_optionComponentForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                                       const class GALGAS_string & inOperand1,
                                                                       const class GALGAS_bool & inOperand2,
                                                                       const class GALGAS_string & inOperand3,
                                                                       const class GALGAS_commandLineOptionMap & inOperand4,
                                                                       const class GALGAS_commandLineOptionMap & inOperand5,
                                                                       const class GALGAS_commandLineOptionMap & inOperand6,
                                                                       const class GALGAS_commandLineOptionMap & inOperand7
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_optionComponentForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_commandLineOptionMap reader_mBoolOptionMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsPredefined (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mOptionComponentName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_commandLineOptionMap reader_mStringListOptionMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_commandLineOptionMap reader_mStringOptionMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_commandLineOptionMap reader_mUIntOptionMap (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_optionComponentForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionComponentForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @optionComponentForGeneration class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_optionComponentForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Attributes
  public : GALGAS_bool mAttribute_mIsPredefined ;
  public : GALGAS_string mAttribute_mOptionComponentName ;
  public : GALGAS_commandLineOptionMap mAttribute_mBoolOptionMap ;
  public : GALGAS_commandLineOptionMap mAttribute_mUIntOptionMap ;
  public : GALGAS_commandLineOptionMap mAttribute_mStringOptionMap ;
  public : GALGAS_commandLineOptionMap mAttribute_mStringListOptionMap ;

//--- Constructor
  public : cPtr_optionComponentForGeneration (const GALGAS_bool & in_mHasHeader,
                                              const GALGAS_string & in_mImplementationCppFileName,
                                              const GALGAS_bool & in_mIsPredefined,
                                              const GALGAS_string & in_mOptionComponentName,
                                              const GALGAS_commandLineOptionMap & in_mBoolOptionMap,
                                              const GALGAS_commandLineOptionMap & in_mUIntOptionMap,
                                              const GALGAS_commandLineOptionMap & in_mStringOptionMap,
                                              const GALGAS_commandLineOptionMap & in_mStringListOptionMap
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mIsPredefined (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mOptionComponentName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_commandLineOptionMap reader_mBoolOptionMap (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_commandLineOptionMap reader_mUIntOptionMap (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_commandLineOptionMap reader_mStringOptionMap (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_commandLineOptionMap reader_mStringListOptionMap (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @overrideCategoryReaderForGeneration class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_overrideCategoryReaderForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--- Constructor
  public : GALGAS_overrideCategoryReaderForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_overrideCategoryReaderForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_overrideCategoryReaderForGeneration * ptr (void) const { return (const cPtr_overrideCategoryReaderForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_overrideCategoryReaderForGeneration (const cPtr_overrideCategoryReaderForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_overrideCategoryReaderForGeneration extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_overrideCategoryReaderForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                                              const class GALGAS_string & inOperand1,
                                                                              const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                              const class GALGAS_string & inOperand3,
                                                                              const class GALGAS_string & inOperand4,
                                                                              const class GALGAS_unifiedTypeMap_2D_proxy & inOperand5,
                                                                              const class GALGAS_string & inOperand6,
                                                                              const class GALGAS_formalInputParameterListForGeneration & inOperand7,
                                                                              const class GALGAS_typedPropertyList & inOperand8,
                                                                              const class GALGAS_semanticInstructionListForGeneration & inOperand9
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_overrideCategoryReaderForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mBaseTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalInputParameterListForGeneration reader_mOverridingCategoryReaderFormalParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mOverridingCategoryReaderName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mReceiverType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mResultType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mResultVarCppName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListForGeneration reader_mSemanticInstructionListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typedPropertyList reader_mTypedAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_overrideCategoryReaderForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overrideCategoryReaderForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Pointer class for @overrideCategoryReaderForGeneration class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_overrideCategoryReaderForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mReceiverType ;
  public : GALGAS_string mAttribute_mBaseTypeName ;
  public : GALGAS_string mAttribute_mOverridingCategoryReaderName ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mResultType ;
  public : GALGAS_string mAttribute_mResultVarCppName ;
  public : GALGAS_formalInputParameterListForGeneration mAttribute_mOverridingCategoryReaderFormalParameterList ;
  public : GALGAS_typedPropertyList mAttribute_mTypedAttributeList ;
  public : GALGAS_semanticInstructionListForGeneration mAttribute_mSemanticInstructionListForGeneration ;

//--- Constructor
  public : cPtr_overrideCategoryReaderForGeneration (const GALGAS_bool & in_mHasHeader,
                                                     const GALGAS_string & in_mImplementationCppFileName,
                                                     const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                     const GALGAS_string & in_mBaseTypeName,
                                                     const GALGAS_string & in_mOverridingCategoryReaderName,
                                                     const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                     const GALGAS_string & in_mResultVarCppName,
                                                     const GALGAS_formalInputParameterListForGeneration & in_mOverridingCategoryReaderFormalParameterList,
                                                     const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                     const GALGAS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy reader_mReceiverType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mBaseTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mOverridingCategoryReaderName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy reader_mResultType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mResultVarCppName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalInputParameterListForGeneration reader_mOverridingCategoryReaderFormalParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_typedPropertyList reader_mTypedAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListForGeneration reader_mSemanticInstructionListForGeneration (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @overridingCategoryMethodForGeneration class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_overridingCategoryMethodForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--- Constructor
  public : GALGAS_overridingCategoryMethodForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_overridingCategoryMethodForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_overridingCategoryMethodForGeneration * ptr (void) const { return (const cPtr_overridingCategoryMethodForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_overridingCategoryMethodForGeneration (const cPtr_overridingCategoryMethodForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_overridingCategoryMethodForGeneration extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_overridingCategoryMethodForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                                                const class GALGAS_string & inOperand1,
                                                                                const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                                const class GALGAS_string & inOperand3,
                                                                                const class GALGAS_string & inOperand4,
                                                                                const class GALGAS_formalParameterListForGeneration & inOperand5,
                                                                                const class GALGAS_typedPropertyList & inOperand6,
                                                                                const class GALGAS_semanticInstructionListForGeneration & inOperand7
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_overridingCategoryMethodForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mBaseTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListForGeneration reader_mCategoryMethodFormalParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mCategoryMethodName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mReceiverType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListForGeneration reader_mSemanticInstructionListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typedPropertyList reader_mTypedAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_overridingCategoryMethodForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingCategoryMethodForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Pointer class for @overridingCategoryMethodForGeneration class                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_overridingCategoryMethodForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mReceiverType ;
  public : GALGAS_string mAttribute_mBaseTypeName ;
  public : GALGAS_string mAttribute_mCategoryMethodName ;
  public : GALGAS_formalParameterListForGeneration mAttribute_mCategoryMethodFormalParameterList ;
  public : GALGAS_typedPropertyList mAttribute_mTypedAttributeList ;
  public : GALGAS_semanticInstructionListForGeneration mAttribute_mSemanticInstructionListForGeneration ;

//--- Constructor
  public : cPtr_overridingCategoryMethodForGeneration (const GALGAS_bool & in_mHasHeader,
                                                       const GALGAS_string & in_mImplementationCppFileName,
                                                       const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                       const GALGAS_string & in_mBaseTypeName,
                                                       const GALGAS_string & in_mCategoryMethodName,
                                                       const GALGAS_formalParameterListForGeneration & in_mCategoryMethodFormalParameterList,
                                                       const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                       const GALGAS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy reader_mReceiverType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mBaseTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mCategoryMethodName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalParameterListForGeneration reader_mCategoryMethodFormalParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_typedPropertyList reader_mTypedAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListForGeneration reader_mSemanticInstructionListForGeneration (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @overridingCategoryModifierForGeneration class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_overridingCategoryModifierForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--- Constructor
  public : GALGAS_overridingCategoryModifierForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_overridingCategoryModifierForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_overridingCategoryModifierForGeneration * ptr (void) const { return (const cPtr_overridingCategoryModifierForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_overridingCategoryModifierForGeneration (const cPtr_overridingCategoryModifierForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_overridingCategoryModifierForGeneration extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_overridingCategoryModifierForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                                                  const class GALGAS_string & inOperand1,
                                                                                  const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                                  const class GALGAS_string & inOperand3,
                                                                                  const class GALGAS_string & inOperand4,
                                                                                  const class GALGAS_formalParameterListForGeneration & inOperand5,
                                                                                  const class GALGAS_typedPropertyList & inOperand6,
                                                                                  const class GALGAS_semanticInstructionListForGeneration & inOperand7
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_overridingCategoryModifierForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mBaseTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListForGeneration reader_mCategoryModifierFormalParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mCategoryModifierName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mReceiverType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListForGeneration reader_mSemanticInstructionListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typedPropertyList reader_mTypedAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_overridingCategoryModifierForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingCategoryModifierForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Pointer class for @overridingCategoryModifierForGeneration class                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_overridingCategoryModifierForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mReceiverType ;
  public : GALGAS_string mAttribute_mBaseTypeName ;
  public : GALGAS_string mAttribute_mCategoryModifierName ;
  public : GALGAS_formalParameterListForGeneration mAttribute_mCategoryModifierFormalParameterList ;
  public : GALGAS_typedPropertyList mAttribute_mTypedAttributeList ;
  public : GALGAS_semanticInstructionListForGeneration mAttribute_mSemanticInstructionListForGeneration ;

//--- Constructor
  public : cPtr_overridingCategoryModifierForGeneration (const GALGAS_bool & in_mHasHeader,
                                                         const GALGAS_string & in_mImplementationCppFileName,
                                                         const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                         const GALGAS_string & in_mBaseTypeName,
                                                         const GALGAS_string & in_mCategoryModifierName,
                                                         const GALGAS_formalParameterListForGeneration & in_mCategoryModifierFormalParameterList,
                                                         const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                         const GALGAS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration
                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy reader_mReceiverType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mBaseTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mCategoryModifierName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalParameterListForGeneration reader_mCategoryModifierFormalParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_typedPropertyList reader_mTypedAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListForGeneration reader_mSemanticInstructionListForGeneration (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

#endif
