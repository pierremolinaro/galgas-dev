#pragma once

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-predefined-types.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-13.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Phase 1: @abstractExtensionMethodForGeneration class                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_abstractExtensionMethodForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--- Constructor
  public : GALGAS_abstractExtensionMethodForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_abstractExtensionMethodForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_abstractExtensionMethodForGeneration * ptr (void) const { return (const cPtr_abstractExtensionMethodForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_abstractExtensionMethodForGeneration (const cPtr_abstractExtensionMethodForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_abstractExtensionMethodForGeneration extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_abstractExtensionMethodForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                                                     const class GALGAS_string & inOperand1,
                                                                                     const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                                     const class GALGAS_string & inOperand3,
                                                                                     const class GALGAS_formalParameterListForGeneration & inOperand4
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_abstractExtensionMethodForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMAbstractExtensionMethodFormalParameterList (class GALGAS_formalParameterListForGeneration inArgument0
                                                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMAbstractExtensionMethodName (class GALGAS_string inArgument0
                                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMReceiverType (class GALGAS_unifiedTypeMap_2D_proxy inArgument0
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListForGeneration getter_mAbstractExtensionMethodFormalParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mAbstractExtensionMethodName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mReceiverType (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractExtensionMethodForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractExtensionMethodForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Phase 2: pointer class for @abstractExtensionMethodForGeneration class                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_abstractExtensionMethodForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mReceiverType ;
  public : GALGAS_string mProperty_mAbstractExtensionMethodName ;
  public : GALGAS_formalParameterListForGeneration mProperty_mAbstractExtensionMethodFormalParameterList ;

//--- Constructor
  public : cPtr_abstractExtensionMethodForGeneration (const GALGAS_bool & in_mHasHeader,
                                                      const GALGAS_string & in_mImplementationCppFileName,
                                                      const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                      const GALGAS_string & in_mAbstractExtensionMethodName,
                                                      const GALGAS_formalParameterListForGeneration & in_mAbstractExtensionMethodFormalParameterList
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy getter_mReceiverType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_proxy inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mAbstractExtensionMethodName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMAbstractExtensionMethodName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalParameterListForGeneration getter_mAbstractExtensionMethodFormalParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMAbstractExtensionMethodFormalParameterList (GALGAS_formalParameterListForGeneration inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Phase 1: @abstractExtensionSetterForGeneration class                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_abstractExtensionSetterForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--- Constructor
  public : GALGAS_abstractExtensionSetterForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_abstractExtensionSetterForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_abstractExtensionSetterForGeneration * ptr (void) const { return (const cPtr_abstractExtensionSetterForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_abstractExtensionSetterForGeneration (const cPtr_abstractExtensionSetterForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_abstractExtensionSetterForGeneration extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_abstractExtensionSetterForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                                                     const class GALGAS_string & inOperand1,
                                                                                     const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                                     const class GALGAS_string & inOperand3,
                                                                                     const class GALGAS_formalParameterListForGeneration & inOperand4
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_abstractExtensionSetterForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMAbstractExtensionSetterFormalParameterList (class GALGAS_formalParameterListForGeneration inArgument0
                                                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMAbstractExtensionSetterName (class GALGAS_string inArgument0
                                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMReceiverType (class GALGAS_unifiedTypeMap_2D_proxy inArgument0
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListForGeneration getter_mAbstractExtensionSetterFormalParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mAbstractExtensionSetterName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mReceiverType (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractExtensionSetterForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractExtensionSetterForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Phase 2: pointer class for @abstractExtensionSetterForGeneration class                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_abstractExtensionSetterForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mReceiverType ;
  public : GALGAS_string mProperty_mAbstractExtensionSetterName ;
  public : GALGAS_formalParameterListForGeneration mProperty_mAbstractExtensionSetterFormalParameterList ;

//--- Constructor
  public : cPtr_abstractExtensionSetterForGeneration (const GALGAS_bool & in_mHasHeader,
                                                      const GALGAS_string & in_mImplementationCppFileName,
                                                      const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                      const GALGAS_string & in_mAbstractExtensionSetterName,
                                                      const GALGAS_formalParameterListForGeneration & in_mAbstractExtensionSetterFormalParameterList
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy getter_mReceiverType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_proxy inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mAbstractExtensionSetterName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMAbstractExtensionSetterName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalParameterListForGeneration getter_mAbstractExtensionSetterFormalParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMAbstractExtensionSetterFormalParameterList (GALGAS_formalParameterListForGeneration inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Phase 1: @extensionGetterForGeneration class                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_extensionGetterForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--- Constructor
  public : GALGAS_extensionGetterForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_extensionGetterForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_extensionGetterForGeneration * ptr (void) const { return (const cPtr_extensionGetterForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_extensionGetterForGeneration (const cPtr_extensionGetterForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_extensionGetterForGeneration extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_extensionGetterForGeneration constructor_new (const class GALGAS_bool & inOperand0,
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
  public : typeComparisonResult objectCompare (const GALGAS_extensionGetterForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMExtensionGetterFormalParameterList (class GALGAS_formalInputParameterListForGeneration inArgument0
                                                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMExtensionGetterName (class GALGAS_string inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMImplementedAsFunction (class GALGAS_bool inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMReceiverType (class GALGAS_unifiedTypeMap_2D_proxy inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMResultType (class GALGAS_unifiedTypeMap_2D_proxy inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMResultVarCppName (class GALGAS_string inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSemanticInstructionListForGeneration (class GALGAS_semanticInstructionListForGeneration inArgument0
                                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTypedAttributeList (class GALGAS_typedPropertyList inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_formalInputParameterListForGeneration getter_mExtensionGetterFormalParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mExtensionGetterName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mImplementedAsFunction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mReceiverType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mResultType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mResultVarCppName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListForGeneration getter_mSemanticInstructionListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typedPropertyList getter_mTypedAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_extensionGetterForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Phase 2: pointer class for @extensionGetterForGeneration class                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_extensionGetterForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mReceiverType ;
  public : GALGAS_string mProperty_mExtensionGetterName ;
  public : GALGAS_bool mProperty_mImplementedAsFunction ;
  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mResultType ;
  public : GALGAS_string mProperty_mResultVarCppName ;
  public : GALGAS_formalInputParameterListForGeneration mProperty_mExtensionGetterFormalParameterList ;
  public : GALGAS_typedPropertyList mProperty_mTypedAttributeList ;
  public : GALGAS_semanticInstructionListForGeneration mProperty_mSemanticInstructionListForGeneration ;

//--- Constructor
  public : cPtr_extensionGetterForGeneration (const GALGAS_bool & in_mHasHeader,
                                              const GALGAS_string & in_mImplementationCppFileName,
                                              const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                              const GALGAS_string & in_mExtensionGetterName,
                                              const GALGAS_bool & in_mImplementedAsFunction,
                                              const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                              const GALGAS_string & in_mResultVarCppName,
                                              const GALGAS_formalInputParameterListForGeneration & in_mExtensionGetterFormalParameterList,
                                              const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                              const GALGAS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy getter_mReceiverType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_proxy inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mExtensionGetterName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMExtensionGetterName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mImplementedAsFunction (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMImplementedAsFunction (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy getter_mResultType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMResultType (GALGAS_unifiedTypeMap_2D_proxy inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mResultVarCppName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMResultVarCppName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalInputParameterListForGeneration getter_mExtensionGetterFormalParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMExtensionGetterFormalParameterList (GALGAS_formalInputParameterListForGeneration inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_typedPropertyList getter_mTypedAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTypedAttributeList (GALGAS_typedPropertyList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListForGeneration getter_mSemanticInstructionListForGeneration (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMSemanticInstructionListForGeneration (GALGAS_semanticInstructionListForGeneration inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Phase 1: @extensionMethodForGeneration class                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_extensionMethodForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--- Constructor
  public : GALGAS_extensionMethodForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_extensionMethodForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_extensionMethodForGeneration * ptr (void) const { return (const cPtr_extensionMethodForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_extensionMethodForGeneration (const cPtr_extensionMethodForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_extensionMethodForGeneration extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_extensionMethodForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                                             const class GALGAS_string & inOperand1,
                                                                             const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                             const class GALGAS_string & inOperand3,
                                                                             const class GALGAS_bool & inOperand4,
                                                                             const class GALGAS_formalParameterListForGeneration & inOperand5,
                                                                             const class GALGAS_typedPropertyList & inOperand6,
                                                                             const class GALGAS_semanticInstructionListForGeneration & inOperand7
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_extensionMethodForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMExtensionMethodFormalParameterList (class GALGAS_formalParameterListForGeneration inArgument0
                                                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMExtensionMethodName (class GALGAS_string inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMImplementedAsFunction (class GALGAS_bool inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMReceiverType (class GALGAS_unifiedTypeMap_2D_proxy inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSemanticInstructionListForGeneration (class GALGAS_semanticInstructionListForGeneration inArgument0
                                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTypedAttributeList (class GALGAS_typedPropertyList inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListForGeneration getter_mExtensionMethodFormalParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mExtensionMethodName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mImplementedAsFunction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mReceiverType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListForGeneration getter_mSemanticInstructionListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typedPropertyList getter_mTypedAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_extensionMethodForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Phase 2: pointer class for @extensionMethodForGeneration class                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_extensionMethodForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mReceiverType ;
  public : GALGAS_string mProperty_mExtensionMethodName ;
  public : GALGAS_bool mProperty_mImplementedAsFunction ;
  public : GALGAS_formalParameterListForGeneration mProperty_mExtensionMethodFormalParameterList ;
  public : GALGAS_typedPropertyList mProperty_mTypedAttributeList ;
  public : GALGAS_semanticInstructionListForGeneration mProperty_mSemanticInstructionListForGeneration ;

//--- Constructor
  public : cPtr_extensionMethodForGeneration (const GALGAS_bool & in_mHasHeader,
                                              const GALGAS_string & in_mImplementationCppFileName,
                                              const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                              const GALGAS_string & in_mExtensionMethodName,
                                              const GALGAS_bool & in_mImplementedAsFunction,
                                              const GALGAS_formalParameterListForGeneration & in_mExtensionMethodFormalParameterList,
                                              const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                              const GALGAS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy getter_mReceiverType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_proxy inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mExtensionMethodName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMExtensionMethodName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mImplementedAsFunction (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMImplementedAsFunction (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalParameterListForGeneration getter_mExtensionMethodFormalParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMExtensionMethodFormalParameterList (GALGAS_formalParameterListForGeneration inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_typedPropertyList getter_mTypedAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTypedAttributeList (GALGAS_typedPropertyList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListForGeneration getter_mSemanticInstructionListForGeneration (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMSemanticInstructionListForGeneration (GALGAS_semanticInstructionListForGeneration inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Phase 1: @extensionSetterForGeneration class                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_extensionSetterForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--- Constructor
  public : GALGAS_extensionSetterForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_extensionSetterForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_extensionSetterForGeneration * ptr (void) const { return (const cPtr_extensionSetterForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_extensionSetterForGeneration (const cPtr_extensionSetterForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_extensionSetterForGeneration extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_extensionSetterForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                                             const class GALGAS_string & inOperand1,
                                                                             const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                             const class GALGAS_string & inOperand3,
                                                                             const class GALGAS_bool & inOperand4,
                                                                             const class GALGAS_formalParameterListForGeneration & inOperand5,
                                                                             const class GALGAS_typedPropertyList & inOperand6,
                                                                             const class GALGAS_semanticInstructionListForGeneration & inOperand7
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_extensionSetterForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMExtensionSetterFormalParameterList (class GALGAS_formalParameterListForGeneration inArgument0
                                                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMExtensionSetterName (class GALGAS_string inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMImplementedAsFunction (class GALGAS_bool inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMReceiverType (class GALGAS_unifiedTypeMap_2D_proxy inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSemanticInstructionListForGeneration (class GALGAS_semanticInstructionListForGeneration inArgument0
                                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTypedAttributeList (class GALGAS_typedPropertyList inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListForGeneration getter_mExtensionSetterFormalParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mExtensionSetterName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mImplementedAsFunction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mReceiverType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListForGeneration getter_mSemanticInstructionListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typedPropertyList getter_mTypedAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_extensionSetterForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionSetterForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Phase 2: pointer class for @extensionSetterForGeneration class                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_extensionSetterForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mReceiverType ;
  public : GALGAS_string mProperty_mExtensionSetterName ;
  public : GALGAS_bool mProperty_mImplementedAsFunction ;
  public : GALGAS_formalParameterListForGeneration mProperty_mExtensionSetterFormalParameterList ;
  public : GALGAS_typedPropertyList mProperty_mTypedAttributeList ;
  public : GALGAS_semanticInstructionListForGeneration mProperty_mSemanticInstructionListForGeneration ;

//--- Constructor
  public : cPtr_extensionSetterForGeneration (const GALGAS_bool & in_mHasHeader,
                                              const GALGAS_string & in_mImplementationCppFileName,
                                              const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                              const GALGAS_string & in_mExtensionSetterName,
                                              const GALGAS_bool & in_mImplementedAsFunction,
                                              const GALGAS_formalParameterListForGeneration & in_mExtensionSetterFormalParameterList,
                                              const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                              const GALGAS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy getter_mReceiverType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_proxy inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mExtensionSetterName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMExtensionSetterName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mImplementedAsFunction (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMImplementedAsFunction (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalParameterListForGeneration getter_mExtensionSetterFormalParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMExtensionSetterFormalParameterList (GALGAS_formalParameterListForGeneration inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_typedPropertyList getter_mTypedAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTypedAttributeList (GALGAS_typedPropertyList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListForGeneration getter_mSemanticInstructionListForGeneration (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMSemanticInstructionListForGeneration (GALGAS_semanticInstructionListForGeneration inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Phase 1: @overrideExtensionGetterForGeneration class                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_overrideExtensionGetterForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--- Constructor
  public : GALGAS_overrideExtensionGetterForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_overrideExtensionGetterForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_overrideExtensionGetterForGeneration * ptr (void) const { return (const cPtr_overrideExtensionGetterForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_overrideExtensionGetterForGeneration (const cPtr_overrideExtensionGetterForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_overrideExtensionGetterForGeneration extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_overrideExtensionGetterForGeneration constructor_new (const class GALGAS_bool & inOperand0,
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
  public : typeComparisonResult objectCompare (const GALGAS_overrideExtensionGetterForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMBaseTypeName (class GALGAS_string inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOverridingExtensionGetterFormalParameterList (class GALGAS_formalInputParameterListForGeneration inArgument0
                                                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOverridingExtensionGetterName (class GALGAS_string inArgument0
                                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMReceiverType (class GALGAS_unifiedTypeMap_2D_proxy inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMResultType (class GALGAS_unifiedTypeMap_2D_proxy inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMResultVarCppName (class GALGAS_string inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSemanticInstructionListForGeneration (class GALGAS_semanticInstructionListForGeneration inArgument0
                                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTypedAttributeList (class GALGAS_typedPropertyList inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mBaseTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalInputParameterListForGeneration getter_mOverridingExtensionGetterFormalParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mOverridingExtensionGetterName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mReceiverType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mResultType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mResultVarCppName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListForGeneration getter_mSemanticInstructionListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typedPropertyList getter_mTypedAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_overrideExtensionGetterForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overrideExtensionGetterForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Phase 2: pointer class for @overrideExtensionGetterForGeneration class                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_overrideExtensionGetterForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mReceiverType ;
  public : GALGAS_string mProperty_mBaseTypeName ;
  public : GALGAS_string mProperty_mOverridingExtensionGetterName ;
  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mResultType ;
  public : GALGAS_string mProperty_mResultVarCppName ;
  public : GALGAS_formalInputParameterListForGeneration mProperty_mOverridingExtensionGetterFormalParameterList ;
  public : GALGAS_typedPropertyList mProperty_mTypedAttributeList ;
  public : GALGAS_semanticInstructionListForGeneration mProperty_mSemanticInstructionListForGeneration ;

//--- Constructor
  public : cPtr_overrideExtensionGetterForGeneration (const GALGAS_bool & in_mHasHeader,
                                                      const GALGAS_string & in_mImplementationCppFileName,
                                                      const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                      const GALGAS_string & in_mBaseTypeName,
                                                      const GALGAS_string & in_mOverridingExtensionGetterName,
                                                      const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                      const GALGAS_string & in_mResultVarCppName,
                                                      const GALGAS_formalInputParameterListForGeneration & in_mOverridingExtensionGetterFormalParameterList,
                                                      const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                      const GALGAS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy getter_mReceiverType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_proxy inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mBaseTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMBaseTypeName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mOverridingExtensionGetterName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOverridingExtensionGetterName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy getter_mResultType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMResultType (GALGAS_unifiedTypeMap_2D_proxy inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mResultVarCppName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMResultVarCppName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalInputParameterListForGeneration getter_mOverridingExtensionGetterFormalParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOverridingExtensionGetterFormalParameterList (GALGAS_formalInputParameterListForGeneration inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_typedPropertyList getter_mTypedAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTypedAttributeList (GALGAS_typedPropertyList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListForGeneration getter_mSemanticInstructionListForGeneration (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMSemanticInstructionListForGeneration (GALGAS_semanticInstructionListForGeneration inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Phase 1: @overridingExtensionMethodForGeneration class                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_overridingExtensionMethodForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--- Constructor
  public : GALGAS_overridingExtensionMethodForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_overridingExtensionMethodForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_overridingExtensionMethodForGeneration * ptr (void) const { return (const cPtr_overridingExtensionMethodForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_overridingExtensionMethodForGeneration (const cPtr_overridingExtensionMethodForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_overridingExtensionMethodForGeneration extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_overridingExtensionMethodForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                                                       const class GALGAS_string & inOperand1,
                                                                                       const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                                       const class GALGAS_string & inOperand3,
                                                                                       const class GALGAS_string & inOperand4,
                                                                                       const class GALGAS_formalParameterListForGeneration & inOperand5,
                                                                                       const class GALGAS_typedPropertyList & inOperand6,
                                                                                       const class GALGAS_semanticInstructionListForGeneration & inOperand7
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_overridingExtensionMethodForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMBaseTypeName (class GALGAS_string inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMExtensionMethodFormalParameterList (class GALGAS_formalParameterListForGeneration inArgument0
                                                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMExtensionMethodName (class GALGAS_string inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMReceiverType (class GALGAS_unifiedTypeMap_2D_proxy inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSemanticInstructionListForGeneration (class GALGAS_semanticInstructionListForGeneration inArgument0
                                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTypedAttributeList (class GALGAS_typedPropertyList inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mBaseTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListForGeneration getter_mExtensionMethodFormalParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mExtensionMethodName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mReceiverType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListForGeneration getter_mSemanticInstructionListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typedPropertyList getter_mTypedAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_overridingExtensionMethodForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingExtensionMethodForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Phase 2: pointer class for @overridingExtensionMethodForGeneration class                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_overridingExtensionMethodForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mReceiverType ;
  public : GALGAS_string mProperty_mBaseTypeName ;
  public : GALGAS_string mProperty_mExtensionMethodName ;
  public : GALGAS_formalParameterListForGeneration mProperty_mExtensionMethodFormalParameterList ;
  public : GALGAS_typedPropertyList mProperty_mTypedAttributeList ;
  public : GALGAS_semanticInstructionListForGeneration mProperty_mSemanticInstructionListForGeneration ;

//--- Constructor
  public : cPtr_overridingExtensionMethodForGeneration (const GALGAS_bool & in_mHasHeader,
                                                        const GALGAS_string & in_mImplementationCppFileName,
                                                        const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                        const GALGAS_string & in_mBaseTypeName,
                                                        const GALGAS_string & in_mExtensionMethodName,
                                                        const GALGAS_formalParameterListForGeneration & in_mExtensionMethodFormalParameterList,
                                                        const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                        const GALGAS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy getter_mReceiverType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_proxy inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mBaseTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMBaseTypeName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mExtensionMethodName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMExtensionMethodName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalParameterListForGeneration getter_mExtensionMethodFormalParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMExtensionMethodFormalParameterList (GALGAS_formalParameterListForGeneration inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_typedPropertyList getter_mTypedAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTypedAttributeList (GALGAS_typedPropertyList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListForGeneration getter_mSemanticInstructionListForGeneration (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMSemanticInstructionListForGeneration (GALGAS_semanticInstructionListForGeneration inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Phase 1: @overridingExtensionSetterForGeneration class                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_overridingExtensionSetterForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--- Constructor
  public : GALGAS_overridingExtensionSetterForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_overridingExtensionSetterForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_overridingExtensionSetterForGeneration * ptr (void) const { return (const cPtr_overridingExtensionSetterForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_overridingExtensionSetterForGeneration (const cPtr_overridingExtensionSetterForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_overridingExtensionSetterForGeneration extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_overridingExtensionSetterForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                                                       const class GALGAS_string & inOperand1,
                                                                                       const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                                       const class GALGAS_string & inOperand3,
                                                                                       const class GALGAS_string & inOperand4,
                                                                                       const class GALGAS_formalParameterListForGeneration & inOperand5,
                                                                                       const class GALGAS_typedPropertyList & inOperand6,
                                                                                       const class GALGAS_semanticInstructionListForGeneration & inOperand7
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_overridingExtensionSetterForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMBaseTypeName (class GALGAS_string inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMExtensionSetterFormalParameterList (class GALGAS_formalParameterListForGeneration inArgument0
                                                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMExtensionSetterName (class GALGAS_string inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMReceiverType (class GALGAS_unifiedTypeMap_2D_proxy inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSemanticInstructionListForGeneration (class GALGAS_semanticInstructionListForGeneration inArgument0
                                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTypedAttributeList (class GALGAS_typedPropertyList inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mBaseTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListForGeneration getter_mExtensionSetterFormalParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mExtensionSetterName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mReceiverType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListForGeneration getter_mSemanticInstructionListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typedPropertyList getter_mTypedAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_overridingExtensionSetterForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingExtensionSetterForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Phase 2: pointer class for @overridingExtensionSetterForGeneration class                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_overridingExtensionSetterForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Attributes
  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mReceiverType ;
  public : GALGAS_string mProperty_mBaseTypeName ;
  public : GALGAS_string mProperty_mExtensionSetterName ;
  public : GALGAS_formalParameterListForGeneration mProperty_mExtensionSetterFormalParameterList ;
  public : GALGAS_typedPropertyList mProperty_mTypedAttributeList ;
  public : GALGAS_semanticInstructionListForGeneration mProperty_mSemanticInstructionListForGeneration ;

//--- Constructor
  public : cPtr_overridingExtensionSetterForGeneration (const GALGAS_bool & in_mHasHeader,
                                                        const GALGAS_string & in_mImplementationCppFileName,
                                                        const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                        const GALGAS_string & in_mBaseTypeName,
                                                        const GALGAS_string & in_mExtensionSetterName,
                                                        const GALGAS_formalParameterListForGeneration & in_mExtensionSetterFormalParameterList,
                                                        const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                        const GALGAS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy getter_mReceiverType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_proxy inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mBaseTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMBaseTypeName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mExtensionSetterName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMExtensionSetterName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalParameterListForGeneration getter_mExtensionSetterFormalParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMExtensionSetterFormalParameterList (GALGAS_formalParameterListForGeneration inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_typedPropertyList getter_mTypedAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTypedAttributeList (GALGAS_typedPropertyList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListForGeneration getter_mSemanticInstructionListForGeneration (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMSemanticInstructionListForGeneration (GALGAS_semanticInstructionListForGeneration inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Phase 1: @galgas_33_SyntaxComponentAST class                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_galgas_33_SyntaxComponentAST : public GALGAS_semanticDeclarationAST {
//--- Constructor
  public : GALGAS_galgas_33_SyntaxComponentAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_galgas_33_SyntaxComponentAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_galgas_33_SyntaxComponentAST * ptr (void) const { return (const cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_galgas_33_SyntaxComponentAST (const cPtr_galgas_33_SyntaxComponentAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_galgas_33_SyntaxComponentAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_galgas_33_SyntaxComponentAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                             const class GALGAS_lstring & inOperand1,
                                                                             const class GALGAS_lstring & inOperand2,
                                                                             const class GALGAS_nonterminalDeclarationListAST & inOperand3,
                                                                             const class GALGAS_syntaxRuleListAST & inOperand4,
                                                                             const class GALGAS_bool & inOperand5
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_galgas_33_SyntaxComponentAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMHasTranslateFeature (class GALGAS_bool inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMLexiqueName (class GALGAS_lstring inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMNonterminalDeclarationList (class GALGAS_nonterminalDeclarationListAST inArgument0
                                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRuleList (class GALGAS_syntaxRuleListAST inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSyntaxComponentName (class GALGAS_lstring inArgument0
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasTranslateFeature (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLexiqueName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_nonterminalDeclarationListAST getter_mNonterminalDeclarationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syntaxRuleListAST getter_mRuleList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSyntaxComponentName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_galgas_33_SyntaxComponentAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Phase 2: pointer class for @galgas3SyntaxComponentAST class                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_galgas_33_SyntaxComponentAST : public cPtr_semanticDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mSyntaxComponentName ;
  public : GALGAS_lstring mProperty_mLexiqueName ;
  public : GALGAS_nonterminalDeclarationListAST mProperty_mNonterminalDeclarationList ;
  public : GALGAS_syntaxRuleListAST mProperty_mRuleList ;
  public : GALGAS_bool mProperty_mHasTranslateFeature ;

//--- Constructor
  public : cPtr_galgas_33_SyntaxComponentAST (const GALGAS_bool & in_mIsPredefined,
                                              const GALGAS_lstring & in_mSyntaxComponentName,
                                              const GALGAS_lstring & in_mLexiqueName,
                                              const GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                              const GALGAS_syntaxRuleListAST & in_mRuleList,
                                              const GALGAS_bool & in_mHasTranslateFeature
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mSyntaxComponentName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMSyntaxComponentName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mLexiqueName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLexiqueName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_nonterminalDeclarationListAST getter_mNonterminalDeclarationList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMNonterminalDeclarationList (GALGAS_nonterminalDeclarationListAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_syntaxRuleListAST getter_mRuleList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRuleList (GALGAS_syntaxRuleListAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mHasTranslateFeature (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMHasTranslateFeature (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Extension getter '@unifiedTypeMap-proxy baseType' (as function)                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_unifiedTypeMap_2D_proxy extensionGetter_baseType (const class GALGAS_unifiedTypeMap_2D_proxy & inObject,
                                                               class C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Extension method '@unifiedTypeMap-proxy addHeaderFileName'                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_addHeaderFileName (const class GALGAS_unifiedTypeMap_2D_proxy inObject,
                                        class GALGAS_stringset & io_ioInclusions,
                                        class C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Extension method '@unifiedTypeMap-proxy addHeaderFileName1'                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_addHeaderFileName_31_ (const class GALGAS_unifiedTypeMap_2D_proxy inObject,
                                            class GALGAS_stringset & io_ioInclusions,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Abstract extension method '@actualParameterForGeneration generateActualParameter'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef void (*extensionMethodSignature_actualParameterForGeneration_generateActualParameter) (const class cPtr_actualParameterForGeneration * inObject,
                                                                                               class GALGAS_stringset & ioArgument0,
                                                                                               class GALGAS_uint & ioArgument1,
                                                                                               class GALGAS_string & ioArgument2,
                                                                                               class GALGAS_stringlist & ioArgument3,
                                                                                               class GALGAS_stringlist & ioArgument4,
                                                                                               class GALGAS_stringset & ioArgument5,
                                                                                               class GALGAS_string & outArgument6,
                                                                                               class C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_generateActualParameter (const int32_t inClassIndex,
                                                   extensionMethodSignature_actualParameterForGeneration_generateActualParameter inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_generateActualParameter (const class cPtr_actualParameterForGeneration * inObject,
                                                  GALGAS_stringset & io_ioInclusionSet,
                                                  GALGAS_uint & io_ioTemporaryVariableIndex,
                                                  GALGAS_string & io_ioImplementation,
                                                  GALGAS_stringlist & io_ioJokerParametersToReleaseList,
                                                  GALGAS_stringlist & io_ioOutputVariableList,
                                                  GALGAS_stringset & io_ioUnusedVariableCppNameSet,
                                                  GALGAS_string & out_outCppName,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Phase 1: @outputInputActualParameterForGeneration class                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_outputInputActualParameterForGeneration : public GALGAS_actualParameterForGeneration {
//--- Constructor
  public : GALGAS_outputInputActualParameterForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_outputInputActualParameterForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_outputInputActualParameterForGeneration * ptr (void) const { return (const cPtr_outputInputActualParameterForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_outputInputActualParameterForGeneration (const cPtr_outputInputActualParameterForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_outputInputActualParameterForGeneration extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_outputInputActualParameterForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                        const class GALGAS_string & inOperand1,
                                                                                        const class GALGAS_lstringlist & inOperand2,
                                                                                        const class GALGAS_unifiedTypeMapProxyList & inOperand3
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_outputInputActualParameterForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMOutputInputVariableCppName (class GALGAS_string inArgument0
                                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMStructAttributeList (class GALGAS_lstringlist inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTypeList (class GALGAS_unifiedTypeMapProxyList inArgument0
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mOutputInputVariableCppName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mStructAttributeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapProxyList getter_mTypeList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_outputInputActualParameterForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputInputActualParameterForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Phase 2: pointer class for @outputInputActualParameterForGeneration class                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_outputInputActualParameterForGeneration : public cPtr_actualParameterForGeneration {
//--- Attributes
  public : GALGAS_string mProperty_mOutputInputVariableCppName ;
  public : GALGAS_lstringlist mProperty_mStructAttributeList ;
  public : GALGAS_unifiedTypeMapProxyList mProperty_mTypeList ;

//--- Constructor
  public : cPtr_outputInputActualParameterForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                         const GALGAS_string & in_mOutputInputVariableCppName,
                                                         const GALGAS_lstringlist & in_mStructAttributeList,
                                                         const GALGAS_unifiedTypeMapProxyList & in_mTypeList
                                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mOutputInputVariableCppName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOutputInputVariableCppName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mStructAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMStructAttributeList (GALGAS_lstringlist inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMapProxyList getter_mTypeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTypeList (GALGAS_unifiedTypeMapProxyList inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Phase 1: @inputActualParameterForGeneration class                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_inputActualParameterForGeneration : public GALGAS_actualParameterForGeneration {
//--- Constructor
  public : GALGAS_inputActualParameterForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_inputActualParameterForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_inputActualParameterForGeneration * ptr (void) const { return (const cPtr_inputActualParameterForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_inputActualParameterForGeneration (const cPtr_inputActualParameterForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_inputActualParameterForGeneration extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_inputActualParameterForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                  const class GALGAS_string & inOperand1
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_inputActualParameterForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMInputActualCppName (class GALGAS_string inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mInputActualCppName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_inputActualParameterForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualParameterForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Phase 2: pointer class for @inputActualParameterForGeneration class                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_inputActualParameterForGeneration : public cPtr_actualParameterForGeneration {
//--- Attributes
  public : GALGAS_string mProperty_mInputActualCppName ;

//--- Constructor
  public : cPtr_inputActualParameterForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                   const GALGAS_string & in_mInputActualCppName
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mInputActualCppName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMInputActualCppName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Phase 1: @inputJokerParameterForGeneration class                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_inputJokerParameterForGeneration : public GALGAS_actualParameterForGeneration {
//--- Constructor
  public : GALGAS_inputJokerParameterForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_inputJokerParameterForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_inputJokerParameterForGeneration * ptr (void) const { return (const cPtr_inputJokerParameterForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_inputJokerParameterForGeneration (const cPtr_inputJokerParameterForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_inputJokerParameterForGeneration extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_inputJokerParameterForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                 const class GALGAS_string & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_inputJokerParameterForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMInputActualCppName (class GALGAS_string inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mInputActualCppName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_inputJokerParameterForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputJokerParameterForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Phase 2: pointer class for @inputJokerParameterForGeneration class                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_inputJokerParameterForGeneration : public cPtr_actualParameterForGeneration {
//--- Attributes
  public : GALGAS_string mProperty_mInputActualCppName ;

//--- Constructor
  public : cPtr_inputJokerParameterForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                  const GALGAS_string & in_mInputActualCppName
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mInputActualCppName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMInputActualCppName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Phase 1: @lexiqueDeclarationForGeneration class                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  public : static class GALGAS_lexiqueDeclarationForGeneration constructor_new (const class GALGAS_bool & inOperand0,
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
  public : VIRTUAL_IN_DEBUG void setter_setMCocoaHeader (class GALGAS_string inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMCocoaImplementation (class GALGAS_string inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMCppContents (class GALGAS_string inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMHeaderContents (class GALGAS_string inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMLexiqueName (class GALGAS_string inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mCocoaHeader (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mCocoaImplementation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mCppContents (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mHeaderContents (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mLexiqueName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexiqueDeclarationForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Phase 2: pointer class for @lexiqueDeclarationForGeneration class                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_lexiqueDeclarationForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Attributes
  public : GALGAS_string mProperty_mLexiqueName ;
  public : GALGAS_string mProperty_mHeaderContents ;
  public : GALGAS_string mProperty_mCppContents ;
  public : GALGAS_string mProperty_mCocoaHeader ;
  public : GALGAS_string mProperty_mCocoaImplementation ;

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
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mLexiqueName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLexiqueName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mHeaderContents (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMHeaderContents (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mCppContents (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMCppContents (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mCocoaHeader (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMCocoaHeader (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mCocoaImplementation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMCocoaImplementation (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         Phase 1: @grammarForGeneration class                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  public : static class GALGAS_grammarForGeneration constructor_new (const class GALGAS_bool & inOperand0,
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
  public : VIRTUAL_IN_DEBUG void setter_setMCppFileContents (class GALGAS_string inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMGrammarName (class GALGAS_string inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMHasIndexing (class GALGAS_bool inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMHasTranslateFeature (class GALGAS_bool inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMLexiqueName (class GALGAS_string inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMNonTerminalMapForGrammarAnalysis (class GALGAS_nonTerminalSymbolMapForGrammarAnalysis inArgument0
                                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMNonTerminalToAddList (class GALGAS_nonTerminalToAddList inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMStartSymbolName (class GALGAS_string inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSyntaxComponents (class GALGAS_lstringlist inArgument0
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mCppFileContents (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mGrammarName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasIndexing (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasTranslateFeature (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mLexiqueName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_nonTerminalSymbolMapForGrammarAnalysis getter_mNonTerminalMapForGrammarAnalysis (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_nonTerminalToAddList getter_mNonTerminalToAddList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mStartSymbolName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mSyntaxComponents (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_grammarForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Phase 2: pointer class for @grammarForGeneration class                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_grammarForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Attributes
  public : GALGAS_string mProperty_mGrammarName ;
  public : GALGAS_string mProperty_mLexiqueName ;
  public : GALGAS_nonTerminalSymbolMapForGrammarAnalysis mProperty_mNonTerminalMapForGrammarAnalysis ;
  public : GALGAS_nonTerminalToAddList mProperty_mNonTerminalToAddList ;
  public : GALGAS_bool mProperty_mHasIndexing ;
  public : GALGAS_lstringlist mProperty_mSyntaxComponents ;
  public : GALGAS_string mProperty_mStartSymbolName ;
  public : GALGAS_bool mProperty_mHasTranslateFeature ;
  public : GALGAS_string mProperty_mCppFileContents ;

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
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mGrammarName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMGrammarName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mLexiqueName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLexiqueName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_nonTerminalSymbolMapForGrammarAnalysis getter_mNonTerminalMapForGrammarAnalysis (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMNonTerminalMapForGrammarAnalysis (GALGAS_nonTerminalSymbolMapForGrammarAnalysis inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_nonTerminalToAddList getter_mNonTerminalToAddList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMNonTerminalToAddList (GALGAS_nonTerminalToAddList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mHasIndexing (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMHasIndexing (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mSyntaxComponents (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMSyntaxComponents (GALGAS_lstringlist inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mStartSymbolName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMStartSymbolName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mHasTranslateFeature (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMHasTranslateFeature (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mCppFileContents (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMCppFileContents (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Phase 1: @routinePrototypeDeclarationForGeneration class                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_routinePrototypeDeclarationForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--- Constructor
  public : GALGAS_routinePrototypeDeclarationForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_routinePrototypeDeclarationForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_routinePrototypeDeclarationForGeneration * ptr (void) const { return (const cPtr_routinePrototypeDeclarationForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_routinePrototypeDeclarationForGeneration (const cPtr_routinePrototypeDeclarationForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_routinePrototypeDeclarationForGeneration extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_routinePrototypeDeclarationForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                                                         const class GALGAS_string & inOperand1,
                                                                                         const class GALGAS_string & inOperand2,
                                                                                         const class GALGAS_formalParameterListForGeneration & inOperand3
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_routinePrototypeDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMFormalArgumentList (class GALGAS_formalParameterListForGeneration inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRoutineName (class GALGAS_string inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_formalParameterListForGeneration getter_mFormalArgumentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mRoutineName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_routinePrototypeDeclarationForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Phase 2: pointer class for @routinePrototypeDeclarationForGeneration class                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_routinePrototypeDeclarationForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Attributes
  public : GALGAS_string mProperty_mRoutineName ;
  public : GALGAS_formalParameterListForGeneration mProperty_mFormalArgumentList ;

//--- Constructor
  public : cPtr_routinePrototypeDeclarationForGeneration (const GALGAS_bool & in_mHasHeader,
                                                          const GALGAS_string & in_mImplementationCppFileName,
                                                          const GALGAS_string & in_mRoutineName,
                                                          const GALGAS_formalParameterListForGeneration & in_mFormalArgumentList
                                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mRoutineName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRoutineName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_formalParameterListForGeneration getter_mFormalArgumentList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMFormalArgumentList (GALGAS_formalParameterListForGeneration inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

