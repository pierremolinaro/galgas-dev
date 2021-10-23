#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-12.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticDeclarationWithHeaderForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_semanticDeclarationWithHeaderForGeneration : public GALGAS_semanticDeclarationForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_semanticDeclarationWithHeaderForGeneration (void) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_semanticDeclarationWithHeaderForGeneration * ptr (void) const { return (const cPtr_semanticDeclarationWithHeaderForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_semanticDeclarationWithHeaderForGeneration (const cPtr_semanticDeclarationWithHeaderForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_semanticDeclarationWithHeaderForGeneration extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_semanticDeclarationWithHeaderForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMHasHeader (class GALGAS_bool inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMImplementationCppFileName (class GALGAS_string inArgument0
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasHeader (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mImplementationCppFileName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_semanticDeclarationWithHeaderForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @semanticDeclarationWithHeaderForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_semanticDeclarationWithHeaderForGeneration : public cPtr_semanticDeclarationForGeneration {
//--- Attributes
  public: GALGAS_bool mProperty_mHasHeader ;
  public: GALGAS_string mProperty_mImplementationCppFileName ;

//--- Constructor
  public: cPtr_semanticDeclarationWithHeaderForGeneration (const GALGAS_bool & in_mHasHeader,
                                                           const GALGAS_string & in_mImplementationCppFileName
                                                           COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_bool getter_mHasHeader (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMHasHeader (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_string getter_mImplementationCppFileName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMImplementationCppFileName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticTypeForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_semanticTypeForGeneration : public GALGAS_semanticDeclarationForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_semanticTypeForGeneration (void) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_semanticTypeForGeneration * ptr (void) const { return (const cPtr_semanticTypeForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_semanticTypeForGeneration (const cPtr_semanticTypeForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_semanticTypeForGeneration extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_semanticTypeForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMSelfTypeEntry (class GALGAS_unifiedTypeMap_2D_entry inArgument0
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mSelfTypeEntry (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_semanticTypeForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticTypeForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @semanticTypeForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_semanticTypeForGeneration : public cPtr_semanticDeclarationForGeneration {
//--- Attributes
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mSelfTypeEntry ;

//--- Constructor
  public: cPtr_semanticTypeForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mSelfTypeEntry
                                          COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_entry getter_mSelfTypeEntry (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMSelfTypeEntry (GALGAS_unifiedTypeMap_2D_entry inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @boolsetTypeForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_boolsetTypeForGeneration : public GALGAS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_boolsetTypeForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_boolsetTypeForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_boolsetTypeForGeneration * ptr (void) const { return (const cPtr_boolsetTypeForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_boolsetTypeForGeneration (const cPtr_boolsetTypeForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_boolsetTypeForGeneration extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_boolsetTypeForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                        const class GALGAS_lstringlist & inOperand1
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_boolsetTypeForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMFlagList (class GALGAS_lstringlist inArgument0
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mFlagList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_boolsetTypeForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolsetTypeForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @boolsetTypeForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_boolsetTypeForGeneration : public cPtr_semanticTypeForGeneration {
//--- Attributes
  public: GALGAS_lstringlist mProperty_mFlagList ;

//--- Constructor
  public: cPtr_boolsetTypeForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mSelfTypeEntry,
                                         const GALGAS_lstringlist & in_mFlagList
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mFlagList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMFlagList (GALGAS_lstringlist inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @classTypeForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_classTypeForGeneration : public GALGAS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_classTypeForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_classTypeForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_classTypeForGeneration * ptr (void) const { return (const cPtr_classTypeForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_classTypeForGeneration (const cPtr_classTypeForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_classTypeForGeneration extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_classTypeForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                      const class GALGAS_bool & inOperand1,
                                                                      const class GALGAS_bool & inOperand2,
                                                                      const class GALGAS_unifiedTypeMap_2D_entry & inOperand3,
                                                                      const class GALGAS_typedPropertyList & inOperand4,
                                                                      const class GALGAS_typedPropertyList & inOperand5,
                                                                      const class GALGAS_bool & inOperand6
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_classTypeForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMAllTypedAttributeList (class GALGAS_typedPropertyList inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGenerateHeaderInSeparateFile (class GALGAS_bool inArgument0
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsAbstract (class GALGAS_bool inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsReference (class GALGAS_bool inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSuperClass (class GALGAS_unifiedTypeMap_2D_entry inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypedAttributeList (class GALGAS_typedPropertyList inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_typedPropertyList getter_mAllTypedAttributeList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mGenerateHeaderInSeparateFile (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsAbstract (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsReference (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mSuperClass (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_typedPropertyList getter_mTypedAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_classTypeForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classTypeForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @classTypeForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_classTypeForGeneration : public cPtr_semanticTypeForGeneration {
//--- Attributes
  public: GALGAS_bool mProperty_mIsAbstract ;
  public: GALGAS_bool mProperty_mIsReference ;
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mSuperClass ;
  public: GALGAS_typedPropertyList mProperty_mAllTypedAttributeList ;
  public: GALGAS_typedPropertyList mProperty_mTypedAttributeList ;
  public: GALGAS_bool mProperty_mGenerateHeaderInSeparateFile ;

//--- Constructor
  public: cPtr_classTypeForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mSelfTypeEntry,
                                       const GALGAS_bool & in_mIsAbstract,
                                       const GALGAS_bool & in_mIsReference,
                                       const GALGAS_unifiedTypeMap_2D_entry & in_mSuperClass,
                                       const GALGAS_typedPropertyList & in_mAllTypedAttributeList,
                                       const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                       const GALGAS_bool & in_mGenerateHeaderInSeparateFile
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_bool getter_mIsAbstract (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMIsAbstract (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_bool getter_mIsReference (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMIsReference (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_entry getter_mSuperClass (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMSuperClass (GALGAS_unifiedTypeMap_2D_entry inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_typedPropertyList getter_mAllTypedAttributeList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMAllTypedAttributeList (GALGAS_typedPropertyList inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_typedPropertyList getter_mTypedAttributeList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMTypedAttributeList (GALGAS_typedPropertyList inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_bool getter_mGenerateHeaderInSeparateFile (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMGenerateHeaderInSeparateFile (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @enumTypeForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_enumTypeForGeneration : public GALGAS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_enumTypeForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_enumTypeForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_enumTypeForGeneration * ptr (void) const { return (const cPtr_enumTypeForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_enumTypeForGeneration (const cPtr_enumTypeForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_enumTypeForGeneration extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_enumTypeForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                     const class GALGAS_enumConstantListForGeneration & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_enumTypeForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMConstantList (class GALGAS_enumConstantListForGeneration inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_enumConstantListForGeneration getter_mConstantList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumTypeForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumTypeForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @enumTypeForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_enumTypeForGeneration : public cPtr_semanticTypeForGeneration {
//--- Attributes
  public: GALGAS_enumConstantListForGeneration mProperty_mConstantList ;

//--- Constructor
  public: cPtr_enumTypeForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mSelfTypeEntry,
                                      const GALGAS_enumConstantListForGeneration & in_mConstantList
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_enumConstantListForGeneration getter_mConstantList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMConstantList (GALGAS_enumConstantListForGeneration inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @externTypeDeclarationForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_externTypeDeclarationForGeneration : public GALGAS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_externTypeDeclarationForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_externTypeDeclarationForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_externTypeDeclarationForGeneration * ptr (void) const { return (const cPtr_externTypeDeclarationForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_externTypeDeclarationForGeneration (const cPtr_externTypeDeclarationForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_externTypeDeclarationForGeneration extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_externTypeDeclarationForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                                  const class GALGAS_string & inOperand1,
                                                                                  const class GALGAS_string & inOperand2,
                                                                                  const class GALGAS_string & inOperand3
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_externTypeDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMCppClassCode (class GALGAS_string inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCppPreDeclarationCode (class GALGAS_string inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExternTypeName (class GALGAS_string inArgument0
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mCppClassCode (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mCppPreDeclarationCode (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mExternTypeName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_externTypeDeclarationForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externTypeDeclarationForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @externTypeDeclarationForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_externTypeDeclarationForGeneration : public cPtr_semanticTypeForGeneration {
//--- Attributes
  public: GALGAS_string mProperty_mExternTypeName ;
  public: GALGAS_string mProperty_mCppPreDeclarationCode ;
  public: GALGAS_string mProperty_mCppClassCode ;

//--- Constructor
  public: cPtr_externTypeDeclarationForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mSelfTypeEntry,
                                                   const GALGAS_string & in_mExternTypeName,
                                                   const GALGAS_string & in_mCppPreDeclarationCode,
                                                   const GALGAS_string & in_mCppClassCode
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_string getter_mExternTypeName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMExternTypeName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_string getter_mCppPreDeclarationCode (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMCppPreDeclarationCode (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_string getter_mCppClassCode (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMCppClassCode (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @graphDeclarationForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_graphDeclarationForGeneration : public GALGAS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_graphDeclarationForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_graphDeclarationForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_graphDeclarationForGeneration * ptr (void) const { return (const cPtr_graphDeclarationForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_graphDeclarationForGeneration (const cPtr_graphDeclarationForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_graphDeclarationForGeneration extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_graphDeclarationForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                             const class GALGAS_unifiedTypeMap_2D_entry & inOperand1,
                                                                             const class GALGAS_unifiedTypeMap_2D_entry & inOperand2,
                                                                             const class GALGAS_graphInsertModifierList & inOperand3
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_graphDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMAssociatedListElementTypeEntry (class GALGAS_unifiedTypeMap_2D_entry inArgument0
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAssociatedListTypeEntry (class GALGAS_unifiedTypeMap_2D_entry inArgument0
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInsertModifierList (class GALGAS_graphInsertModifierList inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mAssociatedListElementTypeEntry (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mAssociatedListTypeEntry (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_graphInsertModifierList getter_mInsertModifierList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_graphDeclarationForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_graphDeclarationForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @graphDeclarationForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_graphDeclarationForGeneration : public cPtr_semanticTypeForGeneration {
//--- Attributes
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mAssociatedListTypeEntry ;
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mAssociatedListElementTypeEntry ;
  public: GALGAS_graphInsertModifierList mProperty_mInsertModifierList ;

//--- Constructor
  public: cPtr_graphDeclarationForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mSelfTypeEntry,
                                              const GALGAS_unifiedTypeMap_2D_entry & in_mAssociatedListTypeEntry,
                                              const GALGAS_unifiedTypeMap_2D_entry & in_mAssociatedListElementTypeEntry,
                                              const GALGAS_graphInsertModifierList & in_mInsertModifierList
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_entry getter_mAssociatedListTypeEntry (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMAssociatedListTypeEntry (GALGAS_unifiedTypeMap_2D_entry inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_entry getter_mAssociatedListElementTypeEntry (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMAssociatedListElementTypeEntry (GALGAS_unifiedTypeMap_2D_entry inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_graphInsertModifierList getter_mInsertModifierList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMInsertModifierList (GALGAS_graphInsertModifierList inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @listTypeForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_listTypeForGeneration : public GALGAS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_listTypeForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_listTypeForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_listTypeForGeneration * ptr (void) const { return (const cPtr_listTypeForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_listTypeForGeneration (const cPtr_listTypeForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_listTypeForGeneration extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_listTypeForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                     const class GALGAS_unifiedTypeMap_2D_entry & inOperand1,
                                                                     const class GALGAS_typedPropertyList & inOperand2
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_listTypeForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMListElementTypeIndex (class GALGAS_unifiedTypeMap_2D_entry inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypedAttributeList (class GALGAS_typedPropertyList inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mListElementTypeIndex (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_typedPropertyList getter_mTypedAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_listTypeForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_listTypeForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @listTypeForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_listTypeForGeneration : public cPtr_semanticTypeForGeneration {
//--- Attributes
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mListElementTypeIndex ;
  public: GALGAS_typedPropertyList mProperty_mTypedAttributeList ;

//--- Constructor
  public: cPtr_listTypeForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mSelfTypeEntry,
                                      const GALGAS_unifiedTypeMap_2D_entry & in_mListElementTypeIndex,
                                      const GALGAS_typedPropertyList & in_mTypedAttributeList
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_entry getter_mListElementTypeIndex (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMListElementTypeIndex (GALGAS_unifiedTypeMap_2D_entry inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_typedPropertyList getter_mTypedAttributeList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMTypedAttributeList (GALGAS_typedPropertyList inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @listmapTypeForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_listmapTypeForGeneration : public GALGAS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_listmapTypeForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_listmapTypeForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_listmapTypeForGeneration * ptr (void) const { return (const cPtr_listmapTypeForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_listmapTypeForGeneration (const cPtr_listmapTypeForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_listmapTypeForGeneration extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_listmapTypeForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                        const class GALGAS_unifiedTypeMap_2D_entry & inOperand1,
                                                                        const class GALGAS_typedPropertyList & inOperand2,
                                                                        const class GALGAS_unifiedTypeMap_2D_entry & inOperand3
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_listmapTypeForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMAssociatedListMapElementTypeIndex (class GALGAS_unifiedTypeMap_2D_entry inArgument0
                                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAssociatedListTypeIndex (class GALGAS_unifiedTypeMap_2D_entry inArgument0
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAssociatedListTypedAttributeList (class GALGAS_typedPropertyList inArgument0
                                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mAssociatedListMapElementTypeIndex (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mAssociatedListTypeIndex (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_typedPropertyList getter_mAssociatedListTypedAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_listmapTypeForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_listmapTypeForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @listmapTypeForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_listmapTypeForGeneration : public cPtr_semanticTypeForGeneration {
//--- Attributes
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mAssociatedListTypeIndex ;
  public: GALGAS_typedPropertyList mProperty_mAssociatedListTypedAttributeList ;
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mAssociatedListMapElementTypeIndex ;

//--- Constructor
  public: cPtr_listmapTypeForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mSelfTypeEntry,
                                         const GALGAS_unifiedTypeMap_2D_entry & in_mAssociatedListTypeIndex,
                                         const GALGAS_typedPropertyList & in_mAssociatedListTypedAttributeList,
                                         const GALGAS_unifiedTypeMap_2D_entry & in_mAssociatedListMapElementTypeIndex
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_entry getter_mAssociatedListTypeIndex (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMAssociatedListTypeIndex (GALGAS_unifiedTypeMap_2D_entry inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_typedPropertyList getter_mAssociatedListTypedAttributeList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMAssociatedListTypedAttributeList (GALGAS_typedPropertyList inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_entry getter_mAssociatedListMapElementTypeIndex (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMAssociatedListMapElementTypeIndex (GALGAS_unifiedTypeMap_2D_entry inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @dictTypeForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_dictTypeForGeneration : public GALGAS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_dictTypeForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_dictTypeForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_dictTypeForGeneration * ptr (void) const { return (const cPtr_dictTypeForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_dictTypeForGeneration (const cPtr_dictTypeForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_dictTypeForGeneration extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_dictTypeForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                     const class GALGAS_unifiedTypeMap_2D_entry & inOperand1,
                                                                     const class GALGAS_lstring & inOperand2,
                                                                     const class GALGAS_typedPropertyList & inOperand3,
                                                                     const class GALGAS_lstring & inOperand4
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_dictTypeForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMDictTypeName (class GALGAS_lstring inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMElementTypeEntry (class GALGAS_unifiedTypeMap_2D_entry inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMKeyTypeName (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypedAttributeList (class GALGAS_typedPropertyList inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mDictTypeName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mElementTypeEntry (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mKeyTypeName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_typedPropertyList getter_mTypedAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_dictTypeForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dictTypeForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @dictTypeForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_dictTypeForGeneration : public cPtr_semanticTypeForGeneration {
//--- Attributes
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mElementTypeEntry ;
  public: GALGAS_lstring mProperty_mDictTypeName ;
  public: GALGAS_typedPropertyList mProperty_mTypedAttributeList ;
  public: GALGAS_lstring mProperty_mKeyTypeName ;

//--- Constructor
  public: cPtr_dictTypeForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mSelfTypeEntry,
                                      const GALGAS_unifiedTypeMap_2D_entry & in_mElementTypeEntry,
                                      const GALGAS_lstring & in_mDictTypeName,
                                      const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                      const GALGAS_lstring & in_mKeyTypeName
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_entry getter_mElementTypeEntry (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMElementTypeEntry (GALGAS_unifiedTypeMap_2D_entry inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_lstring getter_mDictTypeName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMDictTypeName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_typedPropertyList getter_mTypedAttributeList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMTypedAttributeList (GALGAS_typedPropertyList inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_lstring getter_mKeyTypeName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMKeyTypeName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @mapTypeForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_mapTypeForGeneration : public GALGAS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_mapTypeForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_mapTypeForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_mapTypeForGeneration * ptr (void) const { return (const cPtr_mapTypeForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_mapTypeForGeneration (const cPtr_mapTypeForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_mapTypeForGeneration extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_mapTypeForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                    const class GALGAS_unifiedTypeMap_2D_entry & inOperand1,
                                                                    const class GALGAS_lstring & inOperand2,
                                                                    const class GALGAS_typedPropertyList & inOperand3,
                                                                    const class GALGAS_insertMethodListAST & inOperand4,
                                                                    const class GALGAS_mapSearchMethodListAST & inOperand5,
                                                                    const class GALGAS_mapRemoveMethodListAST & inOperand6,
                                                                    const class GALGAS_bool & inOperand7,
                                                                    const class GALGAS_bool & inOperand8
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_mapTypeForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMActivateSuggestions (class GALGAS_bool inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMElementTypeEntry (class GALGAS_unifiedTypeMap_2D_entry inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHasInsertOrReplaceModifier (class GALGAS_bool inArgument0
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInsertMethodList (class GALGAS_insertMethodListAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMapTypeName (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRemoveMethodList (class GALGAS_mapRemoveMethodListAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSearchMethodList (class GALGAS_mapSearchMethodListAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypedAttributeList (class GALGAS_typedPropertyList inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mActivateSuggestions (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mElementTypeEntry (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasInsertOrReplaceModifier (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_insertMethodListAST getter_mInsertMethodList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mMapTypeName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_mapRemoveMethodListAST getter_mRemoveMethodList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_mapSearchMethodListAST getter_mSearchMethodList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_typedPropertyList getter_mTypedAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_mapTypeForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapTypeForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @mapTypeForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_mapTypeForGeneration : public cPtr_semanticTypeForGeneration {
//--- Attributes
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mElementTypeEntry ;
  public: GALGAS_lstring mProperty_mMapTypeName ;
  public: GALGAS_typedPropertyList mProperty_mTypedAttributeList ;
  public: GALGAS_insertMethodListAST mProperty_mInsertMethodList ;
  public: GALGAS_mapSearchMethodListAST mProperty_mSearchMethodList ;
  public: GALGAS_mapRemoveMethodListAST mProperty_mRemoveMethodList ;
  public: GALGAS_bool mProperty_mHasInsertOrReplaceModifier ;
  public: GALGAS_bool mProperty_mActivateSuggestions ;

//--- Constructor
  public: cPtr_mapTypeForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mSelfTypeEntry,
                                     const GALGAS_unifiedTypeMap_2D_entry & in_mElementTypeEntry,
                                     const GALGAS_lstring & in_mMapTypeName,
                                     const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                     const GALGAS_insertMethodListAST & in_mInsertMethodList,
                                     const GALGAS_mapSearchMethodListAST & in_mSearchMethodList,
                                     const GALGAS_mapRemoveMethodListAST & in_mRemoveMethodList,
                                     const GALGAS_bool & in_mHasInsertOrReplaceModifier,
                                     const GALGAS_bool & in_mActivateSuggestions
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_entry getter_mElementTypeEntry (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMElementTypeEntry (GALGAS_unifiedTypeMap_2D_entry inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_lstring getter_mMapTypeName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMMapTypeName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_typedPropertyList getter_mTypedAttributeList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMTypedAttributeList (GALGAS_typedPropertyList inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_insertMethodListAST getter_mInsertMethodList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMInsertMethodList (GALGAS_insertMethodListAST inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_mapSearchMethodListAST getter_mSearchMethodList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMSearchMethodList (GALGAS_mapSearchMethodListAST inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_mapRemoveMethodListAST getter_mRemoveMethodList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMRemoveMethodList (GALGAS_mapRemoveMethodListAST inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_bool getter_mHasInsertOrReplaceModifier (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMHasInsertOrReplaceModifier (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_bool getter_mActivateSuggestions (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMActivateSuggestions (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @mapEntryTypeForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_mapEntryTypeForGeneration : public GALGAS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_mapEntryTypeForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_mapEntryTypeForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_mapEntryTypeForGeneration * ptr (void) const { return (const cPtr_mapEntryTypeForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_mapEntryTypeForGeneration (const cPtr_mapEntryTypeForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_mapEntryTypeForGeneration extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_mapEntryTypeForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                         const class GALGAS_unifiedTypeMap_2D_entry & inOperand1,
                                                                         const class GALGAS_typedPropertyList & inOperand2,
                                                                         const class GALGAS_mapSearchMethodListAST & inOperand3
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_mapEntryTypeForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMAssociatedMapTypeEntry (class GALGAS_unifiedTypeMap_2D_entry inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAssociatedMapTypedAttributeList (class GALGAS_typedPropertyList inArgument0
                                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSearchMethodList (class GALGAS_mapSearchMethodListAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mAssociatedMapTypeEntry (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_typedPropertyList getter_mAssociatedMapTypedAttributeList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_mapSearchMethodListAST getter_mSearchMethodList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_mapEntryTypeForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapEntryTypeForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @mapEntryTypeForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_mapEntryTypeForGeneration : public cPtr_semanticTypeForGeneration {
//--- Attributes
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mAssociatedMapTypeEntry ;
  public: GALGAS_typedPropertyList mProperty_mAssociatedMapTypedAttributeList ;
  public: GALGAS_mapSearchMethodListAST mProperty_mSearchMethodList ;

//--- Constructor
  public: cPtr_mapEntryTypeForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mSelfTypeEntry,
                                          const GALGAS_unifiedTypeMap_2D_entry & in_mAssociatedMapTypeEntry,
                                          const GALGAS_typedPropertyList & in_mAssociatedMapTypedAttributeList,
                                          const GALGAS_mapSearchMethodListAST & in_mSearchMethodList
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_entry getter_mAssociatedMapTypeEntry (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMAssociatedMapTypeEntry (GALGAS_unifiedTypeMap_2D_entry inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_typedPropertyList getter_mAssociatedMapTypedAttributeList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMAssociatedMapTypedAttributeList (GALGAS_typedPropertyList inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_mapSearchMethodListAST getter_mSearchMethodList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMSearchMethodList (GALGAS_mapSearchMethodListAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @sharedMapTypeForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_sharedMapTypeForGeneration : public GALGAS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_sharedMapTypeForGeneration (void) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_sharedMapTypeForGeneration * ptr (void) const { return (const cPtr_sharedMapTypeForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_sharedMapTypeForGeneration (const cPtr_sharedMapTypeForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_sharedMapTypeForGeneration extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_sharedMapTypeForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                          const class GALGAS_typedPropertyList & inOperand1,
                                                                          const class GALGAS_insertMethodListAST & inOperand2,
                                                                          const class GALGAS_mapSearchMethodListAST & inOperand3,
                                                                          const class GALGAS_mapAutomatonStateMap & inOperand4,
                                                                          const class GALGAS_mapAutomatonActionMap & inOperand5,
                                                                          const class GALGAS_mapStateSortedList & inOperand6,
                                                                          const class GALGAS_mapOverrideList & inOperand7,
                                                                          const class GALGAS_mapAutomatonMessageKind & inOperand8,
                                                                          const class GALGAS_string & inOperand9
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_sharedMapTypeForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMInsertMethodList (class GALGAS_insertMethodListAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMapAutomatonActionMap (class GALGAS_mapAutomatonActionMap inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMapAutomatonStateMap (class GALGAS_mapAutomatonStateMap inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMapOverrideList (class GALGAS_mapOverrideList inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMapStateSortedList (class GALGAS_mapStateSortedList inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSearchMethodList (class GALGAS_mapSearchMethodListAST inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMShadowBehaviour (class GALGAS_mapAutomatonMessageKind inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMShadowMessage (class GALGAS_string inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypedAttributeList (class GALGAS_typedPropertyList inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_insertMethodListAST getter_mInsertMethodList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_mapAutomatonActionMap getter_mMapAutomatonActionMap (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_mapAutomatonStateMap getter_mMapAutomatonStateMap (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_mapOverrideList getter_mMapOverrideList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_mapStateSortedList getter_mMapStateSortedList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_mapSearchMethodListAST getter_mSearchMethodList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_mapAutomatonMessageKind getter_mShadowBehaviour (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mShadowMessage (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_typedPropertyList getter_mTypedAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_sharedMapTypeForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sharedMapTypeForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @sharedMapTypeForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_sharedMapTypeForGeneration : public cPtr_semanticTypeForGeneration {
//--- Attributes
  public: GALGAS_typedPropertyList mProperty_mTypedAttributeList ;
  public: GALGAS_insertMethodListAST mProperty_mInsertMethodList ;
  public: GALGAS_mapSearchMethodListAST mProperty_mSearchMethodList ;
  public: GALGAS_mapAutomatonStateMap mProperty_mMapAutomatonStateMap ;
  public: GALGAS_mapAutomatonActionMap mProperty_mMapAutomatonActionMap ;
  public: GALGAS_mapStateSortedList mProperty_mMapStateSortedList ;
  public: GALGAS_mapOverrideList mProperty_mMapOverrideList ;
  public: GALGAS_mapAutomatonMessageKind mProperty_mShadowBehaviour ;
  public: GALGAS_string mProperty_mShadowMessage ;

//--- Constructor
  public: cPtr_sharedMapTypeForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mSelfTypeEntry,
                                           const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                           const GALGAS_insertMethodListAST & in_mInsertMethodList,
                                           const GALGAS_mapSearchMethodListAST & in_mSearchMethodList,
                                           const GALGAS_mapAutomatonStateMap & in_mMapAutomatonStateMap,
                                           const GALGAS_mapAutomatonActionMap & in_mMapAutomatonActionMap,
                                           const GALGAS_mapStateSortedList & in_mMapStateSortedList,
                                           const GALGAS_mapOverrideList & in_mMapOverrideList,
                                           const GALGAS_mapAutomatonMessageKind & in_mShadowBehaviour,
                                           const GALGAS_string & in_mShadowMessage
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_typedPropertyList getter_mTypedAttributeList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMTypedAttributeList (GALGAS_typedPropertyList inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_insertMethodListAST getter_mInsertMethodList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMInsertMethodList (GALGAS_insertMethodListAST inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_mapSearchMethodListAST getter_mSearchMethodList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMSearchMethodList (GALGAS_mapSearchMethodListAST inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_mapAutomatonStateMap getter_mMapAutomatonStateMap (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMMapAutomatonStateMap (GALGAS_mapAutomatonStateMap inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_mapAutomatonActionMap getter_mMapAutomatonActionMap (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMMapAutomatonActionMap (GALGAS_mapAutomatonActionMap inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_mapStateSortedList getter_mMapStateSortedList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMMapStateSortedList (GALGAS_mapStateSortedList inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_mapOverrideList getter_mMapOverrideList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMMapOverrideList (GALGAS_mapOverrideList inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_mapAutomatonMessageKind getter_mShadowBehaviour (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMShadowBehaviour (GALGAS_mapAutomatonMessageKind inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_string getter_mShadowMessage (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMShadowMessage (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @sortedListTypeForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_sortedListTypeForGeneration : public GALGAS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_sortedListTypeForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_sortedListTypeForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_sortedListTypeForGeneration * ptr (void) const { return (const cPtr_sortedListTypeForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_sortedListTypeForGeneration (const cPtr_sortedListTypeForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_sortedListTypeForGeneration extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_sortedListTypeForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                           const class GALGAS_unifiedTypeMap_2D_entry & inOperand1,
                                                                           const class GALGAS_typedPropertyList & inOperand2,
                                                                           const class GALGAS_sortDescriptorListForGeneration & inOperand3
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_sortedListTypeForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMListElementTypeIndex (class GALGAS_unifiedTypeMap_2D_entry inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSortDescriptorList (class GALGAS_sortDescriptorListForGeneration inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypedAttributeList (class GALGAS_typedPropertyList inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mListElementTypeIndex (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_sortDescriptorListForGeneration getter_mSortDescriptorList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_typedPropertyList getter_mTypedAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_sortedListTypeForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sortedListTypeForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @sortedListTypeForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_sortedListTypeForGeneration : public cPtr_semanticTypeForGeneration {
//--- Attributes
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mListElementTypeIndex ;
  public: GALGAS_typedPropertyList mProperty_mTypedAttributeList ;
  public: GALGAS_sortDescriptorListForGeneration mProperty_mSortDescriptorList ;

//--- Constructor
  public: cPtr_sortedListTypeForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mSelfTypeEntry,
                                            const GALGAS_unifiedTypeMap_2D_entry & in_mListElementTypeIndex,
                                            const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                            const GALGAS_sortDescriptorListForGeneration & in_mSortDescriptorList
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_entry getter_mListElementTypeIndex (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMListElementTypeIndex (GALGAS_unifiedTypeMap_2D_entry inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_typedPropertyList getter_mTypedAttributeList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMTypedAttributeList (GALGAS_typedPropertyList inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_sortDescriptorListForGeneration getter_mSortDescriptorList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMSortDescriptorList (GALGAS_sortDescriptorListForGeneration inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @structTypeForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_structTypeForGeneration : public GALGAS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_structTypeForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_structTypeForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_structTypeForGeneration * ptr (void) const { return (const cPtr_structTypeForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_structTypeForGeneration (const cPtr_structTypeForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_structTypeForGeneration extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_structTypeForGeneration constructor_new (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                       const class GALGAS_typedPropertyList & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_structTypeForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMTypedPropertyList (class GALGAS_typedPropertyList inArgument0
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_typedPropertyList getter_mTypedPropertyList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_structTypeForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structTypeForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @structTypeForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_structTypeForGeneration : public cPtr_semanticTypeForGeneration {
//--- Attributes
  public: GALGAS_typedPropertyList mProperty_mTypedPropertyList ;

//--- Constructor
  public: cPtr_structTypeForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mSelfTypeEntry,
                                        const GALGAS_typedPropertyList & in_mTypedPropertyList
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_typedPropertyList getter_mTypedPropertyList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMTypedPropertyList (GALGAS_typedPropertyList inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractExtensionGetterForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_abstractExtensionGetterForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_abstractExtensionGetterForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_abstractExtensionGetterForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_abstractExtensionGetterForGeneration * ptr (void) const { return (const cPtr_abstractExtensionGetterForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_abstractExtensionGetterForGeneration (const cPtr_abstractExtensionGetterForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractExtensionGetterForGeneration extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_abstractExtensionGetterForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                                                    const class GALGAS_string & inOperand1,
                                                                                    const class GALGAS_unifiedTypeMap_2D_entry & inOperand2,
                                                                                    const class GALGAS_string & inOperand3,
                                                                                    const class GALGAS_unifiedTypeMap_2D_entry & inOperand4,
                                                                                    const class GALGAS_formalInputParameterListForGeneration & inOperand5
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_abstractExtensionGetterForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMAbstractExtensionGetterFormalParameterList (class GALGAS_formalInputParameterListForGeneration inArgument0
                                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAbstractExtensionGetterName (class GALGAS_string inArgument0
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReceiverType (class GALGAS_unifiedTypeMap_2D_entry inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMResultType (class GALGAS_unifiedTypeMap_2D_entry inArgument0
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_formalInputParameterListForGeneration getter_mAbstractExtensionGetterFormalParameterList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mAbstractExtensionGetterName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mReceiverType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mResultType (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractExtensionGetterForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractExtensionGetterForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractExtensionGetterForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_abstractExtensionGetterForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Attributes
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mReceiverType ;
  public: GALGAS_string mProperty_mAbstractExtensionGetterName ;
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mResultType ;
  public: GALGAS_formalInputParameterListForGeneration mProperty_mAbstractExtensionGetterFormalParameterList ;

//--- Constructor
  public: cPtr_abstractExtensionGetterForGeneration (const GALGAS_bool & in_mHasHeader,
                                                     const GALGAS_string & in_mImplementationCppFileName,
                                                     const GALGAS_unifiedTypeMap_2D_entry & in_mReceiverType,
                                                     const GALGAS_string & in_mAbstractExtensionGetterName,
                                                     const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                     const GALGAS_formalInputParameterListForGeneration & in_mAbstractExtensionGetterFormalParameterList
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_entry getter_mReceiverType (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_entry inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_string getter_mAbstractExtensionGetterName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMAbstractExtensionGetterName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_entry getter_mResultType (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMResultType (GALGAS_unifiedTypeMap_2D_entry inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_formalInputParameterListForGeneration getter_mAbstractExtensionGetterFormalParameterList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMAbstractExtensionGetterFormalParameterList (GALGAS_formalInputParameterListForGeneration inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractExtensionMethodForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_abstractExtensionMethodForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_abstractExtensionMethodForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_abstractExtensionMethodForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_abstractExtensionMethodForGeneration * ptr (void) const { return (const cPtr_abstractExtensionMethodForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_abstractExtensionMethodForGeneration (const cPtr_abstractExtensionMethodForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractExtensionMethodForGeneration extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_abstractExtensionMethodForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                                                    const class GALGAS_string & inOperand1,
                                                                                    const class GALGAS_unifiedTypeMap_2D_entry & inOperand2,
                                                                                    const class GALGAS_string & inOperand3,
                                                                                    const class GALGAS_formalParameterListForGeneration & inOperand4
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_abstractExtensionMethodForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMAbstractExtensionMethodFormalParameterList (class GALGAS_formalParameterListForGeneration inArgument0
                                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAbstractExtensionMethodName (class GALGAS_string inArgument0
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReceiverType (class GALGAS_unifiedTypeMap_2D_entry inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterListForGeneration getter_mAbstractExtensionMethodFormalParameterList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mAbstractExtensionMethodName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mReceiverType (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractExtensionMethodForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractExtensionMethodForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractExtensionMethodForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_abstractExtensionMethodForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Attributes
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mReceiverType ;
  public: GALGAS_string mProperty_mAbstractExtensionMethodName ;
  public: GALGAS_formalParameterListForGeneration mProperty_mAbstractExtensionMethodFormalParameterList ;

//--- Constructor
  public: cPtr_abstractExtensionMethodForGeneration (const GALGAS_bool & in_mHasHeader,
                                                     const GALGAS_string & in_mImplementationCppFileName,
                                                     const GALGAS_unifiedTypeMap_2D_entry & in_mReceiverType,
                                                     const GALGAS_string & in_mAbstractExtensionMethodName,
                                                     const GALGAS_formalParameterListForGeneration & in_mAbstractExtensionMethodFormalParameterList
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_entry getter_mReceiverType (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_entry inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_string getter_mAbstractExtensionMethodName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMAbstractExtensionMethodName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_formalParameterListForGeneration getter_mAbstractExtensionMethodFormalParameterList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMAbstractExtensionMethodFormalParameterList (GALGAS_formalParameterListForGeneration inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractExtensionSetterForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_abstractExtensionSetterForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_abstractExtensionSetterForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_abstractExtensionSetterForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_abstractExtensionSetterForGeneration * ptr (void) const { return (const cPtr_abstractExtensionSetterForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_abstractExtensionSetterForGeneration (const cPtr_abstractExtensionSetterForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractExtensionSetterForGeneration extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_abstractExtensionSetterForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                                                    const class GALGAS_string & inOperand1,
                                                                                    const class GALGAS_unifiedTypeMap_2D_entry & inOperand2,
                                                                                    const class GALGAS_string & inOperand3,
                                                                                    const class GALGAS_formalParameterListForGeneration & inOperand4
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_abstractExtensionSetterForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMAbstractExtensionSetterFormalParameterList (class GALGAS_formalParameterListForGeneration inArgument0
                                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAbstractExtensionSetterName (class GALGAS_string inArgument0
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReceiverType (class GALGAS_unifiedTypeMap_2D_entry inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterListForGeneration getter_mAbstractExtensionSetterFormalParameterList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mAbstractExtensionSetterName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mReceiverType (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractExtensionSetterForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractExtensionSetterForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractExtensionSetterForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_abstractExtensionSetterForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Attributes
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mReceiverType ;
  public: GALGAS_string mProperty_mAbstractExtensionSetterName ;
  public: GALGAS_formalParameterListForGeneration mProperty_mAbstractExtensionSetterFormalParameterList ;

//--- Constructor
  public: cPtr_abstractExtensionSetterForGeneration (const GALGAS_bool & in_mHasHeader,
                                                     const GALGAS_string & in_mImplementationCppFileName,
                                                     const GALGAS_unifiedTypeMap_2D_entry & in_mReceiverType,
                                                     const GALGAS_string & in_mAbstractExtensionSetterName,
                                                     const GALGAS_formalParameterListForGeneration & in_mAbstractExtensionSetterFormalParameterList
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_entry getter_mReceiverType (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_entry inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_string getter_mAbstractExtensionSetterName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMAbstractExtensionSetterName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_formalParameterListForGeneration getter_mAbstractExtensionSetterFormalParameterList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMAbstractExtensionSetterFormalParameterList (GALGAS_formalParameterListForGeneration inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionGetterForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_extensionGetterForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_extensionGetterForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_extensionGetterForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_extensionGetterForGeneration * ptr (void) const { return (const cPtr_extensionGetterForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_extensionGetterForGeneration (const cPtr_extensionGetterForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionGetterForGeneration extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_extensionGetterForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                                            const class GALGAS_string & inOperand1,
                                                                            const class GALGAS_unifiedTypeMap_2D_entry & inOperand2,
                                                                            const class GALGAS_string & inOperand3,
                                                                            const class GALGAS_bool & inOperand4,
                                                                            const class GALGAS_unifiedTypeMap_2D_entry & inOperand5,
                                                                            const class GALGAS_string & inOperand6,
                                                                            const class GALGAS_formalInputParameterListForGeneration & inOperand7,
                                                                            const class GALGAS_typedPropertyList & inOperand8,
                                                                            const class GALGAS_semanticInstructionListForGeneration & inOperand9
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_extensionGetterForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMExtensionGetterFormalParameterList (class GALGAS_formalInputParameterListForGeneration inArgument0
                                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExtensionGetterName (class GALGAS_string inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMImplementedAsFunction (class GALGAS_bool inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReceiverType (class GALGAS_unifiedTypeMap_2D_entry inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMResultType (class GALGAS_unifiedTypeMap_2D_entry inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMResultVarCppName (class GALGAS_string inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSemanticInstructionListForGeneration (class GALGAS_semanticInstructionListForGeneration inArgument0
                                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypedAttributeList (class GALGAS_typedPropertyList inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_formalInputParameterListForGeneration getter_mExtensionGetterFormalParameterList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mExtensionGetterName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mImplementedAsFunction (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mReceiverType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mResultType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mResultVarCppName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListForGeneration getter_mSemanticInstructionListForGeneration (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_typedPropertyList getter_mTypedAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_extensionGetterForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @extensionGetterForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_extensionGetterForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Attributes
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mReceiverType ;
  public: GALGAS_string mProperty_mExtensionGetterName ;
  public: GALGAS_bool mProperty_mImplementedAsFunction ;
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mResultType ;
  public: GALGAS_string mProperty_mResultVarCppName ;
  public: GALGAS_formalInputParameterListForGeneration mProperty_mExtensionGetterFormalParameterList ;
  public: GALGAS_typedPropertyList mProperty_mTypedAttributeList ;
  public: GALGAS_semanticInstructionListForGeneration mProperty_mSemanticInstructionListForGeneration ;

//--- Constructor
  public: cPtr_extensionGetterForGeneration (const GALGAS_bool & in_mHasHeader,
                                             const GALGAS_string & in_mImplementationCppFileName,
                                             const GALGAS_unifiedTypeMap_2D_entry & in_mReceiverType,
                                             const GALGAS_string & in_mExtensionGetterName,
                                             const GALGAS_bool & in_mImplementedAsFunction,
                                             const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                             const GALGAS_string & in_mResultVarCppName,
                                             const GALGAS_formalInputParameterListForGeneration & in_mExtensionGetterFormalParameterList,
                                             const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                             const GALGAS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_entry getter_mReceiverType (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_entry inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_string getter_mExtensionGetterName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMExtensionGetterName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_bool getter_mImplementedAsFunction (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMImplementedAsFunction (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_entry getter_mResultType (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMResultType (GALGAS_unifiedTypeMap_2D_entry inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_string getter_mResultVarCppName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMResultVarCppName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_formalInputParameterListForGeneration getter_mExtensionGetterFormalParameterList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMExtensionGetterFormalParameterList (GALGAS_formalInputParameterListForGeneration inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_typedPropertyList getter_mTypedAttributeList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMTypedAttributeList (GALGAS_typedPropertyList inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListForGeneration getter_mSemanticInstructionListForGeneration (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMSemanticInstructionListForGeneration (GALGAS_semanticInstructionListForGeneration inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionMethodForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_extensionMethodForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_extensionMethodForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_extensionMethodForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_extensionMethodForGeneration * ptr (void) const { return (const cPtr_extensionMethodForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_extensionMethodForGeneration (const cPtr_extensionMethodForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionMethodForGeneration extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_extensionMethodForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                                            const class GALGAS_string & inOperand1,
                                                                            const class GALGAS_unifiedTypeMap_2D_entry & inOperand2,
                                                                            const class GALGAS_string & inOperand3,
                                                                            const class GALGAS_bool & inOperand4,
                                                                            const class GALGAS_formalParameterListForGeneration & inOperand5,
                                                                            const class GALGAS_typedPropertyList & inOperand6,
                                                                            const class GALGAS_semanticInstructionListForGeneration & inOperand7
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_extensionMethodForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMExtensionMethodFormalParameterList (class GALGAS_formalParameterListForGeneration inArgument0
                                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExtensionMethodName (class GALGAS_string inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMImplementedAsFunction (class GALGAS_bool inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReceiverType (class GALGAS_unifiedTypeMap_2D_entry inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSemanticInstructionListForGeneration (class GALGAS_semanticInstructionListForGeneration inArgument0
                                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypedAttributeList (class GALGAS_typedPropertyList inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterListForGeneration getter_mExtensionMethodFormalParameterList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mExtensionMethodName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mImplementedAsFunction (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mReceiverType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListForGeneration getter_mSemanticInstructionListForGeneration (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_typedPropertyList getter_mTypedAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_extensionMethodForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @extensionMethodForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_extensionMethodForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Attributes
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mReceiverType ;
  public: GALGAS_string mProperty_mExtensionMethodName ;
  public: GALGAS_bool mProperty_mImplementedAsFunction ;
  public: GALGAS_formalParameterListForGeneration mProperty_mExtensionMethodFormalParameterList ;
  public: GALGAS_typedPropertyList mProperty_mTypedAttributeList ;
  public: GALGAS_semanticInstructionListForGeneration mProperty_mSemanticInstructionListForGeneration ;

//--- Constructor
  public: cPtr_extensionMethodForGeneration (const GALGAS_bool & in_mHasHeader,
                                             const GALGAS_string & in_mImplementationCppFileName,
                                             const GALGAS_unifiedTypeMap_2D_entry & in_mReceiverType,
                                             const GALGAS_string & in_mExtensionMethodName,
                                             const GALGAS_bool & in_mImplementedAsFunction,
                                             const GALGAS_formalParameterListForGeneration & in_mExtensionMethodFormalParameterList,
                                             const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                             const GALGAS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_entry getter_mReceiverType (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_entry inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_string getter_mExtensionMethodName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMExtensionMethodName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_bool getter_mImplementedAsFunction (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMImplementedAsFunction (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_formalParameterListForGeneration getter_mExtensionMethodFormalParameterList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMExtensionMethodFormalParameterList (GALGAS_formalParameterListForGeneration inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_typedPropertyList getter_mTypedAttributeList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMTypedAttributeList (GALGAS_typedPropertyList inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListForGeneration getter_mSemanticInstructionListForGeneration (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMSemanticInstructionListForGeneration (GALGAS_semanticInstructionListForGeneration inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionSetterForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_extensionSetterForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_extensionSetterForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_extensionSetterForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
  public: inline const class cPtr_extensionSetterForGeneration * ptr (void) const { return (const cPtr_extensionSetterForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_extensionSetterForGeneration (const cPtr_extensionSetterForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionSetterForGeneration extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_extensionSetterForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                                            const class GALGAS_string & inOperand1,
                                                                            const class GALGAS_unifiedTypeMap_2D_entry & inOperand2,
                                                                            const class GALGAS_string & inOperand3,
                                                                            const class GALGAS_bool & inOperand4,
                                                                            const class GALGAS_formalParameterListForGeneration & inOperand5,
                                                                            const class GALGAS_typedPropertyList & inOperand6,
                                                                            const class GALGAS_semanticInstructionListForGeneration & inOperand7
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_extensionSetterForGeneration & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMExtensionSetterFormalParameterList (class GALGAS_formalParameterListForGeneration inArgument0
                                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExtensionSetterName (class GALGAS_string inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMImplementedAsFunction (class GALGAS_bool inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReceiverType (class GALGAS_unifiedTypeMap_2D_entry inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSemanticInstructionListForGeneration (class GALGAS_semanticInstructionListForGeneration inArgument0
                                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypedAttributeList (class GALGAS_typedPropertyList inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterListForGeneration getter_mExtensionSetterFormalParameterList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mExtensionSetterName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mImplementedAsFunction (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mReceiverType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListForGeneration getter_mSemanticInstructionListForGeneration (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_typedPropertyList getter_mTypedAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_extensionSetterForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionSetterForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @extensionSetterForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_extensionSetterForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {
//--- Attributes
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mReceiverType ;
  public: GALGAS_string mProperty_mExtensionSetterName ;
  public: GALGAS_bool mProperty_mImplementedAsFunction ;
  public: GALGAS_formalParameterListForGeneration mProperty_mExtensionSetterFormalParameterList ;
  public: GALGAS_typedPropertyList mProperty_mTypedAttributeList ;
  public: GALGAS_semanticInstructionListForGeneration mProperty_mSemanticInstructionListForGeneration ;

//--- Constructor
  public: cPtr_extensionSetterForGeneration (const GALGAS_bool & in_mHasHeader,
                                             const GALGAS_string & in_mImplementationCppFileName,
                                             const GALGAS_unifiedTypeMap_2D_entry & in_mReceiverType,
                                             const GALGAS_string & in_mExtensionSetterName,
                                             const GALGAS_bool & in_mImplementedAsFunction,
                                             const GALGAS_formalParameterListForGeneration & in_mExtensionSetterFormalParameterList,
                                             const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                             const GALGAS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_entry getter_mReceiverType (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_entry inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_string getter_mExtensionSetterName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMExtensionSetterName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_bool getter_mImplementedAsFunction (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMImplementedAsFunction (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_formalParameterListForGeneration getter_mExtensionSetterFormalParameterList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMExtensionSetterFormalParameterList (GALGAS_formalParameterListForGeneration inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_typedPropertyList getter_mTypedAttributeList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMTypedAttributeList (GALGAS_typedPropertyList inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_semanticInstructionListForGeneration getter_mSemanticInstructionListForGeneration (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMSemanticInstructionListForGeneration (GALGAS_semanticInstructionListForGeneration inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

