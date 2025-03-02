#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-4.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @graphInsertModifierList list enumerator
//--------------------------------------------------------------------------------------------------

class cEnumerator_graphInsertModifierList final : public cGenericAbstractEnumerator {
  public: cEnumerator_graphInsertModifierList (const class GGS_graphInsertModifierList & inEnumeratedObject,
                                               const EnumerationOrder inOrder) ;

  public: class GGS_lstring current_mInsertModifierName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mInsertErrorMessage (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_graphInsertModifierList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_graphInsertModifierList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_graphInsertModifierList (const class GGS_graphInsertModifierList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_mInsertModifierName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mInsertErrorMessage (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_graphInsertModifierList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_graphInsertModifierList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_graphInsertModifierList (const class GGS_graphInsertModifierList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_mInsertModifierName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mInsertErrorMessage (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_graphInsertModifierList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @graphInsertModifierList list
//--------------------------------------------------------------------------------------------------

class GGS_graphInsertModifierList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_graphInsertModifierList (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_graphInsertModifierList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mInsertModifierName,
                                                 const class GGS_lstring & in_mInsertErrorMessage
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_graphInsertModifierList init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_graphInsertModifierList extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_graphInsertModifierList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_graphInsertModifierList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                             const class GGS_lstring & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_graphInsertModifierList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_lstring & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_graphInsertModifierList add_operation (const GGS_graphInsertModifierList & inOperand,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInsertErrorMessageAtIndex (class GGS_lstring constinArgument0,
                                                                      class GGS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInsertModifierNameAtIndex (class GGS_lstring constinArgument0,
                                                                      class GGS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mInsertErrorMessageAtIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mInsertModifierNameAtIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_graphInsertModifierList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_graphInsertModifierList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_graphInsertModifierList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_graphInsertModifierList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_graphInsertModifierList ;
  friend class UpEnumerator_graphInsertModifierList ;
  friend class DownEnumerator_graphInsertModifierList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_graphInsertModifierList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @graphInsertModifierList_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_graphInsertModifierList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mInsertModifierName ;
  public: inline GGS_lstring readProperty_mInsertModifierName (void) const {
    return mProperty_mInsertModifierName ;
  }

  public: GGS_lstring mProperty_mInsertErrorMessage ;
  public: inline GGS_lstring readProperty_mInsertErrorMessage (void) const {
    return mProperty_mInsertErrorMessage ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_graphInsertModifierList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInsertModifierName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInsertModifierName = inValue ;
  }

  public: inline void setter_setMInsertErrorMessage (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInsertErrorMessage = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_graphInsertModifierList_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_graphInsertModifierList_2E_element (const GGS_lstring & in_mInsertModifierName,
                                                  const GGS_lstring & in_mInsertErrorMessage) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_graphInsertModifierList_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                      const class GGS_lstring & inOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_graphInsertModifierList_2E_element extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_graphInsertModifierList_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                              const class GGS_lstring & inOperand1,
                                                                              class Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_graphInsertModifierList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @graphDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_graphDeclarationAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_graphDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_graphDeclarationAST (const class cPtr_graphDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mGraphTypeName (void) const ;

  public: class GGS_lstring readProperty_mAssociatedListTypeName (void) const ;

  public: class GGS_graphInsertModifierList readProperty_mInsertModifierList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_graphDeclarationAST init_21_isPredefined_21__21__21_ (const class GGS_bool & inOperand0,
                                                                           const class GGS_lstring & inOperand1,
                                                                           const class GGS_lstring & inOperand2,
                                                                           const class GGS_graphInsertModifierList & inOperand3,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_graphDeclarationAST extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_graphDeclarationAST class_func_new (const class GGS_bool & inOperand0,
                                                               const class GGS_lstring & inOperand1,
                                                               const class GGS_lstring & inOperand2,
                                                               const class GGS_graphInsertModifierList & inOperand3,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_graphDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_graphDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @graphDeclarationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_graphDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void graphDeclarationAST_init_21_isPredefined_21__21__21_ (const class GGS_bool & inOperand0,
                                                                     const class GGS_lstring & inOperand1,
                                                                     const class GGS_lstring & inOperand2,
                                                                     const class GGS_graphInsertModifierList & inOperand3,
                                                                     Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GGS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           class GGS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GGS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GGS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GGS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GGS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           const class GGS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GGS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GGS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GGS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GGS_lstringlist & arg_ioUsefulnessRootEntities,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_string arg_inProductDirectory,
           const class GGS_semanticContext arg_inSemanticContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_predefinedTypes arg_inPredefinedTypes,
           class GGS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mGraphTypeName ;
  public: GGS_lstring mProperty_mAssociatedListTypeName ;
  public: GGS_graphInsertModifierList mProperty_mInsertModifierList ;


//--- Default constructor
  public: cPtr_graphDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_graphDeclarationAST (const GGS_bool & in_isPredefined,
                                    const GGS_lstring & in_mGraphTypeName,
                                    const GGS_lstring & in_mAssociatedListTypeName,
                                    const GGS_graphInsertModifierList & in_mInsertModifierList,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @graphDeclarationAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_graphDeclarationAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_graphDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_graphDeclarationAST_2E_weak (const class GGS_graphDeclarationAST & inSource) ;

  public: GGS_graphDeclarationAST_2E_weak & operator = (const class GGS_graphDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_graphDeclarationAST_2E_weak init_nil (void) {
    GGS_graphDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_graphDeclarationAST bang_graphDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_graphDeclarationAST unwrappedValue (void) const {
    GGS_graphDeclarationAST result ;
    if (isValid ()) {
      const cPtr_graphDeclarationAST * p = (cPtr_graphDeclarationAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_graphDeclarationAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_graphDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_graphDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_graphDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_graphDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @listDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_listDeclarationAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_listDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_listDeclarationAST (const class cPtr_listDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mListTypeName (void) const ;

  public: class GGS_propertyInCollectionListAST readProperty_mPropertyList (void) const ;

  public: class GGS_bool readProperty_usefullList (void) const ;

  public: class GGS_bool readProperty_equatable (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_listDeclarationAST init_21_isPredefined_21__21__21_usefullList_21_equatable (const class GGS_bool & inOperand0,
                                                                                                  const class GGS_lstring & inOperand1,
                                                                                                  const class GGS_propertyInCollectionListAST & inOperand2,
                                                                                                  const class GGS_bool & inOperand3,
                                                                                                  const class GGS_bool & inOperand4,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_listDeclarationAST extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_listDeclarationAST class_func_new (const class GGS_bool & inOperand0,
                                                              const class GGS_lstring & inOperand1,
                                                              const class GGS_propertyInCollectionListAST & inOperand2,
                                                              const class GGS_bool & inOperand3,
                                                              const class GGS_bool & inOperand4,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_listDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_listDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @listDeclarationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_listDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void listDeclarationAST_init_21_isPredefined_21__21__21_usefullList_21_equatable (const class GGS_bool & inOperand0,
                                                                                            const class GGS_lstring & inOperand1,
                                                                                            const class GGS_propertyInCollectionListAST & inOperand2,
                                                                                            const class GGS_bool & inOperand3,
                                                                                            const class GGS_bool & inOperand4,
                                                                                            Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method addAssociatedElement
  public: virtual void method_addAssociatedElement (class GGS_galgasDeclarationAST & arg_ioDeclarations,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GGS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           class GGS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GGS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GGS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GGS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GGS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           const class GGS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GGS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GGS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GGS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GGS_lstringlist & arg_ioUsefulnessRootEntities,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_string arg_inProductDirectory,
           const class GGS_semanticContext arg_inSemanticContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_predefinedTypes arg_inPredefinedTypes,
           class GGS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mListTypeName ;
  public: GGS_propertyInCollectionListAST mProperty_mPropertyList ;
  public: GGS_bool mProperty_usefullList ;
  public: GGS_bool mProperty_equatable ;


//--- Default constructor
  public: cPtr_listDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_listDeclarationAST (const GGS_bool & in_isPredefined,
                                   const GGS_lstring & in_mListTypeName,
                                   const GGS_propertyInCollectionListAST & in_mPropertyList,
                                   const GGS_bool & in_usefullList,
                                   const GGS_bool & in_equatable,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @listDeclarationAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_listDeclarationAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_listDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_listDeclarationAST_2E_weak (const class GGS_listDeclarationAST & inSource) ;

  public: GGS_listDeclarationAST_2E_weak & operator = (const class GGS_listDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_listDeclarationAST_2E_weak init_nil (void) {
    GGS_listDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_listDeclarationAST bang_listDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_listDeclarationAST unwrappedValue (void) const {
    GGS_listDeclarationAST result ;
    if (isValid ()) {
      const cPtr_listDeclarationAST * p = (cPtr_listDeclarationAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_listDeclarationAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_listDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_listDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_listDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_listDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @dictDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_dictDeclarationAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_dictDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_dictDeclarationAST (const class cPtr_dictDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mDictTypeName (void) const ;

  public: class GGS_lstring readProperty_mKeyTypeName (void) const ;

  public: class GGS_propertyInCollectionListAST readProperty_mPropertyList (void) const ;

  public: class GGS_bool readProperty_equatable (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_dictDeclarationAST init_21_isPredefined_21__21__21__21_equatable (const class GGS_bool & inOperand0,
                                                                                       const class GGS_lstring & inOperand1,
                                                                                       const class GGS_lstring & inOperand2,
                                                                                       const class GGS_propertyInCollectionListAST & inOperand3,
                                                                                       const class GGS_bool & inOperand4,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_dictDeclarationAST extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_dictDeclarationAST class_func_new (const class GGS_bool & inOperand0,
                                                              const class GGS_lstring & inOperand1,
                                                              const class GGS_lstring & inOperand2,
                                                              const class GGS_propertyInCollectionListAST & inOperand3,
                                                              const class GGS_bool & inOperand4,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_dictDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dictDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @dictDeclarationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_dictDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void dictDeclarationAST_init_21_isPredefined_21__21__21__21_equatable (const class GGS_bool & inOperand0,
                                                                                 const class GGS_lstring & inOperand1,
                                                                                 const class GGS_lstring & inOperand2,
                                                                                 const class GGS_propertyInCollectionListAST & inOperand3,
                                                                                 const class GGS_bool & inOperand4,
                                                                                 Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method addAssociatedElement
  public: virtual void method_addAssociatedElement (class GGS_galgasDeclarationAST & arg_ioDeclarations,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GGS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           class GGS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GGS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GGS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GGS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GGS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           const class GGS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GGS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GGS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GGS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GGS_lstringlist & arg_ioUsefulnessRootEntities,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_string arg_inProductDirectory,
           const class GGS_semanticContext arg_inSemanticContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_predefinedTypes arg_inPredefinedTypes,
           class GGS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mDictTypeName ;
  public: GGS_lstring mProperty_mKeyTypeName ;
  public: GGS_propertyInCollectionListAST mProperty_mPropertyList ;
  public: GGS_bool mProperty_equatable ;


//--- Default constructor
  public: cPtr_dictDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_dictDeclarationAST (const GGS_bool & in_isPredefined,
                                   const GGS_lstring & in_mDictTypeName,
                                   const GGS_lstring & in_mKeyTypeName,
                                   const GGS_propertyInCollectionListAST & in_mPropertyList,
                                   const GGS_bool & in_equatable,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @dictDeclarationAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_dictDeclarationAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_dictDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_dictDeclarationAST_2E_weak (const class GGS_dictDeclarationAST & inSource) ;

  public: GGS_dictDeclarationAST_2E_weak & operator = (const class GGS_dictDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_dictDeclarationAST_2E_weak init_nil (void) {
    GGS_dictDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_dictDeclarationAST bang_dictDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_dictDeclarationAST unwrappedValue (void) const {
    GGS_dictDeclarationAST result ;
    if (isValid ()) {
      const cPtr_dictDeclarationAST * p = (cPtr_dictDeclarationAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_dictDeclarationAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_dictDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_dictDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_dictDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dictDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @insertMethodListAST list enumerator
//--------------------------------------------------------------------------------------------------

class cEnumerator_insertMethodListAST final : public cGenericAbstractEnumerator {
  public: cEnumerator_insertMethodListAST (const class GGS_insertMethodListAST & inEnumeratedObject,
                                           const EnumerationOrder inOrder) ;

  public: class GGS_lstring current_mInsertMethodName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mErrorMessage (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mShadowErrorMessage (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_insertMethodListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_insertMethodListAST final : public cGenericAbstractEnumerator {
  public: DownEnumerator_insertMethodListAST (const class GGS_insertMethodListAST & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_mInsertMethodName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mErrorMessage (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mShadowErrorMessage (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_insertMethodListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_insertMethodListAST final : public cGenericAbstractEnumerator {
  public: UpEnumerator_insertMethodListAST (const class GGS_insertMethodListAST & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_mInsertMethodName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mErrorMessage (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mShadowErrorMessage (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_insertMethodListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @insertMethodListAST list
//--------------------------------------------------------------------------------------------------

class GGS_insertMethodListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_insertMethodListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_insertMethodListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mInsertMethodName,
                                                 const class GGS_lstring & in_mErrorMessage,
                                                 const class GGS_lstring & in_mShadowErrorMessage
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_insertMethodListAST init (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_insertMethodListAST extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_insertMethodListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_insertMethodListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                         const class GGS_lstring & inOperand1,
                                                                         const class GGS_lstring & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_insertMethodListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_lstring & inOperand1,
                                                     const class GGS_lstring & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_insertMethodListAST add_operation (const GGS_insertMethodListAST & inOperand,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               class GGS_lstring constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_lstring constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 class GGS_lstring & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                class GGS_lstring & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_lstring & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMErrorMessageAtIndex (class GGS_lstring constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInsertMethodNameAtIndex (class GGS_lstring constinArgument0,
                                                                    class GGS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMShadowErrorMessageAtIndex (class GGS_lstring constinArgument0,
                                                                      class GGS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              class GGS_lstring & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             class GGS_lstring & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mErrorMessageAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mInsertMethodNameAtIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mShadowErrorMessageAtIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_insertMethodListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_insertMethodListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_insertMethodListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_insertMethodListAST_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_insertMethodListAST ;
  friend class UpEnumerator_insertMethodListAST ;
  friend class DownEnumerator_insertMethodListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_insertMethodListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @insertMethodListAST_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_insertMethodListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mInsertMethodName ;
  public: inline GGS_lstring readProperty_mInsertMethodName (void) const {
    return mProperty_mInsertMethodName ;
  }

  public: GGS_lstring mProperty_mErrorMessage ;
  public: inline GGS_lstring readProperty_mErrorMessage (void) const {
    return mProperty_mErrorMessage ;
  }

  public: GGS_lstring mProperty_mShadowErrorMessage ;
  public: inline GGS_lstring readProperty_mShadowErrorMessage (void) const {
    return mProperty_mShadowErrorMessage ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_insertMethodListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInsertMethodName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInsertMethodName = inValue ;
  }

  public: inline void setter_setMErrorMessage (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mErrorMessage = inValue ;
  }

  public: inline void setter_setMShadowErrorMessage (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mShadowErrorMessage = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_insertMethodListAST_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_insertMethodListAST_2E_element (const GGS_lstring & in_mInsertMethodName,
                                              const GGS_lstring & in_mErrorMessage,
                                              const GGS_lstring & in_mShadowErrorMessage) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_insertMethodListAST_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                      const class GGS_lstring & inOperand1,
                                                                      const class GGS_lstring & inOperand2,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_insertMethodListAST_2E_element extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_insertMethodListAST_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                          const class GGS_lstring & inOperand1,
                                                                          const class GGS_lstring & inOperand2,
                                                                          class Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_insertMethodListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @mapSearchMethodListAST list enumerator
//--------------------------------------------------------------------------------------------------

class cEnumerator_mapSearchMethodListAST final : public cGenericAbstractEnumerator {
  public: cEnumerator_mapSearchMethodListAST (const class GGS_mapSearchMethodListAST & inEnumeratedObject,
                                              const EnumerationOrder inOrder) ;

  public: class GGS_lstring current_mSearchMethodName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mErrorMessage (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_mapSearchMethodListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_mapSearchMethodListAST final : public cGenericAbstractEnumerator {
  public: DownEnumerator_mapSearchMethodListAST (const class GGS_mapSearchMethodListAST & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_mSearchMethodName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mErrorMessage (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_mapSearchMethodListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_mapSearchMethodListAST final : public cGenericAbstractEnumerator {
  public: UpEnumerator_mapSearchMethodListAST (const class GGS_mapSearchMethodListAST & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_mSearchMethodName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mErrorMessage (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_mapSearchMethodListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @mapSearchMethodListAST list
//--------------------------------------------------------------------------------------------------

class GGS_mapSearchMethodListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_mapSearchMethodListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_mapSearchMethodListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mSearchMethodName,
                                                 const class GGS_lstring & in_mErrorMessage
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_mapSearchMethodListAST init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_mapSearchMethodListAST extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_mapSearchMethodListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_mapSearchMethodListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                            const class GGS_lstring & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_mapSearchMethodListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_lstring & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_mapSearchMethodListAST add_operation (const GGS_mapSearchMethodListAST & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMErrorMessageAtIndex (class GGS_lstring constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSearchMethodNameAtIndex (class GGS_lstring constinArgument0,
                                                                    class GGS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mErrorMessageAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mSearchMethodNameAtIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_mapSearchMethodListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_mapSearchMethodListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_mapSearchMethodListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_mapSearchMethodListAST_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_mapSearchMethodListAST ;
  friend class UpEnumerator_mapSearchMethodListAST ;
  friend class DownEnumerator_mapSearchMethodListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapSearchMethodListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @mapSearchMethodListAST_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_mapSearchMethodListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mSearchMethodName ;
  public: inline GGS_lstring readProperty_mSearchMethodName (void) const {
    return mProperty_mSearchMethodName ;
  }

  public: GGS_lstring mProperty_mErrorMessage ;
  public: inline GGS_lstring readProperty_mErrorMessage (void) const {
    return mProperty_mErrorMessage ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_mapSearchMethodListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSearchMethodName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSearchMethodName = inValue ;
  }

  public: inline void setter_setMErrorMessage (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mErrorMessage = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_mapSearchMethodListAST_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_mapSearchMethodListAST_2E_element (const GGS_lstring & in_mSearchMethodName,
                                                 const GGS_lstring & in_mErrorMessage) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_mapSearchMethodListAST_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                     const class GGS_lstring & inOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_mapSearchMethodListAST_2E_element extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_mapSearchMethodListAST_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                             const class GGS_lstring & inOperand1,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapSearchMethodListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @mapRemoveMethodListAST list enumerator
//--------------------------------------------------------------------------------------------------

class cEnumerator_mapRemoveMethodListAST final : public cGenericAbstractEnumerator {
  public: cEnumerator_mapRemoveMethodListAST (const class GGS_mapRemoveMethodListAST & inEnumeratedObject,
                                              const EnumerationOrder inOrder) ;

  public: class GGS_lstring current_mMethodName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mErrorMessage (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_mapRemoveMethodListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_mapRemoveMethodListAST final : public cGenericAbstractEnumerator {
  public: DownEnumerator_mapRemoveMethodListAST (const class GGS_mapRemoveMethodListAST & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_mMethodName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mErrorMessage (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_mapRemoveMethodListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_mapRemoveMethodListAST final : public cGenericAbstractEnumerator {
  public: UpEnumerator_mapRemoveMethodListAST (const class GGS_mapRemoveMethodListAST & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_mMethodName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mErrorMessage (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_mapRemoveMethodListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @mapRemoveMethodListAST list
//--------------------------------------------------------------------------------------------------

class GGS_mapRemoveMethodListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_mapRemoveMethodListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_mapRemoveMethodListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mMethodName,
                                                 const class GGS_lstring & in_mErrorMessage
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_mapRemoveMethodListAST init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_mapRemoveMethodListAST extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_mapRemoveMethodListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_mapRemoveMethodListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                            const class GGS_lstring & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_mapRemoveMethodListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_lstring & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_mapRemoveMethodListAST add_operation (const GGS_mapRemoveMethodListAST & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMErrorMessageAtIndex (class GGS_lstring constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMMethodNameAtIndex (class GGS_lstring constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mErrorMessageAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mMethodNameAtIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_mapRemoveMethodListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_mapRemoveMethodListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_mapRemoveMethodListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_mapRemoveMethodListAST_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_mapRemoveMethodListAST ;
  friend class UpEnumerator_mapRemoveMethodListAST ;
  friend class DownEnumerator_mapRemoveMethodListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapRemoveMethodListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @mapRemoveMethodListAST_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_mapRemoveMethodListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mMethodName ;
  public: inline GGS_lstring readProperty_mMethodName (void) const {
    return mProperty_mMethodName ;
  }

  public: GGS_lstring mProperty_mErrorMessage ;
  public: inline GGS_lstring readProperty_mErrorMessage (void) const {
    return mProperty_mErrorMessage ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_mapRemoveMethodListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMMethodName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMethodName = inValue ;
  }

  public: inline void setter_setMErrorMessage (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mErrorMessage = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_mapRemoveMethodListAST_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_mapRemoveMethodListAST_2E_element (const GGS_lstring & in_mMethodName,
                                                 const GGS_lstring & in_mErrorMessage) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_mapRemoveMethodListAST_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                     const class GGS_lstring & inOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_mapRemoveMethodListAST_2E_element extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_mapRemoveMethodListAST_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                             const class GGS_lstring & inOperand1,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapRemoveMethodListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @insertOrReplaceDeclarationListAST list enumerator
//--------------------------------------------------------------------------------------------------

class cEnumerator_insertOrReplaceDeclarationListAST final : public cGenericAbstractEnumerator {
  public: cEnumerator_insertOrReplaceDeclarationListAST (const class GGS_insertOrReplaceDeclarationListAST & inEnumeratedObject,
                                                         const EnumerationOrder inOrder) ;

  public: class GGS_location current_mInsertOrReplaceDeclarationLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_insertOrReplaceDeclarationListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_insertOrReplaceDeclarationListAST final : public cGenericAbstractEnumerator {
  public: DownEnumerator_insertOrReplaceDeclarationListAST (const class GGS_insertOrReplaceDeclarationListAST & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_location current_mInsertOrReplaceDeclarationLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_insertOrReplaceDeclarationListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_insertOrReplaceDeclarationListAST final : public cGenericAbstractEnumerator {
  public: UpEnumerator_insertOrReplaceDeclarationListAST (const class GGS_insertOrReplaceDeclarationListAST & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_location current_mInsertOrReplaceDeclarationLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_insertOrReplaceDeclarationListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @insertOrReplaceDeclarationListAST list
//--------------------------------------------------------------------------------------------------

class GGS_insertOrReplaceDeclarationListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_insertOrReplaceDeclarationListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_insertOrReplaceDeclarationListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_location & in_mInsertOrReplaceDeclarationLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_insertOrReplaceDeclarationListAST init (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_insertOrReplaceDeclarationListAST extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_insertOrReplaceDeclarationListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_insertOrReplaceDeclarationListAST class_func_listWithValue (const class GGS_location & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_insertOrReplaceDeclarationListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_location & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_insertOrReplaceDeclarationListAST add_operation (const GGS_insertOrReplaceDeclarationListAST & inOperand,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_location constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_location constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_location & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_location & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_location & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInsertOrReplaceDeclarationLocationAtIndex (class GGS_location constinArgument0,
                                                                                      class GGS_uint constinArgument1,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_location & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_location & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_location getter_mInsertOrReplaceDeclarationLocationAtIndex (const class GGS_uint & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_insertOrReplaceDeclarationListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_insertOrReplaceDeclarationListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_insertOrReplaceDeclarationListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_insertOrReplaceDeclarationListAST_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_insertOrReplaceDeclarationListAST ;
  friend class UpEnumerator_insertOrReplaceDeclarationListAST ;
  friend class DownEnumerator_insertOrReplaceDeclarationListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_insertOrReplaceDeclarationListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @insertOrReplaceDeclarationListAST_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_insertOrReplaceDeclarationListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_location mProperty_mInsertOrReplaceDeclarationLocation ;
  public: inline GGS_location readProperty_mInsertOrReplaceDeclarationLocation (void) const {
    return mProperty_mInsertOrReplaceDeclarationLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_insertOrReplaceDeclarationListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInsertOrReplaceDeclarationLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInsertOrReplaceDeclarationLocation = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_insertOrReplaceDeclarationListAST_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_insertOrReplaceDeclarationListAST_2E_element (const GGS_location & in_mInsertOrReplaceDeclarationLocation) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_insertOrReplaceDeclarationListAST_2E_element init_21_ (const class GGS_location & inOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_insertOrReplaceDeclarationListAST_2E_element extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_insertOrReplaceDeclarationListAST_2E_element class_func_new (const class GGS_location & inOperand0,
                                                                                        class Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_insertOrReplaceDeclarationListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @mapDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_mapDeclarationAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_mapDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_mapDeclarationAST (const class cPtr_mapDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mMapTypeName (void) const ;

  public: class GGS_propertyInCollectionListAST readProperty_mPropertyList (void) const ;

  public: class GGS_insertMethodListAST readProperty_mInsertMethodList (void) const ;

  public: class GGS_mapSearchMethodListAST readProperty_mSearchMethodList (void) const ;

  public: class GGS_mapRemoveMethodListAST readProperty_mRemoveMethodList (void) const ;

  public: class GGS_insertOrReplaceDeclarationListAST readProperty_mInsertOrReplaceDeclarationListAST (void) const ;

  public: class GGS_bool readProperty_equatable (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_mapDeclarationAST init_21_isPredefined_21__21__21__21__21__21__21_equatable (const class GGS_bool & inOperand0,
                                                                                                  const class GGS_lstring & inOperand1,
                                                                                                  const class GGS_propertyInCollectionListAST & inOperand2,
                                                                                                  const class GGS_insertMethodListAST & inOperand3,
                                                                                                  const class GGS_mapSearchMethodListAST & inOperand4,
                                                                                                  const class GGS_mapRemoveMethodListAST & inOperand5,
                                                                                                  const class GGS_insertOrReplaceDeclarationListAST & inOperand6,
                                                                                                  const class GGS_bool & inOperand7,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_mapDeclarationAST extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_mapDeclarationAST class_func_new (const class GGS_bool & inOperand0,
                                                             const class GGS_lstring & inOperand1,
                                                             const class GGS_propertyInCollectionListAST & inOperand2,
                                                             const class GGS_insertMethodListAST & inOperand3,
                                                             const class GGS_mapSearchMethodListAST & inOperand4,
                                                             const class GGS_mapRemoveMethodListAST & inOperand5,
                                                             const class GGS_insertOrReplaceDeclarationListAST & inOperand6,
                                                             const class GGS_bool & inOperand7,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_mapDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @mapDeclarationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_mapDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void mapDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_equatable (const class GGS_bool & inOperand0,
                                                                                            const class GGS_lstring & inOperand1,
                                                                                            const class GGS_propertyInCollectionListAST & inOperand2,
                                                                                            const class GGS_insertMethodListAST & inOperand3,
                                                                                            const class GGS_mapSearchMethodListAST & inOperand4,
                                                                                            const class GGS_mapRemoveMethodListAST & inOperand5,
                                                                                            const class GGS_insertOrReplaceDeclarationListAST & inOperand6,
                                                                                            const class GGS_bool & inOperand7,
                                                                                            Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method addAssociatedElement
  public: virtual void method_addAssociatedElement (class GGS_galgasDeclarationAST & arg_ioDeclarations,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GGS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           class GGS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GGS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GGS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GGS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GGS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           const class GGS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GGS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GGS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GGS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GGS_lstringlist & arg_ioUsefulnessRootEntities,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_string arg_inProductDirectory,
           const class GGS_semanticContext arg_inSemanticContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_predefinedTypes arg_inPredefinedTypes,
           class GGS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mMapTypeName ;
  public: GGS_propertyInCollectionListAST mProperty_mPropertyList ;
  public: GGS_insertMethodListAST mProperty_mInsertMethodList ;
  public: GGS_mapSearchMethodListAST mProperty_mSearchMethodList ;
  public: GGS_mapRemoveMethodListAST mProperty_mRemoveMethodList ;
  public: GGS_insertOrReplaceDeclarationListAST mProperty_mInsertOrReplaceDeclarationListAST ;
  public: GGS_bool mProperty_equatable ;


//--- Default constructor
  public: cPtr_mapDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_mapDeclarationAST (const GGS_bool & in_isPredefined,
                                  const GGS_lstring & in_mMapTypeName,
                                  const GGS_propertyInCollectionListAST & in_mPropertyList,
                                  const GGS_insertMethodListAST & in_mInsertMethodList,
                                  const GGS_mapSearchMethodListAST & in_mSearchMethodList,
                                  const GGS_mapRemoveMethodListAST & in_mRemoveMethodList,
                                  const GGS_insertOrReplaceDeclarationListAST & in_mInsertOrReplaceDeclarationListAST,
                                  const GGS_bool & in_equatable,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @mapDeclarationAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_mapDeclarationAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_mapDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_mapDeclarationAST_2E_weak (const class GGS_mapDeclarationAST & inSource) ;

  public: GGS_mapDeclarationAST_2E_weak & operator = (const class GGS_mapDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_mapDeclarationAST_2E_weak init_nil (void) {
    GGS_mapDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_mapDeclarationAST bang_mapDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_mapDeclarationAST unwrappedValue (void) const {
    GGS_mapDeclarationAST result ;
    if (isValid ()) {
      const cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_mapDeclarationAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_mapDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_mapDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_mapDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @insertMethodMap map enumerator
//--------------------------------------------------------------------------------------------------

class cEnumerator_insertMethodMap final : public cGenericAbstractEnumerator {
  public: cEnumerator_insertMethodMap (const class GGS_insertMethodMap & inEnumeratedObject,
                                       const EnumerationOrder inOrder) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_insertMethodMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_insertMethodMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_insertMethodMap (const class GGS_insertMethodMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_insertMethodMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_insertMethodMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_insertMethodMap (const class GGS_insertMethodMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_insertMethodMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @insertMethodMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_insertMethodMap ;

//--------------------------------------------------------------------------------------------------

class GGS_insertMethodMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_insertMethodMap (void) ;

//--------------------------------- Handle copy
  public: GGS_insertMethodMap (const GGS_insertMethodMap & inSource) ;
  public: GGS_insertMethodMap & operator = (const GGS_insertMethodMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_insertMethodMap init (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_insertMethodMap extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_insertMethodMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_insertMethodMap class_func_mapWithMapToOverride (const class GGS_insertMethodMap & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_insertMethodMap add_operation (const GGS_insertMethodMap & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_insertMethodMap getter_overriddenMap (Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_insertMethodMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_insertMethodMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                            const GGS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_insertMethodMap_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_insertMethodMap ;
  friend class UpEnumerator_insertMethodMap ;
  friend class DownEnumerator_insertMethodMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_insertMethodMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@insertMethodMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_insertMethodMap : public cMapElement {
//--- Map attributes

//--- Constructors
  public: cMapElement_insertMethodMap (const GGS_insertMethodMap_2E_element & inValue
                                       COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_insertMethodMap (const GGS_lstring & inKey
                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @insertMethodMap_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_insertMethodMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_insertMethodMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_insertMethodMap_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_insertMethodMap_2E_element (const GGS_lstring & in_lkey) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_insertMethodMap_2E_element init_21_ (const class GGS_lstring & inOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_insertMethodMap_2E_element extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_insertMethodMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_insertMethodMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: insertMethodMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_insertMethodMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_insertMethodMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_insertMethodMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_insertMethodMap_2E_element_3F_ (const GGS_insertMethodMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_insertMethodMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_insertMethodMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_insertMethodMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_insertMethodMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @searchMethodMap map enumerator
//--------------------------------------------------------------------------------------------------

class cEnumerator_searchMethodMap final : public cGenericAbstractEnumerator {
  public: cEnumerator_searchMethodMap (const class GGS_searchMethodMap & inEnumeratedObject,
                                       const EnumerationOrder inOrder) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_searchMethodMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_searchMethodMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_searchMethodMap (const class GGS_searchMethodMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_searchMethodMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_searchMethodMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_searchMethodMap (const class GGS_searchMethodMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_searchMethodMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @searchMethodMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_searchMethodMap ;

//--------------------------------------------------------------------------------------------------

class GGS_searchMethodMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_searchMethodMap (void) ;

//--------------------------------- Handle copy
  public: GGS_searchMethodMap (const GGS_searchMethodMap & inSource) ;
  public: GGS_searchMethodMap & operator = (const GGS_searchMethodMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_searchMethodMap init (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_searchMethodMap extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_searchMethodMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_searchMethodMap class_func_mapWithMapToOverride (const class GGS_searchMethodMap & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_searchMethodMap add_operation (const GGS_searchMethodMap & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_searchMethodMap getter_overriddenMap (Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_searchMethodMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_searchMethodMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                            const GGS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_searchMethodMap_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_searchMethodMap ;
  friend class UpEnumerator_searchMethodMap ;
  friend class DownEnumerator_searchMethodMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_searchMethodMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@searchMethodMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_searchMethodMap : public cMapElement {
//--- Map attributes

//--- Constructors
  public: cMapElement_searchMethodMap (const GGS_searchMethodMap_2E_element & inValue
                                       COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_searchMethodMap (const GGS_lstring & inKey
                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @searchMethodMap_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_searchMethodMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_searchMethodMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_searchMethodMap_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_searchMethodMap_2E_element (const GGS_lstring & in_lkey) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_searchMethodMap_2E_element init_21_ (const class GGS_lstring & inOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_searchMethodMap_2E_element extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_searchMethodMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_searchMethodMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: searchMethodMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_searchMethodMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_searchMethodMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_searchMethodMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_searchMethodMap_2E_element_3F_ (const GGS_searchMethodMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_searchMethodMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_searchMethodMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_searchMethodMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_searchMethodMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @optionalTypeDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_optionalTypeDeclarationAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_optionalTypeDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_optionalTypeDeclarationAST (const class cPtr_optionalTypeDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_optionalTypeName (void) const ;

  public: class GGS_lstring readProperty_unwrappedTypeName (void) const ;

  public: class GGS_bool readProperty_isUsefull (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_optionalTypeDeclarationAST init_21_isPredefined_21_optionalTypeName_21_unwrappedTypeName_21_isUsefull (const class GGS_bool & inOperand0,
                                                                                                                            const class GGS_lstring & inOperand1,
                                                                                                                            const class GGS_lstring & inOperand2,
                                                                                                                            const class GGS_bool & inOperand3,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_optionalTypeDeclarationAST extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_optionalTypeDeclarationAST class_func_new (const class GGS_bool & inOperand0,
                                                                      const class GGS_lstring & inOperand1,
                                                                      const class GGS_lstring & inOperand2,
                                                                      const class GGS_bool & inOperand3,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_optionalTypeDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionalTypeDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @optionalTypeDeclarationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_optionalTypeDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void optionalTypeDeclarationAST_init_21_isPredefined_21_optionalTypeName_21_unwrappedTypeName_21_isUsefull (const class GGS_bool & inOperand0,
                                                                                                                      const class GGS_lstring & inOperand1,
                                                                                                                      const class GGS_lstring & inOperand2,
                                                                                                                      const class GGS_bool & inOperand3,
                                                                                                                      Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method addAssociatedElement
  public: virtual void method_addAssociatedElement (class GGS_galgasDeclarationAST & arg_ioDeclarations,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GGS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           class GGS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GGS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GGS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GGS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GGS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           const class GGS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GGS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GGS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GGS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GGS_lstringlist & arg_ioUsefulnessRootEntities,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_string arg_inProductDirectory,
           const class GGS_semanticContext arg_inSemanticContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_predefinedTypes arg_inPredefinedTypes,
           class GGS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_optionalTypeName ;
  public: GGS_lstring mProperty_unwrappedTypeName ;
  public: GGS_bool mProperty_isUsefull ;


//--- Default constructor
  public: cPtr_optionalTypeDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_optionalTypeDeclarationAST (const GGS_bool & in_isPredefined,
                                           const GGS_lstring & in_optionalTypeName,
                                           const GGS_lstring & in_unwrappedTypeName,
                                           const GGS_bool & in_isUsefull,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @optionalTypeDeclarationAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_optionalTypeDeclarationAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_optionalTypeDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_optionalTypeDeclarationAST_2E_weak (const class GGS_optionalTypeDeclarationAST & inSource) ;

  public: GGS_optionalTypeDeclarationAST_2E_weak & operator = (const class GGS_optionalTypeDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_optionalTypeDeclarationAST_2E_weak init_nil (void) {
    GGS_optionalTypeDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_optionalTypeDeclarationAST bang_optionalTypeDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_optionalTypeDeclarationAST unwrappedValue (void) const {
    GGS_optionalTypeDeclarationAST result ;
    if (isValid ()) {
      const cPtr_optionalTypeDeclarationAST * p = (cPtr_optionalTypeDeclarationAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_optionalTypeDeclarationAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_optionalTypeDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_optionalTypeDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_optionalTypeDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionalTypeDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @sortedListSortDescriptorListAST list enumerator
//--------------------------------------------------------------------------------------------------

class cEnumerator_sortedListSortDescriptorListAST final : public cGenericAbstractEnumerator {
  public: cEnumerator_sortedListSortDescriptorListAST (const class GGS_sortedListSortDescriptorListAST & inEnumeratedObject,
                                                       const EnumerationOrder inOrder) ;

  public: class GGS_lstring current_mSortedAttributeName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mAscending (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_sortedListSortDescriptorListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_sortedListSortDescriptorListAST final : public cGenericAbstractEnumerator {
  public: DownEnumerator_sortedListSortDescriptorListAST (const class GGS_sortedListSortDescriptorListAST & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_mSortedAttributeName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mAscending (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_sortedListSortDescriptorListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_sortedListSortDescriptorListAST final : public cGenericAbstractEnumerator {
  public: UpEnumerator_sortedListSortDescriptorListAST (const class GGS_sortedListSortDescriptorListAST & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_mSortedAttributeName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mAscending (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_sortedListSortDescriptorListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @sortedListSortDescriptorListAST list
//--------------------------------------------------------------------------------------------------

class GGS_sortedListSortDescriptorListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_sortedListSortDescriptorListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_sortedListSortDescriptorListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mSortedAttributeName,
                                                 const class GGS_bool & in_mAscending
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sortedListSortDescriptorListAST init (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sortedListSortDescriptorListAST extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_sortedListSortDescriptorListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_sortedListSortDescriptorListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                     const class GGS_bool & inOperand1
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_sortedListSortDescriptorListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_bool & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_sortedListSortDescriptorListAST add_operation (const GGS_sortedListSortDescriptorListAST & inOperand,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_bool constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_bool constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_bool & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_bool & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_bool & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAscendingAtIndex (class GGS_bool constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSortedAttributeNameAtIndex (class GGS_lstring constinArgument0,
                                                                       class GGS_uint constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_bool & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_bool & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mAscendingAtIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mSortedAttributeNameAtIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_sortedListSortDescriptorListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_sortedListSortDescriptorListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_sortedListSortDescriptorListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_sortedListSortDescriptorListAST_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_sortedListSortDescriptorListAST ;
  friend class UpEnumerator_sortedListSortDescriptorListAST ;
  friend class DownEnumerator_sortedListSortDescriptorListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sortedListSortDescriptorListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @sortedListSortDescriptorListAST_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_sortedListSortDescriptorListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mSortedAttributeName ;
  public: inline GGS_lstring readProperty_mSortedAttributeName (void) const {
    return mProperty_mSortedAttributeName ;
  }

  public: GGS_bool mProperty_mAscending ;
  public: inline GGS_bool readProperty_mAscending (void) const {
    return mProperty_mAscending ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_sortedListSortDescriptorListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSortedAttributeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSortedAttributeName = inValue ;
  }

  public: inline void setter_setMAscending (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAscending = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_sortedListSortDescriptorListAST_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_sortedListSortDescriptorListAST_2E_element (const GGS_lstring & in_mSortedAttributeName,
                                                          const GGS_bool & in_mAscending) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sortedListSortDescriptorListAST_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                              const class GGS_bool & inOperand1,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sortedListSortDescriptorListAST_2E_element extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_sortedListSortDescriptorListAST_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                      const class GGS_bool & inOperand1,
                                                                                      class Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sortedListSortDescriptorListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @sortedListDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_sortedListDeclarationAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_sortedListDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_sortedListDeclarationAST (const class cPtr_sortedListDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mSortedListTypeName (void) const ;

  public: class GGS_propertyInCollectionListAST readProperty_mPropertyList (void) const ;

  public: class GGS_sortedListSortDescriptorListAST readProperty_mSortDescriptorList (void) const ;

  public: class GGS_bool readProperty_equatable (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sortedListDeclarationAST init_21_isPredefined_21__21__21__21_equatable (const class GGS_bool & inOperand0,
                                                                                             const class GGS_lstring & inOperand1,
                                                                                             const class GGS_propertyInCollectionListAST & inOperand2,
                                                                                             const class GGS_sortedListSortDescriptorListAST & inOperand3,
                                                                                             const class GGS_bool & inOperand4,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sortedListDeclarationAST extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_sortedListDeclarationAST class_func_new (const class GGS_bool & inOperand0,
                                                                    const class GGS_lstring & inOperand1,
                                                                    const class GGS_propertyInCollectionListAST & inOperand2,
                                                                    const class GGS_sortedListSortDescriptorListAST & inOperand3,
                                                                    const class GGS_bool & inOperand4,
                                                                    class Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_sortedListDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sortedListDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @sortedListDeclarationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_sortedListDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void sortedListDeclarationAST_init_21_isPredefined_21__21__21__21_equatable (const class GGS_bool & inOperand0,
                                                                                       const class GGS_lstring & inOperand1,
                                                                                       const class GGS_propertyInCollectionListAST & inOperand2,
                                                                                       const class GGS_sortedListSortDescriptorListAST & inOperand3,
                                                                                       const class GGS_bool & inOperand4,
                                                                                       Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method addAssociatedElement
  public: virtual void method_addAssociatedElement (class GGS_galgasDeclarationAST & arg_ioDeclarations,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GGS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           class GGS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GGS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GGS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GGS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GGS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           const class GGS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GGS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GGS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GGS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GGS_lstringlist & arg_ioUsefulnessRootEntities,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_string arg_inProductDirectory,
           const class GGS_semanticContext arg_inSemanticContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_predefinedTypes arg_inPredefinedTypes,
           class GGS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mSortedListTypeName ;
  public: GGS_propertyInCollectionListAST mProperty_mPropertyList ;
  public: GGS_sortedListSortDescriptorListAST mProperty_mSortDescriptorList ;
  public: GGS_bool mProperty_equatable ;


//--- Default constructor
  public: cPtr_sortedListDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_sortedListDeclarationAST (const GGS_bool & in_isPredefined,
                                         const GGS_lstring & in_mSortedListTypeName,
                                         const GGS_propertyInCollectionListAST & in_mPropertyList,
                                         const GGS_sortedListSortDescriptorListAST & in_mSortDescriptorList,
                                         const GGS_bool & in_equatable,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @sortedListDeclarationAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_sortedListDeclarationAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_sortedListDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_sortedListDeclarationAST_2E_weak (const class GGS_sortedListDeclarationAST & inSource) ;

  public: GGS_sortedListDeclarationAST_2E_weak & operator = (const class GGS_sortedListDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_sortedListDeclarationAST_2E_weak init_nil (void) {
    GGS_sortedListDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_sortedListDeclarationAST bang_sortedListDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_sortedListDeclarationAST unwrappedValue (void) const {
    GGS_sortedListDeclarationAST result ;
    if (isValid ()) {
      const cPtr_sortedListDeclarationAST * p = (cPtr_sortedListDeclarationAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_sortedListDeclarationAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sortedListDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_sortedListDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_sortedListDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sortedListDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @sortDescriptorListForGeneration list enumerator
//--------------------------------------------------------------------------------------------------

class cEnumerator_sortDescriptorListForGeneration final : public cGenericAbstractEnumerator {
  public: cEnumerator_sortDescriptorListForGeneration (const class GGS_sortDescriptorListForGeneration & inEnumeratedObject,
                                                       const EnumerationOrder inOrder) ;

  public: class GGS_unifiedTypeMapEntry current_mAttributeTypeIndex (LOCATION_ARGS) const ;
  public: class GGS_string current_mAttributeName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mAscendingOrder (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_sortDescriptorListForGeneration_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_sortDescriptorListForGeneration final : public cGenericAbstractEnumerator {
  public: DownEnumerator_sortDescriptorListForGeneration (const class GGS_sortDescriptorListForGeneration & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_unifiedTypeMapEntry current_mAttributeTypeIndex (LOCATION_ARGS) const ;
  public: class GGS_string current_mAttributeName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mAscendingOrder (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_sortDescriptorListForGeneration_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_sortDescriptorListForGeneration final : public cGenericAbstractEnumerator {
  public: UpEnumerator_sortDescriptorListForGeneration (const class GGS_sortDescriptorListForGeneration & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_unifiedTypeMapEntry current_mAttributeTypeIndex (LOCATION_ARGS) const ;
  public: class GGS_string current_mAttributeName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mAscendingOrder (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_sortDescriptorListForGeneration_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @sortDescriptorListForGeneration list
//--------------------------------------------------------------------------------------------------

class GGS_sortDescriptorListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_sortDescriptorListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_sortDescriptorListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_unifiedTypeMapEntry & in_mAttributeTypeIndex,
                                                 const class GGS_string & in_mAttributeName,
                                                 const class GGS_bool & in_mAscendingOrder
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sortDescriptorListForGeneration init (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sortDescriptorListForGeneration extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_sortDescriptorListForGeneration class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_sortDescriptorListForGeneration class_func_listWithValue (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                     const class GGS_string & inOperand1,
                                                                                     const class GGS_bool & inOperand2
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_sortDescriptorListForGeneration inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                     const class GGS_string & inOperand1,
                                                     const class GGS_bool & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_sortDescriptorListForGeneration add_operation (const GGS_sortDescriptorListForGeneration & inOperand,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_unifiedTypeMapEntry constinArgument0,
                                               class GGS_string constinArgument1,
                                               class GGS_bool constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_unifiedTypeMapEntry constinArgument0,
                                                      class GGS_string constinArgument1,
                                                      class GGS_bool constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_unifiedTypeMapEntry & outArgument0,
                                                 class GGS_string & outArgument1,
                                                 class GGS_bool & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_unifiedTypeMapEntry & outArgument0,
                                                class GGS_string & outArgument1,
                                                class GGS_bool & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_unifiedTypeMapEntry & outArgument0,
                                                      class GGS_string & outArgument1,
                                                      class GGS_bool & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAscendingOrderAtIndex (class GGS_bool constinArgument0,
                                                                  class GGS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAttributeNameAtIndex (class GGS_string constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAttributeTypeIndexAtIndex (class GGS_unifiedTypeMapEntry constinArgument0,
                                                                      class GGS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_unifiedTypeMapEntry & outArgument0,
                                              class GGS_string & outArgument1,
                                              class GGS_bool & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_unifiedTypeMapEntry & outArgument0,
                                             class GGS_string & outArgument1,
                                             class GGS_bool & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mAscendingOrderAtIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mAttributeNameAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_unifiedTypeMapEntry getter_mAttributeTypeIndexAtIndex (const class GGS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_sortDescriptorListForGeneration getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_sortDescriptorListForGeneration getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_sortDescriptorListForGeneration getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_sortDescriptorListForGeneration_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_sortDescriptorListForGeneration ;
  friend class UpEnumerator_sortDescriptorListForGeneration ;
  friend class DownEnumerator_sortDescriptorListForGeneration ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sortDescriptorListForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @sortDescriptorListForGeneration_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_sortDescriptorListForGeneration_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_unifiedTypeMapEntry mProperty_mAttributeTypeIndex ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mAttributeTypeIndex (void) const {
    return mProperty_mAttributeTypeIndex ;
  }

  public: GGS_string mProperty_mAttributeName ;
  public: inline GGS_string readProperty_mAttributeName (void) const {
    return mProperty_mAttributeName ;
  }

  public: GGS_bool mProperty_mAscendingOrder ;
  public: inline GGS_bool readProperty_mAscendingOrder (void) const {
    return mProperty_mAscendingOrder ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_sortDescriptorListForGeneration_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMAttributeTypeIndex (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAttributeTypeIndex = inValue ;
  }

  public: inline void setter_setMAttributeName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAttributeName = inValue ;
  }

  public: inline void setter_setMAscendingOrder (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAscendingOrder = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_sortDescriptorListForGeneration_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_sortDescriptorListForGeneration_2E_element (const GGS_unifiedTypeMapEntry & in_mAttributeTypeIndex,
                                                          const GGS_string & in_mAttributeName,
                                                          const GGS_bool & in_mAscendingOrder) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sortDescriptorListForGeneration_2E_element init_21__21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                  const class GGS_string & inOperand1,
                                                                                  const class GGS_bool & inOperand2,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sortDescriptorListForGeneration_2E_element extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_sortDescriptorListForGeneration_2E_element class_func_new (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                      const class GGS_string & inOperand1,
                                                                                      const class GGS_bool & inOperand2,
                                                                                      class Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sortDescriptorListForGeneration_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @structDeclarationAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_structDeclarationAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_structDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_structDeclarationAST (const class cPtr_structDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_structTypeName (void) const ;

  public: class GGS_propertyInCollectionListAST readProperty_mStructurePropertyListAST (void) const ;

  public: class GGS_string readProperty_enumeratedElementTypeName (void) const ;

  public: class GGS_structComparison readProperty_comparison (void) const ;

  public: class GGS_bool readProperty_isUsefullStruct (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_structDeclarationAST init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (const class GGS_bool & inOperand0,
                                                                                                                                      const class GGS_lstring & inOperand1,
                                                                                                                                      const class GGS_propertyInCollectionListAST & inOperand2,
                                                                                                                                      const class GGS_string & inOperand3,
                                                                                                                                      const class GGS_structComparison & inOperand4,
                                                                                                                                      const class GGS_bool & inOperand5,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_structDeclarationAST extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_structDeclarationAST class_func_new (const class GGS_bool & inOperand0,
                                                                const class GGS_lstring & inOperand1,
                                                                const class GGS_propertyInCollectionListAST & inOperand2,
                                                                const class GGS_string & inOperand3,
                                                                const class GGS_structComparison & inOperand4,
                                                                const class GGS_bool & inOperand5,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_structDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structDeclarationAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @structDeclarationAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_structDeclarationAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void structDeclarationAST_init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (const class GGS_bool & inOperand0,
                                                                                                                                const class GGS_lstring & inOperand1,
                                                                                                                                const class GGS_propertyInCollectionListAST & inOperand2,
                                                                                                                                const class GGS_string & inOperand3,
                                                                                                                                const class GGS_structComparison & inOperand4,
                                                                                                                                const class GGS_bool & inOperand5,
                                                                                                                                Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GGS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           class GGS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GGS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GGS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GGS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GGS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           const class GGS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GGS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GGS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GGS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GGS_lstringlist & arg_ioUsefulnessRootEntities,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_string arg_inProductDirectory,
           const class GGS_semanticContext arg_inSemanticContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_predefinedTypes arg_inPredefinedTypes,
           class GGS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_structTypeName ;
  public: GGS_propertyInCollectionListAST mProperty_mStructurePropertyListAST ;
  public: GGS_string mProperty_enumeratedElementTypeName ;
  public: GGS_structComparison mProperty_comparison ;
  public: GGS_bool mProperty_isUsefullStruct ;


//--- Default constructor
  public: cPtr_structDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_structDeclarationAST (const GGS_bool & in_isPredefined,
                                     const GGS_lstring & in_structTypeName,
                                     const GGS_propertyInCollectionListAST & in_mStructurePropertyListAST,
                                     const GGS_string & in_enumeratedElementTypeName,
                                     const GGS_structComparison & in_comparison,
                                     const GGS_bool & in_isUsefullStruct,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @structDeclarationAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_structDeclarationAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_structDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_structDeclarationAST_2E_weak (const class GGS_structDeclarationAST & inSource) ;

  public: GGS_structDeclarationAST_2E_weak & operator = (const class GGS_structDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_structDeclarationAST_2E_weak init_nil (void) {
    GGS_structDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_structDeclarationAST bang_structDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_structDeclarationAST unwrappedValue (void) const {
    GGS_structDeclarationAST result ;
    if (isValid ()) {
      const cPtr_structDeclarationAST * p = (cPtr_structDeclarationAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_structDeclarationAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_structDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_structDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_structDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractExtensionGetterAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_abstractExtensionGetterAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_abstractExtensionGetterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_abstractExtensionGetterAST (const class cPtr_abstractExtensionGetterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTypeName (void) const ;

  public: class GGS_lstring readProperty_mAbstractExtensionGetterName (void) const ;

  public: class GGS_formalInputParameterListAST readProperty_mAbstractExtensionGetterFormalInputParameterList (void) const ;

  public: class GGS_lstring readProperty_mAbstractExtensionGetterReturnedTypeName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_abstractExtensionGetterAST init_21_isPredefined_21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                      const class GGS_lstring & inOperand1,
                                                                                      const class GGS_lstring & inOperand2,
                                                                                      const class GGS_formalInputParameterListAST & inOperand3,
                                                                                      const class GGS_lstring & inOperand4,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractExtensionGetterAST extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_abstractExtensionGetterAST class_func_new (const class GGS_bool & inOperand0,
                                                                      const class GGS_lstring & inOperand1,
                                                                      const class GGS_lstring & inOperand2,
                                                                      const class GGS_formalInputParameterListAST & inOperand3,
                                                                      const class GGS_lstring & inOperand4,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractExtensionGetterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractExtensionGetterAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractExtensionGetterAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_abstractExtensionGetterAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void abstractExtensionGetterAST_init_21_isPredefined_21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                const class GGS_lstring & inOperand1,
                                                                                const class GGS_lstring & inOperand2,
                                                                                const class GGS_formalInputParameterListAST & inOperand3,
                                                                                const class GGS_lstring & inOperand4,
                                                                                Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildExtensionListMaps
  public: virtual void method_buildExtensionListMaps (class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionMethodListMapAST,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionGetterListMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GGS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           class GGS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GGS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GGS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GGS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GGS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           const class GGS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GGS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GGS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GGS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GGS_lstringlist & arg_ioUsefulnessRootEntities,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_string arg_inProductDirectory,
           const class GGS_semanticContext arg_inSemanticContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_predefinedTypes arg_inPredefinedTypes,
           class GGS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTypeName ;
  public: GGS_lstring mProperty_mAbstractExtensionGetterName ;
  public: GGS_formalInputParameterListAST mProperty_mAbstractExtensionGetterFormalInputParameterList ;
  public: GGS_lstring mProperty_mAbstractExtensionGetterReturnedTypeName ;


//--- Default constructor
  public: cPtr_abstractExtensionGetterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_abstractExtensionGetterAST (const GGS_bool & in_isPredefined,
                                           const GGS_lstring & in_mTypeName,
                                           const GGS_lstring & in_mAbstractExtensionGetterName,
                                           const GGS_formalInputParameterListAST & in_mAbstractExtensionGetterFormalInputParameterList,
                                           const GGS_lstring & in_mAbstractExtensionGetterReturnedTypeName,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractExtensionGetterAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_abstractExtensionGetterAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_abstractExtensionGetterAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_abstractExtensionGetterAST_2E_weak (const class GGS_abstractExtensionGetterAST & inSource) ;

  public: GGS_abstractExtensionGetterAST_2E_weak & operator = (const class GGS_abstractExtensionGetterAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_abstractExtensionGetterAST_2E_weak init_nil (void) {
    GGS_abstractExtensionGetterAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_abstractExtensionGetterAST bang_abstractExtensionGetterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_abstractExtensionGetterAST unwrappedValue (void) const {
    GGS_abstractExtensionGetterAST result ;
    if (isValid ()) {
      const cPtr_abstractExtensionGetterAST * p = (cPtr_abstractExtensionGetterAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_abstractExtensionGetterAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractExtensionGetterAST_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_abstractExtensionGetterAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractExtensionGetterAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractExtensionGetterAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @formalInputParameterListForGeneration list enumerator
//--------------------------------------------------------------------------------------------------

class cEnumerator_formalInputParameterListForGeneration final : public cGenericAbstractEnumerator {
  public: cEnumerator_formalInputParameterListForGeneration (const class GGS_formalInputParameterListForGeneration & inEnumeratedObject,
                                                             const EnumerationOrder inOrder) ;

  public: class GGS_lstring current_mFormalSelector (LOCATION_ARGS) const ;
  public: class GGS_unifiedTypeMapEntry current_mFormalArgumentType (LOCATION_ARGS) const ;
  public: class GGS_string current_mFormalArgumentCppName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFormalArgumentName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsConstant (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_formalInputParameterListForGeneration_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_formalInputParameterListForGeneration final : public cGenericAbstractEnumerator {
  public: DownEnumerator_formalInputParameterListForGeneration (const class GGS_formalInputParameterListForGeneration & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_mFormalSelector (LOCATION_ARGS) const ;
  public: class GGS_unifiedTypeMapEntry current_mFormalArgumentType (LOCATION_ARGS) const ;
  public: class GGS_string current_mFormalArgumentCppName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFormalArgumentName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsConstant (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_formalInputParameterListForGeneration_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_formalInputParameterListForGeneration final : public cGenericAbstractEnumerator {
  public: UpEnumerator_formalInputParameterListForGeneration (const class GGS_formalInputParameterListForGeneration & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_mFormalSelector (LOCATION_ARGS) const ;
  public: class GGS_unifiedTypeMapEntry current_mFormalArgumentType (LOCATION_ARGS) const ;
  public: class GGS_string current_mFormalArgumentCppName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFormalArgumentName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsConstant (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_formalInputParameterListForGeneration_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @formalInputParameterListForGeneration list
//--------------------------------------------------------------------------------------------------

class GGS_formalInputParameterListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_formalInputParameterListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_formalInputParameterListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mFormalSelector,
                                                 const class GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                 const class GGS_string & in_mFormalArgumentCppName,
                                                 const class GGS_lstring & in_mFormalArgumentName,
                                                 const class GGS_bool & in_mIsConstant
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_formalInputParameterListForGeneration init (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_formalInputParameterListForGeneration extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_formalInputParameterListForGeneration class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_formalInputParameterListForGeneration class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                           const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                                           const class GGS_string & inOperand2,
                                                                                           const class GGS_lstring & inOperand3,
                                                                                           const class GGS_bool & inOperand4
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_formalInputParameterListForGeneration inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_unifiedTypeMapEntry & inOperand1,
                                                     const class GGS_string & inOperand2,
                                                     const class GGS_lstring & inOperand3,
                                                     const class GGS_bool & inOperand4
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_formalInputParameterListForGeneration add_operation (const GGS_formalInputParameterListForGeneration & inOperand,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_unifiedTypeMapEntry constinArgument1,
                                               class GGS_string constinArgument2,
                                               class GGS_lstring constinArgument3,
                                               class GGS_bool constinArgument4,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_unifiedTypeMapEntry constinArgument1,
                                                      class GGS_string constinArgument2,
                                                      class GGS_lstring constinArgument3,
                                                      class GGS_bool constinArgument4,
                                                      class GGS_uint constinArgument5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_unifiedTypeMapEntry & outArgument1,
                                                 class GGS_string & outArgument2,
                                                 class GGS_lstring & outArgument3,
                                                 class GGS_bool & outArgument4,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_unifiedTypeMapEntry & outArgument1,
                                                class GGS_string & outArgument2,
                                                class GGS_lstring & outArgument3,
                                                class GGS_bool & outArgument4,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_unifiedTypeMapEntry & outArgument1,
                                                      class GGS_string & outArgument2,
                                                      class GGS_lstring & outArgument3,
                                                      class GGS_bool & outArgument4,
                                                      class GGS_uint constinArgument5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentCppNameAtIndex (class GGS_string constinArgument0,
                                                                         class GGS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentNameAtIndex (class GGS_lstring constinArgument0,
                                                                      class GGS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentTypeAtIndex (class GGS_unifiedTypeMapEntry constinArgument0,
                                                                      class GGS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalSelectorAtIndex (class GGS_lstring constinArgument0,
                                                                  class GGS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsConstantAtIndex (class GGS_bool constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_unifiedTypeMapEntry & outArgument1,
                                              class GGS_string & outArgument2,
                                              class GGS_lstring & outArgument3,
                                              class GGS_bool & outArgument4,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_unifiedTypeMapEntry & outArgument1,
                                             class GGS_string & outArgument2,
                                             class GGS_lstring & outArgument3,
                                             class GGS_bool & outArgument4,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_string getter_mFormalArgumentCppNameAtIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mFormalArgumentNameAtIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_unifiedTypeMapEntry getter_mFormalArgumentTypeAtIndex (const class GGS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mFormalSelectorAtIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mIsConstantAtIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_formalInputParameterListForGeneration getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_formalInputParameterListForGeneration getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_formalInputParameterListForGeneration getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_formalInputParameterListForGeneration_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_formalInputParameterListForGeneration ;
  friend class UpEnumerator_formalInputParameterListForGeneration ;
  friend class DownEnumerator_formalInputParameterListForGeneration ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formalInputParameterListForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @formalInputParameterListForGeneration_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_formalInputParameterListForGeneration_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mFormalSelector ;
  public: inline GGS_lstring readProperty_mFormalSelector (void) const {
    return mProperty_mFormalSelector ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_mFormalArgumentType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mFormalArgumentType (void) const {
    return mProperty_mFormalArgumentType ;
  }

  public: GGS_string mProperty_mFormalArgumentCppName ;
  public: inline GGS_string readProperty_mFormalArgumentCppName (void) const {
    return mProperty_mFormalArgumentCppName ;
  }

  public: GGS_lstring mProperty_mFormalArgumentName ;
  public: inline GGS_lstring readProperty_mFormalArgumentName (void) const {
    return mProperty_mFormalArgumentName ;
  }

  public: GGS_bool mProperty_mIsConstant ;
  public: inline GGS_bool readProperty_mIsConstant (void) const {
    return mProperty_mIsConstant ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_formalInputParameterListForGeneration_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFormalSelector (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalSelector = inValue ;
  }

  public: inline void setter_setMFormalArgumentType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentType = inValue ;
  }

  public: inline void setter_setMFormalArgumentCppName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentCppName = inValue ;
  }

  public: inline void setter_setMFormalArgumentName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentName = inValue ;
  }

  public: inline void setter_setMIsConstant (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsConstant = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_formalInputParameterListForGeneration_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_formalInputParameterListForGeneration_2E_element (const GGS_lstring & in_mFormalSelector,
                                                                const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                const GGS_string & in_mFormalArgumentCppName,
                                                                const GGS_lstring & in_mFormalArgumentName,
                                                                const GGS_bool & in_mIsConstant) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_formalInputParameterListForGeneration_2E_element init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                                                const class GGS_string & inOperand2,
                                                                                                const class GGS_lstring & inOperand3,
                                                                                                const class GGS_bool & inOperand4,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_formalInputParameterListForGeneration_2E_element extractObject (const GGS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_formalInputParameterListForGeneration_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                            const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                                            const class GGS_string & inOperand2,
                                                                                            const class GGS_lstring & inOperand3,
                                                                                            const class GGS_bool & inOperand4,
                                                                                            class Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formalInputParameterListForGeneration_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractExtensionMethodAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_abstractExtensionMethodAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_abstractExtensionMethodAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_abstractExtensionMethodAST (const class cPtr_abstractExtensionMethodAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTypeName (void) const ;

  public: class GGS_lstring readProperty_mAbstractExtensionMethodName (void) const ;

  public: class GGS_formalParameterListAST readProperty_mAbstractExtensionMethodFormalParameterList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_abstractExtensionMethodAST init_21_isPredefined_21__21__21_ (const class GGS_bool & inOperand0,
                                                                                  const class GGS_lstring & inOperand1,
                                                                                  const class GGS_lstring & inOperand2,
                                                                                  const class GGS_formalParameterListAST & inOperand3,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractExtensionMethodAST extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_abstractExtensionMethodAST class_func_new (const class GGS_bool & inOperand0,
                                                                      const class GGS_lstring & inOperand1,
                                                                      const class GGS_lstring & inOperand2,
                                                                      const class GGS_formalParameterListAST & inOperand3,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractExtensionMethodAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractExtensionMethodAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractExtensionMethodAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_abstractExtensionMethodAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void abstractExtensionMethodAST_init_21_isPredefined_21__21__21_ (const class GGS_bool & inOperand0,
                                                                            const class GGS_lstring & inOperand1,
                                                                            const class GGS_lstring & inOperand2,
                                                                            const class GGS_formalParameterListAST & inOperand3,
                                                                            Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildExtensionListMaps
  public: virtual void method_buildExtensionListMaps (class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionMethodListMapAST,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionGetterListMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GGS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           class GGS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GGS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GGS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GGS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GGS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           const class GGS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GGS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GGS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GGS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GGS_lstringlist & arg_ioUsefulnessRootEntities,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_string arg_inProductDirectory,
           const class GGS_semanticContext arg_inSemanticContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_predefinedTypes arg_inPredefinedTypes,
           class GGS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTypeName ;
  public: GGS_lstring mProperty_mAbstractExtensionMethodName ;
  public: GGS_formalParameterListAST mProperty_mAbstractExtensionMethodFormalParameterList ;


//--- Default constructor
  public: cPtr_abstractExtensionMethodAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_abstractExtensionMethodAST (const GGS_bool & in_isPredefined,
                                           const GGS_lstring & in_mTypeName,
                                           const GGS_lstring & in_mAbstractExtensionMethodName,
                                           const GGS_formalParameterListAST & in_mAbstractExtensionMethodFormalParameterList,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractExtensionMethodAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_abstractExtensionMethodAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_abstractExtensionMethodAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_abstractExtensionMethodAST_2E_weak (const class GGS_abstractExtensionMethodAST & inSource) ;

  public: GGS_abstractExtensionMethodAST_2E_weak & operator = (const class GGS_abstractExtensionMethodAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_abstractExtensionMethodAST_2E_weak init_nil (void) {
    GGS_abstractExtensionMethodAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_abstractExtensionMethodAST bang_abstractExtensionMethodAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_abstractExtensionMethodAST unwrappedValue (void) const {
    GGS_abstractExtensionMethodAST result ;
    if (isValid ()) {
      const cPtr_abstractExtensionMethodAST * p = (cPtr_abstractExtensionMethodAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_abstractExtensionMethodAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractExtensionMethodAST_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_abstractExtensionMethodAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractExtensionMethodAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractExtensionMethodAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @formalParameterListForGeneration list enumerator
//--------------------------------------------------------------------------------------------------

class cEnumerator_formalParameterListForGeneration final : public cGenericAbstractEnumerator {
  public: cEnumerator_formalParameterListForGeneration (const class GGS_formalParameterListForGeneration & inEnumeratedObject,
                                                        const EnumerationOrder inOrder) ;

  public: class GGS_lstring current_mFormalSelector (LOCATION_ARGS) const ;
  public: class GGS_formalArgumentPassingModeAST current_mFormalArgumentPassingMode (LOCATION_ARGS) const ;
  public: class GGS_unifiedTypeMapEntry current_mFormalArgumentType (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFormalArgumentName (LOCATION_ARGS) const ;
  public: class GGS_string current_mFormalArgumentCppName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_formalParameterListForGeneration_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_formalParameterListForGeneration final : public cGenericAbstractEnumerator {
  public: DownEnumerator_formalParameterListForGeneration (const class GGS_formalParameterListForGeneration & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_mFormalSelector (LOCATION_ARGS) const ;
  public: class GGS_formalArgumentPassingModeAST current_mFormalArgumentPassingMode (LOCATION_ARGS) const ;
  public: class GGS_unifiedTypeMapEntry current_mFormalArgumentType (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFormalArgumentName (LOCATION_ARGS) const ;
  public: class GGS_string current_mFormalArgumentCppName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_formalParameterListForGeneration_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_formalParameterListForGeneration final : public cGenericAbstractEnumerator {
  public: UpEnumerator_formalParameterListForGeneration (const class GGS_formalParameterListForGeneration & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_mFormalSelector (LOCATION_ARGS) const ;
  public: class GGS_formalArgumentPassingModeAST current_mFormalArgumentPassingMode (LOCATION_ARGS) const ;
  public: class GGS_unifiedTypeMapEntry current_mFormalArgumentType (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mFormalArgumentName (LOCATION_ARGS) const ;
  public: class GGS_string current_mFormalArgumentCppName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_formalParameterListForGeneration_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @formalParameterListForGeneration list
//--------------------------------------------------------------------------------------------------

class GGS_formalParameterListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_formalParameterListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_formalParameterListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mFormalSelector,
                                                 const class GGS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                 const class GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                 const class GGS_lstring & in_mFormalArgumentName,
                                                 const class GGS_string & in_mFormalArgumentCppName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_formalParameterListForGeneration init (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_formalParameterListForGeneration extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_formalParameterListForGeneration class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_formalParameterListForGeneration class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                      const class GGS_formalArgumentPassingModeAST & inOperand1,
                                                                                      const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                                      const class GGS_lstring & inOperand3,
                                                                                      const class GGS_string & inOperand4
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_formalParameterListForGeneration inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_formalArgumentPassingModeAST & inOperand1,
                                                     const class GGS_unifiedTypeMapEntry & inOperand2,
                                                     const class GGS_lstring & inOperand3,
                                                     const class GGS_string & inOperand4
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_formalParameterListForGeneration add_operation (const GGS_formalParameterListForGeneration & inOperand,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_formalArgumentPassingModeAST constinArgument1,
                                               class GGS_unifiedTypeMapEntry constinArgument2,
                                               class GGS_lstring constinArgument3,
                                               class GGS_string constinArgument4,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_formalArgumentPassingModeAST constinArgument1,
                                                      class GGS_unifiedTypeMapEntry constinArgument2,
                                                      class GGS_lstring constinArgument3,
                                                      class GGS_string constinArgument4,
                                                      class GGS_uint constinArgument5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_formalArgumentPassingModeAST & outArgument1,
                                                 class GGS_unifiedTypeMapEntry & outArgument2,
                                                 class GGS_lstring & outArgument3,
                                                 class GGS_string & outArgument4,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_formalArgumentPassingModeAST & outArgument1,
                                                class GGS_unifiedTypeMapEntry & outArgument2,
                                                class GGS_lstring & outArgument3,
                                                class GGS_string & outArgument4,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_formalArgumentPassingModeAST & outArgument1,
                                                      class GGS_unifiedTypeMapEntry & outArgument2,
                                                      class GGS_lstring & outArgument3,
                                                      class GGS_string & outArgument4,
                                                      class GGS_uint constinArgument5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentCppNameAtIndex (class GGS_string constinArgument0,
                                                                         class GGS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentNameAtIndex (class GGS_lstring constinArgument0,
                                                                      class GGS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentPassingModeAtIndex (class GGS_formalArgumentPassingModeAST constinArgument0,
                                                                             class GGS_uint constinArgument1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentTypeAtIndex (class GGS_unifiedTypeMapEntry constinArgument0,
                                                                      class GGS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalSelectorAtIndex (class GGS_lstring constinArgument0,
                                                                  class GGS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_formalArgumentPassingModeAST & outArgument1,
                                              class GGS_unifiedTypeMapEntry & outArgument2,
                                              class GGS_lstring & outArgument3,
                                              class GGS_string & outArgument4,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_formalArgumentPassingModeAST & outArgument1,
                                             class GGS_unifiedTypeMapEntry & outArgument2,
                                             class GGS_lstring & outArgument3,
                                             class GGS_string & outArgument4,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_string getter_mFormalArgumentCppNameAtIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mFormalArgumentNameAtIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_formalArgumentPassingModeAST getter_mFormalArgumentPassingModeAtIndex (const class GGS_uint & constinOperand0,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_unifiedTypeMapEntry getter_mFormalArgumentTypeAtIndex (const class GGS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mFormalSelectorAtIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_formalParameterListForGeneration getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_formalParameterListForGeneration getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_formalParameterListForGeneration getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_formalParameterListForGeneration_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_formalParameterListForGeneration ;
  friend class UpEnumerator_formalParameterListForGeneration ;
  friend class DownEnumerator_formalParameterListForGeneration ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formalParameterListForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @formalParameterListForGeneration_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_formalParameterListForGeneration_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mFormalSelector ;
  public: inline GGS_lstring readProperty_mFormalSelector (void) const {
    return mProperty_mFormalSelector ;
  }

  public: GGS_formalArgumentPassingModeAST mProperty_mFormalArgumentPassingMode ;
  public: inline GGS_formalArgumentPassingModeAST readProperty_mFormalArgumentPassingMode (void) const {
    return mProperty_mFormalArgumentPassingMode ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_mFormalArgumentType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mFormalArgumentType (void) const {
    return mProperty_mFormalArgumentType ;
  }

  public: GGS_lstring mProperty_mFormalArgumentName ;
  public: inline GGS_lstring readProperty_mFormalArgumentName (void) const {
    return mProperty_mFormalArgumentName ;
  }

  public: GGS_string mProperty_mFormalArgumentCppName ;
  public: inline GGS_string readProperty_mFormalArgumentCppName (void) const {
    return mProperty_mFormalArgumentCppName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_formalParameterListForGeneration_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFormalSelector (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalSelector = inValue ;
  }

  public: inline void setter_setMFormalArgumentPassingMode (const GGS_formalArgumentPassingModeAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentPassingMode = inValue ;
  }

  public: inline void setter_setMFormalArgumentType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentType = inValue ;
  }

  public: inline void setter_setMFormalArgumentName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentName = inValue ;
  }

  public: inline void setter_setMFormalArgumentCppName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentCppName = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_formalParameterListForGeneration_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_formalParameterListForGeneration_2E_element (const GGS_lstring & in_mFormalSelector,
                                                           const GGS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                           const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                           const GGS_lstring & in_mFormalArgumentName,
                                                           const GGS_string & in_mFormalArgumentCppName) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_formalParameterListForGeneration_2E_element init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                           const class GGS_formalArgumentPassingModeAST & inOperand1,
                                                                                           const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                                           const class GGS_lstring & inOperand3,
                                                                                           const class GGS_string & inOperand4,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_formalParameterListForGeneration_2E_element extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_formalParameterListForGeneration_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                       const class GGS_formalArgumentPassingModeAST & inOperand1,
                                                                                       const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                                       const class GGS_lstring & inOperand3,
                                                                                       const class GGS_string & inOperand4,
                                                                                       class Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formalParameterListForGeneration_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractExtensionSetterAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_abstractExtensionSetterAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_abstractExtensionSetterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_abstractExtensionSetterAST (const class cPtr_abstractExtensionSetterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTypeName (void) const ;

  public: class GGS_lstring readProperty_mAbstractExtensionSetterName (void) const ;

  public: class GGS_formalParameterListAST readProperty_mAbstractExtensionSetterFormalParameterList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_abstractExtensionSetterAST init_21_isPredefined_21__21__21_ (const class GGS_bool & inOperand0,
                                                                                  const class GGS_lstring & inOperand1,
                                                                                  const class GGS_lstring & inOperand2,
                                                                                  const class GGS_formalParameterListAST & inOperand3,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractExtensionSetterAST extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_abstractExtensionSetterAST class_func_new (const class GGS_bool & inOperand0,
                                                                      const class GGS_lstring & inOperand1,
                                                                      const class GGS_lstring & inOperand2,
                                                                      const class GGS_formalParameterListAST & inOperand3,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractExtensionSetterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractExtensionSetterAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractExtensionSetterAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_abstractExtensionSetterAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void abstractExtensionSetterAST_init_21_isPredefined_21__21__21_ (const class GGS_bool & inOperand0,
                                                                            const class GGS_lstring & inOperand1,
                                                                            const class GGS_lstring & inOperand2,
                                                                            const class GGS_formalParameterListAST & inOperand3,
                                                                            Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildExtensionListMaps
  public: virtual void method_buildExtensionListMaps (class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionMethodListMapAST,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionGetterListMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GGS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           class GGS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GGS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GGS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GGS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GGS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           const class GGS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GGS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GGS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GGS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GGS_lstringlist & arg_ioUsefulnessRootEntities,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_string arg_inProductDirectory,
           const class GGS_semanticContext arg_inSemanticContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_predefinedTypes arg_inPredefinedTypes,
           class GGS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTypeName ;
  public: GGS_lstring mProperty_mAbstractExtensionSetterName ;
  public: GGS_formalParameterListAST mProperty_mAbstractExtensionSetterFormalParameterList ;


//--- Default constructor
  public: cPtr_abstractExtensionSetterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_abstractExtensionSetterAST (const GGS_bool & in_isPredefined,
                                           const GGS_lstring & in_mTypeName,
                                           const GGS_lstring & in_mAbstractExtensionSetterName,
                                           const GGS_formalParameterListAST & in_mAbstractExtensionSetterFormalParameterList,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractExtensionSetterAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_abstractExtensionSetterAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_abstractExtensionSetterAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_abstractExtensionSetterAST_2E_weak (const class GGS_abstractExtensionSetterAST & inSource) ;

  public: GGS_abstractExtensionSetterAST_2E_weak & operator = (const class GGS_abstractExtensionSetterAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_abstractExtensionSetterAST_2E_weak init_nil (void) {
    GGS_abstractExtensionSetterAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_abstractExtensionSetterAST bang_abstractExtensionSetterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_abstractExtensionSetterAST unwrappedValue (void) const {
    GGS_abstractExtensionSetterAST result ;
    if (isValid ()) {
      const cPtr_abstractExtensionSetterAST * p = (cPtr_abstractExtensionSetterAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_abstractExtensionSetterAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractExtensionSetterAST_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_abstractExtensionSetterAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractExtensionSetterAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractExtensionSetterAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum equatableComparableExtension
//--------------------------------------------------------------------------------------------------

class GGS_equatableComparableExtension : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_equatableComparableExtension (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_equatable,
    enum_comparable
  } ;
  
//--------------------------------- Private properties
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_equatableComparableExtension extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_equatableComparableExtension class_func_comparable (LOCATION_ARGS) ;

  public: static class GGS_equatableComparableExtension class_func_equatable (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isComparable (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isEquatable (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_equatableComparableExtension ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @equatableExtensionMap map enumerator
//--------------------------------------------------------------------------------------------------

class cEnumerator_equatableExtensionMap final : public cGenericAbstractEnumerator {
  public: cEnumerator_equatableExtensionMap (const class GGS_equatableExtensionMap & inEnumeratedObject,
                                             const EnumerationOrder inOrder) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_equatableComparableExtension current_mExtension (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_equatableExtensionMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_equatableExtensionMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_equatableExtensionMap (const class GGS_equatableExtensionMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_equatableComparableExtension current_mExtension (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_equatableExtensionMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_equatableExtensionMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_equatableExtensionMap (const class GGS_equatableExtensionMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_equatableComparableExtension current_mExtension (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_equatableExtensionMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @equatableExtensionMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_equatableExtensionMap ;

//--------------------------------------------------------------------------------------------------

class GGS_equatableExtensionMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_equatableExtensionMap (void) ;

//--------------------------------- Handle copy
  public: GGS_equatableExtensionMap (const GGS_equatableExtensionMap & inSource) ;
  public: GGS_equatableExtensionMap & operator = (const GGS_equatableExtensionMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_equatableExtensionMap init (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_equatableExtensionMap extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_equatableExtensionMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_equatableExtensionMap class_func_mapWithMapToOverride (const class GGS_equatableExtensionMap & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_equatableComparableExtension & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_equatableExtensionMap add_operation (const GGS_equatableExtensionMap & inOperand,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_equatableComparableExtension constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeKey (class GGS_lstring constinArgument0,
                                                  class GGS_equatableComparableExtension & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExtensionForKey (class GGS_equatableComparableExtension constinArgument0,
                                                            class GGS_string constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_equatableComparableExtension getter_mExtensionForKey (const class GGS_string & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_equatableExtensionMap getter_overriddenMap (Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_equatableExtensionMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_equatableExtensionMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                  const GGS_string & inKey
                                                                                                  COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_equatableExtensionMap_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_equatableExtensionMap ;
  friend class UpEnumerator_equatableExtensionMap ;
  friend class DownEnumerator_equatableExtensionMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_equatableExtensionMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@equatableExtensionMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_equatableExtensionMap : public cMapElement {
//--- Map attributes
  public: GGS_equatableComparableExtension mProperty_mExtension ;

//--- Constructors
  public: cMapElement_equatableExtensionMap (const GGS_equatableExtensionMap_2E_element & inValue
                                             COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_equatableExtensionMap (const GGS_lstring & inKey,
                                             const GGS_equatableComparableExtension & in_mExtension
                                             COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @equatableExtensionMap_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_equatableExtensionMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_equatableComparableExtension mProperty_mExtension ;
  public: inline GGS_equatableComparableExtension readProperty_mExtension (void) const {
    return mProperty_mExtension ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_equatableExtensionMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMExtension (const GGS_equatableComparableExtension & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExtension = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_equatableExtensionMap_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_equatableExtensionMap_2E_element (const GGS_lstring & in_lkey,
                                                const GGS_equatableComparableExtension & in_mExtension) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_equatableExtensionMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                    const class GGS_equatableComparableExtension & inOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_equatableExtensionMap_2E_element extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_equatableExtensionMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                            const class GGS_equatableComparableExtension & inOperand1,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_equatableExtensionMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: equatableExtensionMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_equatableExtensionMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_equatableExtensionMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_equatableExtensionMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_equatableExtensionMap_2E_element_3F_ (const GGS_equatableExtensionMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_equatableExtensionMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_equatableExtensionMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_equatableExtensionMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_equatableExtensionMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @equatableExtensionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_equatableExtensionAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_equatableExtensionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_equatableExtensionAST (const class cPtr_equatableExtensionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTypeName (void) const ;

  public: class GGS_equatableComparableExtension readProperty_mExtension (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_equatableExtensionAST init_21_isPredefined_21__21_ (const class GGS_bool & inOperand0,
                                                                         const class GGS_lstring & inOperand1,
                                                                         const class GGS_equatableComparableExtension & inOperand2,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_equatableExtensionAST extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_equatableExtensionAST class_func_new (const class GGS_bool & inOperand0,
                                                                 const class GGS_lstring & inOperand1,
                                                                 const class GGS_equatableComparableExtension & inOperand2,
                                                                 class Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_equatableExtensionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_equatableExtensionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @equatableExtensionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_equatableExtensionAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void equatableExtensionAST_init_21_isPredefined_21__21_ (const class GGS_bool & inOperand0,
                                                                   const class GGS_lstring & inOperand1,
                                                                   const class GGS_equatableComparableExtension & inOperand2,
                                                                   Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GGS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           class GGS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GGS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GGS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GGS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GGS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           const class GGS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GGS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GGS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GGS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GGS_lstringlist & arg_ioUsefulnessRootEntities,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_string arg_inProductDirectory,
           const class GGS_semanticContext arg_inSemanticContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_predefinedTypes arg_inPredefinedTypes,
           class GGS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTypeName ;
  public: GGS_equatableComparableExtension mProperty_mExtension ;


//--- Default constructor
  public: cPtr_equatableExtensionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_equatableExtensionAST (const GGS_bool & in_isPredefined,
                                      const GGS_lstring & in_mTypeName,
                                      const GGS_equatableComparableExtension & in_mExtension,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @equatableExtensionAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_equatableExtensionAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_equatableExtensionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_equatableExtensionAST_2E_weak (const class GGS_equatableExtensionAST & inSource) ;

  public: GGS_equatableExtensionAST_2E_weak & operator = (const class GGS_equatableExtensionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_equatableExtensionAST_2E_weak init_nil (void) {
    GGS_equatableExtensionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_equatableExtensionAST bang_equatableExtensionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_equatableExtensionAST unwrappedValue (void) const {
    GGS_equatableExtensionAST result ;
    if (isValid ()) {
      const cPtr_equatableExtensionAST * p = (cPtr_equatableExtensionAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_equatableExtensionAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_equatableExtensionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_equatableExtensionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_equatableExtensionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_equatableExtensionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @semanticInstructionListAST list enumerator
//--------------------------------------------------------------------------------------------------

class cEnumerator_semanticInstructionListAST final : public cGenericAbstractEnumerator {
  public: cEnumerator_semanticInstructionListAST (const class GGS_semanticInstructionListAST & inEnumeratedObject,
                                                  const EnumerationOrder inOrder) ;

  public: class GGS_semanticInstructionAST current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_semanticInstructionListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_semanticInstructionListAST final : public cGenericAbstractEnumerator {
  public: DownEnumerator_semanticInstructionListAST (const class GGS_semanticInstructionListAST & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_semanticInstructionAST current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_semanticInstructionListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_semanticInstructionListAST final : public cGenericAbstractEnumerator {
  public: UpEnumerator_semanticInstructionListAST (const class GGS_semanticInstructionListAST & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_semanticInstructionAST current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_semanticInstructionListAST_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @semanticInstructionListAST list
//--------------------------------------------------------------------------------------------------

class GGS_semanticInstructionListAST : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_semanticInstructionListAST (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_semanticInstructionListAST (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_semanticInstructionAST & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_semanticInstructionListAST init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_semanticInstructionListAST extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_semanticInstructionListAST class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_semanticInstructionListAST class_func_listWithValue (const class GGS_semanticInstructionAST & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_semanticInstructionListAST inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_semanticInstructionAST & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_semanticInstructionListAST add_operation (const GGS_semanticInstructionListAST & inOperand,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_semanticInstructionAST constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_semanticInstructionAST constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_semanticInstructionAST & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_semanticInstructionAST & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_semanticInstructionAST & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GGS_semanticInstructionAST constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_semanticInstructionAST & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_semanticInstructionAST & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_semanticInstructionAST getter_mInstructionAtIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_semanticInstructionListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_semanticInstructionListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_semanticInstructionListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_semanticInstructionListAST_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_semanticInstructionListAST ;
  friend class UpEnumerator_semanticInstructionListAST ;
  friend class DownEnumerator_semanticInstructionListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticInstructionListAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxInstructionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_syntaxInstructionAST : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_syntaxInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_syntaxInstructionAST (const class cPtr_syntaxInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mInstructionLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syntaxInstructionAST init_21_ (const class GGS_location & inOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_syntaxInstructionAST extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_syntaxInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxInstructionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @syntaxInstructionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_syntaxInstructionAST : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void syntaxInstructionAST_init_21_ (const class GGS_location & inOperand0,
                                              Compiler * inCompiler) ;


//--- Extension method analyzeSyntaxInstruction
  public: virtual void method_analyzeSyntaxInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_bool arg_inHasTranslateFeature,
           const class GGS_terminalMap arg_inTerminalMap,
           const class GGS_string arg_inLexiqueName,
           const class GGS_nonterminalMap arg_inNonterminalMap,
           const class GGS_string arg_inComponentName,
           const class GGS_stringset arg_inIndexNameSet,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_uint & arg_ioSelectMethodCount,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method transformInstructionForGrammarAnalysis
  public: virtual void method_transformInstructionForGrammarAnalysis (class GGS_terminalSymbolsMapForGrammarAnalysis & arg_ioActuallyUsedTerminalSymbolMap,
           const class GGS_nonTerminalSymbolMapForGrammarAnalysis arg_inNonTerminalSymbolMap,
           class GGS_uint & arg_ioAddedNonTerminalIndex,
           class GGS_syntaxInstructionListForGrammarAnalysis & arg_ioSyntaxInstructionList,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties
  public: GGS_location mProperty_mInstructionLocation ;


//--- Default constructor
  public: cPtr_syntaxInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_syntaxInstructionAST (const GGS_location & in_mInstructionLocation,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticInstructionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_semanticInstructionAST : public GGS_syntaxInstructionAST {
//--------------------------------- Default constructor
  public: GGS_semanticInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_semanticInstructionAST (const class cPtr_semanticInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_semanticInstructionAST init_21_ (const class GGS_location & inOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_semanticInstructionAST extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_semanticInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticInstructionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @semanticInstructionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_semanticInstructionAST : public cPtr_syntaxInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void semanticInstructionAST_init_21_ (const class GGS_location & inOperand0,
                                                Compiler * inCompiler) ;


//--- Extension method analyzeSemanticInstruction
  public: virtual void method_analyzeSemanticInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method analyzeSyntaxInstruction
  public: virtual void method_analyzeSyntaxInstruction (const class GGS_lstring arg_inUsefulnessCallerEntityName,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_analysisContext arg_inAnalysisContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_bool arg_inHasTranslateFeature,
           const class GGS_terminalMap arg_inTerminalMap,
           const class GGS_string arg_inLexiqueName,
           const class GGS_nonterminalMap arg_inNonterminalMap,
           const class GGS_string arg_inComponentName,
           const class GGS_stringset arg_inIndexNameSet,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           class GGS_localVarManager & arg_ioVariableMap,
           class GGS_uint & arg_ioSelectMethodCount,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInstructionInSemanticContext
  public: virtual void method_enterInstructionInSemanticContext (class GGS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method transformInstructionForGrammarAnalysis
  public: virtual void method_transformInstructionForGrammarAnalysis (class GGS_terminalSymbolsMapForGrammarAnalysis & arg_ioActuallyUsedTerminalSymbolMap,
           const class GGS_nonTerminalSymbolMapForGrammarAnalysis arg_inNonTerminalSymbolMap,
           class GGS_uint & arg_ioAddedNonTerminalIndex,
           class GGS_syntaxInstructionListForGrammarAnalysis & arg_ioSyntaxInstructionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_semanticInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_semanticInstructionAST (const GGS_location & in_mInstructionLocation,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticInstructionListAST_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_semanticInstructionListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_semanticInstructionAST mProperty_mInstruction ;
  public: inline GGS_semanticInstructionAST readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_semanticInstructionListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GGS_semanticInstructionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_semanticInstructionListAST_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_semanticInstructionListAST_2E_element (const GGS_semanticInstructionAST & in_mInstruction) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_semanticInstructionListAST_2E_element init_21_ (const class GGS_semanticInstructionAST & inOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_semanticInstructionListAST_2E_element extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_semanticInstructionListAST_2E_element class_func_new (const class GGS_semanticInstructionAST & inOperand0,
                                                                                 class Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticInstructionListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionGetterAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_extensionGetterAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_extensionGetterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_extensionGetterAST (const class cPtr_extensionGetterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_requiresSelfForAccessingProperty (void) const ;

  public: class GGS_lstring readProperty_mTypeName (void) const ;

  public: class GGS_lstring readProperty_mExtensionGetterName (void) const ;

  public: class GGS_formalInputParameterListAST readProperty_mExtensionGetterFormalInputParameterList (void) const ;

  public: class GGS_lstring readProperty_mExtensionGetterReturnedTypeName (void) const ;

  public: class GGS_lstring readProperty_mExtensionGetterReturnedVariableName (void) const ;

  public: class GGS_semanticInstructionListAST readProperty_mExtensionGetterInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOfReaderLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionGetterAST init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                              const class GGS_bool & inOperand1,
                                                                                                                              const class GGS_lstring & inOperand2,
                                                                                                                              const class GGS_lstring & inOperand3,
                                                                                                                              const class GGS_formalInputParameterListAST & inOperand4,
                                                                                                                              const class GGS_lstring & inOperand5,
                                                                                                                              const class GGS_lstring & inOperand6,
                                                                                                                              const class GGS_semanticInstructionListAST & inOperand7,
                                                                                                                              const class GGS_location & inOperand8,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionGetterAST extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extensionGetterAST class_func_new (const class GGS_bool & inOperand0,
                                                              const class GGS_bool & inOperand1,
                                                              const class GGS_lstring & inOperand2,
                                                              const class GGS_lstring & inOperand3,
                                                              const class GGS_formalInputParameterListAST & inOperand4,
                                                              const class GGS_lstring & inOperand5,
                                                              const class GGS_lstring & inOperand6,
                                                              const class GGS_semanticInstructionListAST & inOperand7,
                                                              const class GGS_location & inOperand8,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_extensionGetterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @extensionGetterAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_extensionGetterAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void extensionGetterAST_init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                        const class GGS_bool & inOperand1,
                                                                                                                        const class GGS_lstring & inOperand2,
                                                                                                                        const class GGS_lstring & inOperand3,
                                                                                                                        const class GGS_formalInputParameterListAST & inOperand4,
                                                                                                                        const class GGS_lstring & inOperand5,
                                                                                                                        const class GGS_lstring & inOperand6,
                                                                                                                        const class GGS_semanticInstructionListAST & inOperand7,
                                                                                                                        const class GGS_location & inOperand8,
                                                                                                                        Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildExtensionListMaps
  public: virtual void method_buildExtensionListMaps (class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionMethodListMapAST,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionGetterListMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GGS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           class GGS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GGS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GGS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GGS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GGS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           const class GGS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GGS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GGS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GGS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GGS_lstringlist & arg_ioUsefulnessRootEntities,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_string arg_inProductDirectory,
           const class GGS_semanticContext arg_inSemanticContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_predefinedTypes arg_inPredefinedTypes,
           class GGS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_requiresSelfForAccessingProperty ;
  public: GGS_lstring mProperty_mTypeName ;
  public: GGS_lstring mProperty_mExtensionGetterName ;
  public: GGS_formalInputParameterListAST mProperty_mExtensionGetterFormalInputParameterList ;
  public: GGS_lstring mProperty_mExtensionGetterReturnedTypeName ;
  public: GGS_lstring mProperty_mExtensionGetterReturnedVariableName ;
  public: GGS_semanticInstructionListAST mProperty_mExtensionGetterInstructionList ;
  public: GGS_location mProperty_mEndOfReaderLocation ;


//--- Default constructor
  public: cPtr_extensionGetterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_extensionGetterAST (const GGS_bool & in_isPredefined,
                                   const GGS_bool & in_requiresSelfForAccessingProperty,
                                   const GGS_lstring & in_mTypeName,
                                   const GGS_lstring & in_mExtensionGetterName,
                                   const GGS_formalInputParameterListAST & in_mExtensionGetterFormalInputParameterList,
                                   const GGS_lstring & in_mExtensionGetterReturnedTypeName,
                                   const GGS_lstring & in_mExtensionGetterReturnedVariableName,
                                   const GGS_semanticInstructionListAST & in_mExtensionGetterInstructionList,
                                   const GGS_location & in_mEndOfReaderLocation,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionGetterAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_extensionGetterAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_extensionGetterAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_extensionGetterAST_2E_weak (const class GGS_extensionGetterAST & inSource) ;

  public: GGS_extensionGetterAST_2E_weak & operator = (const class GGS_extensionGetterAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_extensionGetterAST_2E_weak init_nil (void) {
    GGS_extensionGetterAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_extensionGetterAST bang_extensionGetterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_extensionGetterAST unwrappedValue (void) const {
    GGS_extensionGetterAST result ;
    if (isValid ()) {
      const cPtr_extensionGetterAST * p = (cPtr_extensionGetterAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_extensionGetterAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionGetterAST_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extensionGetterAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_extensionGetterAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @semanticInstructionListForGeneration list enumerator
//--------------------------------------------------------------------------------------------------

class cEnumerator_semanticInstructionListForGeneration final : public cGenericAbstractEnumerator {
  public: cEnumerator_semanticInstructionListForGeneration (const class GGS_semanticInstructionListForGeneration & inEnumeratedObject,
                                                            const EnumerationOrder inOrder) ;

  public: class GGS_semanticInstructionForGeneration current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_semanticInstructionListForGeneration_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_semanticInstructionListForGeneration final : public cGenericAbstractEnumerator {
  public: DownEnumerator_semanticInstructionListForGeneration (const class GGS_semanticInstructionListForGeneration & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_semanticInstructionForGeneration current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_semanticInstructionListForGeneration_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_semanticInstructionListForGeneration final : public cGenericAbstractEnumerator {
  public: UpEnumerator_semanticInstructionListForGeneration (const class GGS_semanticInstructionListForGeneration & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_semanticInstructionForGeneration current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_semanticInstructionListForGeneration_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @semanticInstructionListForGeneration list
//--------------------------------------------------------------------------------------------------

class GGS_semanticInstructionListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_semanticInstructionListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public: GGS_semanticInstructionListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_semanticInstructionForGeneration & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_semanticInstructionListForGeneration init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_semanticInstructionListForGeneration extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_semanticInstructionListForGeneration class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_semanticInstructionListForGeneration class_func_listWithValue (const class GGS_semanticInstructionForGeneration & inOperand0
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_semanticInstructionListForGeneration inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_semanticInstructionForGeneration & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_semanticInstructionListForGeneration add_operation (const GGS_semanticInstructionListForGeneration & inOperand,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_semanticInstructionForGeneration constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_semanticInstructionForGeneration constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_semanticInstructionForGeneration & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_semanticInstructionForGeneration & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_semanticInstructionForGeneration & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GGS_semanticInstructionForGeneration constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_semanticInstructionForGeneration & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_semanticInstructionForGeneration & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_semanticInstructionForGeneration getter_mInstructionAtIndex (const class GGS_uint & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_semanticInstructionListForGeneration getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_semanticInstructionListForGeneration getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_semanticInstructionListForGeneration getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_semanticInstructionListForGeneration_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_semanticInstructionListForGeneration ;
  friend class UpEnumerator_semanticInstructionListForGeneration ;
  friend class DownEnumerator_semanticInstructionListForGeneration ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticInstructionListForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticInstructionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_semanticInstructionForGeneration : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_semanticInstructionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_semanticInstructionForGeneration (const class cPtr_semanticInstructionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_semanticInstructionForGeneration init (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_semanticInstructionForGeneration extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_semanticInstructionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticInstructionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @semanticInstructionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_semanticInstructionForGeneration : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void semanticInstructionForGeneration_init (Compiler * inCompiler) ;


//--- Extension getter compareInstructionSyntaxSignature
  public: virtual class GGS_bool getter_compareInstructionSyntaxSignature (const class GGS_semanticInstructionForGeneration inTestedInstruction,
           Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension method appendSyntaxSignature
  public: virtual void method_appendSyntaxSignature (const class GGS_string arg_inPosfix,
           class GGS_semanticInstructionListForGeneration & arg_ioInstructionListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method generateInstruction
  public: virtual void method_generateInstruction (class GGS_stringset & arg_ioInclusionSet,
           class GGS_uint & arg_ioTemporaryVariableIndex,
           class GGS_stringset & arg_ioUnusedVariableCppNameSet,
           const class GGS_bool arg_inGenerateSyntaxDirectedTranslationString,
           class GGS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_semanticInstructionForGeneration (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticInstructionListForGeneration_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_semanticInstructionListForGeneration_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_semanticInstructionForGeneration mProperty_mInstruction ;
  public: inline GGS_semanticInstructionForGeneration readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_semanticInstructionListForGeneration_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GGS_semanticInstructionForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_semanticInstructionListForGeneration_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_semanticInstructionListForGeneration_2E_element (const GGS_semanticInstructionForGeneration & in_mInstruction) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_semanticInstructionListForGeneration_2E_element init_21_ (const class GGS_semanticInstructionForGeneration & inOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_semanticInstructionListForGeneration_2E_element extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_semanticInstructionListForGeneration_2E_element class_func_new (const class GGS_semanticInstructionForGeneration & inOperand0,
                                                                                           class Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticInstructionListForGeneration_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionMethodAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_extensionMethodAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_extensionMethodAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_extensionMethodAST (const class cPtr_extensionMethodAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_requiresSelfForAccessingProperty (void) const ;

  public: class GGS_lstring readProperty_mTypeName (void) const ;

  public: class GGS_lstring readProperty_mExtensionMethodName (void) const ;

  public: class GGS_formalParameterListAST readProperty_mExtensionMethodFormalParameterList (void) const ;

  public: class GGS_semanticInstructionListAST readProperty_mExtensionMethodInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOfMethodLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionMethodAST init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                      const class GGS_bool & inOperand1,
                                                                                                                      const class GGS_lstring & inOperand2,
                                                                                                                      const class GGS_lstring & inOperand3,
                                                                                                                      const class GGS_formalParameterListAST & inOperand4,
                                                                                                                      const class GGS_semanticInstructionListAST & inOperand5,
                                                                                                                      const class GGS_location & inOperand6,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionMethodAST extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extensionMethodAST class_func_new (const class GGS_bool & inOperand0,
                                                              const class GGS_bool & inOperand1,
                                                              const class GGS_lstring & inOperand2,
                                                              const class GGS_lstring & inOperand3,
                                                              const class GGS_formalParameterListAST & inOperand4,
                                                              const class GGS_semanticInstructionListAST & inOperand5,
                                                              const class GGS_location & inOperand6,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_extensionMethodAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @extensionMethodAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_extensionMethodAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void extensionMethodAST_init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                const class GGS_bool & inOperand1,
                                                                                                                const class GGS_lstring & inOperand2,
                                                                                                                const class GGS_lstring & inOperand3,
                                                                                                                const class GGS_formalParameterListAST & inOperand4,
                                                                                                                const class GGS_semanticInstructionListAST & inOperand5,
                                                                                                                const class GGS_location & inOperand6,
                                                                                                                Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildExtensionListMaps
  public: virtual void method_buildExtensionListMaps (class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionMethodListMapAST,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionGetterListMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GGS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           class GGS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GGS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GGS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GGS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GGS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           const class GGS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GGS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GGS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GGS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GGS_lstringlist & arg_ioUsefulnessRootEntities,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_string arg_inProductDirectory,
           const class GGS_semanticContext arg_inSemanticContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_predefinedTypes arg_inPredefinedTypes,
           class GGS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_requiresSelfForAccessingProperty ;
  public: GGS_lstring mProperty_mTypeName ;
  public: GGS_lstring mProperty_mExtensionMethodName ;
  public: GGS_formalParameterListAST mProperty_mExtensionMethodFormalParameterList ;
  public: GGS_semanticInstructionListAST mProperty_mExtensionMethodInstructionList ;
  public: GGS_location mProperty_mEndOfMethodLocation ;


//--- Default constructor
  public: cPtr_extensionMethodAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_extensionMethodAST (const GGS_bool & in_isPredefined,
                                   const GGS_bool & in_requiresSelfForAccessingProperty,
                                   const GGS_lstring & in_mTypeName,
                                   const GGS_lstring & in_mExtensionMethodName,
                                   const GGS_formalParameterListAST & in_mExtensionMethodFormalParameterList,
                                   const GGS_semanticInstructionListAST & in_mExtensionMethodInstructionList,
                                   const GGS_location & in_mEndOfMethodLocation,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionMethodAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_extensionMethodAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_extensionMethodAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_extensionMethodAST_2E_weak (const class GGS_extensionMethodAST & inSource) ;

  public: GGS_extensionMethodAST_2E_weak & operator = (const class GGS_extensionMethodAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_extensionMethodAST_2E_weak init_nil (void) {
    GGS_extensionMethodAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_extensionMethodAST bang_extensionMethodAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_extensionMethodAST unwrappedValue (void) const {
    GGS_extensionMethodAST result ;
    if (isValid ()) {
      const cPtr_extensionMethodAST * p = (cPtr_extensionMethodAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_extensionMethodAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionMethodAST_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extensionMethodAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_extensionMethodAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionSetterAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_extensionSetterAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_extensionSetterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_extensionSetterAST (const class cPtr_extensionSetterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_requiresSelfForAccessingProperty (void) const ;

  public: class GGS_lstring readProperty_mTypeName (void) const ;

  public: class GGS_lstring readProperty_mExtensionSetterName (void) const ;

  public: class GGS_formalParameterListAST readProperty_mExtensionSetterFormalParameterList (void) const ;

  public: class GGS_semanticInstructionListAST readProperty_mExtensionSetterInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOfSetterDeclarationLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extensionSetterAST init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                      const class GGS_bool & inOperand1,
                                                                                                                      const class GGS_lstring & inOperand2,
                                                                                                                      const class GGS_lstring & inOperand3,
                                                                                                                      const class GGS_formalParameterListAST & inOperand4,
                                                                                                                      const class GGS_semanticInstructionListAST & inOperand5,
                                                                                                                      const class GGS_location & inOperand6,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionSetterAST extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extensionSetterAST class_func_new (const class GGS_bool & inOperand0,
                                                              const class GGS_bool & inOperand1,
                                                              const class GGS_lstring & inOperand2,
                                                              const class GGS_lstring & inOperand3,
                                                              const class GGS_formalParameterListAST & inOperand4,
                                                              const class GGS_semanticInstructionListAST & inOperand5,
                                                              const class GGS_location & inOperand6,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_extensionSetterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionSetterAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @extensionSetterAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_extensionSetterAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void extensionSetterAST_init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                const class GGS_bool & inOperand1,
                                                                                                                const class GGS_lstring & inOperand2,
                                                                                                                const class GGS_lstring & inOperand3,
                                                                                                                const class GGS_formalParameterListAST & inOperand4,
                                                                                                                const class GGS_semanticInstructionListAST & inOperand5,
                                                                                                                const class GGS_location & inOperand6,
                                                                                                                Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildExtensionListMaps
  public: virtual void method_buildExtensionListMaps (class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionMethodListMapAST,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionGetterListMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GGS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           class GGS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GGS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GGS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GGS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GGS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           const class GGS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GGS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GGS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GGS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GGS_lstringlist & arg_ioUsefulnessRootEntities,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_string arg_inProductDirectory,
           const class GGS_semanticContext arg_inSemanticContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_predefinedTypes arg_inPredefinedTypes,
           class GGS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_requiresSelfForAccessingProperty ;
  public: GGS_lstring mProperty_mTypeName ;
  public: GGS_lstring mProperty_mExtensionSetterName ;
  public: GGS_formalParameterListAST mProperty_mExtensionSetterFormalParameterList ;
  public: GGS_semanticInstructionListAST mProperty_mExtensionSetterInstructionList ;
  public: GGS_location mProperty_mEndOfSetterDeclarationLocation ;


//--- Default constructor
  public: cPtr_extensionSetterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_extensionSetterAST (const GGS_bool & in_isPredefined,
                                   const GGS_bool & in_requiresSelfForAccessingProperty,
                                   const GGS_lstring & in_mTypeName,
                                   const GGS_lstring & in_mExtensionSetterName,
                                   const GGS_formalParameterListAST & in_mExtensionSetterFormalParameterList,
                                   const GGS_semanticInstructionListAST & in_mExtensionSetterInstructionList,
                                   const GGS_location & in_mEndOfSetterDeclarationLocation,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extensionSetterAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_extensionSetterAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_extensionSetterAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_extensionSetterAST_2E_weak (const class GGS_extensionSetterAST & inSource) ;

  public: GGS_extensionSetterAST_2E_weak & operator = (const class GGS_extensionSetterAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_extensionSetterAST_2E_weak init_nil (void) {
    GGS_extensionSetterAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_extensionSetterAST bang_extensionSetterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_extensionSetterAST unwrappedValue (void) const {
    GGS_extensionSetterAST result ;
    if (isValid ()) {
      const cPtr_extensionSetterAST * p = (cPtr_extensionSetterAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_extensionSetterAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extensionSetterAST_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extensionSetterAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_extensionSetterAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionSetterAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @initializerAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_initializerAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_initializerAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_initializerAST (const class cPtr_initializerAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTypeName (void) const ;

  public: class GGS_formalInputParameterListAST readProperty_mFormalParameterList (void) const ;

  public: class GGS_semanticInstructionListAST readProperty_mInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOfInitializerLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_initializerAST init_21_isPredefined_21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                          const class GGS_lstring & inOperand1,
                                                                          const class GGS_formalInputParameterListAST & inOperand2,
                                                                          const class GGS_semanticInstructionListAST & inOperand3,
                                                                          const class GGS_location & inOperand4,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_initializerAST extractObject (const GGS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_initializerAST class_func_new (const class GGS_bool & inOperand0,
                                                          const class GGS_lstring & inOperand1,
                                                          const class GGS_formalInputParameterListAST & inOperand2,
                                                          const class GGS_semanticInstructionListAST & inOperand3,
                                                          const class GGS_location & inOperand4,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_initializerAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_initializerAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @initializerAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_initializerAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void initializerAST_init_21_isPredefined_21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                    const class GGS_lstring & inOperand1,
                                                                    const class GGS_formalInputParameterListAST & inOperand2,
                                                                    const class GGS_semanticInstructionListAST & inOperand3,
                                                                    const class GGS_location & inOperand4,
                                                                    Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GGS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           class GGS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GGS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GGS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GGS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GGS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           const class GGS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GGS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GGS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GGS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GGS_lstringlist & arg_ioUsefulnessRootEntities,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_string arg_inProductDirectory,
           const class GGS_semanticContext arg_inSemanticContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_predefinedTypes arg_inPredefinedTypes,
           class GGS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTypeName ;
  public: GGS_formalInputParameterListAST mProperty_mFormalParameterList ;
  public: GGS_semanticInstructionListAST mProperty_mInstructionList ;
  public: GGS_location mProperty_mEndOfInitializerLocation ;


//--- Default constructor
  public: cPtr_initializerAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_initializerAST (const GGS_bool & in_isPredefined,
                               const GGS_lstring & in_mTypeName,
                               const GGS_formalInputParameterListAST & in_mFormalParameterList,
                               const GGS_semanticInstructionListAST & in_mInstructionList,
                               const GGS_location & in_mEndOfInitializerLocation,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @initializerAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_initializerAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_initializerAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_initializerAST_2E_weak (const class GGS_initializerAST & inSource) ;

  public: GGS_initializerAST_2E_weak & operator = (const class GGS_initializerAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_initializerAST_2E_weak init_nil (void) {
    GGS_initializerAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_initializerAST bang_initializerAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_initializerAST unwrappedValue (void) const {
    GGS_initializerAST result ;
    if (isValid ()) {
      const cPtr_initializerAST * p = (cPtr_initializerAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_initializerAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_initializerAST_2E_weak extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_initializerAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_initializerAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_initializerAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @overridingAbstractExtensionGetterAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_overridingAbstractExtensionGetterAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_overridingAbstractExtensionGetterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_overridingAbstractExtensionGetterAST (const class cPtr_overridingAbstractExtensionGetterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTypeName (void) const ;

  public: class GGS_lstring readProperty_mAbstractExtensionGetterName (void) const ;

  public: class GGS_formalInputParameterListAST readProperty_mAbstractExtensionGetterFormalInputParameterList (void) const ;

  public: class GGS_lstring readProperty_mAbstractExtensionGetterReturnedTypeName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_overridingAbstractExtensionGetterAST init_21_isPredefined_21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                const class GGS_lstring & inOperand1,
                                                                                                const class GGS_lstring & inOperand2,
                                                                                                const class GGS_formalInputParameterListAST & inOperand3,
                                                                                                const class GGS_lstring & inOperand4,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_overridingAbstractExtensionGetterAST extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_overridingAbstractExtensionGetterAST class_func_new (const class GGS_bool & inOperand0,
                                                                                const class GGS_lstring & inOperand1,
                                                                                const class GGS_lstring & inOperand2,
                                                                                const class GGS_formalInputParameterListAST & inOperand3,
                                                                                const class GGS_lstring & inOperand4,
                                                                                class Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_overridingAbstractExtensionGetterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingAbstractExtensionGetterAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @overridingAbstractExtensionGetterAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_overridingAbstractExtensionGetterAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void overridingAbstractExtensionGetterAST_init_21_isPredefined_21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                          const class GGS_lstring & inOperand1,
                                                                                          const class GGS_lstring & inOperand2,
                                                                                          const class GGS_formalInputParameterListAST & inOperand3,
                                                                                          const class GGS_lstring & inOperand4,
                                                                                          Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildExtensionListMaps
  public: virtual void method_buildExtensionListMaps (class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionMethodListMapAST,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionGetterListMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GGS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           class GGS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GGS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GGS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GGS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GGS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           const class GGS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GGS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GGS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GGS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GGS_lstringlist & arg_ioUsefulnessRootEntities,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_string arg_inProductDirectory,
           const class GGS_semanticContext arg_inSemanticContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_predefinedTypes arg_inPredefinedTypes,
           class GGS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTypeName ;
  public: GGS_lstring mProperty_mAbstractExtensionGetterName ;
  public: GGS_formalInputParameterListAST mProperty_mAbstractExtensionGetterFormalInputParameterList ;
  public: GGS_lstring mProperty_mAbstractExtensionGetterReturnedTypeName ;


//--- Default constructor
  public: cPtr_overridingAbstractExtensionGetterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_overridingAbstractExtensionGetterAST (const GGS_bool & in_isPredefined,
                                                     const GGS_lstring & in_mTypeName,
                                                     const GGS_lstring & in_mAbstractExtensionGetterName,
                                                     const GGS_formalInputParameterListAST & in_mAbstractExtensionGetterFormalInputParameterList,
                                                     const GGS_lstring & in_mAbstractExtensionGetterReturnedTypeName,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @overridingAbstractExtensionGetterAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_overridingAbstractExtensionGetterAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_overridingAbstractExtensionGetterAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_overridingAbstractExtensionGetterAST_2E_weak (const class GGS_overridingAbstractExtensionGetterAST & inSource) ;

  public: GGS_overridingAbstractExtensionGetterAST_2E_weak & operator = (const class GGS_overridingAbstractExtensionGetterAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_overridingAbstractExtensionGetterAST_2E_weak init_nil (void) {
    GGS_overridingAbstractExtensionGetterAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_overridingAbstractExtensionGetterAST bang_overridingAbstractExtensionGetterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_overridingAbstractExtensionGetterAST unwrappedValue (void) const {
    GGS_overridingAbstractExtensionGetterAST result ;
    if (isValid ()) {
      const cPtr_overridingAbstractExtensionGetterAST * p = (cPtr_overridingAbstractExtensionGetterAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_overridingAbstractExtensionGetterAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_overridingAbstractExtensionGetterAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_overridingAbstractExtensionGetterAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_overridingAbstractExtensionGetterAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingAbstractExtensionGetterAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @overridingAbstractExtensionMethodAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_overridingAbstractExtensionMethodAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_overridingAbstractExtensionMethodAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_overridingAbstractExtensionMethodAST (const class cPtr_overridingAbstractExtensionMethodAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTypeName (void) const ;

  public: class GGS_lstring readProperty_mOverridingExtensionMethodName (void) const ;

  public: class GGS_formalParameterListAST readProperty_mOverridingExtensionMethodFormalParameterList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_overridingAbstractExtensionMethodAST init_21_isPredefined_21__21__21_ (const class GGS_bool & inOperand0,
                                                                                            const class GGS_lstring & inOperand1,
                                                                                            const class GGS_lstring & inOperand2,
                                                                                            const class GGS_formalParameterListAST & inOperand3,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_overridingAbstractExtensionMethodAST extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_overridingAbstractExtensionMethodAST class_func_new (const class GGS_bool & inOperand0,
                                                                                const class GGS_lstring & inOperand1,
                                                                                const class GGS_lstring & inOperand2,
                                                                                const class GGS_formalParameterListAST & inOperand3,
                                                                                class Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_overridingAbstractExtensionMethodAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingAbstractExtensionMethodAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @overridingAbstractExtensionMethodAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_overridingAbstractExtensionMethodAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void overridingAbstractExtensionMethodAST_init_21_isPredefined_21__21__21_ (const class GGS_bool & inOperand0,
                                                                                      const class GGS_lstring & inOperand1,
                                                                                      const class GGS_lstring & inOperand2,
                                                                                      const class GGS_formalParameterListAST & inOperand3,
                                                                                      Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildExtensionListMaps
  public: virtual void method_buildExtensionListMaps (class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionMethodListMapAST,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionGetterListMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GGS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           class GGS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GGS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GGS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GGS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GGS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           const class GGS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GGS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GGS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GGS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GGS_lstringlist & arg_ioUsefulnessRootEntities,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_string arg_inProductDirectory,
           const class GGS_semanticContext arg_inSemanticContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_predefinedTypes arg_inPredefinedTypes,
           class GGS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTypeName ;
  public: GGS_lstring mProperty_mOverridingExtensionMethodName ;
  public: GGS_formalParameterListAST mProperty_mOverridingExtensionMethodFormalParameterList ;


//--- Default constructor
  public: cPtr_overridingAbstractExtensionMethodAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_overridingAbstractExtensionMethodAST (const GGS_bool & in_isPredefined,
                                                     const GGS_lstring & in_mTypeName,
                                                     const GGS_lstring & in_mOverridingExtensionMethodName,
                                                     const GGS_formalParameterListAST & in_mOverridingExtensionMethodFormalParameterList,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @overridingAbstractExtensionMethodAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_overridingAbstractExtensionMethodAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_overridingAbstractExtensionMethodAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_overridingAbstractExtensionMethodAST_2E_weak (const class GGS_overridingAbstractExtensionMethodAST & inSource) ;

  public: GGS_overridingAbstractExtensionMethodAST_2E_weak & operator = (const class GGS_overridingAbstractExtensionMethodAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_overridingAbstractExtensionMethodAST_2E_weak init_nil (void) {
    GGS_overridingAbstractExtensionMethodAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_overridingAbstractExtensionMethodAST bang_overridingAbstractExtensionMethodAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_overridingAbstractExtensionMethodAST unwrappedValue (void) const {
    GGS_overridingAbstractExtensionMethodAST result ;
    if (isValid ()) {
      const cPtr_overridingAbstractExtensionMethodAST * p = (cPtr_overridingAbstractExtensionMethodAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_overridingAbstractExtensionMethodAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_overridingAbstractExtensionMethodAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_overridingAbstractExtensionMethodAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_overridingAbstractExtensionMethodAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingAbstractExtensionMethodAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @overridingAbstractExtensionSetterAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_overridingAbstractExtensionSetterAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_overridingAbstractExtensionSetterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_overridingAbstractExtensionSetterAST (const class cPtr_overridingAbstractExtensionSetterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTypeName (void) const ;

  public: class GGS_lstring readProperty_mOverridingExtensionSetterName (void) const ;

  public: class GGS_formalParameterListAST readProperty_mOverridingExtensionSetterFormalParameterList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_overridingAbstractExtensionSetterAST init_21_isPredefined_21__21__21_ (const class GGS_bool & inOperand0,
                                                                                            const class GGS_lstring & inOperand1,
                                                                                            const class GGS_lstring & inOperand2,
                                                                                            const class GGS_formalParameterListAST & inOperand3,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_overridingAbstractExtensionSetterAST extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_overridingAbstractExtensionSetterAST class_func_new (const class GGS_bool & inOperand0,
                                                                                const class GGS_lstring & inOperand1,
                                                                                const class GGS_lstring & inOperand2,
                                                                                const class GGS_formalParameterListAST & inOperand3,
                                                                                class Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_overridingAbstractExtensionSetterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingAbstractExtensionSetterAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @overridingAbstractExtensionSetterAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_overridingAbstractExtensionSetterAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void overridingAbstractExtensionSetterAST_init_21_isPredefined_21__21__21_ (const class GGS_bool & inOperand0,
                                                                                      const class GGS_lstring & inOperand1,
                                                                                      const class GGS_lstring & inOperand2,
                                                                                      const class GGS_formalParameterListAST & inOperand3,
                                                                                      Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildExtensionListMaps
  public: virtual void method_buildExtensionListMaps (class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionMethodListMapAST,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionGetterListMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GGS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           class GGS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GGS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GGS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GGS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GGS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           const class GGS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GGS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GGS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GGS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GGS_lstringlist & arg_ioUsefulnessRootEntities,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_string arg_inProductDirectory,
           const class GGS_semanticContext arg_inSemanticContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_predefinedTypes arg_inPredefinedTypes,
           class GGS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTypeName ;
  public: GGS_lstring mProperty_mOverridingExtensionSetterName ;
  public: GGS_formalParameterListAST mProperty_mOverridingExtensionSetterFormalParameterList ;


//--- Default constructor
  public: cPtr_overridingAbstractExtensionSetterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_overridingAbstractExtensionSetterAST (const GGS_bool & in_isPredefined,
                                                     const GGS_lstring & in_mTypeName,
                                                     const GGS_lstring & in_mOverridingExtensionSetterName,
                                                     const GGS_formalParameterListAST & in_mOverridingExtensionSetterFormalParameterList,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @overridingAbstractExtensionSetterAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_overridingAbstractExtensionSetterAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_overridingAbstractExtensionSetterAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_overridingAbstractExtensionSetterAST_2E_weak (const class GGS_overridingAbstractExtensionSetterAST & inSource) ;

  public: GGS_overridingAbstractExtensionSetterAST_2E_weak & operator = (const class GGS_overridingAbstractExtensionSetterAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_overridingAbstractExtensionSetterAST_2E_weak init_nil (void) {
    GGS_overridingAbstractExtensionSetterAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_overridingAbstractExtensionSetterAST bang_overridingAbstractExtensionSetterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_overridingAbstractExtensionSetterAST unwrappedValue (void) const {
    GGS_overridingAbstractExtensionSetterAST result ;
    if (isValid ()) {
      const cPtr_overridingAbstractExtensionSetterAST * p = (cPtr_overridingAbstractExtensionSetterAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_overridingAbstractExtensionSetterAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_overridingAbstractExtensionSetterAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_overridingAbstractExtensionSetterAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_overridingAbstractExtensionSetterAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingAbstractExtensionSetterAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @overridingExtensionGetterAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_overridingExtensionGetterAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_overridingExtensionGetterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_overridingExtensionGetterAST (const class cPtr_overridingExtensionGetterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_requiresSelfForAccessingProperty (void) const ;

  public: class GGS_lstring readProperty_mTypeName (void) const ;

  public: class GGS_lstring readProperty_mOverridingExtensionGetterName (void) const ;

  public: class GGS_formalInputParameterListAST readProperty_mOverridingExtensionGetterFormalInputParameterList (void) const ;

  public: class GGS_lstring readProperty_mOverridingExtensionGetterReturnedTypeName (void) const ;

  public: class GGS_lstring readProperty_mOverridingExtensionGetterReturnedVariableName (void) const ;

  public: class GGS_semanticInstructionListAST readProperty_mOverridingExtensionGetterInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOfReaderLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_overridingExtensionGetterAST init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                                        const class GGS_bool & inOperand1,
                                                                                                                                        const class GGS_lstring & inOperand2,
                                                                                                                                        const class GGS_lstring & inOperand3,
                                                                                                                                        const class GGS_formalInputParameterListAST & inOperand4,
                                                                                                                                        const class GGS_lstring & inOperand5,
                                                                                                                                        const class GGS_lstring & inOperand6,
                                                                                                                                        const class GGS_semanticInstructionListAST & inOperand7,
                                                                                                                                        const class GGS_location & inOperand8,
                                                                                                                                        Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_overridingExtensionGetterAST extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_overridingExtensionGetterAST class_func_new (const class GGS_bool & inOperand0,
                                                                        const class GGS_bool & inOperand1,
                                                                        const class GGS_lstring & inOperand2,
                                                                        const class GGS_lstring & inOperand3,
                                                                        const class GGS_formalInputParameterListAST & inOperand4,
                                                                        const class GGS_lstring & inOperand5,
                                                                        const class GGS_lstring & inOperand6,
                                                                        const class GGS_semanticInstructionListAST & inOperand7,
                                                                        const class GGS_location & inOperand8,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_overridingExtensionGetterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingExtensionGetterAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @overridingExtensionGetterAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_overridingExtensionGetterAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void overridingExtensionGetterAST_init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                                  const class GGS_bool & inOperand1,
                                                                                                                                  const class GGS_lstring & inOperand2,
                                                                                                                                  const class GGS_lstring & inOperand3,
                                                                                                                                  const class GGS_formalInputParameterListAST & inOperand4,
                                                                                                                                  const class GGS_lstring & inOperand5,
                                                                                                                                  const class GGS_lstring & inOperand6,
                                                                                                                                  const class GGS_semanticInstructionListAST & inOperand7,
                                                                                                                                  const class GGS_location & inOperand8,
                                                                                                                                  Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildExtensionListMaps
  public: virtual void method_buildExtensionListMaps (class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionMethodListMapAST,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionGetterListMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GGS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           class GGS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GGS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GGS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GGS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GGS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           const class GGS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GGS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GGS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GGS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GGS_lstringlist & arg_ioUsefulnessRootEntities,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_string arg_inProductDirectory,
           const class GGS_semanticContext arg_inSemanticContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_predefinedTypes arg_inPredefinedTypes,
           class GGS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_requiresSelfForAccessingProperty ;
  public: GGS_lstring mProperty_mTypeName ;
  public: GGS_lstring mProperty_mOverridingExtensionGetterName ;
  public: GGS_formalInputParameterListAST mProperty_mOverridingExtensionGetterFormalInputParameterList ;
  public: GGS_lstring mProperty_mOverridingExtensionGetterReturnedTypeName ;
  public: GGS_lstring mProperty_mOverridingExtensionGetterReturnedVariableName ;
  public: GGS_semanticInstructionListAST mProperty_mOverridingExtensionGetterInstructionList ;
  public: GGS_location mProperty_mEndOfReaderLocation ;


//--- Default constructor
  public: cPtr_overridingExtensionGetterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_overridingExtensionGetterAST (const GGS_bool & in_isPredefined,
                                             const GGS_bool & in_requiresSelfForAccessingProperty,
                                             const GGS_lstring & in_mTypeName,
                                             const GGS_lstring & in_mOverridingExtensionGetterName,
                                             const GGS_formalInputParameterListAST & in_mOverridingExtensionGetterFormalInputParameterList,
                                             const GGS_lstring & in_mOverridingExtensionGetterReturnedTypeName,
                                             const GGS_lstring & in_mOverridingExtensionGetterReturnedVariableName,
                                             const GGS_semanticInstructionListAST & in_mOverridingExtensionGetterInstructionList,
                                             const GGS_location & in_mEndOfReaderLocation,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @overridingExtensionGetterAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_overridingExtensionGetterAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_overridingExtensionGetterAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_overridingExtensionGetterAST_2E_weak (const class GGS_overridingExtensionGetterAST & inSource) ;

  public: GGS_overridingExtensionGetterAST_2E_weak & operator = (const class GGS_overridingExtensionGetterAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_overridingExtensionGetterAST_2E_weak init_nil (void) {
    GGS_overridingExtensionGetterAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_overridingExtensionGetterAST bang_overridingExtensionGetterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_overridingExtensionGetterAST unwrappedValue (void) const {
    GGS_overridingExtensionGetterAST result ;
    if (isValid ()) {
      const cPtr_overridingExtensionGetterAST * p = (cPtr_overridingExtensionGetterAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_overridingExtensionGetterAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_overridingExtensionGetterAST_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_overridingExtensionGetterAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_overridingExtensionGetterAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingExtensionGetterAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @overridingExtensionMethodAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_overridingExtensionMethodAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_overridingExtensionMethodAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_overridingExtensionMethodAST (const class cPtr_overridingExtensionMethodAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_requiresSelfForAccessingProperty (void) const ;

  public: class GGS_lstring readProperty_mTypeName (void) const ;

  public: class GGS_lstring readProperty_mOverridingExtensionMethodName (void) const ;

  public: class GGS_formalParameterListAST readProperty_mOverridingExtensionMethodFormalParameterList (void) const ;

  public: class GGS_semanticInstructionListAST readProperty_mOverridingExtensionMethodInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOfMethodLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_overridingExtensionMethodAST init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                                const class GGS_bool & inOperand1,
                                                                                                                                const class GGS_lstring & inOperand2,
                                                                                                                                const class GGS_lstring & inOperand3,
                                                                                                                                const class GGS_formalParameterListAST & inOperand4,
                                                                                                                                const class GGS_semanticInstructionListAST & inOperand5,
                                                                                                                                const class GGS_location & inOperand6,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_overridingExtensionMethodAST extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_overridingExtensionMethodAST class_func_new (const class GGS_bool & inOperand0,
                                                                        const class GGS_bool & inOperand1,
                                                                        const class GGS_lstring & inOperand2,
                                                                        const class GGS_lstring & inOperand3,
                                                                        const class GGS_formalParameterListAST & inOperand4,
                                                                        const class GGS_semanticInstructionListAST & inOperand5,
                                                                        const class GGS_location & inOperand6,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_overridingExtensionMethodAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingExtensionMethodAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @overridingExtensionMethodAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_overridingExtensionMethodAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void overridingExtensionMethodAST_init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                          const class GGS_bool & inOperand1,
                                                                                                                          const class GGS_lstring & inOperand2,
                                                                                                                          const class GGS_lstring & inOperand3,
                                                                                                                          const class GGS_formalParameterListAST & inOperand4,
                                                                                                                          const class GGS_semanticInstructionListAST & inOperand5,
                                                                                                                          const class GGS_location & inOperand6,
                                                                                                                          Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildExtensionListMaps
  public: virtual void method_buildExtensionListMaps (class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionMethodListMapAST,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionGetterListMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GGS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           class GGS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GGS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GGS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GGS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GGS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           const class GGS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GGS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GGS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GGS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GGS_lstringlist & arg_ioUsefulnessRootEntities,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_string arg_inProductDirectory,
           const class GGS_semanticContext arg_inSemanticContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_predefinedTypes arg_inPredefinedTypes,
           class GGS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_requiresSelfForAccessingProperty ;
  public: GGS_lstring mProperty_mTypeName ;
  public: GGS_lstring mProperty_mOverridingExtensionMethodName ;
  public: GGS_formalParameterListAST mProperty_mOverridingExtensionMethodFormalParameterList ;
  public: GGS_semanticInstructionListAST mProperty_mOverridingExtensionMethodInstructionList ;
  public: GGS_location mProperty_mEndOfMethodLocation ;


//--- Default constructor
  public: cPtr_overridingExtensionMethodAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_overridingExtensionMethodAST (const GGS_bool & in_isPredefined,
                                             const GGS_bool & in_requiresSelfForAccessingProperty,
                                             const GGS_lstring & in_mTypeName,
                                             const GGS_lstring & in_mOverridingExtensionMethodName,
                                             const GGS_formalParameterListAST & in_mOverridingExtensionMethodFormalParameterList,
                                             const GGS_semanticInstructionListAST & in_mOverridingExtensionMethodInstructionList,
                                             const GGS_location & in_mEndOfMethodLocation,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @overridingExtensionMethodAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_overridingExtensionMethodAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_overridingExtensionMethodAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_overridingExtensionMethodAST_2E_weak (const class GGS_overridingExtensionMethodAST & inSource) ;

  public: GGS_overridingExtensionMethodAST_2E_weak & operator = (const class GGS_overridingExtensionMethodAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_overridingExtensionMethodAST_2E_weak init_nil (void) {
    GGS_overridingExtensionMethodAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_overridingExtensionMethodAST bang_overridingExtensionMethodAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_overridingExtensionMethodAST unwrappedValue (void) const {
    GGS_overridingExtensionMethodAST result ;
    if (isValid ()) {
      const cPtr_overridingExtensionMethodAST * p = (cPtr_overridingExtensionMethodAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_overridingExtensionMethodAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_overridingExtensionMethodAST_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_overridingExtensionMethodAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_overridingExtensionMethodAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingExtensionMethodAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @overridingExtensionSetterAST reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_overridingExtensionSetterAST : public GGS_semanticDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_overridingExtensionSetterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_overridingExtensionSetterAST (const class cPtr_overridingExtensionSetterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_requiresSelfForAccessingProperty (void) const ;

  public: class GGS_lstring readProperty_mTypeName (void) const ;

  public: class GGS_lstring readProperty_mOverridingExtensionSetterName (void) const ;

  public: class GGS_formalParameterListAST readProperty_mOverridingExtensionSetterFormalParameterList (void) const ;

  public: class GGS_semanticInstructionListAST readProperty_mOverridingExtensionSetterInstructionList (void) const ;

  public: class GGS_location readProperty_mEndOfSetterDeclarationLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_overridingExtensionSetterAST init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                                const class GGS_bool & inOperand1,
                                                                                                                                const class GGS_lstring & inOperand2,
                                                                                                                                const class GGS_lstring & inOperand3,
                                                                                                                                const class GGS_formalParameterListAST & inOperand4,
                                                                                                                                const class GGS_semanticInstructionListAST & inOperand5,
                                                                                                                                const class GGS_location & inOperand6,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_overridingExtensionSetterAST extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_overridingExtensionSetterAST class_func_new (const class GGS_bool & inOperand0,
                                                                        const class GGS_bool & inOperand1,
                                                                        const class GGS_lstring & inOperand2,
                                                                        const class GGS_lstring & inOperand3,
                                                                        const class GGS_formalParameterListAST & inOperand4,
                                                                        const class GGS_semanticInstructionListAST & inOperand5,
                                                                        const class GGS_location & inOperand6,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_overridingExtensionSetterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingExtensionSetterAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @overridingExtensionSetterAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_overridingExtensionSetterAST : public cPtr_semanticDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void overridingExtensionSetterAST_init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21_ (const class GGS_bool & inOperand0,
                                                                                                                          const class GGS_bool & inOperand1,
                                                                                                                          const class GGS_lstring & inOperand2,
                                                                                                                          const class GGS_lstring & inOperand3,
                                                                                                                          const class GGS_formalParameterListAST & inOperand4,
                                                                                                                          const class GGS_semanticInstructionListAST & inOperand5,
                                                                                                                          const class GGS_location & inOperand6,
                                                                                                                          Compiler * inCompiler) ;


//--- Extension getter keyRepresentation
  public: virtual class GGS_string getter_keyRepresentation (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method buildExtensionListMaps
  public: virtual void method_buildExtensionListMaps (class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionSetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionMethodListMapAST,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionMethodListMap,
           class GGS_genericExtensionMethodListMap & arg_ioAbstractExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingExtensionGetterListMap,
           class GGS_genericExtensionMethodListMap & arg_ioOverridingAbstractExtensionGetterListMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInGraph
  public: virtual void method_enterDeclarationInGraph (class GGS_semanticTypePrecedenceGraph & arg_ioSemanticTypePrecedenceGraph,
           class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           class GGS_extensionInitializerForBuildingContext & arg_ioExtensionInitializerForBuildingContext,
           class GGS_extensionMethodMapForBuildingContext & arg_ioExtensionMethodMapForBuildingContext,
           class GGS_extensionGetterMapForBuildingContext & arg_ioExtensionGetterMapForBuildingContext,
           class GGS_extensionSetterMapForBuildingContext & arg_ioExtensionSetterMapForBuildingContext,
           class GGS_semanticDeclarationListAST & arg_ioExtensionOverrideDefinitionList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterDeclarationInSemanticContext
  public: virtual void method_enterDeclarationInSemanticContext (class GGS_equatableExtensionMap & arg_ioEquatableExtensionMap,
           const class GGS_extensionInitializerForBuildingContext arg_inExtensionInitializerMapForBuildingContext,
           const class GGS_extensionMethodMapForBuildingContext arg_inExtensionMethodMapForBuildingContext,
           const class GGS_extensionGetterMapForBuildingContext arg_inExtensionGetterMapForBuildingContext,
           const class GGS_extensionSetterMapForBuildingContext arg_inExtensionSetterMapForBuildingContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           class GGS_semanticContext & arg_ioSemanticContext,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (class GGS_lstringlist & arg_ioUsefulnessRootEntities,
           class GGS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GGS_string arg_inProductDirectory,
           const class GGS_semanticContext arg_inSemanticContext,
           class GGS_unifiedTypeMap & arg_ioTypeMap,
           const class GGS_predefinedTypes arg_inPredefinedTypes,
           class GGS_semanticDeclarationListForGeneration & arg_ioSemanticDeclarationListForGeneration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_requiresSelfForAccessingProperty ;
  public: GGS_lstring mProperty_mTypeName ;
  public: GGS_lstring mProperty_mOverridingExtensionSetterName ;
  public: GGS_formalParameterListAST mProperty_mOverridingExtensionSetterFormalParameterList ;
  public: GGS_semanticInstructionListAST mProperty_mOverridingExtensionSetterInstructionList ;
  public: GGS_location mProperty_mEndOfSetterDeclarationLocation ;


//--- Default constructor
  public: cPtr_overridingExtensionSetterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_overridingExtensionSetterAST (const GGS_bool & in_isPredefined,
                                             const GGS_bool & in_requiresSelfForAccessingProperty,
                                             const GGS_lstring & in_mTypeName,
                                             const GGS_lstring & in_mOverridingExtensionSetterName,
                                             const GGS_formalParameterListAST & in_mOverridingExtensionSetterFormalParameterList,
                                             const GGS_semanticInstructionListAST & in_mOverridingExtensionSetterInstructionList,
                                             const GGS_location & in_mEndOfSetterDeclarationLocation,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @overridingExtensionSetterAST_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_overridingExtensionSetterAST_2E_weak : public GGS_semanticDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_overridingExtensionSetterAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_overridingExtensionSetterAST_2E_weak (const class GGS_overridingExtensionSetterAST & inSource) ;

  public: GGS_overridingExtensionSetterAST_2E_weak & operator = (const class GGS_overridingExtensionSetterAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_overridingExtensionSetterAST_2E_weak init_nil (void) {
    GGS_overridingExtensionSetterAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_overridingExtensionSetterAST bang_overridingExtensionSetterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_overridingExtensionSetterAST unwrappedValue (void) const {
    GGS_overridingExtensionSetterAST result ;
    if (isValid ()) {
      const cPtr_overridingExtensionSetterAST * p = (cPtr_overridingExtensionSetterAST *) ptr () ;
      if (nullptr != p) {
        result = GGS_overridingExtensionSetterAST (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_overridingExtensionSetterAST_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_overridingExtensionSetterAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_overridingExtensionSetterAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingExtensionSetterAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum typeKindEnum
//--------------------------------------------------------------------------------------------------

class GGS_typeKindEnum : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_typeKindEnum (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_classType,
    enum_weakReferenceType,
    enum_enumType,
    enum_listType,
    enum_sortedListType,
    enum_mapType,
    enum_sharedMapType,
    enum_sharedMapEntryType,
    enum_listMapType,
    enum_boolsetType,
    enum_structType,
    enum_graphType,
    enum_externType,
    enum_otherType,
    enum_packageType
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_classType (class GGS_bool & out_isReference) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_weakReferenceType (class GGS_unifiedTypeMapEntry & out_referenceType) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_enumType (class GGS_constantIndexMap & out_constantMap) const ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
    mAssociatedValues.drop () ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeKindEnum extractObject (const GGS_object & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typeKindEnum class_func_boolsetType (LOCATION_ARGS) ;

  public: static class GGS_typeKindEnum class_func_classType (const class GGS_bool & inOperand0
                                                              COMMA_LOCATION_ARGS) ;

  public: static class GGS_typeKindEnum class_func_enumType (const class GGS_constantIndexMap & inOperand0
                                                             COMMA_LOCATION_ARGS) ;

  public: static class GGS_typeKindEnum class_func_externType (LOCATION_ARGS) ;

  public: static class GGS_typeKindEnum class_func_graphType (LOCATION_ARGS) ;

  public: static class GGS_typeKindEnum class_func_listMapType (LOCATION_ARGS) ;

  public: static class GGS_typeKindEnum class_func_listType (LOCATION_ARGS) ;

  public: static class GGS_typeKindEnum class_func_mapType (LOCATION_ARGS) ;

  public: static class GGS_typeKindEnum class_func_otherType (LOCATION_ARGS) ;

  public: static class GGS_typeKindEnum class_func_packageType (LOCATION_ARGS) ;

  public: static class GGS_typeKindEnum class_func_sharedMapEntryType (LOCATION_ARGS) ;

  public: static class GGS_typeKindEnum class_func_sharedMapType (LOCATION_ARGS) ;

  public: static class GGS_typeKindEnum class_func_sortedListType (LOCATION_ARGS) ;

  public: static class GGS_typeKindEnum class_func_structType (LOCATION_ARGS) ;

  public: static class GGS_typeKindEnum class_func_weakReferenceType (const class GGS_unifiedTypeMapEntry & inOperand0
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKindEnum & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractClassType (class GGS_bool & outArgument0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractEnumType (class GGS_constantIndexMap & outArgument0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractWeakReferenceType (class GGS_unifiedTypeMapEntry & outArgument0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_typeKindEnum_2E_classType_3F_ getter_getClassType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_typeKindEnum_2E_enumType_3F_ getter_getEnumType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_typeKindEnum_2E_weakReferenceType_3F_ getter_getWeakReferenceType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isBoolsetType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isClassType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isEnumType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isExternType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isGraphType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isListMapType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isListType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isMapType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isOtherType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isPackageType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSharedMapEntryType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSharedMapType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSortedListType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isStructType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isWeakReferenceType (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKindEnum ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @typeKindEnum_2E_classType struct
//
//--------------------------------------------------------------------------------------------------

class GGS_typeKindEnum_2E_classType : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_bool mProperty_isReference ;
  public: inline GGS_bool readProperty_isReference (void) const {
    return mProperty_isReference ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_typeKindEnum_2E_classType (void) ;

//--------------------------------- Property setters
  public: inline void setter_setIsReference (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isReference = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_typeKindEnum_2E_classType (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typeKindEnum_2E_classType (const GGS_bool & in_isReference) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeKindEnum_2E_classType init_21_ (const class GGS_bool & inOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeKindEnum_2E_classType extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typeKindEnum_2E_classType class_func_new (const class GGS_bool & inOperand0,
                                                                     class Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKindEnum_2E_classType & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKindEnum_2E_classType ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: typeKindEnum.classType? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_typeKindEnum_2E_classType_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_typeKindEnum_2E_classType mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_typeKindEnum_2E_classType_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_typeKindEnum_2E_classType_3F_ (const GGS_typeKindEnum_2E_classType & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_typeKindEnum_2E_classType_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_typeKindEnum_2E_classType unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeKindEnum_2E_classType_3F_ extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKindEnum_2E_classType_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKindEnum_2E_classType_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @constantIndexMap map enumerator
//--------------------------------------------------------------------------------------------------

class cEnumerator_constantIndexMap final : public cGenericAbstractEnumerator {
  public: cEnumerator_constantIndexMap (const class GGS_constantIndexMap & inEnumeratedObject,
                                        const EnumerationOrder inOrder) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mIndex (LOCATION_ARGS) const ;
  public: class GGS_associatedValueDescriptorList current_mAssociatedTypeList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_constantIndexMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_constantIndexMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_constantIndexMap (const class GGS_constantIndexMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mIndex (LOCATION_ARGS) const ;
  public: class GGS_associatedValueDescriptorList current_mAssociatedTypeList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_constantIndexMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_constantIndexMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_constantIndexMap (const class GGS_constantIndexMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mIndex (LOCATION_ARGS) const ;
  public: class GGS_associatedValueDescriptorList current_mAssociatedTypeList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_constantIndexMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @constantIndexMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_constantIndexMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_constantIndexMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_constantIndexMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_constantIndexMap (void) ;

//--------------------------------- Handle copy
  public: GGS_constantIndexMap (const GGS_constantIndexMap & inSource) ;
  public: GGS_constantIndexMap & operator = (const GGS_constantIndexMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_constantIndexMap init (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_constantIndexMap extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_constantIndexMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_constantIndexMap class_func_mapWithMapToOverride (const class GGS_constantIndexMap & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_uint & inOperand1,
                                                     const class GGS_associatedValueDescriptorList & inOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_constantIndexMap add_operation (const GGS_constantIndexMap & inOperand,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  class GGS_associatedValueDescriptorList constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAssociatedTypeListForKey (class GGS_associatedValueDescriptorList constinArgument0,
                                                                     class GGS_string constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIndexForKey (class GGS_uint constinArgument0,
                                                        class GGS_string constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint & outArgument1,
                                                  class GGS_associatedValueDescriptorList & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_associatedValueDescriptorList getter_mAssociatedTypeListForKey (const class GGS_string & constinOperand0,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mIndexForKey (const class GGS_string & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_constantIndexMap getter_overriddenMap (Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_constantIndexMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_constantIndexMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                             const GGS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_constantIndexMap_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_constantIndexMap ;
  friend class UpEnumerator_constantIndexMap ;
  friend class DownEnumerator_constantIndexMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constantIndexMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @typeKindEnum_2E_enumType struct
//
//--------------------------------------------------------------------------------------------------

class GGS_typeKindEnum_2E_enumType : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_constantIndexMap mProperty_constantMap ;
  public: inline GGS_constantIndexMap readProperty_constantMap (void) const {
    return mProperty_constantMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_typeKindEnum_2E_enumType (void) ;

//--------------------------------- Property setters
  public: inline void setter_setConstantMap (const GGS_constantIndexMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_constantMap = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_typeKindEnum_2E_enumType (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typeKindEnum_2E_enumType (const GGS_constantIndexMap & in_constantMap) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeKindEnum_2E_enumType init_21_ (const class GGS_constantIndexMap & inOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeKindEnum_2E_enumType extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typeKindEnum_2E_enumType class_func_new (const class GGS_constantIndexMap & inOperand0,
                                                                    class Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKindEnum_2E_enumType & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKindEnum_2E_enumType ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: typeKindEnum.enumType? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_typeKindEnum_2E_enumType_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_typeKindEnum_2E_enumType mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_typeKindEnum_2E_enumType_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_typeKindEnum_2E_enumType_3F_ (const GGS_typeKindEnum_2E_enumType & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_typeKindEnum_2E_enumType_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_typeKindEnum_2E_enumType unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeKindEnum_2E_enumType_3F_ extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKindEnum_2E_enumType_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKindEnum_2E_enumType_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @typeKindEnum_2E_weakReferenceType struct
//
//--------------------------------------------------------------------------------------------------

class GGS_typeKindEnum_2E_weakReferenceType : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_unifiedTypeMapEntry mProperty_referenceType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_referenceType (void) const {
    return mProperty_referenceType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_typeKindEnum_2E_weakReferenceType (void) ;

//--------------------------------- Property setters
  public: inline void setter_setReferenceType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_referenceType = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_typeKindEnum_2E_weakReferenceType (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typeKindEnum_2E_weakReferenceType (const GGS_unifiedTypeMapEntry & in_referenceType) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeKindEnum_2E_weakReferenceType init_21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeKindEnum_2E_weakReferenceType extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_typeKindEnum_2E_weakReferenceType class_func_new (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKindEnum_2E_weakReferenceType & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKindEnum_2E_weakReferenceType ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: typeKindEnum.weakReferenceType? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_typeKindEnum_2E_weakReferenceType_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_typeKindEnum_2E_weakReferenceType mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_typeKindEnum_2E_weakReferenceType_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_typeKindEnum_2E_weakReferenceType_3F_ (const GGS_typeKindEnum_2E_weakReferenceType & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_typeKindEnum_2E_weakReferenceType_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_typeKindEnum_2E_weakReferenceType unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeKindEnum_2E_weakReferenceType_3F_ extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKindEnum_2E_weakReferenceType_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKindEnum_2E_weakReferenceType_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertyMap map enumerator
//--------------------------------------------------------------------------------------------------

class cEnumerator_propertyMap final : public cGenericAbstractEnumerator {
  public: cEnumerator_propertyMap (const class GGS_propertyMap & inEnumeratedObject,
                                   const EnumerationOrder inOrder) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_AccessControl current_mAccessControl (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsConstant (LOCATION_ARGS) const ;
  public: class GGS_unifiedTypeMapEntry current_mPropertyType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_propertyMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_propertyMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_propertyMap (const class GGS_propertyMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_AccessControl current_mAccessControl (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsConstant (LOCATION_ARGS) const ;
  public: class GGS_unifiedTypeMapEntry current_mPropertyType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_propertyMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_propertyMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_propertyMap (const class GGS_propertyMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_AccessControl current_mAccessControl (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsConstant (LOCATION_ARGS) const ;
  public: class GGS_unifiedTypeMapEntry current_mPropertyType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_propertyMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertyMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_propertyMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_propertyMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_propertyMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_propertyMap (void) ;

//--------------------------------- Handle copy
  public: GGS_propertyMap (const GGS_propertyMap & inSource) ;
  public: GGS_propertyMap & operator = (const GGS_propertyMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertyMap init (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyMap extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_propertyMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_propertyMap class_func_mapWithMapToOverride (const class GGS_propertyMap & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_AccessControl & inOperand1,
                                                     const class GGS_bool & inOperand2,
                                                     const class GGS_unifiedTypeMapEntry & inOperand3,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_propertyMap add_operation (const GGS_propertyMap & inOperand,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_AccessControl constinArgument1,
                                                  class GGS_bool constinArgument2,
                                                  class GGS_unifiedTypeMapEntry constinArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAccessControlForKey (class GGS_AccessControl constinArgument0,
                                                                class GGS_string constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIsConstantForKey (class GGS_bool constinArgument0,
                                                             class GGS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyTypeForKey (class GGS_unifiedTypeMapEntry constinArgument0,
                                                               class GGS_string constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_AccessControl & outArgument1,
                                                  class GGS_bool & outArgument2,
                                                  class GGS_unifiedTypeMapEntry & outArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_AccessControl getter_mAccessControlForKey (const class GGS_string & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mIsConstantForKey (const class GGS_string & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_unifiedTypeMapEntry getter_mPropertyTypeForKey (const class GGS_string & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_propertyMap getter_overriddenMap (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_propertyMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_propertyMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                        const GGS_string & inKey
                                                                                        COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_propertyMap_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_propertyMap ;
  friend class UpEnumerator_propertyMap ;
  friend class DownEnumerator_propertyMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyMap ;

//--------------------------------------------------------------------------------------------------
//   enum AccessControl
//--------------------------------------------------------------------------------------------------

class GGS_AccessControl : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_AccessControl (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_publicAccess,
    enum_protectedAccess,
    enum_protectedSetAccess,
    enum_privateAccess,
    enum_privateSetAccess,
    enum_fileprivateAccess,
    enum_fileprivateSetAccess
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_protectedAccess (class GGS_unifiedTypeMapEntry & out_declaringType) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_protectedSetAccess (class GGS_unifiedTypeMapEntry & out_declaringType) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_privateAccess (class GGS_unifiedTypeMapEntry & out_declaringType) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_privateSetAccess (class GGS_unifiedTypeMapEntry & out_declaringType) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_fileprivateAccess (class GGS_location & out_declarationLocation) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_fileprivateSetAccess (class GGS_location & out_declarationLocation) const ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
    mAssociatedValues.drop () ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_AccessControl extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_AccessControl class_func_fileprivateAccess (const class GGS_location & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;

  public: static class GGS_AccessControl class_func_fileprivateSetAccess (const class GGS_location & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

  public: static class GGS_AccessControl class_func_privateAccess (const class GGS_unifiedTypeMapEntry & inOperand0
                                                                   COMMA_LOCATION_ARGS) ;

  public: static class GGS_AccessControl class_func_privateSetAccess (const class GGS_unifiedTypeMapEntry & inOperand0
                                                                      COMMA_LOCATION_ARGS) ;

  public: static class GGS_AccessControl class_func_protectedAccess (const class GGS_unifiedTypeMapEntry & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;

  public: static class GGS_AccessControl class_func_protectedSetAccess (const class GGS_unifiedTypeMapEntry & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

  public: static class GGS_AccessControl class_func_publicAccess (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractFileprivateAccess (class GGS_location & outArgument0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractFileprivateSetAccess (class GGS_location & outArgument0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractPrivateAccess (class GGS_unifiedTypeMapEntry & outArgument0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractPrivateSetAccess (class GGS_unifiedTypeMapEntry & outArgument0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractProtectedAccess (class GGS_unifiedTypeMapEntry & outArgument0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractProtectedSetAccess (class GGS_unifiedTypeMapEntry & outArgument0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_AccessControl_2E_fileprivateAccess_3F_ getter_getFileprivateAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_AccessControl_2E_fileprivateSetAccess_3F_ getter_getFileprivateSetAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_AccessControl_2E_privateAccess_3F_ getter_getPrivateAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_AccessControl_2E_privateSetAccess_3F_ getter_getPrivateSetAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_AccessControl_2E_protectedAccess_3F_ getter_getProtectedAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_AccessControl_2E_protectedSetAccess_3F_ getter_getProtectedSetAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isFileprivateAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isFileprivateSetAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isPrivateAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isPrivateSetAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isProtectedAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isProtectedSetAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isPublicAccess (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControl ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@propertyMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_propertyMap : public cMapElement {
//--- Map attributes
  public: GGS_AccessControl mProperty_mAccessControl ;
  public: GGS_bool mProperty_mIsConstant ;
  public: GGS_unifiedTypeMapEntry mProperty_mPropertyType ;

//--- Constructors
  public: cMapElement_propertyMap (const GGS_propertyMap_2E_element & inValue
                                   COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_propertyMap (const GGS_lstring & inKey,
                                   const GGS_AccessControl & in_mAccessControl,
                                   const GGS_bool & in_mIsConstant,
                                   const GGS_unifiedTypeMapEntry & in_mPropertyType
                                   COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @propertyMap_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_propertyMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_AccessControl mProperty_mAccessControl ;
  public: inline GGS_AccessControl readProperty_mAccessControl (void) const {
    return mProperty_mAccessControl ;
  }

  public: GGS_bool mProperty_mIsConstant ;
  public: inline GGS_bool readProperty_mIsConstant (void) const {
    return mProperty_mIsConstant ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_mPropertyType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mPropertyType (void) const {
    return mProperty_mPropertyType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_propertyMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMAccessControl (const GGS_AccessControl & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAccessControl = inValue ;
  }

  public: inline void setter_setMIsConstant (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsConstant = inValue ;
  }

  public: inline void setter_setMPropertyType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyType = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_propertyMap_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_propertyMap_2E_element (const GGS_lstring & in_lkey,
                                      const GGS_AccessControl & in_mAccessControl,
                                      const GGS_bool & in_mIsConstant,
                                      const GGS_unifiedTypeMapEntry & in_mPropertyType) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertyMap_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                  const class GGS_AccessControl & inOperand1,
                                                                  const class GGS_bool & inOperand2,
                                                                  const class GGS_unifiedTypeMapEntry & inOperand3,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyMap_2E_element extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_propertyMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                  const class GGS_AccessControl & inOperand1,
                                                                  const class GGS_bool & inOperand2,
                                                                  const class GGS_unifiedTypeMapEntry & inOperand3,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: propertyMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_propertyMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_propertyMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_propertyMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_propertyMap_2E_element_3F_ (const GGS_propertyMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_propertyMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_propertyMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @classFunctionMap_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_classFunctionMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_functionSignature mProperty_mArgumentTypeList ;
  public: inline GGS_functionSignature readProperty_mArgumentTypeList (void) const {
    return mProperty_mArgumentTypeList ;
  }

  public: GGS_bool mProperty_mHasCompilerArgument ;
  public: inline GGS_bool readProperty_mHasCompilerArgument (void) const {
    return mProperty_mHasCompilerArgument ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_mReturnedType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mReturnedType (void) const {
    return mProperty_mReturnedType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_classFunctionMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMArgumentTypeList (const GGS_functionSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mArgumentTypeList = inValue ;
  }

  public: inline void setter_setMHasCompilerArgument (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHasCompilerArgument = inValue ;
  }

  public: inline void setter_setMReturnedType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReturnedType = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_classFunctionMap_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_classFunctionMap_2E_element (const GGS_lstring & in_lkey,
                                           const GGS_functionSignature & in_mArgumentTypeList,
                                           const GGS_bool & in_mHasCompilerArgument,
                                           const GGS_unifiedTypeMapEntry & in_mReturnedType) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_classFunctionMap_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                       const class GGS_functionSignature & inOperand1,
                                                                       const class GGS_bool & inOperand2,
                                                                       const class GGS_unifiedTypeMapEntry & inOperand3,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_classFunctionMap_2E_element extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_classFunctionMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                       const class GGS_functionSignature & inOperand1,
                                                                       const class GGS_bool & inOperand2,
                                                                       const class GGS_unifiedTypeMapEntry & inOperand3,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classFunctionMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: classFunctionMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_classFunctionMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_classFunctionMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_classFunctionMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_classFunctionMap_2E_element_3F_ (const GGS_classFunctionMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_classFunctionMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_classFunctionMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_classFunctionMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classFunctionMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @getterMap_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_getterMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_methodKind mProperty_mKind ;
  public: inline GGS_methodKind readProperty_mKind (void) const {
    return mProperty_mKind ;
  }

  public: GGS_functionSignature mProperty_mArgumentTypeList ;
  public: inline GGS_functionSignature readProperty_mArgumentTypeList (void) const {
    return mProperty_mArgumentTypeList ;
  }

  public: GGS_location mProperty_mDeclarationLocation ;
  public: inline GGS_location readProperty_mDeclarationLocation (void) const {
    return mProperty_mDeclarationLocation ;
  }

  public: GGS_bool mProperty_mHasCompilerArgument ;
  public: inline GGS_bool readProperty_mHasCompilerArgument (void) const {
    return mProperty_mHasCompilerArgument ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_mReturnedType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mReturnedType (void) const {
    return mProperty_mReturnedType ;
  }

  public: GGS_methodQualifier mProperty_mQualifier ;
  public: inline GGS_methodQualifier readProperty_mQualifier (void) const {
    return mProperty_mQualifier ;
  }

  public: GGS_string mProperty_mGetterNameThatObsoletesInvokationName ;
  public: inline GGS_string readProperty_mGetterNameThatObsoletesInvokationName (void) const {
    return mProperty_mGetterNameThatObsoletesInvokationName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_getterMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMKind (const GGS_methodKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mKind = inValue ;
  }

  public: inline void setter_setMArgumentTypeList (const GGS_functionSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mArgumentTypeList = inValue ;
  }

  public: inline void setter_setMDeclarationLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeclarationLocation = inValue ;
  }

  public: inline void setter_setMHasCompilerArgument (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHasCompilerArgument = inValue ;
  }

  public: inline void setter_setMReturnedType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReturnedType = inValue ;
  }

  public: inline void setter_setMQualifier (const GGS_methodQualifier & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mQualifier = inValue ;
  }

  public: inline void setter_setMGetterNameThatObsoletesInvokationName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGetterNameThatObsoletesInvokationName = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_getterMap_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_getterMap_2E_element (const GGS_lstring & in_lkey,
                                    const GGS_methodKind & in_mKind,
                                    const GGS_functionSignature & in_mArgumentTypeList,
                                    const GGS_location & in_mDeclarationLocation,
                                    const GGS_bool & in_mHasCompilerArgument,
                                    const GGS_unifiedTypeMapEntry & in_mReturnedType,
                                    const GGS_methodQualifier & in_mQualifier,
                                    const GGS_string & in_mGetterNameThatObsoletesInvokationName) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_getterMap_2E_element init_21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                const class GGS_methodKind & inOperand1,
                                                                                const class GGS_functionSignature & inOperand2,
                                                                                const class GGS_location & inOperand3,
                                                                                const class GGS_bool & inOperand4,
                                                                                const class GGS_unifiedTypeMapEntry & inOperand5,
                                                                                const class GGS_methodQualifier & inOperand6,
                                                                                const class GGS_string & inOperand7,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_getterMap_2E_element extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_getterMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                const class GGS_methodKind & inOperand1,
                                                                const class GGS_functionSignature & inOperand2,
                                                                const class GGS_location & inOperand3,
                                                                const class GGS_bool & inOperand4,
                                                                const class GGS_unifiedTypeMapEntry & inOperand5,
                                                                const class GGS_methodQualifier & inOperand6,
                                                                const class GGS_string & inOperand7,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getterMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: getterMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_getterMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_getterMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_getterMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_getterMap_2E_element_3F_ (const GGS_getterMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_getterMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_getterMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_getterMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getterMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @setterMap_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_setterMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_methodKind mProperty_mKind ;
  public: inline GGS_methodKind readProperty_mKind (void) const {
    return mProperty_mKind ;
  }

  public: GGS_formalParameterSignature mProperty_mParameterList ;
  public: inline GGS_formalParameterSignature readProperty_mParameterList (void) const {
    return mProperty_mParameterList ;
  }

  public: GGS_bool mProperty_mHasCompilerArgument ;
  public: inline GGS_bool readProperty_mHasCompilerArgument (void) const {
    return mProperty_mHasCompilerArgument ;
  }

  public: GGS_methodQualifier mProperty_mQualifier ;
  public: inline GGS_methodQualifier readProperty_mQualifier (void) const {
    return mProperty_mQualifier ;
  }

  public: GGS_string mProperty_mErrorMessage ;
  public: inline GGS_string readProperty_mErrorMessage (void) const {
    return mProperty_mErrorMessage ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_setterMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMKind (const GGS_methodKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mKind = inValue ;
  }

  public: inline void setter_setMParameterList (const GGS_formalParameterSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameterList = inValue ;
  }

  public: inline void setter_setMHasCompilerArgument (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHasCompilerArgument = inValue ;
  }

  public: inline void setter_setMQualifier (const GGS_methodQualifier & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mQualifier = inValue ;
  }

  public: inline void setter_setMErrorMessage (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mErrorMessage = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_setterMap_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_setterMap_2E_element (const GGS_lstring & in_lkey,
                                    const GGS_methodKind & in_mKind,
                                    const GGS_formalParameterSignature & in_mParameterList,
                                    const GGS_bool & in_mHasCompilerArgument,
                                    const GGS_methodQualifier & in_mQualifier,
                                    const GGS_string & in_mErrorMessage) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_setterMap_2E_element init_21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                        const class GGS_methodKind & inOperand1,
                                                                        const class GGS_formalParameterSignature & inOperand2,
                                                                        const class GGS_bool & inOperand3,
                                                                        const class GGS_methodQualifier & inOperand4,
                                                                        const class GGS_string & inOperand5,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_setterMap_2E_element extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_setterMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                const class GGS_methodKind & inOperand1,
                                                                const class GGS_formalParameterSignature & inOperand2,
                                                                const class GGS_bool & inOperand3,
                                                                const class GGS_methodQualifier & inOperand4,
                                                                const class GGS_string & inOperand5,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_setterMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: setterMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_setterMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_setterMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_setterMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_setterMap_2E_element_3F_ (const GGS_setterMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_setterMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_setterMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_setterMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_setterMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @instanceMethodMap_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_instanceMethodMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_methodKind mProperty_mKind ;
  public: inline GGS_methodKind readProperty_mKind (void) const {
    return mProperty_mKind ;
  }

  public: GGS_formalParameterSignature mProperty_mParameterList ;
  public: inline GGS_formalParameterSignature readProperty_mParameterList (void) const {
    return mProperty_mParameterList ;
  }

  public: GGS_location mProperty_mDeclarationLocation ;
  public: inline GGS_location readProperty_mDeclarationLocation (void) const {
    return mProperty_mDeclarationLocation ;
  }

  public: GGS_bool mProperty_mHasCompilerArgument ;
  public: inline GGS_bool readProperty_mHasCompilerArgument (void) const {
    return mProperty_mHasCompilerArgument ;
  }

  public: GGS_methodQualifier mProperty_mQualifier ;
  public: inline GGS_methodQualifier readProperty_mQualifier (void) const {
    return mProperty_mQualifier ;
  }

  public: GGS_string mProperty_mErrorMessage ;
  public: inline GGS_string readProperty_mErrorMessage (void) const {
    return mProperty_mErrorMessage ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_instanceMethodMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMKind (const GGS_methodKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mKind = inValue ;
  }

  public: inline void setter_setMParameterList (const GGS_formalParameterSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameterList = inValue ;
  }

  public: inline void setter_setMDeclarationLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeclarationLocation = inValue ;
  }

  public: inline void setter_setMHasCompilerArgument (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHasCompilerArgument = inValue ;
  }

  public: inline void setter_setMQualifier (const GGS_methodQualifier & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mQualifier = inValue ;
  }

  public: inline void setter_setMErrorMessage (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mErrorMessage = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_instanceMethodMap_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_instanceMethodMap_2E_element (const GGS_lstring & in_lkey,
                                            const GGS_methodKind & in_mKind,
                                            const GGS_formalParameterSignature & in_mParameterList,
                                            const GGS_location & in_mDeclarationLocation,
                                            const GGS_bool & in_mHasCompilerArgument,
                                            const GGS_methodQualifier & in_mQualifier,
                                            const GGS_string & in_mErrorMessage) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_instanceMethodMap_2E_element init_21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                    const class GGS_methodKind & inOperand1,
                                                                                    const class GGS_formalParameterSignature & inOperand2,
                                                                                    const class GGS_location & inOperand3,
                                                                                    const class GGS_bool & inOperand4,
                                                                                    const class GGS_methodQualifier & inOperand5,
                                                                                    const class GGS_string & inOperand6,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_instanceMethodMap_2E_element extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_instanceMethodMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                        const class GGS_methodKind & inOperand1,
                                                                        const class GGS_formalParameterSignature & inOperand2,
                                                                        const class GGS_location & inOperand3,
                                                                        const class GGS_bool & inOperand4,
                                                                        const class GGS_methodQualifier & inOperand5,
                                                                        const class GGS_string & inOperand6,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instanceMethodMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: instanceMethodMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_instanceMethodMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_instanceMethodMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_instanceMethodMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_instanceMethodMap_2E_element_3F_ (const GGS_instanceMethodMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_instanceMethodMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_instanceMethodMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_instanceMethodMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instanceMethodMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @classMethodMap_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_classMethodMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_formalParameterSignature mProperty_mParameterList ;
  public: inline GGS_formalParameterSignature readProperty_mParameterList (void) const {
    return mProperty_mParameterList ;
  }

  public: GGS_bool mProperty_mHasCompilerArgument ;
  public: inline GGS_bool readProperty_mHasCompilerArgument (void) const {
    return mProperty_mHasCompilerArgument ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_classMethodMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMParameterList (const GGS_formalParameterSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameterList = inValue ;
  }

  public: inline void setter_setMHasCompilerArgument (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHasCompilerArgument = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_classMethodMap_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_classMethodMap_2E_element (const GGS_lstring & in_lkey,
                                         const GGS_formalParameterSignature & in_mParameterList,
                                         const GGS_bool & in_mHasCompilerArgument) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_classMethodMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                 const class GGS_formalParameterSignature & inOperand1,
                                                                 const class GGS_bool & inOperand2,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_classMethodMap_2E_element extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_classMethodMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                     const class GGS_formalParameterSignature & inOperand1,
                                                                     const class GGS_bool & inOperand2,
                                                                     class Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classMethodMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: classMethodMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_classMethodMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_classMethodMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_classMethodMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_classMethodMap_2E_element_3F_ (const GGS_classMethodMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_classMethodMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_classMethodMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_classMethodMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classMethodMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @subscriptMap map enumerator
//--------------------------------------------------------------------------------------------------

class cEnumerator_subscriptMap final : public cGenericAbstractEnumerator {
  public: cEnumerator_subscriptMap (const class GGS_subscriptMap & inEnumeratedObject,
                                    const EnumerationOrder inOrder) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_functionSignature current_argumentTypeList (LOCATION_ARGS) const ;
  public: class GGS_unifiedTypeMapEntry current_valueType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_subscriptMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_subscriptMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_subscriptMap (const class GGS_subscriptMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_functionSignature current_argumentTypeList (LOCATION_ARGS) const ;
  public: class GGS_unifiedTypeMapEntry current_valueType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_subscriptMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_subscriptMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_subscriptMap (const class GGS_subscriptMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_functionSignature current_argumentTypeList (LOCATION_ARGS) const ;
  public: class GGS_unifiedTypeMapEntry current_valueType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_subscriptMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @subscriptMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_subscriptMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_subscriptMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_subscriptMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_subscriptMap (void) ;

//--------------------------------- Handle copy
  public: GGS_subscriptMap (const GGS_subscriptMap & inSource) ;
  public: GGS_subscriptMap & operator = (const GGS_subscriptMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_subscriptMap init (Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_subscriptMap extractObject (const GGS_object & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_subscriptMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_subscriptMap class_func_mapWithMapToOverride (const class GGS_subscriptMap & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_functionSignature & inOperand1,
                                                     const class GGS_unifiedTypeMapEntry & inOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_subscriptMap add_operation (const GGS_subscriptMap & inOperand,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_functionSignature constinArgument1,
                                                  class GGS_unifiedTypeMapEntry constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setArgumentTypeListForKey (class GGS_functionSignature constinArgument0,
                                                                  class GGS_string constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setValueTypeForKey (class GGS_unifiedTypeMapEntry constinArgument0,
                                                           class GGS_string constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_functionSignature & outArgument1,
                                                  class GGS_unifiedTypeMapEntry & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_functionSignature getter_argumentTypeListForKey (const class GGS_string & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_subscriptMap getter_overriddenMap (Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_unifiedTypeMapEntry getter_valueTypeForKey (const class GGS_string & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_subscriptMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_subscriptMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                         const GGS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_subscriptMap_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_subscriptMap ;
  friend class UpEnumerator_subscriptMap ;
  friend class DownEnumerator_subscriptMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_subscriptMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@subscriptMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_subscriptMap : public cMapElement {
//--- Map attributes
  public: GGS_functionSignature mProperty_argumentTypeList ;
  public: GGS_unifiedTypeMapEntry mProperty_valueType ;

//--- Constructors
  public: cMapElement_subscriptMap (const GGS_subscriptMap_2E_element & inValue
                                    COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_subscriptMap (const GGS_lstring & inKey,
                                    const GGS_functionSignature & in_argumentTypeList,
                                    const GGS_unifiedTypeMapEntry & in_valueType
                                    COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @subscriptMap_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_subscriptMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_functionSignature mProperty_argumentTypeList ;
  public: inline GGS_functionSignature readProperty_argumentTypeList (void) const {
    return mProperty_argumentTypeList ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_valueType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_valueType (void) const {
    return mProperty_valueType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_subscriptMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setArgumentTypeList (const GGS_functionSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_argumentTypeList = inValue ;
  }

  public: inline void setter_setValueType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_valueType = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_subscriptMap_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_subscriptMap_2E_element (const GGS_lstring & in_lkey,
                                       const GGS_functionSignature & in_argumentTypeList,
                                       const GGS_unifiedTypeMapEntry & in_valueType) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_subscriptMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                               const class GGS_functionSignature & inOperand1,
                                                               const class GGS_unifiedTypeMapEntry & inOperand2,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_subscriptMap_2E_element extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_subscriptMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                   const class GGS_functionSignature & inOperand1,
                                                                   const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                   class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_subscriptMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: subscriptMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_subscriptMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_subscriptMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_subscriptMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_subscriptMap_2E_element_3F_ (const GGS_subscriptMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_subscriptMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_subscriptMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_subscriptMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_subscriptMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @enumerationDescriptorList_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_enumerationDescriptorList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_unifiedTypeMapEntry mProperty_mEnumeratedType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mEnumeratedType (void) const {
    return mProperty_mEnumeratedType ;
  }

  public: GGS_string mProperty_mEnumerationName ;
  public: inline GGS_string readProperty_mEnumerationName (void) const {
    return mProperty_mEnumerationName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_enumerationDescriptorList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMEnumeratedType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnumeratedType = inValue ;
  }

  public: inline void setter_setMEnumerationName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEnumerationName = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_enumerationDescriptorList_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_enumerationDescriptorList_2E_element (const GGS_unifiedTypeMapEntry & in_mEnumeratedType,
                                                    const GGS_string & in_mEnumerationName) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_enumerationDescriptorList_2E_element init_21__21_ (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                        const class GGS_string & inOperand1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_enumerationDescriptorList_2E_element extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_enumerationDescriptorList_2E_element class_func_new (const class GGS_unifiedTypeMapEntry & inOperand0,
                                                                                const class GGS_string & inOperand1,
                                                                                class Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumerationDescriptorList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @functionSignature_2E_element struct
//
//--------------------------------------------------------------------------------------------------

class GGS_functionSignature_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mFormalSelector ;
  public: inline GGS_lstring readProperty_mFormalSelector (void) const {
    return mProperty_mFormalSelector ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_mFormalArgumentType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mFormalArgumentType (void) const {
    return mProperty_mFormalArgumentType ;
  }

  public: GGS_string mProperty_mFormalArgumentName ;
  public: inline GGS_string readProperty_mFormalArgumentName (void) const {
    return mProperty_mFormalArgumentName ;
  }

  public: GGS_bool mProperty_isConstant ;
  public: inline GGS_bool readProperty_isConstant (void) const {
    return mProperty_isConstant ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_functionSignature_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFormalSelector (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalSelector = inValue ;
  }

  public: inline void setter_setMFormalArgumentType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentType = inValue ;
  }

  public: inline void setter_setMFormalArgumentName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentName = inValue ;
  }

  public: inline void setter_setIsConstant (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isConstant = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_functionSignature_2E_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_functionSignature_2E_element (const GGS_lstring & in_mFormalSelector,
                                            const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                            const GGS_string & in_mFormalArgumentName,
                                            const GGS_bool & in_isConstant) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_functionSignature_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                        const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                        const class GGS_string & inOperand2,
                                                                        const class GGS_bool & inOperand3,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_functionSignature_2E_element extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_functionSignature_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                        const class GGS_unifiedTypeMapEntry & inOperand1,
                                                                        const class GGS_string & inOperand2,
                                                                        const class GGS_bool & inOperand3,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionSignature_2E_element ;

