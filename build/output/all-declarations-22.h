#ifndef all_2D_declarations_2D__32__32__ENTITIES_DEFINED
#define all_2D_declarations_2D__32__32__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-21.h"

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @semanticTypeForGeneration class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_semanticTypeForGeneration : public GALGAS_semanticDeclarationForGeneration {
//--- Constructor
  public : GALGAS_semanticTypeForGeneration (void) ;

//---
  public : inline const class cPtr_semanticTypeForGeneration * ptr (void) const { return (const cPtr_semanticTypeForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_semanticTypeForGeneration (const cPtr_semanticTypeForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_semanticTypeForGeneration extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_semanticTypeForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mTypeProxy (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_semanticTypeForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticTypeForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @semanticTypeForGeneration class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_semanticTypeForGeneration : public cPtr_semanticDeclarationForGeneration {
//--- Attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mTypeProxy ;

//--- Constructor
  public : cPtr_semanticTypeForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy
                                           COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy reader_mTypeProxy (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @arrayTypeForGeneration class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_arrayTypeForGeneration : public GALGAS_semanticTypeForGeneration {
//--- Constructor
  public : GALGAS_arrayTypeForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_arrayTypeForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_arrayTypeForGeneration * ptr (void) const { return (const cPtr_arrayTypeForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_arrayTypeForGeneration (const cPtr_arrayTypeForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_arrayTypeForGeneration extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_arrayTypeForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                 const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                 const class GALGAS_uint & inOperand2
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_arrayTypeForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint reader_mDimension (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mElementTypeProxy (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_arrayTypeForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayTypeForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @arrayTypeForGeneration class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_arrayTypeForGeneration : public cPtr_semanticTypeForGeneration {
//--- Attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mElementTypeProxy ;
  public : GALGAS_uint mAttribute_mDimension ;

//--- Constructor
  public : cPtr_arrayTypeForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy,
                                        const GALGAS_unifiedTypeMap_2D_proxy & in_mElementTypeProxy,
                                        const GALGAS_uint & in_mDimension
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy reader_mElementTypeProxy (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_uint reader_mDimension (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @classTypeForGeneration class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_classTypeForGeneration : public GALGAS_semanticTypeForGeneration {
//--- Constructor
  public : GALGAS_classTypeForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_classTypeForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_classTypeForGeneration * ptr (void) const { return (const cPtr_classTypeForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_classTypeForGeneration (const cPtr_classTypeForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_classTypeForGeneration extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_classTypeForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                 const class GALGAS_bool & inOperand1,
                                                                 const class GALGAS_lstring & inOperand2,
                                                                 const class GALGAS_unifiedTypeMap_2D_proxy & inOperand3,
                                                                 const class GALGAS_typedPropertyList & inOperand4,
                                                                 const class GALGAS_typedPropertyList & inOperand5,
                                                                 const class GALGAS_bool & inOperand6
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_classTypeForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_typedPropertyList reader_mAllTypedAttributeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mClassTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mGenerateHeaderInSeparateFile (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mIsAbstract (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mSuperClass (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typedPropertyList reader_mTypedAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_classTypeForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classTypeForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @classTypeForGeneration class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_classTypeForGeneration : public cPtr_semanticTypeForGeneration {
//--- Attributes
  public : GALGAS_bool mAttribute_mIsAbstract ;
  public : GALGAS_lstring mAttribute_mClassTypeName ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mSuperClass ;
  public : GALGAS_typedPropertyList mAttribute_mAllTypedAttributeList ;
  public : GALGAS_typedPropertyList mAttribute_mTypedAttributeList ;
  public : GALGAS_bool mAttribute_mGenerateHeaderInSeparateFile ;

//--- Constructor
  public : cPtr_classTypeForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy,
                                        const GALGAS_bool & in_mIsAbstract,
                                        const GALGAS_lstring & in_mClassTypeName,
                                        const GALGAS_unifiedTypeMap_2D_proxy & in_mSuperClass,
                                        const GALGAS_typedPropertyList & in_mAllTypedAttributeList,
                                        const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                        const GALGAS_bool & in_mGenerateHeaderInSeparateFile
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mIsAbstract (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mClassTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy reader_mSuperClass (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_typedPropertyList reader_mAllTypedAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_typedPropertyList reader_mTypedAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mGenerateHeaderInSeparateFile (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @enumTypeForGeneration class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_enumTypeForGeneration : public GALGAS_semanticTypeForGeneration {
//--- Constructor
  public : GALGAS_enumTypeForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_enumTypeForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_enumTypeForGeneration * ptr (void) const { return (const cPtr_enumTypeForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_enumTypeForGeneration (const cPtr_enumTypeForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumTypeForGeneration extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_enumTypeForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                const class GALGAS_enumConstantListForGeneration & inOperand1
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_enumTypeForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_enumConstantListForGeneration reader_mConstantList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumTypeForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumTypeForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @enumTypeForGeneration class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_enumTypeForGeneration : public cPtr_semanticTypeForGeneration {
//--- Attributes
  public : GALGAS_enumConstantListForGeneration mAttribute_mConstantList ;

//--- Constructor
  public : cPtr_enumTypeForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy,
                                       const GALGAS_enumConstantListForGeneration & in_mConstantList
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_enumConstantListForGeneration reader_mConstantList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @externTypeDeclarationForGeneration class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_externTypeDeclarationForGeneration : public GALGAS_semanticTypeForGeneration {
//--- Constructor
  public : GALGAS_externTypeDeclarationForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_externTypeDeclarationForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_externTypeDeclarationForGeneration * ptr (void) const { return (const cPtr_externTypeDeclarationForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_externTypeDeclarationForGeneration (const cPtr_externTypeDeclarationForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_externTypeDeclarationForGeneration extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_externTypeDeclarationForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                             const class GALGAS_string & inOperand1,
                                                                             const class GALGAS_string & inOperand2,
                                                                             const class GALGAS_string & inOperand3
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_externTypeDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mCppClassCode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mCppPreDeclarationCode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mExternTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_externTypeDeclarationForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externTypeDeclarationForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @externTypeDeclarationForGeneration class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_externTypeDeclarationForGeneration : public cPtr_semanticTypeForGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mExternTypeName ;
  public : GALGAS_string mAttribute_mCppPreDeclarationCode ;
  public : GALGAS_string mAttribute_mCppClassCode ;

//--- Constructor
  public : cPtr_externTypeDeclarationForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy,
                                                    const GALGAS_string & in_mExternTypeName,
                                                    const GALGAS_string & in_mCppPreDeclarationCode,
                                                    const GALGAS_string & in_mCppClassCode
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mExternTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mCppPreDeclarationCode (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mCppClassCode (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @graphDeclarationForGeneration class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_graphDeclarationForGeneration : public GALGAS_semanticTypeForGeneration {
//--- Constructor
  public : GALGAS_graphDeclarationForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_graphDeclarationForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_graphDeclarationForGeneration * ptr (void) const { return (const cPtr_graphDeclarationForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_graphDeclarationForGeneration (const cPtr_graphDeclarationForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_graphDeclarationForGeneration extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_graphDeclarationForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                        const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                        const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                        const class GALGAS_graphInsertModifierList & inOperand3
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_graphDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mAssociatedListElementTypeProxy (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mAssociatedListTypeProxy (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_graphInsertModifierList reader_mInsertModifierList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_graphDeclarationForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_graphDeclarationForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @graphDeclarationForGeneration class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_graphDeclarationForGeneration : public cPtr_semanticTypeForGeneration {
//--- Attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mAssociatedListTypeProxy ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mAssociatedListElementTypeProxy ;
  public : GALGAS_graphInsertModifierList mAttribute_mInsertModifierList ;

//--- Constructor
  public : cPtr_graphDeclarationForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy,
                                               const GALGAS_unifiedTypeMap_2D_proxy & in_mAssociatedListTypeProxy,
                                               const GALGAS_unifiedTypeMap_2D_proxy & in_mAssociatedListElementTypeProxy,
                                               const GALGAS_graphInsertModifierList & in_mInsertModifierList
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy reader_mAssociatedListTypeProxy (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy reader_mAssociatedListElementTypeProxy (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_graphInsertModifierList reader_mInsertModifierList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @listTypeForGeneration class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_listTypeForGeneration : public GALGAS_semanticTypeForGeneration {
//--- Constructor
  public : GALGAS_listTypeForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_listTypeForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_listTypeForGeneration * ptr (void) const { return (const cPtr_listTypeForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_listTypeForGeneration (const cPtr_listTypeForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_listTypeForGeneration extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_listTypeForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                const class GALGAS_typedPropertyList & inOperand2
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_listTypeForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mListElementTypeIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typedPropertyList reader_mTypedAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_listTypeForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_listTypeForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Pointer class for @listTypeForGeneration class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_listTypeForGeneration : public cPtr_semanticTypeForGeneration {
//--- Attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mListElementTypeIndex ;
  public : GALGAS_typedPropertyList mAttribute_mTypedAttributeList ;

//--- Constructor
  public : cPtr_listTypeForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy,
                                       const GALGAS_unifiedTypeMap_2D_proxy & in_mListElementTypeIndex,
                                       const GALGAS_typedPropertyList & in_mTypedAttributeList
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy reader_mListElementTypeIndex (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_typedPropertyList reader_mTypedAttributeList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @listmapTypeForGeneration class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_listmapTypeForGeneration : public GALGAS_semanticTypeForGeneration {
//--- Constructor
  public : GALGAS_listmapTypeForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_listmapTypeForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_listmapTypeForGeneration * ptr (void) const { return (const cPtr_listmapTypeForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_listmapTypeForGeneration (const cPtr_listmapTypeForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_listmapTypeForGeneration extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_listmapTypeForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                   const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                   const class GALGAS_typedPropertyList & inOperand2,
                                                                   const class GALGAS_unifiedTypeMap_2D_proxy & inOperand3
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_listmapTypeForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mAssociatedListMapElementTypeIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mAssociatedListTypeIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typedPropertyList reader_mAssociatedListTypedAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_listmapTypeForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_listmapTypeForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @listmapTypeForGeneration class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_listmapTypeForGeneration : public cPtr_semanticTypeForGeneration {
//--- Attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mAssociatedListTypeIndex ;
  public : GALGAS_typedPropertyList mAttribute_mAssociatedListTypedAttributeList ;
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mAssociatedListMapElementTypeIndex ;

//--- Constructor
  public : cPtr_listmapTypeForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy,
                                          const GALGAS_unifiedTypeMap_2D_proxy & in_mAssociatedListTypeIndex,
                                          const GALGAS_typedPropertyList & in_mAssociatedListTypedAttributeList,
                                          const GALGAS_unifiedTypeMap_2D_proxy & in_mAssociatedListMapElementTypeIndex
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy reader_mAssociatedListTypeIndex (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_typedPropertyList reader_mAssociatedListTypedAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy reader_mAssociatedListMapElementTypeIndex (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @mapProxyTypeForGeneration class                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_mapProxyTypeForGeneration : public GALGAS_semanticTypeForGeneration {
//--- Constructor
  public : GALGAS_mapProxyTypeForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_mapProxyTypeForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_mapProxyTypeForGeneration * ptr (void) const { return (const cPtr_mapProxyTypeForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_mapProxyTypeForGeneration (const cPtr_mapProxyTypeForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_mapProxyTypeForGeneration extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_mapProxyTypeForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                    const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                    const class GALGAS_typedPropertyList & inOperand2,
                                                                    const class GALGAS_mapSearchMethodListAST & inOperand3
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_mapProxyTypeForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mAssociatedMapTypeProxy (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typedPropertyList reader_mAssociatedMapTypedAttributeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapSearchMethodListAST reader_mSearchMethodList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_mapProxyTypeForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapProxyTypeForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @mapProxyTypeForGeneration class                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_mapProxyTypeForGeneration : public cPtr_semanticTypeForGeneration {
//--- Attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mAssociatedMapTypeProxy ;
  public : GALGAS_typedPropertyList mAttribute_mAssociatedMapTypedAttributeList ;
  public : GALGAS_mapSearchMethodListAST mAttribute_mSearchMethodList ;

//--- Constructor
  public : cPtr_mapProxyTypeForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy,
                                           const GALGAS_unifiedTypeMap_2D_proxy & in_mAssociatedMapTypeProxy,
                                           const GALGAS_typedPropertyList & in_mAssociatedMapTypedAttributeList,
                                           const GALGAS_mapSearchMethodListAST & in_mSearchMethodList
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy reader_mAssociatedMapTypeProxy (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_typedPropertyList reader_mAssociatedMapTypedAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_mapSearchMethodListAST reader_mSearchMethodList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @mapTypeForGeneration class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_mapTypeForGeneration : public GALGAS_semanticTypeForGeneration {
//--- Constructor
  public : GALGAS_mapTypeForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_mapTypeForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_mapTypeForGeneration * ptr (void) const { return (const cPtr_mapTypeForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_mapTypeForGeneration (const cPtr_mapTypeForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_mapTypeForGeneration extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_mapTypeForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                               const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                               const class GALGAS_lstring & inOperand2,
                                                               const class GALGAS_typedPropertyList & inOperand3,
                                                               const class GALGAS_insertMethodListAST & inOperand4,
                                                               const class GALGAS_mapSearchMethodListAST & inOperand5,
                                                               const class GALGAS_mapRemoveMethodListAST & inOperand6,
                                                               const class GALGAS_bool & inOperand7
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_mapTypeForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mElementTypeProxy (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool reader_mHasInsertOrReplaceModifier (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_insertMethodListAST reader_mInsertMethodList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mMapTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapRemoveMethodListAST reader_mRemoveMethodList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapSearchMethodListAST reader_mSearchMethodList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typedPropertyList reader_mTypedAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_mapTypeForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapTypeForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @mapTypeForGeneration class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_mapTypeForGeneration : public cPtr_semanticTypeForGeneration {
//--- Attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mElementTypeProxy ;
  public : GALGAS_lstring mAttribute_mMapTypeName ;
  public : GALGAS_typedPropertyList mAttribute_mTypedAttributeList ;
  public : GALGAS_insertMethodListAST mAttribute_mInsertMethodList ;
  public : GALGAS_mapSearchMethodListAST mAttribute_mSearchMethodList ;
  public : GALGAS_mapRemoveMethodListAST mAttribute_mRemoveMethodList ;
  public : GALGAS_bool mAttribute_mHasInsertOrReplaceModifier ;

//--- Constructor
  public : cPtr_mapTypeForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy,
                                      const GALGAS_unifiedTypeMap_2D_proxy & in_mElementTypeProxy,
                                      const GALGAS_lstring & in_mMapTypeName,
                                      const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                      const GALGAS_insertMethodListAST & in_mInsertMethodList,
                                      const GALGAS_mapSearchMethodListAST & in_mSearchMethodList,
                                      const GALGAS_mapRemoveMethodListAST & in_mRemoveMethodList,
                                      const GALGAS_bool & in_mHasInsertOrReplaceModifier
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy reader_mElementTypeProxy (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mMapTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_typedPropertyList reader_mTypedAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_insertMethodListAST reader_mInsertMethodList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_mapSearchMethodListAST reader_mSearchMethodList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_mapRemoveMethodListAST reader_mRemoveMethodList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool reader_mHasInsertOrReplaceModifier (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @primitiveTypeForGeneration class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_primitiveTypeForGeneration : public GALGAS_semanticTypeForGeneration {
//--- Constructor
  public : GALGAS_primitiveTypeForGeneration (void) ;

//---
  public : inline const class cPtr_primitiveTypeForGeneration * ptr (void) const { return (const cPtr_primitiveTypeForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_primitiveTypeForGeneration (const cPtr_primitiveTypeForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_primitiveTypeForGeneration extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_primitiveTypeForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                     const class GALGAS_string & inOperand1,
                                                                     const class GALGAS_predefinedTypeKindEnum & inOperand2
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_primitiveTypeForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_predefinedTypeKindEnum reader_mKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mPredefinedTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_primitiveTypeForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primitiveTypeForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @primitiveTypeForGeneration class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_primitiveTypeForGeneration : public cPtr_semanticTypeForGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mPredefinedTypeName ;
  public : GALGAS_predefinedTypeKindEnum mAttribute_mKind ;

//--- Constructor
  public : cPtr_primitiveTypeForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy,
                                            const GALGAS_string & in_mPredefinedTypeName,
                                            const GALGAS_predefinedTypeKindEnum & in_mKind
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mPredefinedTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_predefinedTypeKindEnum reader_mKind (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @sharedMapTypeForGeneration class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_sharedMapTypeForGeneration : public GALGAS_semanticTypeForGeneration {
//--- Constructor
  public : GALGAS_sharedMapTypeForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_sharedMapTypeForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_sharedMapTypeForGeneration * ptr (void) const { return (const cPtr_sharedMapTypeForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_sharedMapTypeForGeneration (const cPtr_sharedMapTypeForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_sharedMapTypeForGeneration extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_sharedMapTypeForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                     const class GALGAS_lstring & inOperand1,
                                                                     const class GALGAS_typedPropertyList & inOperand2,
                                                                     const class GALGAS_insertMethodListAST & inOperand3,
                                                                     const class GALGAS_mapSearchMethodListAST & inOperand4,
                                                                     const class GALGAS_mapAutomatonStateMap & inOperand5,
                                                                     const class GALGAS_mapAutomatonActionMap & inOperand6,
                                                                     const class GALGAS_mapStateSortedList & inOperand7,
                                                                     const class GALGAS_mapOverrideList & inOperand8
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_sharedMapTypeForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_insertMethodListAST reader_mInsertMethodList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapAutomatonActionMap reader_mMapAutomatonActionMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapAutomatonStateMap reader_mMapAutomatonStateMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapOverrideList reader_mMapOverrideList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapStateSortedList reader_mMapStateSortedList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring reader_mMapTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mapSearchMethodListAST reader_mSearchMethodList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typedPropertyList reader_mTypedAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_sharedMapTypeForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sharedMapTypeForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Pointer class for @sharedMapTypeForGeneration class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_sharedMapTypeForGeneration : public cPtr_semanticTypeForGeneration {
//--- Attributes
  public : GALGAS_lstring mAttribute_mMapTypeName ;
  public : GALGAS_typedPropertyList mAttribute_mTypedAttributeList ;
  public : GALGAS_insertMethodListAST mAttribute_mInsertMethodList ;
  public : GALGAS_mapSearchMethodListAST mAttribute_mSearchMethodList ;
  public : GALGAS_mapAutomatonStateMap mAttribute_mMapAutomatonStateMap ;
  public : GALGAS_mapAutomatonActionMap mAttribute_mMapAutomatonActionMap ;
  public : GALGAS_mapStateSortedList mAttribute_mMapStateSortedList ;
  public : GALGAS_mapOverrideList mAttribute_mMapOverrideList ;

//--- Constructor
  public : cPtr_sharedMapTypeForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy,
                                            const GALGAS_lstring & in_mMapTypeName,
                                            const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                            const GALGAS_insertMethodListAST & in_mInsertMethodList,
                                            const GALGAS_mapSearchMethodListAST & in_mSearchMethodList,
                                            const GALGAS_mapAutomatonStateMap & in_mMapAutomatonStateMap,
                                            const GALGAS_mapAutomatonActionMap & in_mMapAutomatonActionMap,
                                            const GALGAS_mapStateSortedList & in_mMapStateSortedList,
                                            const GALGAS_mapOverrideList & in_mMapOverrideList
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring reader_mMapTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_typedPropertyList reader_mTypedAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_insertMethodListAST reader_mInsertMethodList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_mapSearchMethodListAST reader_mSearchMethodList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_mapAutomatonStateMap reader_mMapAutomatonStateMap (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_mapAutomatonActionMap reader_mMapAutomatonActionMap (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_mapStateSortedList reader_mMapStateSortedList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_mapOverrideList reader_mMapOverrideList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @sortedListTypeForGeneration class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_sortedListTypeForGeneration : public GALGAS_semanticTypeForGeneration {
//--- Constructor
  public : GALGAS_sortedListTypeForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_sortedListTypeForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_sortedListTypeForGeneration * ptr (void) const { return (const cPtr_sortedListTypeForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_sortedListTypeForGeneration (const cPtr_sortedListTypeForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_sortedListTypeForGeneration extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_sortedListTypeForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                      const class GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                      const class GALGAS_typedPropertyList & inOperand2,
                                                                      const class GALGAS_sortDescriptorListForGeneration & inOperand3
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_sortedListTypeForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy reader_mListElementTypeIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_sortDescriptorListForGeneration reader_mSortDescriptorList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typedPropertyList reader_mTypedAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_sortedListTypeForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sortedListTypeForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Pointer class for @sortedListTypeForGeneration class                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_sortedListTypeForGeneration : public cPtr_semanticTypeForGeneration {
//--- Attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mAttribute_mListElementTypeIndex ;
  public : GALGAS_typedPropertyList mAttribute_mTypedAttributeList ;
  public : GALGAS_sortDescriptorListForGeneration mAttribute_mSortDescriptorList ;

//--- Constructor
  public : cPtr_sortedListTypeForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy,
                                             const GALGAS_unifiedTypeMap_2D_proxy & in_mListElementTypeIndex,
                                             const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                             const GALGAS_sortDescriptorListForGeneration & in_mSortDescriptorList
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy reader_mListElementTypeIndex (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_typedPropertyList reader_mTypedAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_sortDescriptorListForGeneration reader_mSortDescriptorList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @structTypeForGeneration class                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_structTypeForGeneration : public GALGAS_semanticTypeForGeneration {
//--- Constructor
  public : GALGAS_structTypeForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_structTypeForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_structTypeForGeneration * ptr (void) const { return (const cPtr_structTypeForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_structTypeForGeneration (const cPtr_structTypeForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_structTypeForGeneration extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_structTypeForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                  const class GALGAS_typedPropertyList & inOperand1
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_structTypeForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_typedPropertyList reader_mTypedAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_structTypeForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structTypeForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @structTypeForGeneration class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_structTypeForGeneration : public cPtr_semanticTypeForGeneration {
//--- Attributes
  public : GALGAS_typedPropertyList mAttribute_mTypedAttributeList ;

//--- Constructor
  public : cPtr_structTypeForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy,
                                         const GALGAS_typedPropertyList & in_mTypedAttributeList
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_typedPropertyList reader_mTypedAttributeList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

#endif
