#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-7.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@currentVarManager combineManagerWith'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_combineManagerWith (class GALGAS_currentVarManager & ioObject,
                                         const class GALGAS_currentVarManager constin_inOtherManager,
                                         const class GALGAS_location constin_inErrorLocation,
                                         class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMap unsolvedEntryList' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lstringlist extensionGetter_unsolvedEntryList (const class GALGAS_unifiedTypeMap & inObject,
                                                            class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                            Phase 1: @typeDefinition enum                                            *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_typeDefinition : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_typeDefinition (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_unsolved,
    kEnum_solved
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
  public: static GALGAS_typeDefinition extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_typeDefinition constructor_solved (const class GALGAS_unifiedTypeDefinition & inOperand0
                                                                 COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_typeDefinition constructor_unsolved (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_typeDefinition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_solved (class GALGAS_unifiedTypeDefinition & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSolved (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isUnsolved (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_solved (class GALGAS_unifiedTypeDefinition & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_unsolved () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_typeDefinition class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeDefinition ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @unifiedTypeDefinition struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_unifiedTypeDefinition : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mLKey ;
  public: inline GALGAS_lstring readProperty_mLKey (void) const {
    return mProperty_mLKey ;
  }

  public: GALGAS_bool mProperty_mIsPredefined ;
  public: inline GALGAS_bool readProperty_mIsPredefined (void) const {
    return mProperty_mIsPredefined ;
  }

  public: GALGAS_bool mProperty_mIsConcrete ;
  public: inline GALGAS_bool readProperty_mIsConcrete (void) const {
    return mProperty_mIsConcrete ;
  }

  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mSuperType ;
  public: inline GALGAS_unifiedTypeMap_2D_entry readProperty_mSuperType (void) const {
    return mProperty_mSuperType ;
  }

  public: GALGAS_typeKindEnum mProperty_mTypeKindEnum ;
  public: inline GALGAS_typeKindEnum readProperty_mTypeKindEnum (void) const {
    return mProperty_mTypeKindEnum ;
  }

  public: GALGAS_bool mProperty_mSupportCollectionValue ;
  public: inline GALGAS_bool readProperty_mSupportCollectionValue (void) const {
    return mProperty_mSupportCollectionValue ;
  }

  public: GALGAS_typedPropertyList mProperty_mAllTypedPropertyList ;
  public: inline GALGAS_typedPropertyList readProperty_mAllTypedPropertyList (void) const {
    return mProperty_mAllTypedPropertyList ;
  }

  public: GALGAS_propertyMap mProperty_mPropertyMap ;
  public: inline GALGAS_propertyMap readProperty_mPropertyMap (void) const {
    return mProperty_mPropertyMap ;
  }

  public: GALGAS_typedPropertyList mProperty_mCurrentTypedPropertyList ;
  public: inline GALGAS_typedPropertyList readProperty_mCurrentTypedPropertyList (void) const {
    return mProperty_mCurrentTypedPropertyList ;
  }

  public: GALGAS_constructorMap mProperty_mConstructorMap ;
  public: inline GALGAS_constructorMap readProperty_mConstructorMap (void) const {
    return mProperty_mConstructorMap ;
  }

  public: GALGAS_getterMap mProperty_mGetterMap ;
  public: inline GALGAS_getterMap readProperty_mGetterMap (void) const {
    return mProperty_mGetterMap ;
  }

  public: GALGAS_setterMap mProperty_mSetterMap ;
  public: inline GALGAS_setterMap readProperty_mSetterMap (void) const {
    return mProperty_mSetterMap ;
  }

  public: GALGAS_instanceMethodMap mProperty_mInstanceMethodMap ;
  public: inline GALGAS_instanceMethodMap readProperty_mInstanceMethodMap (void) const {
    return mProperty_mInstanceMethodMap ;
  }

  public: GALGAS_classMethodMap mProperty_mClassMethodMap ;
  public: inline GALGAS_classMethodMap readProperty_mClassMethodMap (void) const {
    return mProperty_mClassMethodMap ;
  }

  public: GALGAS_optionalMethodMap mProperty_mOptionalMethodMap ;
  public: inline GALGAS_optionalMethodMap readProperty_mOptionalMethodMap (void) const {
    return mProperty_mOptionalMethodMap ;
  }

  public: GALGAS_enumerationDescriptorList mProperty_mEnumerationDescriptor ;
  public: inline GALGAS_enumerationDescriptorList readProperty_mEnumerationDescriptor (void) const {
    return mProperty_mEnumerationDescriptor ;
  }

  public: GALGAS_operators mProperty_mHandledOperatorFlags ;
  public: inline GALGAS_operators readProperty_mHandledOperatorFlags (void) const {
    return mProperty_mHandledOperatorFlags ;
  }

  public: GALGAS_functionSignature mProperty_mAddAssignOperatorArguments ;
  public: inline GALGAS_functionSignature readProperty_mAddAssignOperatorArguments (void) const {
    return mProperty_mAddAssignOperatorArguments ;
  }

  public: GALGAS_constantIndexMap mProperty_mEnumConstantMap ;
  public: inline GALGAS_constantIndexMap readProperty_mEnumConstantMap (void) const {
    return mProperty_mEnumConstantMap ;
  }

  public: GALGAS_enumConstantList mProperty_mEnumConstantList ;
  public: inline GALGAS_enumConstantList readProperty_mEnumConstantList (void) const {
    return mProperty_mEnumConstantList ;
  }

  public: GALGAS_mapSearchMethodListAST mProperty_mMapSearchMethodList ;
  public: inline GALGAS_mapSearchMethodListAST readProperty_mMapSearchMethodList (void) const {
    return mProperty_mMapSearchMethodList ;
  }

  public: GALGAS_mapSearchMethodListAST mProperty_mMapEntrySearchConstructorList ;
  public: inline GALGAS_mapSearchMethodListAST readProperty_mMapEntrySearchConstructorList (void) const {
    return mProperty_mMapEntrySearchConstructorList ;
  }

  public: GALGAS_bool mProperty_mGenerateHeaderInSeparateFile ;
  public: inline GALGAS_bool readProperty_mGenerateHeaderInSeparateFile (void) const {
    return mProperty_mGenerateHeaderInSeparateFile ;
  }

  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mTypeForEnumeratedElement ;
  public: inline GALGAS_unifiedTypeMap_2D_entry readProperty_mTypeForEnumeratedElement (void) const {
    return mProperty_mTypeForEnumeratedElement ;
  }

  public: GALGAS_string mProperty_mDefaultConstructorName ;
  public: inline GALGAS_string readProperty_mDefaultConstructorName (void) const {
    return mProperty_mDefaultConstructorName ;
  }

  public: GALGAS_string mProperty_mHeaderFileName ;
  public: inline GALGAS_string readProperty_mHeaderFileName (void) const {
    return mProperty_mHeaderFileName ;
  }

  public: GALGAS_headerKind mProperty_mHeaderKind ;
  public: inline GALGAS_headerKind readProperty_mHeaderKind (void) const {
    return mProperty_mHeaderKind ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_unifiedTypeDefinition (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLKey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLKey = inValue ;
  }

  public: inline void setter_setMIsPredefined (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsPredefined = inValue ;
  }

  public: inline void setter_setMIsConcrete (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsConcrete = inValue ;
  }

  public: inline void setter_setMSuperType (const GALGAS_unifiedTypeMap_2D_entry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSuperType = inValue ;
  }

  public: inline void setter_setMTypeKindEnum (const GALGAS_typeKindEnum & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTypeKindEnum = inValue ;
  }

  public: inline void setter_setMSupportCollectionValue (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSupportCollectionValue = inValue ;
  }

  public: inline void setter_setMAllTypedPropertyList (const GALGAS_typedPropertyList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAllTypedPropertyList = inValue ;
  }

  public: inline void setter_setMPropertyMap (const GALGAS_propertyMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyMap = inValue ;
  }

  public: inline void setter_setMCurrentTypedPropertyList (const GALGAS_typedPropertyList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCurrentTypedPropertyList = inValue ;
  }

  public: inline void setter_setMConstructorMap (const GALGAS_constructorMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConstructorMap = inValue ;
  }

  public: inline void setter_setMGetterMap (const GALGAS_getterMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGetterMap = inValue ;
  }

  public: inline void setter_setMSetterMap (const GALGAS_setterMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSetterMap = inValue ;
  }

  public: inline void setter_setMInstanceMethodMap (const GALGAS_instanceMethodMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstanceMethodMap = inValue ;
  }

  public: inline void setter_setMClassMethodMap (const GALGAS_classMethodMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mClassMethodMap = inValue ;
  }

  public: inline void setter_setMOptionalMethodMap (const GALGAS_optionalMethodMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOptionalMethodMap = inValue ;
  }

  public: inline void setter_setMEnumerationDescriptor (const GALGAS_enumerationDescriptorList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnumerationDescriptor = inValue ;
  }

  public: inline void setter_setMHandledOperatorFlags (const GALGAS_operators & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHandledOperatorFlags = inValue ;
  }

  public: inline void setter_setMAddAssignOperatorArguments (const GALGAS_functionSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAddAssignOperatorArguments = inValue ;
  }

  public: inline void setter_setMEnumConstantMap (const GALGAS_constantIndexMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnumConstantMap = inValue ;
  }

  public: inline void setter_setMEnumConstantList (const GALGAS_enumConstantList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnumConstantList = inValue ;
  }

  public: inline void setter_setMMapSearchMethodList (const GALGAS_mapSearchMethodListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMapSearchMethodList = inValue ;
  }

  public: inline void setter_setMMapEntrySearchConstructorList (const GALGAS_mapSearchMethodListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMapEntrySearchConstructorList = inValue ;
  }

  public: inline void setter_setMGenerateHeaderInSeparateFile (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGenerateHeaderInSeparateFile = inValue ;
  }

  public: inline void setter_setMTypeForEnumeratedElement (const GALGAS_unifiedTypeMap_2D_entry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTypeForEnumeratedElement = inValue ;
  }

  public: inline void setter_setMDefaultConstructorName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDefaultConstructorName = inValue ;
  }

  public: inline void setter_setMHeaderFileName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHeaderFileName = inValue ;
  }

  public: inline void setter_setMHeaderKind (const GALGAS_headerKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHeaderKind = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_unifiedTypeDefinition (void) ;

//--------------------------------- Native constructor
  public: GALGAS_unifiedTypeDefinition (const GALGAS_lstring & in_mLKey,
                                        const GALGAS_bool & in_mIsPredefined,
                                        const GALGAS_bool & in_mIsConcrete,
                                        const GALGAS_unifiedTypeMap_2D_entry & in_mSuperType,
                                        const GALGAS_typeKindEnum & in_mTypeKindEnum,
                                        const GALGAS_bool & in_mSupportCollectionValue,
                                        const GALGAS_typedPropertyList & in_mAllTypedPropertyList,
                                        const GALGAS_propertyMap & in_mPropertyMap,
                                        const GALGAS_typedPropertyList & in_mCurrentTypedPropertyList,
                                        const GALGAS_constructorMap & in_mConstructorMap,
                                        const GALGAS_getterMap & in_mGetterMap,
                                        const GALGAS_setterMap & in_mSetterMap,
                                        const GALGAS_instanceMethodMap & in_mInstanceMethodMap,
                                        const GALGAS_classMethodMap & in_mClassMethodMap,
                                        const GALGAS_optionalMethodMap & in_mOptionalMethodMap,
                                        const GALGAS_enumerationDescriptorList & in_mEnumerationDescriptor,
                                        const GALGAS_operators & in_mHandledOperatorFlags,
                                        const GALGAS_functionSignature & in_mAddAssignOperatorArguments,
                                        const GALGAS_constantIndexMap & in_mEnumConstantMap,
                                        const GALGAS_enumConstantList & in_mEnumConstantList,
                                        const GALGAS_mapSearchMethodListAST & in_mMapSearchMethodList,
                                        const GALGAS_mapSearchMethodListAST & in_mMapEntrySearchConstructorList,
                                        const GALGAS_bool & in_mGenerateHeaderInSeparateFile,
                                        const GALGAS_unifiedTypeMap_2D_entry & in_mTypeForEnumeratedElement,
                                        const GALGAS_string & in_mDefaultConstructorName,
                                        const GALGAS_string & in_mHeaderFileName,
                                        const GALGAS_headerKind & in_mHeaderKind) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_unifiedTypeDefinition extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_unifiedTypeDefinition constructor_new (const class GALGAS_lstring & inOperand0,
                                                                     const class GALGAS_bool & inOperand1,
                                                                     const class GALGAS_bool & inOperand2,
                                                                     const class GALGAS_unifiedTypeMap_2D_entry & inOperand3,
                                                                     const class GALGAS_typeKindEnum & inOperand4,
                                                                     const class GALGAS_bool & inOperand5,
                                                                     const class GALGAS_typedPropertyList & inOperand6,
                                                                     const class GALGAS_propertyMap & inOperand7,
                                                                     const class GALGAS_typedPropertyList & inOperand8,
                                                                     const class GALGAS_constructorMap & inOperand9,
                                                                     const class GALGAS_getterMap & inOperand10,
                                                                     const class GALGAS_setterMap & inOperand11,
                                                                     const class GALGAS_instanceMethodMap & inOperand12,
                                                                     const class GALGAS_classMethodMap & inOperand13,
                                                                     const class GALGAS_optionalMethodMap & inOperand14,
                                                                     const class GALGAS_enumerationDescriptorList & inOperand15,
                                                                     const class GALGAS_operators & inOperand16,
                                                                     const class GALGAS_functionSignature & inOperand17,
                                                                     const class GALGAS_constantIndexMap & inOperand18,
                                                                     const class GALGAS_enumConstantList & inOperand19,
                                                                     const class GALGAS_mapSearchMethodListAST & inOperand20,
                                                                     const class GALGAS_mapSearchMethodListAST & inOperand21,
                                                                     const class GALGAS_bool & inOperand22,
                                                                     const class GALGAS_unifiedTypeMap_2D_entry & inOperand23,
                                                                     const class GALGAS_string & inOperand24,
                                                                     const class GALGAS_string & inOperand25,
                                                                     const class GALGAS_headerKind & inOperand26
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_unifiedTypeDefinition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_unifiedTypeDefinition class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeDefinition ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @typeDefinition enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_typeDefinition_solved : public cEnumAssociatedValues {
  public: const GALGAS_unifiedTypeDefinition mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_typeDefinition_solved (const GALGAS_unifiedTypeDefinition & inAssociatedValue0
                                                       COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_typeDefinition_solved (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @unifiedTypeMapElementClass class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_unifiedTypeMapElementClass : public acStrongPtr_class {

//----------------------------------------------------------------------------------------------------------------------

/* § public: virtual GALGAS_unifiedTypeDefinition getter_definition (C_Compiler * COMMA_LOCATION_ARGS) const ; */
/* § public: virtual GALGAS_lstring getter_lkey (C_Compiler * COMMA_LOCATION_ARGS) const ; */
/* § public: virtual GALGAS_functionSignature getter_mAddAssignOperatorArguments (C_Compiler * COMMA_LOCATION_ARGS) const ; */
/* § public: virtual GALGAS_typedPropertyList getter_mAllTypedPropertyList (C_Compiler * COMMA_LOCATION_ARGS) const ; */
/* § public: virtual GALGAS_classMethodMap getter_mClassMethodMap (C_Compiler * COMMA_LOCATION_ARGS) const ; */
/* § public: virtual GALGAS_constructorMap getter_mConstructorMap (C_Compiler * COMMA_LOCATION_ARGS) const ; */
/* § public: virtual GALGAS_typedPropertyList getter_mCurrentTypedPropertyList (C_Compiler * COMMA_LOCATION_ARGS) const ; */
/* § public: virtual GALGAS_string getter_mDefaultConstructorName (C_Compiler * COMMA_LOCATION_ARGS) const ; */
/* § public: virtual GALGAS_enumConstantList getter_mEnumConstantList (C_Compiler * COMMA_LOCATION_ARGS) const ; */
/* § public: virtual GALGAS_constantIndexMap getter_mEnumConstantMap (C_Compiler * COMMA_LOCATION_ARGS) const ; */
/* § public: virtual GALGAS_enumerationDescriptorList getter_mEnumerationDescriptor (C_Compiler * COMMA_LOCATION_ARGS) const ; */
/* § public: virtual GALGAS_bool getter_mGenerateHeaderInSeparateFile (C_Compiler * COMMA_LOCATION_ARGS) const ; */
/* § public: virtual GALGAS_getterMap getter_mGetterMap (C_Compiler * COMMA_LOCATION_ARGS) const ; */
/* § public: virtual GALGAS_operators getter_mHandledOperatorFlags (C_Compiler * COMMA_LOCATION_ARGS) const ; */
/* § public: virtual GALGAS_string getter_mHeaderFileName (C_Compiler * COMMA_LOCATION_ARGS) const ; */
/* § public: virtual GALGAS_headerKind getter_mHeaderKind (C_Compiler * COMMA_LOCATION_ARGS) const ; */
/* § public: virtual GALGAS_instanceMethodMap getter_mInstanceMethodMap (C_Compiler * COMMA_LOCATION_ARGS) const ; */
/* § public: virtual GALGAS_bool getter_mIsConcrete (C_Compiler * COMMA_LOCATION_ARGS) const ; */
/* § public: virtual GALGAS_mapSearchMethodListAST getter_mMapEntrySearchConstructorList (C_Compiler * COMMA_LOCATION_ARGS) const ; */
/* § public: virtual GALGAS_mapSearchMethodListAST getter_mMapSearchMethodList (C_Compiler * COMMA_LOCATION_ARGS) const ; */
/* § public: virtual GALGAS_optionalMethodMap getter_mOptionalMethodMap (C_Compiler * COMMA_LOCATION_ARGS) const ; */
/* § public: virtual GALGAS_propertyMap getter_mPropertyMap (C_Compiler * COMMA_LOCATION_ARGS) const ; */
/* § public: virtual GALGAS_setterMap getter_mSetterMap (C_Compiler * COMMA_LOCATION_ARGS) const ; */
/* § public: virtual GALGAS_unifiedTypeMap_2D_entry getter_mSuperType (C_Compiler * COMMA_LOCATION_ARGS) const ; */
/* § public: virtual GALGAS_bool getter_mSupportCollectionValue (C_Compiler * COMMA_LOCATION_ARGS) const ; */
/* § public: virtual GALGAS_unifiedTypeMap_2D_entry getter_mTypeForEnumeratedElement (C_Compiler * COMMA_LOCATION_ARGS) const ; */
/* § public: virtual GALGAS_typeKindEnum getter_mTypeKindEnum (C_Compiler * COMMA_LOCATION_ARGS) const ; */
//--- Properties
  public: GALGAS_typeDefinition mProperty_mDefinition ;

//--- Constructor
  public: cPtr_unifiedTypeMapElementClass (const GALGAS_typeDefinition & in_mDefinition
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
//Extension setter '@unifiedTypeMap makeEntry'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_makeEntry (class GALGAS_unifiedTypeMap & ioObject,
                                const class GALGAS_lstring constin_inLKey,
                                class GALGAS_unifiedTypeMap_2D_entry & out_outEntry,
                                class C_Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@unifiedTypeMap makeEntryFromString'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_makeEntryFromString (class GALGAS_unifiedTypeMap & ioObject,
                                          const class GALGAS_string constin_inKey,
                                          class GALGAS_unifiedTypeMap_2D_entry & out_outEntry,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMap searchKey' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_unifiedTypeMap_2D_entry extensionGetter_searchKey (const class GALGAS_unifiedTypeMap & inObject,
                                                                const class GALGAS_lstring & constinArgument0,
                                                                class C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@unifiedTypeMap insertKey'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_insertKey (class GALGAS_unifiedTypeMap & ioObject,
                                const class GALGAS_lstring constin_inLKey,
                                const class GALGAS_bool constin_inIsPredefined,
                                const class GALGAS_bool constin_inIsConcrete,
                                const class GALGAS_unifiedTypeMap_2D_entry constin_inSuperType,
                                const class GALGAS_typeKindEnum constin_inTypeKindEnum,
                                const class GALGAS_bool constin_inSupportCollectionValue,
                                const class GALGAS_typedPropertyList constin_inAllTypedPropertyList,
                                const class GALGAS_propertyMap constin_inPropertyMap,
                                const class GALGAS_typedPropertyList constin_inCurrentTypedPropertyList,
                                const class GALGAS_constructorMap constin_inConstructorMap,
                                const class GALGAS_getterMap constin_inGetterMap,
                                const class GALGAS_setterMap constin_inSetterMap,
                                const class GALGAS_instanceMethodMap constin_inInstanceMethodMap,
                                const class GALGAS_classMethodMap constin_inClassMethodMap,
                                const class GALGAS_optionalMethodMap constin_inOptionalMethodMap,
                                const class GALGAS_enumerationDescriptorList constin_inEnumerationDescriptor,
                                const class GALGAS_operators constin_inHandledOperatorFlags,
                                const class GALGAS_functionSignature constin_inAddAssignOperatorArguments,
                                const class GALGAS_constantIndexMap constin_inEnumConstantMap,
                                const class GALGAS_enumConstantList constin_inEnumConstantList,
                                const class GALGAS_mapSearchMethodListAST constin_inMapSearchMethodList,
                                const class GALGAS_mapSearchMethodListAST constin_inMapEntrySearchConstructorList,
                                const class GALGAS_bool constin_inGenerateHeaderInSeparateFile,
                                const class GALGAS_unifiedTypeMap_2D_entry constin_inTypeForEnumeratedElement,
                                const class GALGAS_string constin_inDefaultConstructorName,
                                const class GALGAS_string constin_inHeaderFileName,
                                const class GALGAS_headerKind constin_inHeaderKind,
                                class C_Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMap searchKey'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_searchKey (const class GALGAS_unifiedTypeMap inObject,
                                const class GALGAS_lstring constin_inLKey,
                                class GALGAS_bool & out_outIsPredefined,
                                class GALGAS_bool & out_outIsConcrete,
                                class GALGAS_unifiedTypeMap_2D_entry & out_outSuperType,
                                class GALGAS_typeKindEnum & out_outTypeKindEnum,
                                class GALGAS_bool & out_outSupportCollectionValue,
                                class GALGAS_typedPropertyList & out_outAllTypedPropertyList,
                                class GALGAS_propertyMap & out_outPropertyMap,
                                class GALGAS_typedPropertyList & out_outCurrentTypedPropertyList,
                                class GALGAS_constructorMap & out_outConstructorMap,
                                class GALGAS_getterMap & out_outGetterMap,
                                class GALGAS_setterMap & out_outSetterMap,
                                class GALGAS_instanceMethodMap & out_outInstanceMethodMap,
                                class GALGAS_classMethodMap & out_outClassMethodMap,
                                class GALGAS_optionalMethodMap & out_outOptionalMethodMap,
                                class GALGAS_enumerationDescriptorList & out_outEnumerationDescriptor,
                                class GALGAS_operators & out_outHandledOperatorFlags,
                                class GALGAS_functionSignature & out_outAddAssignOperatorArguments,
                                class GALGAS_constantIndexMap & out_outEnumConstantMap,
                                class GALGAS_enumConstantList & out_outEnumConstantList,
                                class GALGAS_mapSearchMethodListAST & out_outMapSearchMethodList,
                                class GALGAS_mapSearchMethodListAST & out_outMapEntrySearchConstructorList,
                                class GALGAS_bool & out_outGenerateHeaderInSeparateFile,
                                class GALGAS_unifiedTypeMap_2D_entry & out_outTypeForEnumeratedElement,
                                class GALGAS_string & out_outDefaultConstructorName,
                                class GALGAS_string & out_outHeaderFileName,
                                class GALGAS_headerKind & out_outHeaderKind,
                                class C_Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @unifiedTypeMapElementClass_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_unifiedTypeMapElementClass_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_unifiedTypeMapElementClass_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_unifiedTypeMapElementClass_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_unifiedTypeMapElementClass_2D_weak (const class GALGAS_unifiedTypeMapElementClass & inSource) ;

  public: GALGAS_unifiedTypeMapElementClass_2D_weak & operator = (const class GALGAS_unifiedTypeMapElementClass & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_unifiedTypeMapElementClass bang_unifiedTypeMapElementClass_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_unifiedTypeMapElementClass_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_unifiedTypeMapElementClass_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_unifiedTypeMapElementClass_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_unifiedTypeMapElementClass_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapElementClass_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMap-entry definition' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_unifiedTypeDefinition extensionGetter_definition (const class GALGAS_unifiedTypeMap_2D_entry & inObject,
                                                               class C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMap-entry lkey' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lstring extensionGetter_lkey (const class GALGAS_unifiedTypeMap_2D_entry & inObject,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMap-entry key' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_key (const class GALGAS_unifiedTypeMap_2D_entry & inObject,
                                         class C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMap-entry identifierRepresentation' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_identifierRepresentation (const class GALGAS_unifiedTypeMap_2D_entry & inObject,
                                                              class C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMap-entry mIsPredefined' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool extensionGetter_mIsPredefined (const class GALGAS_unifiedTypeMap_2D_entry & inObject,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMap-entry mIsConcrete' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool extensionGetter_mIsConcrete (const class GALGAS_unifiedTypeMap_2D_entry & inObject,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMap-entry mSuperType' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_unifiedTypeMap_2D_entry extensionGetter_mSuperType (const class GALGAS_unifiedTypeMap_2D_entry & inObject,
                                                                 class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMap-entry mTypeKindEnum' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_typeKindEnum extensionGetter_mTypeKindEnum (const class GALGAS_unifiedTypeMap_2D_entry & inObject,
                                                         class C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMap-entry mSupportCollectionValue' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool extensionGetter_mSupportCollectionValue (const class GALGAS_unifiedTypeMap_2D_entry & inObject,
                                                           class C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMap-entry mAllTypedPropertyList' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_typedPropertyList extensionGetter_mAllTypedPropertyList (const class GALGAS_unifiedTypeMap_2D_entry & inObject,
                                                                      class C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMap-entry mPropertyMap' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_propertyMap extensionGetter_mPropertyMap (const class GALGAS_unifiedTypeMap_2D_entry & inObject,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMap-entry mCurrentTypedPropertyList' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_typedPropertyList extensionGetter_mCurrentTypedPropertyList (const class GALGAS_unifiedTypeMap_2D_entry & inObject,
                                                                          class C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMap-entry mConstructorMap' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_constructorMap extensionGetter_mConstructorMap (const class GALGAS_unifiedTypeMap_2D_entry & inObject,
                                                             class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMap-entry mGetterMap' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_getterMap extensionGetter_mGetterMap (const class GALGAS_unifiedTypeMap_2D_entry & inObject,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMap-entry mSetterMap' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_setterMap extensionGetter_mSetterMap (const class GALGAS_unifiedTypeMap_2D_entry & inObject,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMap-entry mInstanceMethodMap' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_instanceMethodMap extensionGetter_mInstanceMethodMap (const class GALGAS_unifiedTypeMap_2D_entry & inObject,
                                                                   class C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMap-entry mClassMethodMap' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_classMethodMap extensionGetter_mClassMethodMap (const class GALGAS_unifiedTypeMap_2D_entry & inObject,
                                                             class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMap-entry mOptionalMethodMap' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_optionalMethodMap extensionGetter_mOptionalMethodMap (const class GALGAS_unifiedTypeMap_2D_entry & inObject,
                                                                   class C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMap-entry mEnumerationDescriptor' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_enumerationDescriptorList extensionGetter_mEnumerationDescriptor (const class GALGAS_unifiedTypeMap_2D_entry & inObject,
                                                                               class C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMap-entry mHandledOperatorFlags' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_operators extensionGetter_mHandledOperatorFlags (const class GALGAS_unifiedTypeMap_2D_entry & inObject,
                                                              class C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMap-entry mAddAssignOperatorArguments' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_functionSignature extensionGetter_mAddAssignOperatorArguments (const class GALGAS_unifiedTypeMap_2D_entry & inObject,
                                                                            class C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMap-entry mEnumConstantMap' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_constantIndexMap extensionGetter_mEnumConstantMap (const class GALGAS_unifiedTypeMap_2D_entry & inObject,
                                                                class C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMap-entry mEnumConstantList' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_enumConstantList extensionGetter_mEnumConstantList (const class GALGAS_unifiedTypeMap_2D_entry & inObject,
                                                                 class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMap-entry mMapSearchMethodList' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_mapSearchMethodListAST extensionGetter_mMapSearchMethodList (const class GALGAS_unifiedTypeMap_2D_entry & inObject,
                                                                          class C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMap-entry mMapEntrySearchConstructorList' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_mapSearchMethodListAST extensionGetter_mMapEntrySearchConstructorList (const class GALGAS_unifiedTypeMap_2D_entry & inObject,
                                                                                    class C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMap-entry mGenerateHeaderInSeparateFile' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool extensionGetter_mGenerateHeaderInSeparateFile (const class GALGAS_unifiedTypeMap_2D_entry & inObject,
                                                                 class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMap-entry mTypeForEnumeratedElement' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_unifiedTypeMap_2D_entry extensionGetter_mTypeForEnumeratedElement (const class GALGAS_unifiedTypeMap_2D_entry & inObject,
                                                                                class C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMap-entry mDefaultConstructorName' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_mDefaultConstructorName (const class GALGAS_unifiedTypeMap_2D_entry & inObject,
                                                             class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMap-entry mHeaderKind' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_headerKind extensionGetter_mHeaderKind (const class GALGAS_unifiedTypeMap_2D_entry & inObject,
                                                     class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMap-entry mHeaderFileName' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_mHeaderFileName (const class GALGAS_unifiedTypeMap_2D_entry & inObject,
                                                     class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMap-entry baseType' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_unifiedTypeMap_2D_entry extensionGetter_baseType (const class GALGAS_unifiedTypeMap_2D_entry & inObject,
                                                               class C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMap-entry addHeaderFileName'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_addHeaderFileName (const class GALGAS_unifiedTypeMap_2D_entry inObject,
                                        class GALGAS_stringset & io_ioInclusions,
                                        class C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMap-entry addHeaderFileName1'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_addHeaderFileName_31_ (const class GALGAS_unifiedTypeMap_2D_entry inObject,
                                            class GALGAS_stringset & io_ioInclusions,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @ifExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_ifExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_ifExpressionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_ifExpressionAST (const class cPtr_ifExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mIfExpression (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mThenExpression (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mElseExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_ifExpressionAST extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ifExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                               const class GALGAS_semanticExpressionAST & inOperand1,
                                                               const class GALGAS_semanticExpressionAST & inOperand2,
                                                               const class GALGAS_semanticExpressionAST & inOperand3
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ifExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMElseExpression (class GALGAS_semanticExpressionAST inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIfExpression (class GALGAS_semanticExpressionAST inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOperatorLocation (class GALGAS_location inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMThenExpression (class GALGAS_semanticExpressionAST inArgument0
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ifExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @ifExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_ifExpressionAST : public cPtr_semanticExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_semanticExpressionAST mProperty_mIfExpression ;
  public: GALGAS_semanticExpressionAST mProperty_mThenExpression ;
  public: GALGAS_semanticExpressionAST mProperty_mElseExpression ;

//--- Constructor
  public: cPtr_ifExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                const GALGAS_semanticExpressionAST & in_mIfExpression,
                                const GALGAS_semanticExpressionAST & in_mThenExpression,
                                const GALGAS_semanticExpressionAST & in_mElseExpression
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
// Phase 1: @ifExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_ifExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ifExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_ifExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ifExpressionAST_2D_weak (const class GALGAS_ifExpressionAST & inSource) ;

  public: GALGAS_ifExpressionAST_2D_weak & operator = (const class GALGAS_ifExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ifExpressionAST bang_ifExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_ifExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_ifExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_ifExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ifExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionAST_2D_weak ;

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
  public: class GALGAS_semanticExpressionForGeneration readProperty_mIfExpression (void) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_mThenExpression (void) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_mElseExpression (void) const ;

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

//----------------------------------------------------------------------------------------------------------------------

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
// Phase 1: @unaryPlusExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_unaryPlusExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_unaryPlusExpressionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_unaryPlusExpressionAST (const class cPtr_unaryPlusExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_unaryPlusExpressionAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_unaryPlusExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                      const class GALGAS_semanticExpressionAST & inOperand1
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_unaryPlusExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_unaryPlusExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unaryPlusExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @unaryPlusExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_unaryPlusExpressionAST : public cPtr_semanticExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_semanticExpressionAST mProperty_mExpression ;

//--- Constructor
  public: cPtr_unaryPlusExpressionAST (const GALGAS_location & in_mOperatorLocation,
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
// Phase 1: @unaryPlusExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_unaryPlusExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_unaryPlusExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_unaryPlusExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_unaryPlusExpressionAST_2D_weak (const class GALGAS_unaryPlusExpressionAST & inSource) ;

  public: GALGAS_unaryPlusExpressionAST_2D_weak & operator = (const class GALGAS_unaryPlusExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_unaryPlusExpressionAST bang_unaryPlusExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_unaryPlusExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_unaryPlusExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_unaryPlusExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_unaryPlusExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unaryPlusExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @unaryMinusExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_unaryMinusExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_unaryMinusExpressionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_unaryMinusExpressionAST (const class cPtr_unaryMinusExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_unaryMinusExpressionAST extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_unaryMinusExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                       const class GALGAS_semanticExpressionAST & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_unaryMinusExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_unaryMinusExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unaryMinusExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @unaryMinusExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_unaryMinusExpressionAST : public cPtr_semanticExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_semanticExpressionAST mProperty_mExpression ;

//--- Constructor
  public: cPtr_unaryMinusExpressionAST (const GALGAS_location & in_mOperatorLocation,
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
// Phase 1: @unaryMinusExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_unaryMinusExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_unaryMinusExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_unaryMinusExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_unaryMinusExpressionAST_2D_weak (const class GALGAS_unaryMinusExpressionAST & inSource) ;

  public: GALGAS_unaryMinusExpressionAST_2D_weak & operator = (const class GALGAS_unaryMinusExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_unaryMinusExpressionAST bang_unaryMinusExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_unaryMinusExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_unaryMinusExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_unaryMinusExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_unaryMinusExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unaryMinusExpressionAST_2D_weak ;

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
  public: class GALGAS_semanticExpressionForGeneration readProperty_mExpression (void) const ;

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

//----------------------------------------------------------------------------------------------------------------------

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
// Phase 1: @varInExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_varInExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_varInExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_varInExpressionAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_varInExpressionAST (const class cPtr_varInExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mVarName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_varInExpressionAST extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_varInExpressionAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_varInExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMVarName (class GALGAS_lstring inArgument0
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_varInExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varInExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @varInExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_varInExpressionAST : public cPtr_semanticExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mVarName ;

//--- Constructor
  public: cPtr_varInExpressionAST (const GALGAS_lstring & in_mVarName
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
// Phase 1: @varInExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_varInExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_varInExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_varInExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_varInExpressionAST_2D_weak (const class GALGAS_varInExpressionAST & inSource) ;

  public: GALGAS_varInExpressionAST_2D_weak & operator = (const class GALGAS_varInExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_varInExpressionAST bang_varInExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_varInExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_varInExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_varInExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_varInExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varInExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @varInExpressionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_varInExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_varInExpressionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_varInExpressionForGeneration (const class cPtr_varInExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mCppVarName (void) const ;

  public: class GALGAS_string readProperty_mNameForCheckingFormalParameterUsing (void) const ;

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

//----------------------------------------------------------------------------------------------------------------------

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
// Phase 1: @actualOutputExpressionList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_actualOutputExpressionList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_actualOutputExpressionList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_actualOutputExpressionList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mActualSelector,
                                                 const class GALGAS_semanticExpressionAST & in_mExpression,
                                                 const class GALGAS_location & in_mEndOfExpressionLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_actualOutputExpressionList extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_actualOutputExpressionList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_actualOutputExpressionList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_semanticExpressionAST & inOperand1,
                                                                                    const class GALGAS_location & inOperand2
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_actualOutputExpressionList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_semanticExpressionAST & inOperand1,
                                                     const class GALGAS_location & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_actualOutputExpressionList add_operation (const GALGAS_actualOutputExpressionList & inOperand,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_actualOutputExpressionList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_semanticExpressionAST constinArgument1,
                                                      class GALGAS_location constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_semanticExpressionAST & outArgument1,
                                                 class GALGAS_location & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_semanticExpressionAST & outArgument1,
                                                class GALGAS_location & outArgument2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_semanticExpressionAST & outArgument1,
                                                      class GALGAS_location & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMActualSelectorAtIndex (class GALGAS_lstring constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfExpressionLocationAtIndex (class GALGAS_location constinArgument0,
                                                                           class GALGAS_uint constinArgument1,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExpressionAtIndex (class GALGAS_semanticExpressionAST constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_semanticExpressionAST & outArgument1,
                                              class GALGAS_location & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_semanticExpressionAST & outArgument1,
                                             class GALGAS_location & outArgument2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mActualSelectorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfExpressionLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticExpressionAST getter_mExpressionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_actualOutputExpressionList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_actualOutputExpressionList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_actualOutputExpressionList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_actualOutputExpressionList ;
 
} ; // End of GALGAS_actualOutputExpressionList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_actualOutputExpressionList : public cGenericAbstractEnumerator {
  public: cEnumerator_actualOutputExpressionList (const GALGAS_actualOutputExpressionList & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mActualSelector (LOCATION_ARGS) const ;
  public: class GALGAS_semanticExpressionAST current_mExpression (LOCATION_ARGS) const ;
  public: class GALGAS_location current_mEndOfExpressionLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_actualOutputExpressionList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualOutputExpressionList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @actualOutputExpressionList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_actualOutputExpressionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mActualSelector ;
  public: inline GALGAS_lstring readProperty_mActualSelector (void) const {
    return mProperty_mActualSelector ;
  }

  public: GALGAS_semanticExpressionAST mProperty_mExpression ;
  public: inline GALGAS_semanticExpressionAST readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

  public: GALGAS_location mProperty_mEndOfExpressionLocation ;
  public: inline GALGAS_location readProperty_mEndOfExpressionLocation (void) const {
    return mProperty_mEndOfExpressionLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_actualOutputExpressionList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMActualSelector (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mActualSelector = inValue ;
  }

  public: inline void setter_setMExpression (const GALGAS_semanticExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

  public: inline void setter_setMEndOfExpressionLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfExpressionLocation = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_actualOutputExpressionList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_actualOutputExpressionList_2D_element (const GALGAS_lstring & in_mActualSelector,
                                                        const GALGAS_semanticExpressionAST & in_mExpression,
                                                        const GALGAS_location & in_mEndOfExpressionLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_actualOutputExpressionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_actualOutputExpressionList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                     const class GALGAS_semanticExpressionAST & inOperand1,
                                                                                     const class GALGAS_location & inOperand2
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_actualOutputExpressionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_actualOutputExpressionList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualOutputExpressionList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@actualOutputExpressionList enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_enterInSemanticContext (const class GALGAS_actualOutputExpressionList inObject,
                                             class GALGAS_unifiedTypeMap & io_ioTypeMap,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @trueExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_trueExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_trueExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_trueExpressionAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_trueExpressionAST (const class cPtr_trueExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mLocation (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_trueExpressionAST extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_trueExpressionAST constructor_new (const class GALGAS_location & inOperand0
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_trueExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_trueExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_trueExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @trueExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_trueExpressionAST : public cPtr_semanticExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_location mProperty_mLocation ;

//--- Constructor
  public: cPtr_trueExpressionAST (const GALGAS_location & in_mLocation
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
// Phase 1: @trueExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_trueExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_trueExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_trueExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_trueExpressionAST_2D_weak (const class GALGAS_trueExpressionAST & inSource) ;

  public: GALGAS_trueExpressionAST_2D_weak & operator = (const class GALGAS_trueExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_trueExpressionAST bang_trueExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_trueExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_trueExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_trueExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_trueExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_trueExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @falseExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_falseExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_falseExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_falseExpressionAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_falseExpressionAST (const class cPtr_falseExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mLocation (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_falseExpressionAST extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_falseExpressionAST constructor_new (const class GALGAS_location & inOperand0
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_falseExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_falseExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_falseExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @falseExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_falseExpressionAST : public cPtr_semanticExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_location mProperty_mLocation ;

//--- Constructor
  public: cPtr_falseExpressionAST (const GALGAS_location & in_mLocation
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
// Phase 1: @falseExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_falseExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_falseExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_falseExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_falseExpressionAST_2D_weak (const class GALGAS_falseExpressionAST & inSource) ;

  public: GALGAS_falseExpressionAST_2D_weak & operator = (const class GALGAS_falseExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_falseExpressionAST bang_falseExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_falseExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_falseExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_falseExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_falseExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_falseExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @trueExpressionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_trueExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_trueExpressionForGeneration (void) ;

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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
// Phase 1: @literalStringExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalStringExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_literalStringExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_literalStringExpressionAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_literalStringExpressionAST (const class cPtr_literalStringExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mLocation (void) const ;

  public: class GALGAS_stringlist readProperty_mStringSequence (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_literalStringExpressionAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalStringExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                          const class GALGAS_stringlist & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalStringExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalStringExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalStringExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @literalStringExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_literalStringExpressionAST : public cPtr_semanticExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_location mProperty_mLocation ;
  public: GALGAS_stringlist mProperty_mStringSequence ;

//--- Constructor
  public: cPtr_literalStringExpressionAST (const GALGAS_location & in_mLocation,
                                           const GALGAS_stringlist & in_mStringSequence
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
// Phase 1: @literalStringExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalStringExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_literalStringExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_literalStringExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_literalStringExpressionAST_2D_weak (const class GALGAS_literalStringExpressionAST & inSource) ;

  public: GALGAS_literalStringExpressionAST_2D_weak & operator = (const class GALGAS_literalStringExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_literalStringExpressionAST bang_literalStringExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_literalStringExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalStringExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalStringExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalStringExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalStringExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @literalStringExpressionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalStringExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_literalStringExpressionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_literalStringExpressionForGeneration (const class cPtr_literalStringExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mString (void) const ;

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

//----------------------------------------------------------------------------------------------------------------------

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
// Phase 1: @literalCharExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalCharExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_literalCharExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_literalCharExpressionAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_literalCharExpressionAST (const class cPtr_literalCharExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lchar readProperty_mCharacter (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_literalCharExpressionAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalCharExpressionAST constructor_new (const class GALGAS_lchar & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalCharExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalCharExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalCharExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @literalCharExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_literalCharExpressionAST : public cPtr_semanticExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lchar mProperty_mCharacter ;

//--- Constructor
  public: cPtr_literalCharExpressionAST (const GALGAS_lchar & in_mCharacter
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
// Phase 1: @literalCharExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalCharExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_literalCharExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_literalCharExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_literalCharExpressionAST_2D_weak (const class GALGAS_literalCharExpressionAST & inSource) ;

  public: GALGAS_literalCharExpressionAST_2D_weak & operator = (const class GALGAS_literalCharExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_literalCharExpressionAST bang_literalCharExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_literalCharExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalCharExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalCharExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalCharExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalCharExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @literalCharExpressionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalCharExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_literalCharExpressionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_literalCharExpressionForGeneration (const class cPtr_literalCharExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_char readProperty_mCharacter (void) const ;

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

//----------------------------------------------------------------------------------------------------------------------

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
// Phase 1: @literalDoubleExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalDoubleExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_literalDoubleExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_literalDoubleExpressionAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_literalDoubleExpressionAST (const class cPtr_literalDoubleExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_ldouble readProperty_mValue (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_literalDoubleExpressionAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalDoubleExpressionAST constructor_new (const class GALGAS_ldouble & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalDoubleExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalDoubleExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalDoubleExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @literalDoubleExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_literalDoubleExpressionAST : public cPtr_semanticExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_ldouble mProperty_mValue ;

//--- Constructor
  public: cPtr_literalDoubleExpressionAST (const GALGAS_ldouble & in_mValue
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
// Phase 1: @literalDoubleExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalDoubleExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_literalDoubleExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_literalDoubleExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_literalDoubleExpressionAST_2D_weak (const class GALGAS_literalDoubleExpressionAST & inSource) ;

  public: GALGAS_literalDoubleExpressionAST_2D_weak & operator = (const class GALGAS_literalDoubleExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_literalDoubleExpressionAST bang_literalDoubleExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_literalDoubleExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalDoubleExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalDoubleExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalDoubleExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalDoubleExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @literalDoubleExpressionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalDoubleExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_literalDoubleExpressionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_literalDoubleExpressionForGeneration (const class cPtr_literalDoubleExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_double readProperty_mValue (void) const ;

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

//----------------------------------------------------------------------------------------------------------------------

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
// Phase 1: @literalUIntExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalUIntExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_literalUIntExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_literalUIntExpressionAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_literalUIntExpressionAST (const class cPtr_literalUIntExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_luint readProperty_mValue (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_literalUIntExpressionAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalUIntExpressionAST constructor_new (const class GALGAS_luint & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalUIntExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalUIntExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalUIntExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @literalUIntExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_literalUIntExpressionAST : public cPtr_semanticExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_luint mProperty_mValue ;

//--- Constructor
  public: cPtr_literalUIntExpressionAST (const GALGAS_luint & in_mValue
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
// Phase 1: @literalUIntExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalUIntExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_literalUIntExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_literalUIntExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_literalUIntExpressionAST_2D_weak (const class GALGAS_literalUIntExpressionAST & inSource) ;

  public: GALGAS_literalUIntExpressionAST_2D_weak & operator = (const class GALGAS_literalUIntExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_literalUIntExpressionAST bang_literalUIntExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_literalUIntExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalUIntExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalUIntExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalUIntExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalUIntExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @literalUInt_36__34_ExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalUInt_36__34_ExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_literalUInt_36__34_ExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_literalUInt_36__34_ExpressionAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_literalUInt_36__34_ExpressionAST (const class cPtr_literalUInt_36__34_ExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_luint_36__34_ readProperty_mValue (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_literalUInt_36__34_ExpressionAST extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalUInt_36__34_ExpressionAST constructor_new (const class GALGAS_luint_36__34_ & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalUInt_36__34_ExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalUInt_36__34_ExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @literalUInt64ExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_literalUInt_36__34_ExpressionAST : public cPtr_semanticExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_luint_36__34_ mProperty_mValue ;

//--- Constructor
  public: cPtr_literalUInt_36__34_ExpressionAST (const GALGAS_luint_36__34_ & in_mValue
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
// Phase 1: @literalUInt_36__34_ExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalUInt_36__34_ExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_literalUInt_36__34_ExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_literalUInt_36__34_ExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_literalUInt_36__34_ExpressionAST_2D_weak (const class GALGAS_literalUInt_36__34_ExpressionAST & inSource) ;

  public: GALGAS_literalUInt_36__34_ExpressionAST_2D_weak & operator = (const class GALGAS_literalUInt_36__34_ExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_literalUInt_36__34_ExpressionAST bang_literalUInt_36__34_ExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_literalUInt_36__34_ExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalUInt_36__34_ExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalUInt_36__34_ExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalUInt_36__34_ExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @literalSIntExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalSIntExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_literalSIntExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_literalSIntExpressionAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_literalSIntExpressionAST (const class cPtr_literalSIntExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lsint readProperty_mValue (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_literalSIntExpressionAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalSIntExpressionAST constructor_new (const class GALGAS_lsint & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalSIntExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalSIntExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalSIntExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @literalSIntExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_literalSIntExpressionAST : public cPtr_semanticExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lsint mProperty_mValue ;

//--- Constructor
  public: cPtr_literalSIntExpressionAST (const GALGAS_lsint & in_mValue
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
// Phase 1: @literalSIntExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalSIntExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_literalSIntExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_literalSIntExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_literalSIntExpressionAST_2D_weak (const class GALGAS_literalSIntExpressionAST & inSource) ;

  public: GALGAS_literalSIntExpressionAST_2D_weak & operator = (const class GALGAS_literalSIntExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_literalSIntExpressionAST bang_literalSIntExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_literalSIntExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalSIntExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalSIntExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalSIntExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalSIntExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @literalSInt_36__34_ExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalSInt_36__34_ExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_literalSInt_36__34_ExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_literalSInt_36__34_ExpressionAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_literalSInt_36__34_ExpressionAST (const class cPtr_literalSInt_36__34_ExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lsint_36__34_ readProperty_mValue (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_literalSInt_36__34_ExpressionAST extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalSInt_36__34_ExpressionAST constructor_new (const class GALGAS_lsint_36__34_ & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalSInt_36__34_ExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalSInt_36__34_ExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @literalSInt64ExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_literalSInt_36__34_ExpressionAST : public cPtr_semanticExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lsint_36__34_ mProperty_mValue ;

//--- Constructor
  public: cPtr_literalSInt_36__34_ExpressionAST (const GALGAS_lsint_36__34_ & in_mValue
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
// Phase 1: @literalSInt_36__34_ExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalSInt_36__34_ExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_literalSInt_36__34_ExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_literalSInt_36__34_ExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_literalSInt_36__34_ExpressionAST_2D_weak (const class GALGAS_literalSInt_36__34_ExpressionAST & inSource) ;

  public: GALGAS_literalSInt_36__34_ExpressionAST_2D_weak & operator = (const class GALGAS_literalSInt_36__34_ExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_literalSInt_36__34_ExpressionAST bang_literalSInt_36__34_ExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_literalSInt_36__34_ExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalSInt_36__34_ExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalSInt_36__34_ExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalSInt_36__34_ExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @literalBigIntExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalBigIntExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_literalBigIntExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_literalBigIntExpressionAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_literalBigIntExpressionAST (const class cPtr_literalBigIntExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lbigint readProperty_mValue (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_literalBigIntExpressionAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalBigIntExpressionAST constructor_new (const class GALGAS_lbigint & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalBigIntExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalBigIntExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalBigIntExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @literalBigIntExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_literalBigIntExpressionAST : public cPtr_semanticExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lbigint mProperty_mValue ;

//--- Constructor
  public: cPtr_literalBigIntExpressionAST (const GALGAS_lbigint & in_mValue
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

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_literalUIntExpressionForGeneration (const class cPtr_literalUIntExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_uint readProperty_mValue (void) const ;

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

//----------------------------------------------------------------------------------------------------------------------

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

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_literalUInt_36__34_ExpressionForGeneration (const class cPtr_literalUInt_36__34_ExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_uint_36__34_ readProperty_mValue (void) const ;

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

//----------------------------------------------------------------------------------------------------------------------

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

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_literalSIntExpressionForGeneration (const class cPtr_literalSIntExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_sint readProperty_mValue (void) const ;

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @literalSIntExpressionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalSIntExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_literalSIntExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_literalSIntExpressionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_literalSIntExpressionForGeneration_2D_weak (const class GALGAS_literalSIntExpressionForGeneration & inSource) ;

  public: GALGAS_literalSIntExpressionForGeneration_2D_weak & operator = (const class GALGAS_literalSIntExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_literalSIntExpressionForGeneration bang_literalSIntExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_literalSIntExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalSIntExpressionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalSIntExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalSIntExpressionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalSIntExpressionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @literalSInt_36__34_ExpressionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalSInt_36__34_ExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_literalSInt_36__34_ExpressionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_literalSInt_36__34_ExpressionForGeneration (const class cPtr_literalSInt_36__34_ExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_sint_36__34_ readProperty_mValue (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_literalSInt_36__34_ExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalSInt_36__34_ExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                          const class GALGAS_location & inOperand1,
                                                                                          const class GALGAS_sint_36__34_ & inOperand2
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalSInt_36__34_ExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalSInt_36__34_ExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @literalSInt64ExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_literalSInt_36__34_ExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_sint_36__34_ mProperty_mValue ;

//--- Constructor
  public: cPtr_literalSInt_36__34_ExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                           const GALGAS_location & in_mLocation,
                                                           const GALGAS_sint_36__34_ & in_mValue
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
// Phase 1: @literalSInt_36__34_ExpressionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalSInt_36__34_ExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_literalSInt_36__34_ExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_literalSInt_36__34_ExpressionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_literalSInt_36__34_ExpressionForGeneration_2D_weak (const class GALGAS_literalSInt_36__34_ExpressionForGeneration & inSource) ;

  public: GALGAS_literalSInt_36__34_ExpressionForGeneration_2D_weak & operator = (const class GALGAS_literalSInt_36__34_ExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_literalSInt_36__34_ExpressionForGeneration bang_literalSInt_36__34_ExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_literalSInt_36__34_ExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalSInt_36__34_ExpressionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalSInt_36__34_ExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalSInt_36__34_ExpressionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @literalBigIntExpressionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalBigIntExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_literalBigIntExpressionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_literalBigIntExpressionForGeneration (const class cPtr_literalBigIntExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bigint readProperty_mValue (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_literalBigIntExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalBigIntExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                    const class GALGAS_location & inOperand1,
                                                                                    const class GALGAS_bigint & inOperand2
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalBigIntExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMValue (class GALGAS_bigint inArgument0
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalBigIntExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalBigIntExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @literalBigIntExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_literalBigIntExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_bigint mProperty_mValue ;

//--- Constructor
  public: cPtr_literalBigIntExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                     const GALGAS_location & in_mLocation,
                                                     const GALGAS_bigint & in_mValue
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
// Phase 1: @literalBigIntExpressionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalBigIntExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_literalBigIntExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_literalBigIntExpressionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_literalBigIntExpressionForGeneration_2D_weak (const class GALGAS_literalBigIntExpressionForGeneration & inSource) ;

  public: GALGAS_literalBigIntExpressionForGeneration_2D_weak & operator = (const class GALGAS_literalBigIntExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_literalBigIntExpressionForGeneration bang_literalBigIntExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_literalBigIntExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalBigIntExpressionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalBigIntExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalBigIntExpressionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalBigIntExpressionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                              Phase 1: @comparison enum                                              *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_comparison : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_comparison (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_equal,
    kEnum_notEqual,
    kEnum_lowerOrEqual,
    kEnum_lowerThan,
    kEnum_greaterOrEqual,
    kEnum_greaterThan,
    kEnum_sameInstance,
    kEnum_differentInstances
  } enumeration ;
  
//--------------------------------- Private data member
  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_comparison extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_comparison constructor_differentInstances (LOCATION_ARGS) ;

  public: static class GALGAS_comparison constructor_equal (LOCATION_ARGS) ;

  public: static class GALGAS_comparison constructor_greaterOrEqual (LOCATION_ARGS) ;

  public: static class GALGAS_comparison constructor_greaterThan (LOCATION_ARGS) ;

  public: static class GALGAS_comparison constructor_lowerOrEqual (LOCATION_ARGS) ;

  public: static class GALGAS_comparison constructor_lowerThan (LOCATION_ARGS) ;

  public: static class GALGAS_comparison constructor_notEqual (LOCATION_ARGS) ;

  public: static class GALGAS_comparison constructor_sameInstance (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_comparison & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isDifferentInstances (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isEqual (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isGreaterOrEqual (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isGreaterThan (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLowerOrEqual (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLowerThan (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNotEqual (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSameInstance (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_differentInstances () const ;

  public: VIRTUAL_IN_DEBUG bool optional_equal () const ;

  public: VIRTUAL_IN_DEBUG bool optional_greaterOrEqual () const ;

  public: VIRTUAL_IN_DEBUG bool optional_greaterThan () const ;

  public: VIRTUAL_IN_DEBUG bool optional_lowerOrEqual () const ;

  public: VIRTUAL_IN_DEBUG bool optional_lowerThan () const ;

  public: VIRTUAL_IN_DEBUG bool optional_notEqual () const ;

  public: VIRTUAL_IN_DEBUG bool optional_sameInstance () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_comparison class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparison ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @comparisonExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_comparisonExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_comparisonExpressionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_comparisonExpressionAST (const class cPtr_comparisonExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_comparison readProperty_mComparison (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_comparisonExpressionAST extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_comparisonExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                       const class GALGAS_semanticExpressionAST & inOperand1,
                                                                       const class GALGAS_comparison & inOperand2,
                                                                       const class GALGAS_semanticExpressionAST & inOperand3
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_comparisonExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMComparison (class GALGAS_comparison inArgument0
                                                       COMMA_LOCATION_ARGS) ;

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
 
} ; // End of GALGAS_comparisonExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparisonExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @comparisonExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_comparisonExpressionAST : public cPtr_semanticExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_comparison mProperty_mComparison ;
  public: GALGAS_semanticExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_comparisonExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                        const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                        const GALGAS_comparison & in_mComparison,
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
// Phase 1: @comparisonExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_comparisonExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_comparisonExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_comparisonExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_comparisonExpressionAST_2D_weak (const class GALGAS_comparisonExpressionAST & inSource) ;

  public: GALGAS_comparisonExpressionAST_2D_weak & operator = (const class GALGAS_comparisonExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_comparisonExpressionAST bang_comparisonExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_comparisonExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_comparisonExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_comparisonExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_comparisonExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparisonExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @comparisonExpressionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_comparisonExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_comparisonExpressionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_comparisonExpressionForGeneration (const class cPtr_comparisonExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_semanticExpressionForGeneration readProperty_mLeftExpression (void) const ;

  public: class GALGAS_comparison readProperty_mComparison (void) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_comparisonExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_comparisonExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                 const class GALGAS_location & inOperand1,
                                                                                 const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                                 const class GALGAS_comparison & inOperand3,
                                                                                 const class GALGAS_semanticExpressionForGeneration & inOperand4
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_comparisonExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMComparison (class GALGAS_comparison inArgument0
                                                       COMMA_LOCATION_ARGS) ;

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
 
} ; // End of GALGAS_comparisonExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparisonExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @comparisonExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_comparisonExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_semanticExpressionForGeneration mProperty_mLeftExpression ;
  public: GALGAS_comparison mProperty_mComparison ;
  public: GALGAS_semanticExpressionForGeneration mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_comparisonExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                  const GALGAS_location & in_mLocation,
                                                  const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                  const GALGAS_comparison & in_mComparison,
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
// Phase 1: @comparisonExpressionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_comparisonExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_comparisonExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_comparisonExpressionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_comparisonExpressionForGeneration_2D_weak (const class GALGAS_comparisonExpressionForGeneration & inSource) ;

  public: GALGAS_comparisonExpressionForGeneration_2D_weak & operator = (const class GALGAS_comparisonExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_comparisonExpressionForGeneration bang_comparisonExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_comparisonExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_comparisonExpressionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_comparisonExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_comparisonExpressionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparisonExpressionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @rightShiftExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_rightShiftExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_rightShiftExpressionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_rightShiftExpressionAST (const class cPtr_rightShiftExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_rightShiftExpressionAST extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_rightShiftExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                       const class GALGAS_semanticExpressionAST & inOperand1,
                                                                       const class GALGAS_semanticExpressionAST & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_rightShiftExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_rightShiftExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_rightShiftExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @rightShiftExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_rightShiftExpressionAST : public cPtr_semanticExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_semanticExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_rightShiftExpressionAST (const GALGAS_location & in_mOperatorLocation,
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
// Phase 1: @rightShiftExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_rightShiftExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_rightShiftExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_rightShiftExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_rightShiftExpressionAST_2D_weak (const class GALGAS_rightShiftExpressionAST & inSource) ;

  public: GALGAS_rightShiftExpressionAST_2D_weak & operator = (const class GALGAS_rightShiftExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_rightShiftExpressionAST bang_rightShiftExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_rightShiftExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_rightShiftExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_rightShiftExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_rightShiftExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_rightShiftExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @leftShiftExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_leftShiftExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_leftShiftExpressionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_leftShiftExpressionAST (const class cPtr_leftShiftExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_leftShiftExpressionAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_leftShiftExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                      const class GALGAS_semanticExpressionAST & inOperand1,
                                                                      const class GALGAS_semanticExpressionAST & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_leftShiftExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_leftShiftExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_leftShiftExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @leftShiftExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_leftShiftExpressionAST : public cPtr_semanticExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_semanticExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_leftShiftExpressionAST (const GALGAS_location & in_mOperatorLocation,
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
// Phase 1: @leftShiftExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_leftShiftExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_leftShiftExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_leftShiftExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_leftShiftExpressionAST_2D_weak (const class GALGAS_leftShiftExpressionAST & inSource) ;

  public: GALGAS_leftShiftExpressionAST_2D_weak & operator = (const class GALGAS_leftShiftExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_leftShiftExpressionAST bang_leftShiftExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_leftShiftExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_leftShiftExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_leftShiftExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_leftShiftExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_leftShiftExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @addExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_addExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_addExpressionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_addExpressionAST (const class cPtr_addExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_addExpressionAST extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_addExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                const class GALGAS_semanticExpressionAST & inOperand1,
                                                                const class GALGAS_semanticExpressionAST & inOperand2
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_addExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_addExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_addExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @addExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_addExpressionAST : public cPtr_semanticExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_semanticExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_addExpressionAST (const GALGAS_location & in_mOperatorLocation,
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
// Phase 1: @addExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_addExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_addExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_addExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_addExpressionAST_2D_weak (const class GALGAS_addExpressionAST & inSource) ;

  public: GALGAS_addExpressionAST_2D_weak & operator = (const class GALGAS_addExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_addExpressionAST bang_addExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_addExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_addExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_addExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_addExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_addExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @addExpressionNoOverflowAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_addExpressionNoOverflowAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_addExpressionNoOverflowAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_addExpressionNoOverflowAST (const class cPtr_addExpressionNoOverflowAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_addExpressionNoOverflowAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_addExpressionNoOverflowAST constructor_new (const class GALGAS_location & inOperand0,
                                                                          const class GALGAS_semanticExpressionAST & inOperand1,
                                                                          const class GALGAS_semanticExpressionAST & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_addExpressionNoOverflowAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_addExpressionNoOverflowAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_addExpressionNoOverflowAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @addExpressionNoOverflowAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_addExpressionNoOverflowAST : public cPtr_semanticExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_semanticExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_addExpressionNoOverflowAST (const GALGAS_location & in_mOperatorLocation,
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
// Phase 1: @addExpressionNoOverflowAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_addExpressionNoOverflowAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_addExpressionNoOverflowAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_addExpressionNoOverflowAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_addExpressionNoOverflowAST_2D_weak (const class GALGAS_addExpressionNoOverflowAST & inSource) ;

  public: GALGAS_addExpressionNoOverflowAST_2D_weak & operator = (const class GALGAS_addExpressionNoOverflowAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_addExpressionNoOverflowAST bang_addExpressionNoOverflowAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_addExpressionNoOverflowAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_addExpressionNoOverflowAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_addExpressionNoOverflowAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_addExpressionNoOverflowAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_addExpressionNoOverflowAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @subExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_subExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_subExpressionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_subExpressionAST (const class cPtr_subExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_subExpressionAST extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_subExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                const class GALGAS_semanticExpressionAST & inOperand1,
                                                                const class GALGAS_semanticExpressionAST & inOperand2
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_subExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_subExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_subExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @subExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_subExpressionAST : public cPtr_semanticExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_semanticExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_subExpressionAST (const GALGAS_location & in_mOperatorLocation,
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
// Phase 1: @subExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_subExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_subExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_subExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_subExpressionAST_2D_weak (const class GALGAS_subExpressionAST & inSource) ;

  public: GALGAS_subExpressionAST_2D_weak & operator = (const class GALGAS_subExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_subExpressionAST bang_subExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_subExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_subExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_subExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_subExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_subExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @subExpressionNoOverflowAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_subExpressionNoOverflowAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_subExpressionNoOverflowAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_subExpressionNoOverflowAST (const class cPtr_subExpressionNoOverflowAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_subExpressionNoOverflowAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_subExpressionNoOverflowAST constructor_new (const class GALGAS_location & inOperand0,
                                                                          const class GALGAS_semanticExpressionAST & inOperand1,
                                                                          const class GALGAS_semanticExpressionAST & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_subExpressionNoOverflowAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_subExpressionNoOverflowAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_subExpressionNoOverflowAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @subExpressionNoOverflowAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_subExpressionNoOverflowAST : public cPtr_semanticExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_semanticExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_subExpressionNoOverflowAST (const GALGAS_location & in_mOperatorLocation,
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
// Phase 1: @subExpressionNoOverflowAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_subExpressionNoOverflowAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_subExpressionNoOverflowAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_subExpressionNoOverflowAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_subExpressionNoOverflowAST_2D_weak (const class GALGAS_subExpressionNoOverflowAST & inSource) ;

  public: GALGAS_subExpressionNoOverflowAST_2D_weak & operator = (const class GALGAS_subExpressionNoOverflowAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_subExpressionNoOverflowAST bang_subExpressionNoOverflowAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_subExpressionNoOverflowAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_subExpressionNoOverflowAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_subExpressionNoOverflowAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_subExpressionNoOverflowAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_subExpressionNoOverflowAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                            Phase 1: @binaryOperator enum                                            *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_binaryOperator : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_binaryOperator (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_rightShift,
    kEnum_leftShift,
    kEnum_add,
    kEnum_addNoOverflow,
    kEnum_sub,
    kEnum_subNoOverflow,
    kEnum_operator_5F_and,
    kEnum_operator_5F_or,
    kEnum_operator_5F_xor,
    kEnum_multiply_5F_operation_5F_no_5F_ovf,
    kEnum_multiply_5F_operation,
    kEnum_divide_5F_operation,
    kEnum_divide_5F_operation_5F_no_5F_ovf,
    kEnum_modulo_5F_operation
  } enumeration ;
  
//--------------------------------- Private data member
  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_binaryOperator extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_binaryOperator constructor_add (LOCATION_ARGS) ;

  public: static class GALGAS_binaryOperator constructor_addNoOverflow (LOCATION_ARGS) ;

  public: static class GALGAS_binaryOperator constructor_divide_5F_operation (LOCATION_ARGS) ;

  public: static class GALGAS_binaryOperator constructor_divide_5F_operation_5F_no_5F_ovf (LOCATION_ARGS) ;

  public: static class GALGAS_binaryOperator constructor_leftShift (LOCATION_ARGS) ;

  public: static class GALGAS_binaryOperator constructor_modulo_5F_operation (LOCATION_ARGS) ;

  public: static class GALGAS_binaryOperator constructor_multiply_5F_operation (LOCATION_ARGS) ;

  public: static class GALGAS_binaryOperator constructor_multiply_5F_operation_5F_no_5F_ovf (LOCATION_ARGS) ;

  public: static class GALGAS_binaryOperator constructor_operator_5F_and (LOCATION_ARGS) ;

  public: static class GALGAS_binaryOperator constructor_operator_5F_or (LOCATION_ARGS) ;

  public: static class GALGAS_binaryOperator constructor_operator_5F_xor (LOCATION_ARGS) ;

  public: static class GALGAS_binaryOperator constructor_rightShift (LOCATION_ARGS) ;

  public: static class GALGAS_binaryOperator constructor_sub (LOCATION_ARGS) ;

  public: static class GALGAS_binaryOperator constructor_subNoOverflow (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_binaryOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isAdd (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isAddNoOverflow (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isDivide_5F_operation (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isDivide_5F_operation_5F_no_5F_ovf (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLeftShift (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isModulo_5F_operation (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isMultiply_5F_operation (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isMultiply_5F_operation_5F_no_5F_ovf (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isOperator_5F_and (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isOperator_5F_or (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isOperator_5F_xor (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRightShift (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSub (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSubNoOverflow (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_add () const ;

  public: VIRTUAL_IN_DEBUG bool optional_addNoOverflow () const ;

  public: VIRTUAL_IN_DEBUG bool optional_divide_5F_operation () const ;

  public: VIRTUAL_IN_DEBUG bool optional_divide_5F_operation_5F_no_5F_ovf () const ;

  public: VIRTUAL_IN_DEBUG bool optional_leftShift () const ;

  public: VIRTUAL_IN_DEBUG bool optional_modulo_5F_operation () const ;

  public: VIRTUAL_IN_DEBUG bool optional_multiply_5F_operation () const ;

  public: VIRTUAL_IN_DEBUG bool optional_multiply_5F_operation_5F_no_5F_ovf () const ;

  public: VIRTUAL_IN_DEBUG bool optional_operator_5F_and () const ;

  public: VIRTUAL_IN_DEBUG bool optional_operator_5F_or () const ;

  public: VIRTUAL_IN_DEBUG bool optional_operator_5F_xor () const ;

  public: VIRTUAL_IN_DEBUG bool optional_rightShift () const ;

  public: VIRTUAL_IN_DEBUG bool optional_sub () const ;

  public: VIRTUAL_IN_DEBUG bool optional_subNoOverflow () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_binaryOperator class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_binaryOperator ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @binaryOperatorExpressionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_binaryOperatorExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_binaryOperatorExpressionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_binaryOperatorExpressionForGeneration (const class cPtr_binaryOperatorExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_semanticExpressionForGeneration readProperty_mLeftExpression (void) const ;

  public: class GALGAS_binaryOperator readProperty_mOperator (void) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_binaryOperatorExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_binaryOperatorExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                     const class GALGAS_location & inOperand1,
                                                                                     const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                                     const class GALGAS_binaryOperator & inOperand3,
                                                                                     const class GALGAS_semanticExpressionForGeneration & inOperand4
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_binaryOperatorExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_semanticExpressionForGeneration inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOperator (class GALGAS_binaryOperator inArgument0
                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_semanticExpressionForGeneration inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_binaryOperatorExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_binaryOperatorExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @binaryOperatorExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_binaryOperatorExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_semanticExpressionForGeneration mProperty_mLeftExpression ;
  public: GALGAS_binaryOperator mProperty_mOperator ;
  public: GALGAS_semanticExpressionForGeneration mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_binaryOperatorExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                      const GALGAS_location & in_mLocation,
                                                      const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                      const GALGAS_binaryOperator & in_mOperator,
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
// Phase 1: @binaryOperatorExpressionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_binaryOperatorExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_binaryOperatorExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_binaryOperatorExpressionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_binaryOperatorExpressionForGeneration_2D_weak (const class GALGAS_binaryOperatorExpressionForGeneration & inSource) ;

  public: GALGAS_binaryOperatorExpressionForGeneration_2D_weak & operator = (const class GALGAS_binaryOperatorExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_binaryOperatorExpressionForGeneration bang_binaryOperatorExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_binaryOperatorExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_binaryOperatorExpressionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_binaryOperatorExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_binaryOperatorExpressionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_binaryOperatorExpressionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @multiplicationExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_multiplicationExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_multiplicationExpressionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_multiplicationExpressionAST (const class cPtr_multiplicationExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_multiplicationExpressionAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_multiplicationExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                           const class GALGAS_semanticExpressionAST & inOperand1,
                                                                           const class GALGAS_semanticExpressionAST & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_multiplicationExpressionAST & inOperand) const ;

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
 
} ; // End of GALGAS_multiplicationExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_multiplicationExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @multiplicationExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_multiplicationExpressionAST : public cPtr_semanticExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_semanticExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_multiplicationExpressionAST (const GALGAS_location & in_mOperatorLocation,
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
// Phase 1: @multiplicationExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_multiplicationExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_multiplicationExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_multiplicationExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_multiplicationExpressionAST_2D_weak (const class GALGAS_multiplicationExpressionAST & inSource) ;

  public: GALGAS_multiplicationExpressionAST_2D_weak & operator = (const class GALGAS_multiplicationExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_multiplicationExpressionAST bang_multiplicationExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_multiplicationExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_multiplicationExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_multiplicationExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_multiplicationExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_multiplicationExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @multiplicationExpressionNoOverflowAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_multiplicationExpressionNoOverflowAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_multiplicationExpressionNoOverflowAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_multiplicationExpressionNoOverflowAST (const class cPtr_multiplicationExpressionNoOverflowAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_multiplicationExpressionNoOverflowAST extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_multiplicationExpressionNoOverflowAST constructor_new (const class GALGAS_location & inOperand0,
                                                                                     const class GALGAS_semanticExpressionAST & inOperand1,
                                                                                     const class GALGAS_semanticExpressionAST & inOperand2
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_multiplicationExpressionNoOverflowAST & inOperand) const ;

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
 
} ; // End of GALGAS_multiplicationExpressionNoOverflowAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_multiplicationExpressionNoOverflowAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @multiplicationExpressionNoOverflowAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_multiplicationExpressionNoOverflowAST : public cPtr_semanticExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_semanticExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_multiplicationExpressionNoOverflowAST (const GALGAS_location & in_mOperatorLocation,
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
// Phase 1: @multiplicationExpressionNoOverflowAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_multiplicationExpressionNoOverflowAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_multiplicationExpressionNoOverflowAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_multiplicationExpressionNoOverflowAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_multiplicationExpressionNoOverflowAST_2D_weak (const class GALGAS_multiplicationExpressionNoOverflowAST & inSource) ;

  public: GALGAS_multiplicationExpressionNoOverflowAST_2D_weak & operator = (const class GALGAS_multiplicationExpressionNoOverflowAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_multiplicationExpressionNoOverflowAST bang_multiplicationExpressionNoOverflowAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_multiplicationExpressionNoOverflowAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_multiplicationExpressionNoOverflowAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_multiplicationExpressionNoOverflowAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_multiplicationExpressionNoOverflowAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_multiplicationExpressionNoOverflowAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @divisionExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_divisionExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_divisionExpressionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_divisionExpressionAST (const class cPtr_divisionExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_divisionExpressionAST extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_divisionExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                     const class GALGAS_semanticExpressionAST & inOperand1,
                                                                     const class GALGAS_semanticExpressionAST & inOperand2
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_divisionExpressionAST & inOperand) const ;

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
 
} ; // End of GALGAS_divisionExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_divisionExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @divisionExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_divisionExpressionAST : public cPtr_semanticExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_semanticExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_divisionExpressionAST (const GALGAS_location & in_mOperatorLocation,
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
// Phase 1: @divisionExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_divisionExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_divisionExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_divisionExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_divisionExpressionAST_2D_weak (const class GALGAS_divisionExpressionAST & inSource) ;

  public: GALGAS_divisionExpressionAST_2D_weak & operator = (const class GALGAS_divisionExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_divisionExpressionAST bang_divisionExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_divisionExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_divisionExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_divisionExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_divisionExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_divisionExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @divisionExpressionNoOverflowAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_divisionExpressionNoOverflowAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_divisionExpressionNoOverflowAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_divisionExpressionNoOverflowAST (const class cPtr_divisionExpressionNoOverflowAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_divisionExpressionNoOverflowAST extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_divisionExpressionNoOverflowAST constructor_new (const class GALGAS_location & inOperand0,
                                                                               const class GALGAS_semanticExpressionAST & inOperand1,
                                                                               const class GALGAS_semanticExpressionAST & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_divisionExpressionNoOverflowAST & inOperand) const ;

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
 
} ; // End of GALGAS_divisionExpressionNoOverflowAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_divisionExpressionNoOverflowAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @divisionExpressionNoOverflowAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_divisionExpressionNoOverflowAST : public cPtr_semanticExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_semanticExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_divisionExpressionNoOverflowAST (const GALGAS_location & in_mOperatorLocation,
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
// Phase 1: @divisionExpressionNoOverflowAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_divisionExpressionNoOverflowAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_divisionExpressionNoOverflowAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_divisionExpressionNoOverflowAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_divisionExpressionNoOverflowAST_2D_weak (const class GALGAS_divisionExpressionNoOverflowAST & inSource) ;

  public: GALGAS_divisionExpressionNoOverflowAST_2D_weak & operator = (const class GALGAS_divisionExpressionNoOverflowAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_divisionExpressionNoOverflowAST bang_divisionExpressionNoOverflowAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_divisionExpressionNoOverflowAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_divisionExpressionNoOverflowAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_divisionExpressionNoOverflowAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_divisionExpressionNoOverflowAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_divisionExpressionNoOverflowAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @moduloExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_moduloExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_moduloExpressionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_moduloExpressionAST (const class cPtr_moduloExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_moduloExpressionAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_moduloExpressionAST constructor_new (const class GALGAS_location & inOperand0,
                                                                   const class GALGAS_semanticExpressionAST & inOperand1,
                                                                   const class GALGAS_semanticExpressionAST & inOperand2
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_moduloExpressionAST & inOperand) const ;

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
 
} ; // End of GALGAS_moduloExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_moduloExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @moduloExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_moduloExpressionAST : public cPtr_semanticExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_semanticExpressionAST mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_moduloExpressionAST (const GALGAS_location & in_mOperatorLocation,
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
// Phase 1: @moduloExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_moduloExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_moduloExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_moduloExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_moduloExpressionAST_2D_weak (const class GALGAS_moduloExpressionAST & inSource) ;

  public: GALGAS_moduloExpressionAST_2D_weak & operator = (const class GALGAS_moduloExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_moduloExpressionAST bang_moduloExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_moduloExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_moduloExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_moduloExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_moduloExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_moduloExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @testDynamicClassInExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_testDynamicClassInExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_testDynamicClassInExpressionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_testDynamicClassInExpressionAST (const class cPtr_testDynamicClassInExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_semanticExpressionAST readProperty_mReceiverExpression (void) const ;

  public: class GALGAS_location readProperty_mEndOfReceiverExpression (void) const ;

  public: class GALGAS_dynamicTypeComparisonKind readProperty_mTypeComparisonKind (void) const ;

  public: class GALGAS_lstring readProperty_mTypeName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_testDynamicClassInExpressionAST extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_testDynamicClassInExpressionAST constructor_new (const class GALGAS_semanticExpressionAST & inOperand0,
                                                                               const class GALGAS_location & inOperand1,
                                                                               const class GALGAS_dynamicTypeComparisonKind & inOperand2,
                                                                               const class GALGAS_lstring & inOperand3
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_testDynamicClassInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_testDynamicClassInExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_testDynamicClassInExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @testDynamicClassInExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_testDynamicClassInExpressionAST : public cPtr_semanticExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_semanticExpressionAST mProperty_mReceiverExpression ;
  public: GALGAS_location mProperty_mEndOfReceiverExpression ;
  public: GALGAS_dynamicTypeComparisonKind mProperty_mTypeComparisonKind ;
  public: GALGAS_lstring mProperty_mTypeName ;

//--- Constructor
  public: cPtr_testDynamicClassInExpressionAST (const GALGAS_semanticExpressionAST & in_mReceiverExpression,
                                                const GALGAS_location & in_mEndOfReceiverExpression,
                                                const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                const GALGAS_lstring & in_mTypeName
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
// Phase 1: @testDynamicClassInExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_testDynamicClassInExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_testDynamicClassInExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_testDynamicClassInExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_testDynamicClassInExpressionAST_2D_weak (const class GALGAS_testDynamicClassInExpressionAST & inSource) ;

  public: GALGAS_testDynamicClassInExpressionAST_2D_weak & operator = (const class GALGAS_testDynamicClassInExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_testDynamicClassInExpressionAST bang_testDynamicClassInExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_testDynamicClassInExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_testDynamicClassInExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_testDynamicClassInExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_testDynamicClassInExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_testDynamicClassInExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @castInExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_castInExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_castInExpressionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_castInExpressionAST (const class cPtr_castInExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_semanticExpressionAST readProperty_mReceiverExpression (void) const ;

  public: class GALGAS_location readProperty_mEndOfReceiverExpression (void) const ;

  public: class GALGAS_lstring readProperty_mTypeName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_castInExpressionAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_castInExpressionAST constructor_new (const class GALGAS_semanticExpressionAST & inOperand0,
                                                                   const class GALGAS_location & inOperand1,
                                                                   const class GALGAS_lstring & inOperand2
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_castInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_castInExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_castInExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @castInExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_castInExpressionAST : public cPtr_semanticExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_semanticExpressionAST mProperty_mReceiverExpression ;
  public: GALGAS_location mProperty_mEndOfReceiverExpression ;
  public: GALGAS_lstring mProperty_mTypeName ;

//--- Constructor
  public: cPtr_castInExpressionAST (const GALGAS_semanticExpressionAST & in_mReceiverExpression,
                                    const GALGAS_location & in_mEndOfReceiverExpression,
                                    const GALGAS_lstring & in_mTypeName
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
// Phase 1: @castInExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_castInExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_castInExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_castInExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_castInExpressionAST_2D_weak (const class GALGAS_castInExpressionAST & inSource) ;

  public: GALGAS_castInExpressionAST_2D_weak & operator = (const class GALGAS_castInExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_castInExpressionAST bang_castInExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_castInExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_castInExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_castInExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_castInExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_castInExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @testDynamicClassInExpressionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_testDynamicClassInExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_testDynamicClassInExpressionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_testDynamicClassInExpressionForGeneration (const class cPtr_testDynamicClassInExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_semanticExpressionForGeneration readProperty_mReceiverExpression (void) const ;

  public: class GALGAS_dynamicTypeComparisonKind readProperty_mTypeComparisonKind (void) const ;

  public: class GALGAS_unifiedTypeMap_2D_entry readProperty_mCastType (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_testDynamicClassInExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_testDynamicClassInExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                         const class GALGAS_location & inOperand1,
                                                                                         const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                                         const class GALGAS_dynamicTypeComparisonKind & inOperand3,
                                                                                         const class GALGAS_unifiedTypeMap_2D_entry & inOperand4
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_testDynamicClassInExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_testDynamicClassInExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_testDynamicClassInExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @testDynamicClassInExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_testDynamicClassInExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_semanticExpressionForGeneration mProperty_mReceiverExpression ;
  public: GALGAS_dynamicTypeComparisonKind mProperty_mTypeComparisonKind ;
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mCastType ;

//--- Constructor
  public: cPtr_testDynamicClassInExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                          const GALGAS_location & in_mLocation,
                                                          const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                          const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
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
// Phase 1: @testDynamicClassInExpressionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_testDynamicClassInExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_testDynamicClassInExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_testDynamicClassInExpressionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_testDynamicClassInExpressionForGeneration_2D_weak (const class GALGAS_testDynamicClassInExpressionForGeneration & inSource) ;

  public: GALGAS_testDynamicClassInExpressionForGeneration_2D_weak & operator = (const class GALGAS_testDynamicClassInExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_testDynamicClassInExpressionForGeneration bang_testDynamicClassInExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_testDynamicClassInExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_testDynamicClassInExpressionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_testDynamicClassInExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_testDynamicClassInExpressionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_testDynamicClassInExpressionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @extractObjectInExpressionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_extractObjectInExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_extractObjectInExpressionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_extractObjectInExpressionForGeneration (const class cPtr_extractObjectInExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_semanticExpressionForGeneration readProperty_mReceiverExpression (void) const ;

  public: class GALGAS_string readProperty_mTypeName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_extractObjectInExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_extractObjectInExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                      const class GALGAS_location & inOperand1,
                                                                                      const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                                      const class GALGAS_string & inOperand3
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_extractObjectInExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_extractObjectInExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extractObjectInExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @extractObjectInExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_extractObjectInExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_semanticExpressionForGeneration mProperty_mReceiverExpression ;
  public: GALGAS_string mProperty_mTypeName ;

//--- Constructor
  public: cPtr_extractObjectInExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                       const GALGAS_location & in_mLocation,
                                                       const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                       const GALGAS_string & in_mTypeName
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
// Phase 1: @extractObjectInExpressionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_extractObjectInExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_extractObjectInExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_extractObjectInExpressionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_extractObjectInExpressionForGeneration_2D_weak (const class GALGAS_extractObjectInExpressionForGeneration & inSource) ;

  public: GALGAS_extractObjectInExpressionForGeneration_2D_weak & operator = (const class GALGAS_extractObjectInExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_extractObjectInExpressionForGeneration bang_extractObjectInExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_extractObjectInExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_extractObjectInExpressionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_extractObjectInExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_extractObjectInExpressionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extractObjectInExpressionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @optionExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_optionExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_optionExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_optionExpressionAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_optionExpressionAST (const class cPtr_optionExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mOptionComponentName (void) const ;

  public: class GALGAS_lstring readProperty_mOptionEntryName (void) const ;

  public: class GALGAS_lstring readProperty_mOptionGetterName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_optionExpressionAST extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_optionExpressionAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                   const class GALGAS_lstring & inOperand1,
                                                                   const class GALGAS_lstring & inOperand2
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_optionExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_optionExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @optionExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_optionExpressionAST : public cPtr_semanticExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mOptionComponentName ;
  public: GALGAS_lstring mProperty_mOptionEntryName ;
  public: GALGAS_lstring mProperty_mOptionGetterName ;

//--- Constructor
  public: cPtr_optionExpressionAST (const GALGAS_lstring & in_mOptionComponentName,
                                    const GALGAS_lstring & in_mOptionEntryName,
                                    const GALGAS_lstring & in_mOptionGetterName
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
// Phase 1: @optionExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_optionExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_optionExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_optionExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_optionExpressionAST_2D_weak (const class GALGAS_optionExpressionAST & inSource) ;

  public: GALGAS_optionExpressionAST_2D_weak & operator = (const class GALGAS_optionExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_optionExpressionAST bang_optionExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_optionExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_optionExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_optionExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_optionExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @optionValueExpressionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_optionValueExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_optionValueExpressionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_optionValueExpressionForGeneration (const class cPtr_optionValueExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_mOptionComponentIsPredefined (void) const ;

  public: class GALGAS_string readProperty_mOptionComponentName (void) const ;

  public: class GALGAS_string readProperty_mOptionEntryName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_optionValueExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_optionValueExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                  const class GALGAS_location & inOperand1,
                                                                                  const class GALGAS_bool & inOperand2,
                                                                                  const class GALGAS_string & inOperand3,
                                                                                  const class GALGAS_string & inOperand4
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_optionValueExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_optionValueExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionValueExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @optionValueExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_optionValueExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_bool mProperty_mOptionComponentIsPredefined ;
  public: GALGAS_string mProperty_mOptionComponentName ;
  public: GALGAS_string mProperty_mOptionEntryName ;

//--- Constructor
  public: cPtr_optionValueExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                   const GALGAS_location & in_mLocation,
                                                   const GALGAS_bool & in_mOptionComponentIsPredefined,
                                                   const GALGAS_string & in_mOptionComponentName,
                                                   const GALGAS_string & in_mOptionEntryName
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
// Phase 1: @optionValueExpressionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_optionValueExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_optionValueExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_optionValueExpressionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_optionValueExpressionForGeneration_2D_weak (const class GALGAS_optionValueExpressionForGeneration & inSource) ;

  public: GALGAS_optionValueExpressionForGeneration_2D_weak & operator = (const class GALGAS_optionValueExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_optionValueExpressionForGeneration bang_optionValueExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_optionValueExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_optionValueExpressionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_optionValueExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_optionValueExpressionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionValueExpressionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @optionCharExpressionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_optionCharExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_optionCharExpressionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_optionCharExpressionForGeneration (const class cPtr_optionCharExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_mOptionComponentIsPredefined (void) const ;

  public: class GALGAS_string readProperty_mOptionComponentName (void) const ;

  public: class GALGAS_string readProperty_mOptionEntryName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_optionCharExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_optionCharExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                 const class GALGAS_location & inOperand1,
                                                                                 const class GALGAS_bool & inOperand2,
                                                                                 const class GALGAS_string & inOperand3,
                                                                                 const class GALGAS_string & inOperand4
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_optionCharExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_optionCharExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionCharExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @optionCharExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_optionCharExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_bool mProperty_mOptionComponentIsPredefined ;
  public: GALGAS_string mProperty_mOptionComponentName ;
  public: GALGAS_string mProperty_mOptionEntryName ;

//--- Constructor
  public: cPtr_optionCharExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                  const GALGAS_location & in_mLocation,
                                                  const GALGAS_bool & in_mOptionComponentIsPredefined,
                                                  const GALGAS_string & in_mOptionComponentName,
                                                  const GALGAS_string & in_mOptionEntryName
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
// Phase 1: @optionCharExpressionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_optionCharExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_optionCharExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_optionCharExpressionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_optionCharExpressionForGeneration_2D_weak (const class GALGAS_optionCharExpressionForGeneration & inSource) ;

  public: GALGAS_optionCharExpressionForGeneration_2D_weak & operator = (const class GALGAS_optionCharExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_optionCharExpressionForGeneration bang_optionCharExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_optionCharExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_optionCharExpressionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_optionCharExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_optionCharExpressionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionCharExpressionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @optionStringExpressionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_optionStringExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_optionStringExpressionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_optionStringExpressionForGeneration (const class cPtr_optionStringExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_mOptionComponentIsPredefined (void) const ;

  public: class GALGAS_string readProperty_mOptionComponentName (void) const ;

  public: class GALGAS_string readProperty_mOptionEntryName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_optionStringExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_optionStringExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                   const class GALGAS_location & inOperand1,
                                                                                   const class GALGAS_bool & inOperand2,
                                                                                   const class GALGAS_string & inOperand3,
                                                                                   const class GALGAS_string & inOperand4
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_optionStringExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_optionStringExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionStringExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @optionStringExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_optionStringExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_bool mProperty_mOptionComponentIsPredefined ;
  public: GALGAS_string mProperty_mOptionComponentName ;
  public: GALGAS_string mProperty_mOptionEntryName ;

//--- Constructor
  public: cPtr_optionStringExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                    const GALGAS_location & in_mLocation,
                                                    const GALGAS_bool & in_mOptionComponentIsPredefined,
                                                    const GALGAS_string & in_mOptionComponentName,
                                                    const GALGAS_string & in_mOptionEntryName
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
// Phase 1: @optionStringExpressionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_optionStringExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_optionStringExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_optionStringExpressionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_optionStringExpressionForGeneration_2D_weak (const class GALGAS_optionStringExpressionForGeneration & inSource) ;

  public: GALGAS_optionStringExpressionForGeneration_2D_weak & operator = (const class GALGAS_optionStringExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_optionStringExpressionForGeneration bang_optionStringExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_optionStringExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_optionStringExpressionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_optionStringExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_optionStringExpressionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionStringExpressionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @optionCommentExpressionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_optionCommentExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_optionCommentExpressionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_optionCommentExpressionForGeneration (const class cPtr_optionCommentExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_mOptionComponentIsPredefined (void) const ;

  public: class GALGAS_string readProperty_mOptionComponentName (void) const ;

  public: class GALGAS_string readProperty_mOptionEntryName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_optionCommentExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_optionCommentExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                    const class GALGAS_location & inOperand1,
                                                                                    const class GALGAS_bool & inOperand2,
                                                                                    const class GALGAS_string & inOperand3,
                                                                                    const class GALGAS_string & inOperand4
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_optionCommentExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_optionCommentExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionCommentExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @optionCommentExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_optionCommentExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_bool mProperty_mOptionComponentIsPredefined ;
  public: GALGAS_string mProperty_mOptionComponentName ;
  public: GALGAS_string mProperty_mOptionEntryName ;

//--- Constructor
  public: cPtr_optionCommentExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                     const GALGAS_location & in_mLocation,
                                                     const GALGAS_bool & in_mOptionComponentIsPredefined,
                                                     const GALGAS_string & in_mOptionComponentName,
                                                     const GALGAS_string & in_mOptionEntryName
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
// Phase 1: @optionCommentExpressionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_optionCommentExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_optionCommentExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_optionCommentExpressionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_optionCommentExpressionForGeneration_2D_weak (const class GALGAS_optionCommentExpressionForGeneration & inSource) ;

  public: GALGAS_optionCommentExpressionForGeneration_2D_weak & operator = (const class GALGAS_optionCommentExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_optionCommentExpressionForGeneration bang_optionCommentExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_optionCommentExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_optionCommentExpressionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_optionCommentExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_optionCommentExpressionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionCommentExpressionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexiqueIntrospectionExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexiqueIntrospectionExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexiqueIntrospectionExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexiqueIntrospectionExpressionAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexiqueIntrospectionExpressionAST (const class cPtr_lexiqueIntrospectionExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mLexiqueComponentName (void) const ;

  public: class GALGAS_lstring readProperty_mLexiqueGetterName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexiqueIntrospectionExpressionAST extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexiqueIntrospectionExpressionAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexiqueIntrospectionExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexiqueIntrospectionExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueIntrospectionExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexiqueIntrospectionExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexiqueIntrospectionExpressionAST : public cPtr_semanticExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mLexiqueComponentName ;
  public: GALGAS_lstring mProperty_mLexiqueGetterName ;

//--- Constructor
  public: cPtr_lexiqueIntrospectionExpressionAST (const GALGAS_lstring & in_mLexiqueComponentName,
                                                  const GALGAS_lstring & in_mLexiqueGetterName
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
// Phase 1: @lexiqueIntrospectionExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexiqueIntrospectionExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexiqueIntrospectionExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexiqueIntrospectionExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexiqueIntrospectionExpressionAST_2D_weak (const class GALGAS_lexiqueIntrospectionExpressionAST & inSource) ;

  public: GALGAS_lexiqueIntrospectionExpressionAST_2D_weak & operator = (const class GALGAS_lexiqueIntrospectionExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexiqueIntrospectionExpressionAST bang_lexiqueIntrospectionExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexiqueIntrospectionExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexiqueIntrospectionExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexiqueIntrospectionExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexiqueIntrospectionExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueIntrospectionExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @lexiqueIntrospectionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexiqueIntrospectionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_lexiqueIntrospectionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_lexiqueIntrospectionForGeneration (const class cPtr_lexiqueIntrospectionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mLexiqueComponentName (void) const ;

  public: class GALGAS_string readProperty_mLexiqueGetterName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexiqueIntrospectionForGeneration extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexiqueIntrospectionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                 const class GALGAS_location & inOperand1,
                                                                                 const class GALGAS_string & inOperand2,
                                                                                 const class GALGAS_string & inOperand3
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexiqueIntrospectionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexiqueIntrospectionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueIntrospectionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexiqueIntrospectionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_lexiqueIntrospectionForGeneration : public cPtr_semanticExpressionForGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_string mProperty_mLexiqueComponentName ;
  public: GALGAS_string mProperty_mLexiqueGetterName ;

//--- Constructor
  public: cPtr_lexiqueIntrospectionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                  const GALGAS_location & in_mLocation,
                                                  const GALGAS_string & in_mLexiqueComponentName,
                                                  const GALGAS_string & in_mLexiqueGetterName
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
// Phase 1: @lexiqueIntrospectionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lexiqueIntrospectionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexiqueIntrospectionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_lexiqueIntrospectionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexiqueIntrospectionForGeneration_2D_weak (const class GALGAS_lexiqueIntrospectionForGeneration & inSource) ;

  public: GALGAS_lexiqueIntrospectionForGeneration_2D_weak & operator = (const class GALGAS_lexiqueIntrospectionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexiqueIntrospectionForGeneration bang_lexiqueIntrospectionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_lexiqueIntrospectionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_lexiqueIntrospectionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_lexiqueIntrospectionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_lexiqueIntrospectionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueIntrospectionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @filewrapperObjectInstanciationInExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_filewrapperObjectInstanciationInExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_filewrapperObjectInstanciationInExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_filewrapperObjectInstanciationInExpressionAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_filewrapperObjectInstanciationInExpressionAST (const class cPtr_filewrapperObjectInstanciationInExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mFilewrapperName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_filewrapperObjectInstanciationInExpressionAST extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_filewrapperObjectInstanciationInExpressionAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_filewrapperObjectInstanciationInExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMFilewrapperName (class GALGAS_lstring inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_filewrapperObjectInstanciationInExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperObjectInstanciationInExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @filewrapperObjectInstanciationInExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_filewrapperObjectInstanciationInExpressionAST : public cPtr_semanticExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mFilewrapperName ;

//--- Constructor
  public: cPtr_filewrapperObjectInstanciationInExpressionAST (const GALGAS_lstring & in_mFilewrapperName
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
// Phase 1: @filewrapperObjectInstanciationInExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_filewrapperObjectInstanciationInExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_filewrapperObjectInstanciationInExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_filewrapperObjectInstanciationInExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_filewrapperObjectInstanciationInExpressionAST_2D_weak (const class GALGAS_filewrapperObjectInstanciationInExpressionAST & inSource) ;

  public: GALGAS_filewrapperObjectInstanciationInExpressionAST_2D_weak & operator = (const class GALGAS_filewrapperObjectInstanciationInExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_filewrapperObjectInstanciationInExpressionAST bang_filewrapperObjectInstanciationInExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_filewrapperObjectInstanciationInExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_filewrapperObjectInstanciationInExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_filewrapperObjectInstanciationInExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_filewrapperObjectInstanciationInExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperObjectInstanciationInExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @filewrapperInExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_filewrapperInExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_filewrapperInExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_filewrapperInExpressionAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_filewrapperInExpressionAST (const class cPtr_filewrapperInExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mFilewrapperName (void) const ;

  public: class GALGAS_lstring readProperty_mFilewrapperPath (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_filewrapperInExpressionAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_filewrapperInExpressionAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_filewrapperInExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMFilewrapperName (class GALGAS_lstring inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFilewrapperPath (class GALGAS_lstring inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_filewrapperInExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperInExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @filewrapperInExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_filewrapperInExpressionAST : public cPtr_semanticExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mFilewrapperName ;
  public: GALGAS_lstring mProperty_mFilewrapperPath ;

//--- Constructor
  public: cPtr_filewrapperInExpressionAST (const GALGAS_lstring & in_mFilewrapperName,
                                           const GALGAS_lstring & in_mFilewrapperPath
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
// Phase 1: @filewrapperInExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_filewrapperInExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_filewrapperInExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_filewrapperInExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_filewrapperInExpressionAST_2D_weak (const class GALGAS_filewrapperInExpressionAST & inSource) ;

  public: GALGAS_filewrapperInExpressionAST_2D_weak & operator = (const class GALGAS_filewrapperInExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_filewrapperInExpressionAST bang_filewrapperInExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_filewrapperInExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_filewrapperInExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_filewrapperInExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_filewrapperInExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperInExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @filewrapperTemplateInExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_filewrapperTemplateInExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_filewrapperTemplateInExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_filewrapperTemplateInExpressionAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_filewrapperTemplateInExpressionAST (const class cPtr_filewrapperTemplateInExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mFilewrapperName (void) const ;

  public: class GALGAS_lstring readProperty_mFilewrapperTemplateName (void) const ;

  public: class GALGAS_actualOutputExpressionList readProperty_mExpressions (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_filewrapperTemplateInExpressionAST extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_filewrapperTemplateInExpressionAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_lstring & inOperand1,
                                                                                  const class GALGAS_actualOutputExpressionList & inOperand2
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_filewrapperTemplateInExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMExpressions (class GALGAS_actualOutputExpressionList inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFilewrapperName (class GALGAS_lstring inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFilewrapperTemplateName (class GALGAS_lstring inArgument0
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_filewrapperTemplateInExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @filewrapperTemplateInExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_filewrapperTemplateInExpressionAST : public cPtr_semanticExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mFilewrapperName ;
  public: GALGAS_lstring mProperty_mFilewrapperTemplateName ;
  public: GALGAS_actualOutputExpressionList mProperty_mExpressions ;

//--- Constructor
  public: cPtr_filewrapperTemplateInExpressionAST (const GALGAS_lstring & in_mFilewrapperName,
                                                   const GALGAS_lstring & in_mFilewrapperTemplateName,
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
// Phase 1: @filewrapperTemplateInExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_filewrapperTemplateInExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_filewrapperTemplateInExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_filewrapperTemplateInExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_filewrapperTemplateInExpressionAST_2D_weak (const class GALGAS_filewrapperTemplateInExpressionAST & inSource) ;

  public: GALGAS_filewrapperTemplateInExpressionAST_2D_weak & operator = (const class GALGAS_filewrapperTemplateInExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_filewrapperTemplateInExpressionAST bang_filewrapperTemplateInExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_filewrapperTemplateInExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_filewrapperTemplateInExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_filewrapperTemplateInExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_filewrapperTemplateInExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @filewrapperInExpressionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_filewrapperInExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_filewrapperInExpressionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_filewrapperInExpressionForGeneration (const class cPtr_filewrapperInExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mFilewrapperName (void) const ;

  public: class GALGAS_string readProperty_mFilewrapperPath (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_filewrapperInExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_filewrapperInExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                    const class GALGAS_location & inOperand1,
                                                                                    const class GALGAS_string & inOperand2,
                                                                                    const class GALGAS_string & inOperand3
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_filewrapperInExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMFilewrapperName (class GALGAS_string inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFilewrapperPath (class GALGAS_string inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_filewrapperInExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperInExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @filewrapperInExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_filewrapperInExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_string mProperty_mFilewrapperName ;
  public: GALGAS_string mProperty_mFilewrapperPath ;

//--- Constructor
  public: cPtr_filewrapperInExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                     const GALGAS_location & in_mLocation,
                                                     const GALGAS_string & in_mFilewrapperName,
                                                     const GALGAS_string & in_mFilewrapperPath
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
// Phase 1: @filewrapperInExpressionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_filewrapperInExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_filewrapperInExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_filewrapperInExpressionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_filewrapperInExpressionForGeneration_2D_weak (const class GALGAS_filewrapperInExpressionForGeneration & inSource) ;

  public: GALGAS_filewrapperInExpressionForGeneration_2D_weak & operator = (const class GALGAS_filewrapperInExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_filewrapperInExpressionForGeneration bang_filewrapperInExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_filewrapperInExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_filewrapperInExpressionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_filewrapperInExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_filewrapperInExpressionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperInExpressionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @filewrapperTemplateInExpressionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_filewrapperTemplateInExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_filewrapperTemplateInExpressionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_filewrapperTemplateInExpressionForGeneration (const class cPtr_filewrapperTemplateInExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mFilewrapperName (void) const ;

  public: class GALGAS_string readProperty_mFilewrapperTemplateName (void) const ;

  public: class GALGAS_semanticExpressionListForGeneration readProperty_mActualOutputParameterList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_filewrapperTemplateInExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_filewrapperTemplateInExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                            const class GALGAS_location & inOperand1,
                                                                                            const class GALGAS_string & inOperand2,
                                                                                            const class GALGAS_string & inOperand3,
                                                                                            const class GALGAS_semanticExpressionListForGeneration & inOperand4
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_filewrapperTemplateInExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMActualOutputParameterList (class GALGAS_semanticExpressionListForGeneration inArgument0
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFilewrapperName (class GALGAS_string inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFilewrapperTemplateName (class GALGAS_string inArgument0
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_filewrapperTemplateInExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @filewrapperTemplateInExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_filewrapperTemplateInExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_string mProperty_mFilewrapperName ;
  public: GALGAS_string mProperty_mFilewrapperTemplateName ;
  public: GALGAS_semanticExpressionListForGeneration mProperty_mActualOutputParameterList ;

//--- Constructor
  public: cPtr_filewrapperTemplateInExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                             const GALGAS_location & in_mLocation,
                                                             const GALGAS_string & in_mFilewrapperName,
                                                             const GALGAS_string & in_mFilewrapperTemplateName,
                                                             const GALGAS_semanticExpressionListForGeneration & in_mActualOutputParameterList
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
// Phase 1: @filewrapperTemplateInExpressionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_filewrapperTemplateInExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_filewrapperTemplateInExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_filewrapperTemplateInExpressionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_filewrapperTemplateInExpressionForGeneration_2D_weak (const class GALGAS_filewrapperTemplateInExpressionForGeneration & inSource) ;

  public: GALGAS_filewrapperTemplateInExpressionForGeneration_2D_weak & operator = (const class GALGAS_filewrapperTemplateInExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_filewrapperTemplateInExpressionForGeneration bang_filewrapperTemplateInExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_filewrapperTemplateInExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_filewrapperTemplateInExpressionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_filewrapperTemplateInExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_filewrapperTemplateInExpressionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @filewrapperStaticPathInExpressionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_filewrapperStaticPathInExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_filewrapperStaticPathInExpressionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_filewrapperStaticPathInExpressionForGeneration (const class cPtr_filewrapperStaticPathInExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mFilewrapperName (void) const ;

  public: class GALGAS_uint readProperty_mFilewrapperFileIndex (void) const ;

  public: class GALGAS_bool readProperty_mIsTextFile (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_filewrapperStaticPathInExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_filewrapperStaticPathInExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                              const class GALGAS_location & inOperand1,
                                                                                              const class GALGAS_string & inOperand2,
                                                                                              const class GALGAS_uint & inOperand3,
                                                                                              const class GALGAS_bool & inOperand4
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_filewrapperStaticPathInExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMFilewrapperFileIndex (class GALGAS_uint inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFilewrapperName (class GALGAS_string inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsTextFile (class GALGAS_bool inArgument0
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_filewrapperStaticPathInExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperStaticPathInExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @filewrapperStaticPathInExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_filewrapperStaticPathInExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_string mProperty_mFilewrapperName ;
  public: GALGAS_uint mProperty_mFilewrapperFileIndex ;
  public: GALGAS_bool mProperty_mIsTextFile ;

//--- Constructor
  public: cPtr_filewrapperStaticPathInExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                               const GALGAS_location & in_mLocation,
                                                               const GALGAS_string & in_mFilewrapperName,
                                                               const GALGAS_uint & in_mFilewrapperFileIndex,
                                                               const GALGAS_bool & in_mIsTextFile
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
// Phase 1: @filewrapperStaticPathInExpressionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_filewrapperStaticPathInExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_filewrapperStaticPathInExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_filewrapperStaticPathInExpressionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_filewrapperStaticPathInExpressionForGeneration_2D_weak (const class GALGAS_filewrapperStaticPathInExpressionForGeneration & inSource) ;

  public: GALGAS_filewrapperStaticPathInExpressionForGeneration_2D_weak & operator = (const class GALGAS_filewrapperStaticPathInExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_filewrapperStaticPathInExpressionForGeneration bang_filewrapperStaticPathInExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_filewrapperStaticPathInExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_filewrapperStaticPathInExpressionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_filewrapperStaticPathInExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_filewrapperStaticPathInExpressionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperStaticPathInExpressionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @getterCallExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_getterCallExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_getterCallExpressionAST (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_getterCallExpressionAST (const class cPtr_getterCallExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_errorOnGetterCallInsteadOfPropertyRead (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mReceiver (void) const ;

  public: class GALGAS_lstring readProperty_mGetterName (void) const ;

  public: class GALGAS_actualOutputExpressionList readProperty_mExpressions (void) const ;

  public: class GALGAS_location readProperty_mExpressionLocation (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_getterCallExpressionAST extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_getterCallExpressionAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                       const class GALGAS_semanticExpressionAST & inOperand1,
                                                                       const class GALGAS_lstring & inOperand2,
                                                                       const class GALGAS_actualOutputExpressionList & inOperand3,
                                                                       const class GALGAS_location & inOperand4
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_getterCallExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_getterCallExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getterCallExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @getterCallExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_getterCallExpressionAST : public cPtr_semanticExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_bool mProperty_errorOnGetterCallInsteadOfPropertyRead ;
  public: GALGAS_semanticExpressionAST mProperty_mReceiver ;
  public: GALGAS_lstring mProperty_mGetterName ;
  public: GALGAS_actualOutputExpressionList mProperty_mExpressions ;
  public: GALGAS_location mProperty_mExpressionLocation ;

//--- Constructor
  public: cPtr_getterCallExpressionAST (const GALGAS_bool & in_errorOnGetterCallInsteadOfPropertyRead,
                                        const GALGAS_semanticExpressionAST & in_mReceiver,
                                        const GALGAS_lstring & in_mGetterName,
                                        const GALGAS_actualOutputExpressionList & in_mExpressions,
                                        const GALGAS_location & in_mExpressionLocation
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
// Phase 1: @getterCallExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_getterCallExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_getterCallExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_getterCallExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_getterCallExpressionAST_2D_weak (const class GALGAS_getterCallExpressionAST & inSource) ;

  public: GALGAS_getterCallExpressionAST_2D_weak & operator = (const class GALGAS_getterCallExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_getterCallExpressionAST bang_getterCallExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_getterCallExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_getterCallExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_getterCallExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_getterCallExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getterCallExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @getterCallExpressionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_getterCallExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_getterCallExpressionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_getterCallExpressionForGeneration (const class cPtr_getterCallExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_methodKind readProperty_mKind (void) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_mReceiverExpression (void) const ;

  public: class GALGAS_stringlist readProperty_mFieldList (void) const ;

  public: class GALGAS_string readProperty_mGetterName (void) const ;

  public: class GALGAS_semanticExpressionListForGeneration readProperty_mExpressions (void) const ;

  public: class GALGAS_bool readProperty_mHasCompilerArgument (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_getterCallExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_getterCallExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                 const class GALGAS_location & inOperand1,
                                                                                 const class GALGAS_methodKind & inOperand2,
                                                                                 const class GALGAS_semanticExpressionForGeneration & inOperand3,
                                                                                 const class GALGAS_stringlist & inOperand4,
                                                                                 const class GALGAS_string & inOperand5,
                                                                                 const class GALGAS_semanticExpressionListForGeneration & inOperand6,
                                                                                 const class GALGAS_bool & inOperand7
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_getterCallExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMExpressions (class GALGAS_semanticExpressionListForGeneration inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFieldList (class GALGAS_stringlist inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGetterName (class GALGAS_string inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHasCompilerArgument (class GALGAS_bool inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMKind (class GALGAS_methodKind inArgument0
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReceiverExpression (class GALGAS_semanticExpressionForGeneration inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_getterCallExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getterCallExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @getterCallExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_getterCallExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_methodKind mProperty_mKind ;
  public: GALGAS_semanticExpressionForGeneration mProperty_mReceiverExpression ;
  public: GALGAS_stringlist mProperty_mFieldList ;
  public: GALGAS_string mProperty_mGetterName ;
  public: GALGAS_semanticExpressionListForGeneration mProperty_mExpressions ;
  public: GALGAS_bool mProperty_mHasCompilerArgument ;

//--- Constructor
  public: cPtr_getterCallExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                  const GALGAS_location & in_mLocation,
                                                  const GALGAS_methodKind & in_mKind,
                                                  const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                  const GALGAS_stringlist & in_mFieldList,
                                                  const GALGAS_string & in_mGetterName,
                                                  const GALGAS_semanticExpressionListForGeneration & in_mExpressions,
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
// Phase 1: @getterCallExpressionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_getterCallExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_getterCallExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_getterCallExpressionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_getterCallExpressionForGeneration_2D_weak (const class GALGAS_getterCallExpressionForGeneration & inSource) ;

  public: GALGAS_getterCallExpressionForGeneration_2D_weak & operator = (const class GALGAS_getterCallExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_getterCallExpressionForGeneration bang_getterCallExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_getterCallExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_getterCallExpressionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_getterCallExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_getterCallExpressionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getterCallExpressionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @constructorExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_constructorExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_constructorExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_constructorExpressionAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_constructorExpressionAST (const class cPtr_constructorExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mTypeName (void) const ;

  public: class GALGAS_lstring readProperty_mConstructorName (void) const ;

  public: class GALGAS_actualOutputExpressionList readProperty_mExpressions (void) const ;

  public: class GALGAS_location readProperty_locationForOldStyleCollectionInitializerError (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_constructorExpressionAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_constructorExpressionAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_lstring & inOperand1,
                                                                        const class GALGAS_actualOutputExpressionList & inOperand2,
                                                                        const class GALGAS_location & inOperand3
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_constructorExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_constructorExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @constructorExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_constructorExpressionAST : public cPtr_semanticExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mTypeName ;
  public: GALGAS_lstring mProperty_mConstructorName ;
  public: GALGAS_actualOutputExpressionList mProperty_mExpressions ;
  public: GALGAS_location mProperty_locationForOldStyleCollectionInitializerError ;

//--- Constructor
  public: cPtr_constructorExpressionAST (const GALGAS_lstring & in_mTypeName,
                                         const GALGAS_lstring & in_mConstructorName,
                                         const GALGAS_actualOutputExpressionList & in_mExpressions,
                                         const GALGAS_location & in_locationForOldStyleCollectionInitializerError
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
// Phase 1: @constructorExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_constructorExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_constructorExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_constructorExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_constructorExpressionAST_2D_weak (const class GALGAS_constructorExpressionAST & inSource) ;

  public: GALGAS_constructorExpressionAST_2D_weak & operator = (const class GALGAS_constructorExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_constructorExpressionAST bang_constructorExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_constructorExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_constructorExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_constructorExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_constructorExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @defaultConstructorExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_defaultConstructorExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_defaultConstructorExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_defaultConstructorExpressionAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_defaultConstructorExpressionAST (const class cPtr_defaultConstructorExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mTypeName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_defaultConstructorExpressionAST extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_defaultConstructorExpressionAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_defaultConstructorExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_defaultConstructorExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_defaultConstructorExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @defaultConstructorExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_defaultConstructorExpressionAST : public cPtr_semanticExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mTypeName ;

//--- Constructor
  public: cPtr_defaultConstructorExpressionAST (const GALGAS_lstring & in_mTypeName
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
// Phase 1: @defaultConstructorExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_defaultConstructorExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_defaultConstructorExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_defaultConstructorExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_defaultConstructorExpressionAST_2D_weak (const class GALGAS_defaultConstructorExpressionAST & inSource) ;

  public: GALGAS_defaultConstructorExpressionAST_2D_weak & operator = (const class GALGAS_defaultConstructorExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_defaultConstructorExpressionAST bang_defaultConstructorExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_defaultConstructorExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_defaultConstructorExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_defaultConstructorExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_defaultConstructorExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_defaultConstructorExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @constructorExpressionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_constructorExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_constructorExpressionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_constructorExpressionForGeneration (const class cPtr_constructorExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_unifiedTypeMap_2D_entry readProperty_mConstructorType (void) const ;

  public: class GALGAS_string readProperty_mConstructorName (void) const ;

  public: class GALGAS_semanticExpressionListForGeneration readProperty_mEffectiveParameterList (void) const ;

  public: class GALGAS_bool readProperty_mHasCompilerArgument (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_constructorExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_constructorExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                  const class GALGAS_location & inOperand1,
                                                                                  const class GALGAS_unifiedTypeMap_2D_entry & inOperand2,
                                                                                  const class GALGAS_string & inOperand3,
                                                                                  const class GALGAS_semanticExpressionListForGeneration & inOperand4,
                                                                                  const class GALGAS_bool & inOperand5
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_constructorExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_constructorExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @constructorExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_constructorExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mConstructorType ;
  public: GALGAS_string mProperty_mConstructorName ;
  public: GALGAS_semanticExpressionListForGeneration mProperty_mEffectiveParameterList ;
  public: GALGAS_bool mProperty_mHasCompilerArgument ;

//--- Constructor
  public: cPtr_constructorExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                   const GALGAS_location & in_mLocation,
                                                   const GALGAS_unifiedTypeMap_2D_entry & in_mConstructorType,
                                                   const GALGAS_string & in_mConstructorName,
                                                   const GALGAS_semanticExpressionListForGeneration & in_mEffectiveParameterList,
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
// Phase 1: @constructorExpressionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_constructorExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_constructorExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_constructorExpressionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_constructorExpressionForGeneration_2D_weak (const class GALGAS_constructorExpressionForGeneration & inSource) ;

  public: GALGAS_constructorExpressionForGeneration_2D_weak & operator = (const class GALGAS_constructorExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_constructorExpressionForGeneration bang_constructorExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_constructorExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_constructorExpressionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_constructorExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_constructorExpressionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorExpressionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @defaultConstructorExpressionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_defaultConstructorExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_defaultConstructorExpressionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_defaultConstructorExpressionForGeneration (const class cPtr_defaultConstructorExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_defaultConstructorExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_defaultConstructorExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                         const class GALGAS_location & inOperand1
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_defaultConstructorExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_defaultConstructorExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_defaultConstructorExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @defaultConstructorExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_defaultConstructorExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties

//--- Constructor
  public: cPtr_defaultConstructorExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
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
// Phase 1: @defaultConstructorExpressionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_defaultConstructorExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_defaultConstructorExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_defaultConstructorExpressionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_defaultConstructorExpressionForGeneration_2D_weak (const class GALGAS_defaultConstructorExpressionForGeneration & inSource) ;

  public: GALGAS_defaultConstructorExpressionForGeneration_2D_weak & operator = (const class GALGAS_defaultConstructorExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_defaultConstructorExpressionForGeneration bang_defaultConstructorExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_defaultConstructorExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_defaultConstructorExpressionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_defaultConstructorExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_defaultConstructorExpressionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_defaultConstructorExpressionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @functionCallExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_functionCallExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_functionCallExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_functionCallExpressionAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_functionCallExpressionAST (const class cPtr_functionCallExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mFunctionName (void) const ;

  public: class GALGAS_actualOutputExpressionList readProperty_mExpressionList (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_functionCallExpressionAST extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_functionCallExpressionAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_actualOutputExpressionList & inOperand1
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_functionCallExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_functionCallExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionCallExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @functionCallExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_functionCallExpressionAST : public cPtr_semanticExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mFunctionName ;
  public: GALGAS_actualOutputExpressionList mProperty_mExpressionList ;

//--- Constructor
  public: cPtr_functionCallExpressionAST (const GALGAS_lstring & in_mFunctionName,
                                          const GALGAS_actualOutputExpressionList & in_mExpressionList
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
// Phase 1: @functionCallExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_functionCallExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_functionCallExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_functionCallExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_functionCallExpressionAST_2D_weak (const class GALGAS_functionCallExpressionAST & inSource) ;

  public: GALGAS_functionCallExpressionAST_2D_weak & operator = (const class GALGAS_functionCallExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_functionCallExpressionAST bang_functionCallExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_functionCallExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_functionCallExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_functionCallExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_functionCallExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionCallExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @functionCallExpressionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_functionCallExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_functionCallExpressionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_functionCallExpressionForGeneration (const class cPtr_functionCallExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mFunctionName (void) const ;

  public: class GALGAS_semanticExpressionListForGeneration readProperty_mExpressions (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_functionCallExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_functionCallExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                   const class GALGAS_location & inOperand1,
                                                                                   const class GALGAS_string & inOperand2,
                                                                                   const class GALGAS_semanticExpressionListForGeneration & inOperand3
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_functionCallExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_functionCallExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionCallExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @functionCallExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_functionCallExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_string mProperty_mFunctionName ;
  public: GALGAS_semanticExpressionListForGeneration mProperty_mExpressions ;

//--- Constructor
  public: cPtr_functionCallExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                    const GALGAS_location & in_mLocation,
                                                    const GALGAS_string & in_mFunctionName,
                                                    const GALGAS_semanticExpressionListForGeneration & in_mExpressions
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
// Phase 1: @functionCallExpressionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_functionCallExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_functionCallExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_functionCallExpressionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_functionCallExpressionForGeneration_2D_weak (const class GALGAS_functionCallExpressionForGeneration & inSource) ;

  public: GALGAS_functionCallExpressionForGeneration_2D_weak & operator = (const class GALGAS_functionCallExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_functionCallExpressionForGeneration bang_functionCallExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_functionCallExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_functionCallExpressionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_functionCallExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_functionCallExpressionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionCallExpressionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @literalTypeInExpressionAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalTypeInExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_literalTypeInExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_literalTypeInExpressionAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_literalTypeInExpressionAST (const class cPtr_literalTypeInExpressionAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mLiteralTypeName (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_literalTypeInExpressionAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalTypeInExpressionAST constructor_new (const class GALGAS_lstring & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalTypeInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalTypeInExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalTypeInExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @literalTypeInExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_literalTypeInExpressionAST : public cPtr_semanticExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mLiteralTypeName ;

//--- Constructor
  public: cPtr_literalTypeInExpressionAST (const GALGAS_lstring & in_mLiteralTypeName
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
// Phase 1: @literalTypeInExpressionAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalTypeInExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_literalTypeInExpressionAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_literalTypeInExpressionAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_literalTypeInExpressionAST_2D_weak (const class GALGAS_literalTypeInExpressionAST & inSource) ;

  public: GALGAS_literalTypeInExpressionAST_2D_weak & operator = (const class GALGAS_literalTypeInExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_literalTypeInExpressionAST bang_literalTypeInExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_literalTypeInExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalTypeInExpressionAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalTypeInExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalTypeInExpressionAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalTypeInExpressionAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @literalTypeInExpressionForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalTypeInExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_literalTypeInExpressionForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_literalTypeInExpressionForGeneration (const class cPtr_literalTypeInExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_unifiedTypeMap_2D_entry readProperty_mLiteralType (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_literalTypeInExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalTypeInExpressionForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                    const class GALGAS_location & inOperand1,
                                                                                    const class GALGAS_unifiedTypeMap_2D_entry & inOperand2
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalTypeInExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalTypeInExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalTypeInExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @literalTypeInExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_literalTypeInExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mLiteralType ;

//--- Constructor
  public: cPtr_literalTypeInExpressionForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                     const GALGAS_location & in_mLocation,
                                                     const GALGAS_unifiedTypeMap_2D_entry & in_mLiteralType
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
// Phase 1: @literalTypeInExpressionForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalTypeInExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_literalTypeInExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_literalTypeInExpressionForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_literalTypeInExpressionForGeneration_2D_weak (const class GALGAS_literalTypeInExpressionForGeneration & inSource) ;

  public: GALGAS_literalTypeInExpressionForGeneration_2D_weak & operator = (const class GALGAS_literalTypeInExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_literalTypeInExpressionForGeneration bang_literalTypeInExpressionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_literalTypeInExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalTypeInExpressionForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalTypeInExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalTypeInExpressionForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalTypeInExpressionForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @collectionValueElementList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_collectionValueElementList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_collectionValueElementList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_collectionValueElementList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_abstractCollectionValueElement & in_mElement
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_collectionValueElementList extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_collectionValueElementList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_collectionValueElementList constructor_listWithValue (const class GALGAS_abstractCollectionValueElement & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_collectionValueElementList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_abstractCollectionValueElement & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_collectionValueElementList add_operation (const GALGAS_collectionValueElementList & inOperand,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_collectionValueElementList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_abstractCollectionValueElement constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_abstractCollectionValueElement & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_abstractCollectionValueElement & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_abstractCollectionValueElement & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMElementAtIndex (class GALGAS_abstractCollectionValueElement constinArgument0,
                                                           class GALGAS_uint constinArgument1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_abstractCollectionValueElement & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_abstractCollectionValueElement & outArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_abstractCollectionValueElement getter_mElementAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_collectionValueElementList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_collectionValueElementList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_collectionValueElementList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_collectionValueElementList ;
 
} ; // End of GALGAS_collectionValueElementList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_collectionValueElementList : public cGenericAbstractEnumerator {
  public: cEnumerator_collectionValueElementList (const GALGAS_collectionValueElementList & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_abstractCollectionValueElement current_mElement (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_collectionValueElementList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_collectionValueElementList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractCollectionValueElement reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_abstractCollectionValueElement : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_abstractCollectionValueElement (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_abstractCollectionValueElement (const class cPtr_abstractCollectionValueElement * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractCollectionValueElement extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_abstractCollectionValueElement & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractCollectionValueElement class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractCollectionValueElement ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractCollectionValueElement class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_abstractCollectionValueElement : public acStrongPtr_class {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties

//--- Constructor
  public: cPtr_abstractCollectionValueElement (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @collectionValueElementList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_collectionValueElementList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_abstractCollectionValueElement mProperty_mElement ;
  public: inline GALGAS_abstractCollectionValueElement readProperty_mElement (void) const {
    return mProperty_mElement ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_collectionValueElementList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMElement (const GALGAS_abstractCollectionValueElement & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mElement = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_collectionValueElementList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_collectionValueElementList_2D_element (const GALGAS_abstractCollectionValueElement & in_mElement) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_collectionValueElementList_2D_element extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_collectionValueElementList_2D_element constructor_new (const class GALGAS_abstractCollectionValueElement & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_collectionValueElementList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_collectionValueElementList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_collectionValueElementList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractCollectionValueElement_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_abstractCollectionValueElement_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_abstractCollectionValueElement_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_abstractCollectionValueElement_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_abstractCollectionValueElement_2D_weak (const class GALGAS_abstractCollectionValueElement & inSource) ;

  public: GALGAS_abstractCollectionValueElement_2D_weak & operator = (const class GALGAS_abstractCollectionValueElement & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_abstractCollectionValueElement bang_abstractCollectionValueElement_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractCollectionValueElement_2D_weak extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_abstractCollectionValueElement_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_abstractCollectionValueElement_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractCollectionValueElement_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractCollectionValueElement_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @expressionCollectionValue reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_expressionCollectionValue : public GALGAS_abstractCollectionValueElement {
//--------------------------------- Default constructor
  public: GALGAS_expressionCollectionValue (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_expressionCollectionValue (const class cPtr_expressionCollectionValue * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_semanticExpressionAST readProperty_mExpression (void) const ;

  public: class GALGAS_location readProperty_mExpressionLocation (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_expressionCollectionValue extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_expressionCollectionValue constructor_new (const class GALGAS_semanticExpressionAST & inOperand0,
                                                                         const class GALGAS_location & inOperand1
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_expressionCollectionValue & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMExpression (class GALGAS_semanticExpressionAST inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExpressionLocation (class GALGAS_location inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_expressionCollectionValue class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_expressionCollectionValue ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @expressionCollectionValue class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_expressionCollectionValue : public cPtr_abstractCollectionValueElement {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_semanticExpressionAST mProperty_mExpression ;
  public: GALGAS_location mProperty_mExpressionLocation ;

//--- Constructor
  public: cPtr_expressionCollectionValue (const GALGAS_semanticExpressionAST & in_mExpression,
                                          const GALGAS_location & in_mExpressionLocation
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
// Phase 1: @expressionCollectionValue_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_expressionCollectionValue_2D_weak : public GALGAS_abstractCollectionValueElement_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_expressionCollectionValue_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_expressionCollectionValue_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_expressionCollectionValue_2D_weak (const class GALGAS_expressionCollectionValue & inSource) ;

  public: GALGAS_expressionCollectionValue_2D_weak & operator = (const class GALGAS_expressionCollectionValue & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_expressionCollectionValue bang_expressionCollectionValue_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_expressionCollectionValue_2D_weak extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_expressionCollectionValue_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_expressionCollectionValue_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_expressionCollectionValue_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_expressionCollectionValue_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @expressionListCollectionValue reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_expressionListCollectionValue : public GALGAS_abstractCollectionValueElement {
//--------------------------------- Default constructor
  public: GALGAS_expressionListCollectionValue (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_expressionListCollectionValue constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_expressionListCollectionValue (const class cPtr_expressionListCollectionValue * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_actualOutputExpressionList readProperty_mExpressionList (void) const ;

  public: class GALGAS_location readProperty_mEndOfExpressionLocation (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_expressionListCollectionValue extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_expressionListCollectionValue constructor_new (const class GALGAS_actualOutputExpressionList & inOperand0,
                                                                             const class GALGAS_location & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_expressionListCollectionValue & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMEndOfExpressionLocation (class GALGAS_location inArgument0
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExpressionList (class GALGAS_actualOutputExpressionList inArgument0
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_expressionListCollectionValue class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_expressionListCollectionValue ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @expressionListCollectionValue class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_expressionListCollectionValue : public cPtr_abstractCollectionValueElement {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_actualOutputExpressionList mProperty_mExpressionList ;
  public: GALGAS_location mProperty_mEndOfExpressionLocation ;

//--- Constructor
  public: cPtr_expressionListCollectionValue (const GALGAS_actualOutputExpressionList & in_mExpressionList,
                                              const GALGAS_location & in_mEndOfExpressionLocation
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
// Phase 1: @expressionListCollectionValue_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_expressionListCollectionValue_2D_weak : public GALGAS_abstractCollectionValueElement_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_expressionListCollectionValue_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_expressionListCollectionValue_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_expressionListCollectionValue_2D_weak (const class GALGAS_expressionListCollectionValue & inSource) ;

  public: GALGAS_expressionListCollectionValue_2D_weak & operator = (const class GALGAS_expressionListCollectionValue & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_expressionListCollectionValue bang_expressionListCollectionValue_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_expressionListCollectionValue_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_expressionListCollectionValue_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_expressionListCollectionValue_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_expressionListCollectionValue_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_expressionListCollectionValue_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @collectionValueAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_collectionValueAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_collectionValueAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_collectionValueAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_collectionValueAST (const class cPtr_collectionValueAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mTypeName (void) const ;

  public: class GALGAS_collectionValueElementList readProperty_mElementList (void) const ;

  public: class GALGAS_location readProperty_mEndOfCollectionValue (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_collectionValueAST extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_collectionValueAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                  const class GALGAS_collectionValueElementList & inOperand1,
                                                                  const class GALGAS_location & inOperand2
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_collectionValueAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMElementList (class GALGAS_collectionValueElementList inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfCollectionValue (class GALGAS_location inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeName (class GALGAS_lstring inArgument0
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_collectionValueAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_collectionValueAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @collectionValueAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_collectionValueAST : public cPtr_semanticExpressionAST {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_lstring mProperty_mTypeName ;
  public: GALGAS_collectionValueElementList mProperty_mElementList ;
  public: GALGAS_location mProperty_mEndOfCollectionValue ;

//--- Constructor
  public: cPtr_collectionValueAST (const GALGAS_lstring & in_mTypeName,
                                   const GALGAS_collectionValueElementList & in_mElementList,
                                   const GALGAS_location & in_mEndOfCollectionValue
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
// Phase 1: @collectionValueAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_collectionValueAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_collectionValueAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_collectionValueAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_collectionValueAST_2D_weak (const class GALGAS_collectionValueAST & inSource) ;

  public: GALGAS_collectionValueAST_2D_weak & operator = (const class GALGAS_collectionValueAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_collectionValueAST bang_collectionValueAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_collectionValueAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_collectionValueAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_collectionValueAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_collectionValueAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_collectionValueAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractCollectionValueElement enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_abstractCollectionValueElement_enterInSemanticContext) (const class cPtr_abstractCollectionValueElement * inObject,
                                                                                                class GALGAS_unifiedTypeMap & ioArgument0,
                                                                                                class C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_enterInSemanticContext (const int32_t inClassIndex,
                                                  extensionMethodSignature_abstractCollectionValueElement_enterInSemanticContext inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInSemanticContext (const class cPtr_abstractCollectionValueElement * inObject,
                                                 GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractCollectionValueElement analyze'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_abstractCollectionValueElement_analyze) (const class cPtr_abstractCollectionValueElement * inObject,
                                                                                 const class GALGAS_lstring constinArgument0,
                                                                                 class GALGAS_usefulEntitiesGraph & ioArgument1,
                                                                                 const class GALGAS_analysisContext constinArgument2,
                                                                                 const class GALGAS_unifiedTypeMap_2D_entry constinArgument3,
                                                                                 class GALGAS_localVarManager & ioArgument4,
                                                                                 class GALGAS_collectionValueElementListForGeneration & ioArgument5,
                                                                                 class C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_analyze (const int32_t inClassIndex,
                                   extensionMethodSignature_abstractCollectionValueElement_analyze inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyze (const class cPtr_abstractCollectionValueElement * inObject,
                                  const GALGAS_lstring constin_inUsefulnessCallerEntityName,
                                  GALGAS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                  const GALGAS_analysisContext constin_inAnalysisContext,
                                  const GALGAS_unifiedTypeMap_2D_entry constin_inElementType,
                                  GALGAS_localVarManager & io_ioVariableMap,
                                  GALGAS_collectionValueElementListForGeneration & io_ioCollectionValueElementListForGeneration,
                                  C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @collectionValueElementListForGeneration list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_collectionValueElementListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_collectionValueElementListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_collectionValueElementListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_abstractCollectionValueElementForGeneration & in_mElement
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_collectionValueElementListForGeneration extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_collectionValueElementListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_collectionValueElementListForGeneration constructor_listWithValue (const class GALGAS_abstractCollectionValueElementForGeneration & inOperand0
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_collectionValueElementListForGeneration inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_abstractCollectionValueElementForGeneration & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_collectionValueElementListForGeneration add_operation (const GALGAS_collectionValueElementListForGeneration & inOperand,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_collectionValueElementListForGeneration_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_abstractCollectionValueElementForGeneration constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_abstractCollectionValueElementForGeneration & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_abstractCollectionValueElementForGeneration & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_abstractCollectionValueElementForGeneration & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMElementAtIndex (class GALGAS_abstractCollectionValueElementForGeneration constinArgument0,
                                                           class GALGAS_uint constinArgument1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_abstractCollectionValueElementForGeneration & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_abstractCollectionValueElementForGeneration & outArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_abstractCollectionValueElementForGeneration getter_mElementAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_collectionValueElementListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_collectionValueElementListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_collectionValueElementListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_collectionValueElementListForGeneration ;
 
} ; // End of GALGAS_collectionValueElementListForGeneration class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_collectionValueElementListForGeneration : public cGenericAbstractEnumerator {
  public: cEnumerator_collectionValueElementListForGeneration (const GALGAS_collectionValueElementListForGeneration & inEnumeratedObject,
                                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_abstractCollectionValueElementForGeneration current_mElement (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_collectionValueElementListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_collectionValueElementListForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractCollectionValueElementForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_abstractCollectionValueElementForGeneration : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_abstractCollectionValueElementForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_abstractCollectionValueElementForGeneration (const class cPtr_abstractCollectionValueElementForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_location readProperty_mExpressionLocation (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractCollectionValueElementForGeneration extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_abstractCollectionValueElementForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMExpressionLocation (class GALGAS_location inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractCollectionValueElementForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractCollectionValueElementForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractCollectionValueElementForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_abstractCollectionValueElementForGeneration : public acStrongPtr_class {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_location mProperty_mExpressionLocation ;

//--- Constructor
  public: cPtr_abstractCollectionValueElementForGeneration (const GALGAS_location & in_mExpressionLocation
                                                            COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @collectionValueElementListForGeneration_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_collectionValueElementListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_abstractCollectionValueElementForGeneration mProperty_mElement ;
  public: inline GALGAS_abstractCollectionValueElementForGeneration readProperty_mElement (void) const {
    return mProperty_mElement ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_collectionValueElementListForGeneration_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMElement (const GALGAS_abstractCollectionValueElementForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mElement = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_collectionValueElementListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_collectionValueElementListForGeneration_2D_element (const GALGAS_abstractCollectionValueElementForGeneration & in_mElement) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_collectionValueElementListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_collectionValueElementListForGeneration_2D_element constructor_new (const class GALGAS_abstractCollectionValueElementForGeneration & inOperand0
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_collectionValueElementListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_collectionValueElementListForGeneration_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_collectionValueElementListForGeneration_2D_element ;

