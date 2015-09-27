#ifndef all_2D_declarations_2D__32__31__ENTITIES_DEFINED
#define all_2D_declarations_2D__32__31__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-20.h"

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

#endif
