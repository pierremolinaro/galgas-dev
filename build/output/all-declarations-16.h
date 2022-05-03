#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-15.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @sharedMapDeclarationAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_sharedMapDeclarationAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_sharedMapDeclarationAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_sharedMapDeclarationAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_sharedMapDeclarationAST_2D_weak (const class GALGAS_sharedMapDeclarationAST & inSource) ;

  public: GALGAS_sharedMapDeclarationAST_2D_weak & operator = (const class GALGAS_sharedMapDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_sharedMapDeclarationAST bang_sharedMapDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_sharedMapDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_sharedMapDeclarationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_sharedMapDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_sharedMapDeclarationAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sharedMapDeclarationAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @sharedMapTypeForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_sharedMapTypeForGeneration : public GALGAS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_sharedMapTypeForGeneration (void) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_sharedMapTypeForGeneration (const class cPtr_sharedMapTypeForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_typedPropertyList readProperty_mTypedAttributeList (void) const ;

  public: class GALGAS_insertMethodListAST readProperty_mInsertMethodList (void) const ;

  public: class GALGAS_mapSearchMethodListAST readProperty_mSearchMethodList (void) const ;

  public: class GALGAS_mapAutomatonStateMap readProperty_mMapAutomatonStateMap (void) const ;

  public: class GALGAS_mapAutomatonActionMap readProperty_mMapAutomatonActionMap (void) const ;

  public: class GALGAS_mapStateSortedList readProperty_mMapStateSortedList (void) const ;

  public: class GALGAS_mapOverrideList readProperty_mMapOverrideList (void) const ;

  public: class GALGAS_mapAutomatonMessageKind readProperty_mShadowBehaviour (void) const ;

  public: class GALGAS_string readProperty_mShadowMessage (void) const ;

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

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
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
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @sharedMapTypeForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_sharedMapTypeForGeneration_2D_weak : public GALGAS_semanticTypeForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_sharedMapTypeForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_sharedMapTypeForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_sharedMapTypeForGeneration_2D_weak (const class GALGAS_sharedMapTypeForGeneration & inSource) ;

  public: GALGAS_sharedMapTypeForGeneration_2D_weak & operator = (const class GALGAS_sharedMapTypeForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_sharedMapTypeForGeneration bang_sharedMapTypeForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_sharedMapTypeForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_sharedMapTypeForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_sharedMapTypeForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_sharedMapTypeForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sharedMapTypeForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @sortedListDeclarationAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_sortedListDeclarationAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_sortedListDeclarationAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_sortedListDeclarationAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_sortedListDeclarationAST_2D_weak (const class GALGAS_sortedListDeclarationAST & inSource) ;

  public: GALGAS_sortedListDeclarationAST_2D_weak & operator = (const class GALGAS_sortedListDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_sortedListDeclarationAST bang_sortedListDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_sortedListDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_sortedListDeclarationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_sortedListDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_sortedListDeclarationAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sortedListDeclarationAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @sortedListTypeForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_sortedListTypeForGeneration : public GALGAS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_sortedListTypeForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_sortedListTypeForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_sortedListTypeForGeneration (const class cPtr_sortedListTypeForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_unifiedTypeMap_2D_entry readProperty_mListElementTypeIndex (void) const ;

  public: class GALGAS_typedPropertyList readProperty_mTypedAttributeList (void) const ;

  public: class GALGAS_sortDescriptorListForGeneration readProperty_mSortDescriptorList (void) const ;

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

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

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

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
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
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @sortedListTypeForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_sortedListTypeForGeneration_2D_weak : public GALGAS_semanticTypeForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_sortedListTypeForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_sortedListTypeForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_sortedListTypeForGeneration_2D_weak (const class GALGAS_sortedListTypeForGeneration & inSource) ;

  public: GALGAS_sortedListTypeForGeneration_2D_weak & operator = (const class GALGAS_sortedListTypeForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_sortedListTypeForGeneration bang_sortedListTypeForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_sortedListTypeForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_sortedListTypeForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_sortedListTypeForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_sortedListTypeForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sortedListTypeForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @structDeclarationAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_structDeclarationAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_structDeclarationAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_structDeclarationAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_structDeclarationAST_2D_weak (const class GALGAS_structDeclarationAST & inSource) ;

  public: GALGAS_structDeclarationAST_2D_weak & operator = (const class GALGAS_structDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_structDeclarationAST bang_structDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_structDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_structDeclarationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_structDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_structDeclarationAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structDeclarationAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @structTypeForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_structTypeForGeneration : public GALGAS_semanticTypeForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_structTypeForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_structTypeForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_structTypeForGeneration (const class cPtr_structTypeForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_typedPropertyList readProperty_mTypedPropertyList (void) const ;

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

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

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

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_typedPropertyList mProperty_mTypedPropertyList ;

//--- Constructor
  public: cPtr_structTypeForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mSelfTypeEntry,
                                        const GALGAS_typedPropertyList & in_mTypedPropertyList
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
// Phase 1: @structTypeForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_structTypeForGeneration_2D_weak : public GALGAS_semanticTypeForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_structTypeForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_structTypeForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_structTypeForGeneration_2D_weak (const class GALGAS_structTypeForGeneration & inSource) ;

  public: GALGAS_structTypeForGeneration_2D_weak & operator = (const class GALGAS_structTypeForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_structTypeForGeneration bang_structTypeForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_structTypeForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_structTypeForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_structTypeForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_structTypeForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structTypeForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractExtensionGetterAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_abstractExtensionGetterAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_abstractExtensionGetterAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_abstractExtensionGetterAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_abstractExtensionGetterAST_2D_weak (const class GALGAS_abstractExtensionGetterAST & inSource) ;

  public: GALGAS_abstractExtensionGetterAST_2D_weak & operator = (const class GALGAS_abstractExtensionGetterAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_abstractExtensionGetterAST bang_abstractExtensionGetterAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractExtensionGetterAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_abstractExtensionGetterAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_abstractExtensionGetterAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractExtensionGetterAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractExtensionGetterAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractExtensionGetterForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_abstractExtensionGetterForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_abstractExtensionGetterForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_abstractExtensionGetterForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_abstractExtensionGetterForGeneration (const class cPtr_abstractExtensionGetterForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_unifiedTypeMap_2D_entry readProperty_mReceiverType (void) const ;

  public: class GALGAS_string readProperty_mAbstractExtensionGetterName (void) const ;

  public: class GALGAS_unifiedTypeMap_2D_entry readProperty_mResultType (void) const ;

  public: class GALGAS_formalInputParameterListForGeneration readProperty_mAbstractExtensionGetterFormalParameterList (void) const ;

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

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

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

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
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
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractExtensionGetterForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_abstractExtensionGetterForGeneration_2D_weak : public GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_abstractExtensionGetterForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_abstractExtensionGetterForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_abstractExtensionGetterForGeneration_2D_weak (const class GALGAS_abstractExtensionGetterForGeneration & inSource) ;

  public: GALGAS_abstractExtensionGetterForGeneration_2D_weak & operator = (const class GALGAS_abstractExtensionGetterForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_abstractExtensionGetterForGeneration bang_abstractExtensionGetterForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractExtensionGetterForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_abstractExtensionGetterForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_abstractExtensionGetterForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractExtensionGetterForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractExtensionGetterForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractExtensionMethodAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_abstractExtensionMethodAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_abstractExtensionMethodAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_abstractExtensionMethodAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_abstractExtensionMethodAST_2D_weak (const class GALGAS_abstractExtensionMethodAST & inSource) ;

  public: GALGAS_abstractExtensionMethodAST_2D_weak & operator = (const class GALGAS_abstractExtensionMethodAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_abstractExtensionMethodAST bang_abstractExtensionMethodAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractExtensionMethodAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_abstractExtensionMethodAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_abstractExtensionMethodAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractExtensionMethodAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractExtensionMethodAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractExtensionMethodForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_abstractExtensionMethodForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_abstractExtensionMethodForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_abstractExtensionMethodForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_abstractExtensionMethodForGeneration (const class cPtr_abstractExtensionMethodForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_unifiedTypeMap_2D_entry readProperty_mReceiverType (void) const ;

  public: class GALGAS_string readProperty_mAbstractExtensionMethodName (void) const ;

  public: class GALGAS_formalParameterListForGeneration readProperty_mAbstractExtensionMethodFormalParameterList (void) const ;

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

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
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
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractExtensionMethodForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_abstractExtensionMethodForGeneration_2D_weak : public GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_abstractExtensionMethodForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_abstractExtensionMethodForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_abstractExtensionMethodForGeneration_2D_weak (const class GALGAS_abstractExtensionMethodForGeneration & inSource) ;

  public: GALGAS_abstractExtensionMethodForGeneration_2D_weak & operator = (const class GALGAS_abstractExtensionMethodForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_abstractExtensionMethodForGeneration bang_abstractExtensionMethodForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractExtensionMethodForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_abstractExtensionMethodForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_abstractExtensionMethodForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractExtensionMethodForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractExtensionMethodForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractExtensionSetterAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_abstractExtensionSetterAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_abstractExtensionSetterAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_abstractExtensionSetterAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_abstractExtensionSetterAST_2D_weak (const class GALGAS_abstractExtensionSetterAST & inSource) ;

  public: GALGAS_abstractExtensionSetterAST_2D_weak & operator = (const class GALGAS_abstractExtensionSetterAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_abstractExtensionSetterAST bang_abstractExtensionSetterAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractExtensionSetterAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_abstractExtensionSetterAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_abstractExtensionSetterAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractExtensionSetterAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractExtensionSetterAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractExtensionSetterForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_abstractExtensionSetterForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_abstractExtensionSetterForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_abstractExtensionSetterForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_abstractExtensionSetterForGeneration (const class cPtr_abstractExtensionSetterForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_unifiedTypeMap_2D_entry readProperty_mReceiverType (void) const ;

  public: class GALGAS_string readProperty_mAbstractExtensionSetterName (void) const ;

  public: class GALGAS_formalParameterListForGeneration readProperty_mAbstractExtensionSetterFormalParameterList (void) const ;

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

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

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

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
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
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractExtensionSetterForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_abstractExtensionSetterForGeneration_2D_weak : public GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_abstractExtensionSetterForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_abstractExtensionSetterForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_abstractExtensionSetterForGeneration_2D_weak (const class GALGAS_abstractExtensionSetterForGeneration & inSource) ;

  public: GALGAS_abstractExtensionSetterForGeneration_2D_weak & operator = (const class GALGAS_abstractExtensionSetterForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_abstractExtensionSetterForGeneration bang_abstractExtensionSetterForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractExtensionSetterForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_abstractExtensionSetterForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_abstractExtensionSetterForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractExtensionSetterForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractExtensionSetterForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionGetterAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_extensionGetterAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_extensionGetterAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_extensionGetterAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_extensionGetterAST_2D_weak (const class GALGAS_extensionGetterAST & inSource) ;

  public: GALGAS_extensionGetterAST_2D_weak & operator = (const class GALGAS_extensionGetterAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_extensionGetterAST bang_extensionGetterAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionGetterAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_extensionGetterAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_extensionGetterAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_extensionGetterAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionGetterForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_extensionGetterForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_extensionGetterForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_extensionGetterForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_extensionGetterForGeneration (const class cPtr_extensionGetterForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_unifiedTypeMap_2D_entry readProperty_mReceiverType (void) const ;

  public: class GALGAS_string readProperty_mExtensionGetterName (void) const ;

  public: class GALGAS_bool readProperty_mImplementedAsFunction (void) const ;

  public: class GALGAS_unifiedTypeMap_2D_entry readProperty_mResultType (void) const ;

  public: class GALGAS_string readProperty_mResultVarCppName (void) const ;

  public: class GALGAS_formalInputParameterListForGeneration readProperty_mExtensionGetterFormalParameterList (void) const ;

  public: class GALGAS_typedPropertyList readProperty_mTypedAttributeList (void) const ;

  public: class GALGAS_semanticInstructionListForGeneration readProperty_mSemanticInstructionListForGeneration (void) const ;

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

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

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

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
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
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionGetterForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_extensionGetterForGeneration_2D_weak : public GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_extensionGetterForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_extensionGetterForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_extensionGetterForGeneration_2D_weak (const class GALGAS_extensionGetterForGeneration & inSource) ;

  public: GALGAS_extensionGetterForGeneration_2D_weak & operator = (const class GALGAS_extensionGetterForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_extensionGetterForGeneration bang_extensionGetterForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionGetterForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_extensionGetterForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_extensionGetterForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_extensionGetterForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionMethodAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_extensionMethodAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_extensionMethodAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_extensionMethodAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_extensionMethodAST_2D_weak (const class GALGAS_extensionMethodAST & inSource) ;

  public: GALGAS_extensionMethodAST_2D_weak & operator = (const class GALGAS_extensionMethodAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_extensionMethodAST bang_extensionMethodAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionMethodAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_extensionMethodAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_extensionMethodAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_extensionMethodAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionMethodForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_extensionMethodForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_extensionMethodForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_extensionMethodForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_extensionMethodForGeneration (const class cPtr_extensionMethodForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_unifiedTypeMap_2D_entry readProperty_mReceiverType (void) const ;

  public: class GALGAS_string readProperty_mExtensionMethodName (void) const ;

  public: class GALGAS_bool readProperty_mImplementedAsFunction (void) const ;

  public: class GALGAS_formalParameterListForGeneration readProperty_mExtensionMethodFormalParameterList (void) const ;

  public: class GALGAS_typedPropertyList readProperty_mTypedAttributeList (void) const ;

  public: class GALGAS_semanticInstructionListForGeneration readProperty_mSemanticInstructionListForGeneration (void) const ;

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

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

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

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
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
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionMethodForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_extensionMethodForGeneration_2D_weak : public GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_extensionMethodForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_extensionMethodForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_extensionMethodForGeneration_2D_weak (const class GALGAS_extensionMethodForGeneration & inSource) ;

  public: GALGAS_extensionMethodForGeneration_2D_weak & operator = (const class GALGAS_extensionMethodForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_extensionMethodForGeneration bang_extensionMethodForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionMethodForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_extensionMethodForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_extensionMethodForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_extensionMethodForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionSetterAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_extensionSetterAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_extensionSetterAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_extensionSetterAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_extensionSetterAST_2D_weak (const class GALGAS_extensionSetterAST & inSource) ;

  public: GALGAS_extensionSetterAST_2D_weak & operator = (const class GALGAS_extensionSetterAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_extensionSetterAST bang_extensionSetterAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionSetterAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_extensionSetterAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_extensionSetterAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_extensionSetterAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionSetterAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionSetterForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_extensionSetterForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_extensionSetterForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_extensionSetterForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_extensionSetterForGeneration (const class cPtr_extensionSetterForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_unifiedTypeMap_2D_entry readProperty_mReceiverType (void) const ;

  public: class GALGAS_string readProperty_mExtensionSetterName (void) const ;

  public: class GALGAS_bool readProperty_mImplementedAsFunction (void) const ;

  public: class GALGAS_formalParameterListForGeneration readProperty_mExtensionSetterFormalParameterList (void) const ;

  public: class GALGAS_typedPropertyList readProperty_mTypedAttributeList (void) const ;

  public: class GALGAS_semanticInstructionListForGeneration readProperty_mSemanticInstructionListForGeneration (void) const ;

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

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

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

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
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
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionSetterForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_extensionSetterForGeneration_2D_weak : public GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_extensionSetterForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_extensionSetterForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_extensionSetterForGeneration_2D_weak (const class GALGAS_extensionSetterForGeneration & inSource) ;

  public: GALGAS_extensionSetterForGeneration_2D_weak & operator = (const class GALGAS_extensionSetterForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_extensionSetterForGeneration bang_extensionSetterForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_extensionSetterForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_extensionSetterForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_extensionSetterForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_extensionSetterForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionSetterForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @overridingAbstractExtensionGetterAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_overridingAbstractExtensionGetterAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_overridingAbstractExtensionGetterAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_overridingAbstractExtensionGetterAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_overridingAbstractExtensionGetterAST_2D_weak (const class GALGAS_overridingAbstractExtensionGetterAST & inSource) ;

  public: GALGAS_overridingAbstractExtensionGetterAST_2D_weak & operator = (const class GALGAS_overridingAbstractExtensionGetterAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_overridingAbstractExtensionGetterAST bang_overridingAbstractExtensionGetterAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_overridingAbstractExtensionGetterAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_overridingAbstractExtensionGetterAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_overridingAbstractExtensionGetterAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_overridingAbstractExtensionGetterAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingAbstractExtensionGetterAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @overridingAbstractExtensionMethodAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_overridingAbstractExtensionMethodAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_overridingAbstractExtensionMethodAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_overridingAbstractExtensionMethodAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_overridingAbstractExtensionMethodAST_2D_weak (const class GALGAS_overridingAbstractExtensionMethodAST & inSource) ;

  public: GALGAS_overridingAbstractExtensionMethodAST_2D_weak & operator = (const class GALGAS_overridingAbstractExtensionMethodAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_overridingAbstractExtensionMethodAST bang_overridingAbstractExtensionMethodAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_overridingAbstractExtensionMethodAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_overridingAbstractExtensionMethodAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_overridingAbstractExtensionMethodAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_overridingAbstractExtensionMethodAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingAbstractExtensionMethodAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @overridingAbstractExtensionSetterAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_overridingAbstractExtensionSetterAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_overridingAbstractExtensionSetterAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_overridingAbstractExtensionSetterAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_overridingAbstractExtensionSetterAST_2D_weak (const class GALGAS_overridingAbstractExtensionSetterAST & inSource) ;

  public: GALGAS_overridingAbstractExtensionSetterAST_2D_weak & operator = (const class GALGAS_overridingAbstractExtensionSetterAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_overridingAbstractExtensionSetterAST bang_overridingAbstractExtensionSetterAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_overridingAbstractExtensionSetterAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_overridingAbstractExtensionSetterAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_overridingAbstractExtensionSetterAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_overridingAbstractExtensionSetterAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingAbstractExtensionSetterAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @overridingExtensionGetterAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_overridingExtensionGetterAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_overridingExtensionGetterAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_overridingExtensionGetterAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_overridingExtensionGetterAST_2D_weak (const class GALGAS_overridingExtensionGetterAST & inSource) ;

  public: GALGAS_overridingExtensionGetterAST_2D_weak & operator = (const class GALGAS_overridingExtensionGetterAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_overridingExtensionGetterAST bang_overridingExtensionGetterAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_overridingExtensionGetterAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_overridingExtensionGetterAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_overridingExtensionGetterAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_overridingExtensionGetterAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingExtensionGetterAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @overrideExtensionGetterForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_overrideExtensionGetterForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_overrideExtensionGetterForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_overrideExtensionGetterForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_overrideExtensionGetterForGeneration (const class cPtr_overrideExtensionGetterForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_unifiedTypeMap_2D_entry readProperty_mReceiverType (void) const ;

  public: class GALGAS_string readProperty_mBaseTypeName (void) const ;

  public: class GALGAS_string readProperty_mOverridingExtensionGetterName (void) const ;

  public: class GALGAS_unifiedTypeMap_2D_entry readProperty_mResultType (void) const ;

  public: class GALGAS_string readProperty_mResultVarCppName (void) const ;

  public: class GALGAS_formalInputParameterListForGeneration readProperty_mOverridingExtensionGetterFormalParameterList (void) const ;

  public: class GALGAS_typedPropertyList readProperty_mTypedAttributeList (void) const ;

  public: class GALGAS_semanticInstructionListForGeneration readProperty_mSemanticInstructionListForGeneration (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_overrideExtensionGetterForGeneration extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_overrideExtensionGetterForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                                                    const class GALGAS_string & inOperand1,
                                                                                    const class GALGAS_unifiedTypeMap_2D_entry & inOperand2,
                                                                                    const class GALGAS_string & inOperand3,
                                                                                    const class GALGAS_string & inOperand4,
                                                                                    const class GALGAS_unifiedTypeMap_2D_entry & inOperand5,
                                                                                    const class GALGAS_string & inOperand6,
                                                                                    const class GALGAS_formalInputParameterListForGeneration & inOperand7,
                                                                                    const class GALGAS_typedPropertyList & inOperand8,
                                                                                    const class GALGAS_semanticInstructionListForGeneration & inOperand9
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_overrideExtensionGetterForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_overrideExtensionGetterForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overrideExtensionGetterForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @overrideExtensionGetterForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_overrideExtensionGetterForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mReceiverType ;
  public: GALGAS_string mProperty_mBaseTypeName ;
  public: GALGAS_string mProperty_mOverridingExtensionGetterName ;
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mResultType ;
  public: GALGAS_string mProperty_mResultVarCppName ;
  public: GALGAS_formalInputParameterListForGeneration mProperty_mOverridingExtensionGetterFormalParameterList ;
  public: GALGAS_typedPropertyList mProperty_mTypedAttributeList ;
  public: GALGAS_semanticInstructionListForGeneration mProperty_mSemanticInstructionListForGeneration ;

//--- Constructor
  public: cPtr_overrideExtensionGetterForGeneration (const GALGAS_bool & in_mHasHeader,
                                                     const GALGAS_string & in_mImplementationCppFileName,
                                                     const GALGAS_unifiedTypeMap_2D_entry & in_mReceiverType,
                                                     const GALGAS_string & in_mBaseTypeName,
                                                     const GALGAS_string & in_mOverridingExtensionGetterName,
                                                     const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                     const GALGAS_string & in_mResultVarCppName,
                                                     const GALGAS_formalInputParameterListForGeneration & in_mOverridingExtensionGetterFormalParameterList,
                                                     const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                     const GALGAS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration
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
// Phase 1: @overrideExtensionGetterForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_overrideExtensionGetterForGeneration_2D_weak : public GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_overrideExtensionGetterForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_overrideExtensionGetterForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_overrideExtensionGetterForGeneration_2D_weak (const class GALGAS_overrideExtensionGetterForGeneration & inSource) ;

  public: GALGAS_overrideExtensionGetterForGeneration_2D_weak & operator = (const class GALGAS_overrideExtensionGetterForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_overrideExtensionGetterForGeneration bang_overrideExtensionGetterForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_overrideExtensionGetterForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_overrideExtensionGetterForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_overrideExtensionGetterForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_overrideExtensionGetterForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overrideExtensionGetterForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @overridingExtensionMethodAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_overridingExtensionMethodAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_overridingExtensionMethodAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_overridingExtensionMethodAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_overridingExtensionMethodAST_2D_weak (const class GALGAS_overridingExtensionMethodAST & inSource) ;

  public: GALGAS_overridingExtensionMethodAST_2D_weak & operator = (const class GALGAS_overridingExtensionMethodAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_overridingExtensionMethodAST bang_overridingExtensionMethodAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_overridingExtensionMethodAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_overridingExtensionMethodAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_overridingExtensionMethodAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_overridingExtensionMethodAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingExtensionMethodAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @overridingExtensionMethodForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_overridingExtensionMethodForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_overridingExtensionMethodForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_overridingExtensionMethodForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_overridingExtensionMethodForGeneration (const class cPtr_overridingExtensionMethodForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_unifiedTypeMap_2D_entry readProperty_mReceiverType (void) const ;

  public: class GALGAS_string readProperty_mBaseTypeName (void) const ;

  public: class GALGAS_string readProperty_mExtensionMethodName (void) const ;

  public: class GALGAS_formalParameterListForGeneration readProperty_mExtensionMethodFormalParameterList (void) const ;

  public: class GALGAS_typedPropertyList readProperty_mTypedAttributeList (void) const ;

  public: class GALGAS_semanticInstructionListForGeneration readProperty_mSemanticInstructionListForGeneration (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_overridingExtensionMethodForGeneration extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_overridingExtensionMethodForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                                                      const class GALGAS_string & inOperand1,
                                                                                      const class GALGAS_unifiedTypeMap_2D_entry & inOperand2,
                                                                                      const class GALGAS_string & inOperand3,
                                                                                      const class GALGAS_string & inOperand4,
                                                                                      const class GALGAS_formalParameterListForGeneration & inOperand5,
                                                                                      const class GALGAS_typedPropertyList & inOperand6,
                                                                                      const class GALGAS_semanticInstructionListForGeneration & inOperand7
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_overridingExtensionMethodForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_overridingExtensionMethodForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingExtensionMethodForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @overridingExtensionMethodForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_overridingExtensionMethodForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mReceiverType ;
  public: GALGAS_string mProperty_mBaseTypeName ;
  public: GALGAS_string mProperty_mExtensionMethodName ;
  public: GALGAS_formalParameterListForGeneration mProperty_mExtensionMethodFormalParameterList ;
  public: GALGAS_typedPropertyList mProperty_mTypedAttributeList ;
  public: GALGAS_semanticInstructionListForGeneration mProperty_mSemanticInstructionListForGeneration ;

//--- Constructor
  public: cPtr_overridingExtensionMethodForGeneration (const GALGAS_bool & in_mHasHeader,
                                                       const GALGAS_string & in_mImplementationCppFileName,
                                                       const GALGAS_unifiedTypeMap_2D_entry & in_mReceiverType,
                                                       const GALGAS_string & in_mBaseTypeName,
                                                       const GALGAS_string & in_mExtensionMethodName,
                                                       const GALGAS_formalParameterListForGeneration & in_mExtensionMethodFormalParameterList,
                                                       const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                       const GALGAS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration
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
// Phase 1: @overridingExtensionMethodForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_overridingExtensionMethodForGeneration_2D_weak : public GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_overridingExtensionMethodForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_overridingExtensionMethodForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_overridingExtensionMethodForGeneration_2D_weak (const class GALGAS_overridingExtensionMethodForGeneration & inSource) ;

  public: GALGAS_overridingExtensionMethodForGeneration_2D_weak & operator = (const class GALGAS_overridingExtensionMethodForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_overridingExtensionMethodForGeneration bang_overridingExtensionMethodForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_overridingExtensionMethodForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_overridingExtensionMethodForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_overridingExtensionMethodForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_overridingExtensionMethodForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingExtensionMethodForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @overridingExtensionSetterAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_overridingExtensionSetterAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_overridingExtensionSetterAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_overridingExtensionSetterAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_overridingExtensionSetterAST_2D_weak (const class GALGAS_overridingExtensionSetterAST & inSource) ;

  public: GALGAS_overridingExtensionSetterAST_2D_weak & operator = (const class GALGAS_overridingExtensionSetterAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_overridingExtensionSetterAST bang_overridingExtensionSetterAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_overridingExtensionSetterAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_overridingExtensionSetterAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_overridingExtensionSetterAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_overridingExtensionSetterAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingExtensionSetterAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @overridingExtensionSetterForGeneration reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_overridingExtensionSetterForGeneration : public GALGAS_semanticDeclarationWithHeaderForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_overridingExtensionSetterForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_overridingExtensionSetterForGeneration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_overridingExtensionSetterForGeneration (const class cPtr_overridingExtensionSetterForGeneration * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_unifiedTypeMap_2D_entry readProperty_mReceiverType (void) const ;

  public: class GALGAS_string readProperty_mBaseTypeName (void) const ;

  public: class GALGAS_string readProperty_mExtensionSetterName (void) const ;

  public: class GALGAS_formalParameterListForGeneration readProperty_mExtensionSetterFormalParameterList (void) const ;

  public: class GALGAS_typedPropertyList readProperty_mTypedAttributeList (void) const ;

  public: class GALGAS_semanticInstructionListForGeneration readProperty_mSemanticInstructionListForGeneration (void) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_overridingExtensionSetterForGeneration extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_overridingExtensionSetterForGeneration constructor_new (const class GALGAS_bool & inOperand0,
                                                                                      const class GALGAS_string & inOperand1,
                                                                                      const class GALGAS_unifiedTypeMap_2D_entry & inOperand2,
                                                                                      const class GALGAS_string & inOperand3,
                                                                                      const class GALGAS_string & inOperand4,
                                                                                      const class GALGAS_formalParameterListForGeneration & inOperand5,
                                                                                      const class GALGAS_typedPropertyList & inOperand6,
                                                                                      const class GALGAS_semanticInstructionListForGeneration & inOperand7
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_overridingExtensionSetterForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_overridingExtensionSetterForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingExtensionSetterForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @overridingExtensionSetterForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_overridingExtensionSetterForGeneration : public cPtr_semanticDeclarationWithHeaderForGeneration {

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mReceiverType ;
  public: GALGAS_string mProperty_mBaseTypeName ;
  public: GALGAS_string mProperty_mExtensionSetterName ;
  public: GALGAS_formalParameterListForGeneration mProperty_mExtensionSetterFormalParameterList ;
  public: GALGAS_typedPropertyList mProperty_mTypedAttributeList ;
  public: GALGAS_semanticInstructionListForGeneration mProperty_mSemanticInstructionListForGeneration ;

//--- Constructor
  public: cPtr_overridingExtensionSetterForGeneration (const GALGAS_bool & in_mHasHeader,
                                                       const GALGAS_string & in_mImplementationCppFileName,
                                                       const GALGAS_unifiedTypeMap_2D_entry & in_mReceiverType,
                                                       const GALGAS_string & in_mBaseTypeName,
                                                       const GALGAS_string & in_mExtensionSetterName,
                                                       const GALGAS_formalParameterListForGeneration & in_mExtensionSetterFormalParameterList,
                                                       const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                       const GALGAS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration
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
// Phase 1: @overridingExtensionSetterForGeneration_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_overridingExtensionSetterForGeneration_2D_weak : public GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_overridingExtensionSetterForGeneration_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_overridingExtensionSetterForGeneration_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_overridingExtensionSetterForGeneration_2D_weak (const class GALGAS_overridingExtensionSetterForGeneration & inSource) ;

  public: GALGAS_overridingExtensionSetterForGeneration_2D_weak & operator = (const class GALGAS_overridingExtensionSetterForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_overridingExtensionSetterForGeneration bang_overridingExtensionSetterForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_overridingExtensionSetterForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_overridingExtensionSetterForGeneration_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_overridingExtensionSetterForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_overridingExtensionSetterForGeneration_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingExtensionSetterForGeneration_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @outputActualParameterAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_outputActualParameterAST_2D_weak : public GALGAS_actualParameterAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_outputActualParameterAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_outputActualParameterAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_outputActualParameterAST_2D_weak (const class GALGAS_outputActualParameterAST & inSource) ;

  public: GALGAS_outputActualParameterAST_2D_weak & operator = (const class GALGAS_outputActualParameterAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_outputActualParameterAST bang_outputActualParameterAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_outputActualParameterAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_outputActualParameterAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_outputActualParameterAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_outputActualParameterAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputActualParameterAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @outputInputActualParameterAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_outputInputActualParameterAST_2D_weak : public GALGAS_actualParameterAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_outputInputActualParameterAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_outputInputActualParameterAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_outputInputActualParameterAST_2D_weak (const class GALGAS_outputInputActualParameterAST & inSource) ;

  public: GALGAS_outputInputActualParameterAST_2D_weak & operator = (const class GALGAS_outputInputActualParameterAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_outputInputActualParameterAST bang_outputInputActualParameterAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_outputInputActualParameterAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_outputInputActualParameterAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_outputInputActualParameterAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_outputInputActualParameterAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputInputActualParameterAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @outputInputSingleJokerParameterAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_outputInputSingleJokerParameterAST_2D_weak : public GALGAS_actualParameterAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_outputInputSingleJokerParameterAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_outputInputSingleJokerParameterAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_outputInputSingleJokerParameterAST_2D_weak (const class GALGAS_outputInputSingleJokerParameterAST & inSource) ;

  public: GALGAS_outputInputSingleJokerParameterAST_2D_weak & operator = (const class GALGAS_outputInputSingleJokerParameterAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_outputInputSingleJokerParameterAST bang_outputInputSingleJokerParameterAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_outputInputSingleJokerParameterAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_outputInputSingleJokerParameterAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_outputInputSingleJokerParameterAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_outputInputSingleJokerParameterAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputInputSingleJokerParameterAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @inputActualExistingVariableParameterAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_inputActualExistingVariableParameterAST_2D_weak : public GALGAS_actualParameterAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_inputActualExistingVariableParameterAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_inputActualExistingVariableParameterAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_inputActualExistingVariableParameterAST_2D_weak (const class GALGAS_inputActualExistingVariableParameterAST & inSource) ;

  public: GALGAS_inputActualExistingVariableParameterAST_2D_weak & operator = (const class GALGAS_inputActualExistingVariableParameterAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_inputActualExistingVariableParameterAST bang_inputActualExistingVariableParameterAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_inputActualExistingVariableParameterAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_inputActualExistingVariableParameterAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_inputActualExistingVariableParameterAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_inputActualExistingVariableParameterAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualExistingVariableParameterAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @inputActualSelfPropertyParameterAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_inputActualSelfPropertyParameterAST_2D_weak : public GALGAS_actualParameterAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_inputActualSelfPropertyParameterAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_inputActualSelfPropertyParameterAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_inputActualSelfPropertyParameterAST_2D_weak (const class GALGAS_inputActualSelfPropertyParameterAST & inSource) ;

  public: GALGAS_inputActualSelfPropertyParameterAST_2D_weak & operator = (const class GALGAS_inputActualSelfPropertyParameterAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_inputActualSelfPropertyParameterAST bang_inputActualSelfPropertyParameterAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_inputActualSelfPropertyParameterAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_inputActualSelfPropertyParameterAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_inputActualSelfPropertyParameterAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_inputActualSelfPropertyParameterAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualSelfPropertyParameterAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @inputActualNewVariableParameterAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_inputActualNewVariableParameterAST_2D_weak : public GALGAS_actualParameterAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_inputActualNewVariableParameterAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_inputActualNewVariableParameterAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_inputActualNewVariableParameterAST_2D_weak (const class GALGAS_inputActualNewVariableParameterAST & inSource) ;

  public: GALGAS_inputActualNewVariableParameterAST_2D_weak & operator = (const class GALGAS_inputActualNewVariableParameterAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_inputActualNewVariableParameterAST bang_inputActualNewVariableParameterAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_inputActualNewVariableParameterAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_inputActualNewVariableParameterAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_inputActualNewVariableParameterAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_inputActualNewVariableParameterAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualNewVariableParameterAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @inputActualNewConstantParameterAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_inputActualNewConstantParameterAST_2D_weak : public GALGAS_actualParameterAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_inputActualNewConstantParameterAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_inputActualNewConstantParameterAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_inputActualNewConstantParameterAST_2D_weak (const class GALGAS_inputActualNewConstantParameterAST & inSource) ;

  public: GALGAS_inputActualNewConstantParameterAST_2D_weak & operator = (const class GALGAS_inputActualNewConstantParameterAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_inputActualNewConstantParameterAST bang_inputActualNewConstantParameterAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_inputActualNewConstantParameterAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_inputActualNewConstantParameterAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_inputActualNewConstantParameterAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_inputActualNewConstantParameterAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualNewConstantParameterAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @inputSingleJokerActualParameterAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_inputSingleJokerActualParameterAST_2D_weak : public GALGAS_actualParameterAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_inputSingleJokerActualParameterAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_inputSingleJokerActualParameterAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_inputSingleJokerActualParameterAST_2D_weak (const class GALGAS_inputSingleJokerActualParameterAST & inSource) ;

  public: GALGAS_inputSingleJokerActualParameterAST_2D_weak & operator = (const class GALGAS_inputSingleJokerActualParameterAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_inputSingleJokerActualParameterAST bang_inputSingleJokerActualParameterAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_inputSingleJokerActualParameterAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_inputSingleJokerActualParameterAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_inputSingleJokerActualParameterAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_inputSingleJokerActualParameterAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @inputParameterVariable_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_inputParameterVariable_2D_weak : public GALGAS_abstractInputParameter_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_inputParameterVariable_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_inputParameterVariable_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_inputParameterVariable_2D_weak (const class GALGAS_inputParameterVariable & inSource) ;

  public: GALGAS_inputParameterVariable_2D_weak & operator = (const class GALGAS_inputParameterVariable & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_inputParameterVariable bang_inputParameterVariable_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_inputParameterVariable_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_inputParameterVariable_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_inputParameterVariable_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_inputParameterVariable_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputParameterVariable_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @inputParameterDeclaredVariable_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_inputParameterDeclaredVariable_2D_weak : public GALGAS_abstractInputParameter_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_inputParameterDeclaredVariable_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_inputParameterDeclaredVariable_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_inputParameterDeclaredVariable_2D_weak (const class GALGAS_inputParameterDeclaredVariable & inSource) ;

  public: GALGAS_inputParameterDeclaredVariable_2D_weak & operator = (const class GALGAS_inputParameterDeclaredVariable & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_inputParameterDeclaredVariable bang_inputParameterDeclaredVariable_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_inputParameterDeclaredVariable_2D_weak extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_inputParameterDeclaredVariable_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_inputParameterDeclaredVariable_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_inputParameterDeclaredVariable_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputParameterDeclaredVariable_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @inputParameterDeclaredConstant_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_inputParameterDeclaredConstant_2D_weak : public GALGAS_abstractInputParameter_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_inputParameterDeclaredConstant_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_inputParameterDeclaredConstant_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_inputParameterDeclaredConstant_2D_weak (const class GALGAS_inputParameterDeclaredConstant & inSource) ;

  public: GALGAS_inputParameterDeclaredConstant_2D_weak & operator = (const class GALGAS_inputParameterDeclaredConstant & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_inputParameterDeclaredConstant bang_inputParameterDeclaredConstant_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_inputParameterDeclaredConstant_2D_weak extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_inputParameterDeclaredConstant_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_inputParameterDeclaredConstant_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_inputParameterDeclaredConstant_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputParameterDeclaredConstant_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @externRoutineDeclarationAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_externRoutineDeclarationAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_externRoutineDeclarationAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_externRoutineDeclarationAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_externRoutineDeclarationAST_2D_weak (const class GALGAS_externRoutineDeclarationAST & inSource) ;

  public: GALGAS_externRoutineDeclarationAST_2D_weak & operator = (const class GALGAS_externRoutineDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_externRoutineDeclarationAST bang_externRoutineDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_externRoutineDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_externRoutineDeclarationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_externRoutineDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_externRoutineDeclarationAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externRoutineDeclarationAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @procDeclarationAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_procDeclarationAST_2D_weak : public GALGAS_externRoutineDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_procDeclarationAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_procDeclarationAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_procDeclarationAST_2D_weak (const class GALGAS_procDeclarationAST & inSource) ;

  public: GALGAS_procDeclarationAST_2D_weak & operator = (const class GALGAS_procDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_procDeclarationAST bang_procDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_procDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_procDeclarationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_procDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_procDeclarationAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procDeclarationAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @externFunctionDeclarationAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_externFunctionDeclarationAST_2D_weak : public GALGAS_semanticDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_externFunctionDeclarationAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_externFunctionDeclarationAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_externFunctionDeclarationAST_2D_weak (const class GALGAS_externFunctionDeclarationAST & inSource) ;

  public: GALGAS_externFunctionDeclarationAST_2D_weak & operator = (const class GALGAS_externFunctionDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_externFunctionDeclarationAST bang_externFunctionDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_externFunctionDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_externFunctionDeclarationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_externFunctionDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_externFunctionDeclarationAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externFunctionDeclarationAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @functionDeclarationAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_functionDeclarationAST_2D_weak : public GALGAS_externFunctionDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_functionDeclarationAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_functionDeclarationAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_functionDeclarationAST_2D_weak (const class GALGAS_functionDeclarationAST & inSource) ;

  public: GALGAS_functionDeclarationAST_2D_weak & operator = (const class GALGAS_functionDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_functionDeclarationAST bang_functionDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_functionDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_functionDeclarationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_functionDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_functionDeclarationAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionDeclarationAST_2D_weak ;

