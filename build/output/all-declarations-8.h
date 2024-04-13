#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-7.h"

//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticDeclarationForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_appendDeclaration_31_ (class cPtr_semanticDeclarationForGeneration * inObject,
                                                class GALGAS_stringset & io_ioInclusionSet,
                                                class GALGAS_string & out_outHeader,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticDeclarationForGeneration appendDeclaration2'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_appendDeclaration_32_ (class cPtr_semanticDeclarationForGeneration * inObject,
                                                const class GALGAS_string constin_inOutputDirectory,
                                                class GALGAS_stringset & io_ioInclusionSet,
                                                class GALGAS_string & out_outHeader,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@semanticDeclarationForGeneration appendTypeGenericImplementation'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_appendTypeGenericImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticDeclarationForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_appendSpecificImplementation (class cPtr_semanticDeclarationForGeneration * inObject,
                                                       const class GALGAS_unifiedTypeMap constin_inUnifiedTypeMap,
                                                       class GALGAS_stringset & io_ioInclusionSet,
                                                       class GALGAS_string & out_outImplementation,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticDeclarationForGeneration appendSpecificFiles'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_appendSpecificFiles (class cPtr_semanticDeclarationForGeneration * inObject,
                                              const class GALGAS_string constin_inProductDirectory,
                                              class GALGAS_stringset & io_ioAllProductFileSet,
                                              class GALGAS_stringlist & io_ioCocoaProductFileList,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeSemanticInstruction (class cPtr_semanticInstructionAST * inObject,
                                                     const class GALGAS_lstring constin_inUsefulnessCallerEntityName,
                                                     class GALGAS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                     const class GALGAS_analysisContext constin_inAnalysisContext,
                                                     class GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                     class GALGAS_semanticInstructionListForGeneration & io_ioInstructionListForGeneration,
                                                     class GALGAS_localVarManager & io_ioVariableMap,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @localConstantList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_localConstantList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_localConstantList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_localConstantList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_unifiedTypeMapEntry & in_mType,
                                                 const class GALGAS_lstring & in_mName,
                                                 const class GALGAS_bool & in_mNoWarningIfUnused,
                                                 const class GALGAS_string & in_mCppName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_localConstantList init (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_localConstantList extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_localConstantList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_localConstantList class_func_listWithValue (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1,
                                                                          const class GALGAS_bool & inOperand2,
                                                                          const class GALGAS_string & inOperand3
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_localConstantList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_bool & inOperand2,
                                                     const class GALGAS_string & inOperand3
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_localConstantList add_operation (const GALGAS_localConstantList & inOperand,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_unifiedTypeMapEntry constinArgument0,
                                               class GALGAS_lstring constinArgument1,
                                               class GALGAS_bool constinArgument2,
                                               class GALGAS_string constinArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_unifiedTypeMapEntry constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_bool constinArgument2,
                                                      class GALGAS_string constinArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_bool & outArgument2,
                                                 class GALGAS_string & outArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                class GALGAS_bool & outArgument2,
                                                class GALGAS_string & outArgument3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_bool & outArgument2,
                                                      class GALGAS_string & outArgument3,
                                                      class GALGAS_uint constinArgument4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCppNameAtIndex (class GALGAS_string constinArgument0,
                                                           class GALGAS_uint constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNameAtIndex (class GALGAS_lstring constinArgument0,
                                                        class GALGAS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNoWarningIfUnusedAtIndex (class GALGAS_bool constinArgument0,
                                                                     class GALGAS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeAtIndex (class GALGAS_unifiedTypeMapEntry constinArgument0,
                                                        class GALGAS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_bool & outArgument2,
                                              class GALGAS_string & outArgument3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             class GALGAS_bool & outArgument2,
                                             class GALGAS_string & outArgument3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mCppNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mNoWarningIfUnusedAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapEntry getter_mTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_localConstantList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_localConstantList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_localConstantList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_localConstantList_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_localConstantList ;
 
} ; // End of GALGAS_localConstantList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_localConstantList : public cGenericAbstractEnumerator {
  public: cEnumerator_localConstantList (const GALGAS_localConstantList & inEnumeratedObject,
                                         const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_unifiedTypeMapEntry current_mType (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mName (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mNoWarningIfUnused (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mCppName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_localConstantList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localConstantList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @localConstantList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_localConstantList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_unifiedTypeMapEntry mProperty_mType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mType (void) const {
    return mProperty_mType ;
  }

  public: GALGAS_lstring mProperty_mName ;
  public: inline GALGAS_lstring readProperty_mName (void) const {
    return mProperty_mName ;
  }

  public: GALGAS_bool mProperty_mNoWarningIfUnused ;
  public: inline GALGAS_bool readProperty_mNoWarningIfUnused (void) const {
    return mProperty_mNoWarningIfUnused ;
  }

  public: GALGAS_string mProperty_mCppName ;
  public: inline GALGAS_string readProperty_mCppName (void) const {
    return mProperty_mCppName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_localConstantList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mType = inValue ;
  }

  public: inline void setter_setMName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mName = inValue ;
  }

  public: inline void setter_setMNoWarningIfUnused (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNoWarningIfUnused = inValue ;
  }

  public: inline void setter_setMCppName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCppName = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_localConstantList_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_localConstantList_2D_element (const GALGAS_unifiedTypeMapEntry & in_mType,
                                               const GALGAS_lstring & in_mName,
                                               const GALGAS_bool & in_mNoWarningIfUnused,
                                               const GALGAS_string & in_mCppName) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_localConstantList_2D_element init_21__21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                           const class GALGAS_lstring & inOperand1,
                                                                           const class GALGAS_bool & inOperand2,
                                                                           const class GALGAS_string & inOperand3,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_localConstantList_2D_element extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_localConstantList_2D_element class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                           const class GALGAS_lstring & inOperand1,
                                                                           const class GALGAS_bool & inOperand2,
                                                                           const class GALGAS_string & inOperand3,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_localConstantList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_localConstantList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localConstantList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @localInitializedVariableList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_localInitializedVariableList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_localInitializedVariableList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_localInitializedVariableList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_unifiedTypeMapEntry & in_mType,
                                                 const class GALGAS_lstring & in_mName,
                                                 const class GALGAS_string & in_mCppName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_localInitializedVariableList init (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_localInitializedVariableList extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_localInitializedVariableList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_localInitializedVariableList class_func_listWithValue (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                     const class GALGAS_lstring & inOperand1,
                                                                                     const class GALGAS_string & inOperand2
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_localInitializedVariableList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_string & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_localInitializedVariableList add_operation (const GALGAS_localInitializedVariableList & inOperand,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_unifiedTypeMapEntry constinArgument0,
                                               class GALGAS_lstring constinArgument1,
                                               class GALGAS_string constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_unifiedTypeMapEntry constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_string constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                class GALGAS_string & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_string & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCppNameAtIndex (class GALGAS_string constinArgument0,
                                                           class GALGAS_uint constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNameAtIndex (class GALGAS_lstring constinArgument0,
                                                        class GALGAS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeAtIndex (class GALGAS_unifiedTypeMapEntry constinArgument0,
                                                        class GALGAS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             class GALGAS_string & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mCppNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapEntry getter_mTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_localInitializedVariableList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_localInitializedVariableList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_localInitializedVariableList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_localInitializedVariableList_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_localInitializedVariableList ;
 
} ; // End of GALGAS_localInitializedVariableList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_localInitializedVariableList : public cGenericAbstractEnumerator {
  public: cEnumerator_localInitializedVariableList (const GALGAS_localInitializedVariableList & inEnumeratedObject,
                                                    const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_unifiedTypeMapEntry current_mType (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mName (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mCppName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_localInitializedVariableList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localInitializedVariableList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @localInitializedVariableList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_localInitializedVariableList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_unifiedTypeMapEntry mProperty_mType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mType (void) const {
    return mProperty_mType ;
  }

  public: GALGAS_lstring mProperty_mName ;
  public: inline GALGAS_lstring readProperty_mName (void) const {
    return mProperty_mName ;
  }

  public: GALGAS_string mProperty_mCppName ;
  public: inline GALGAS_string readProperty_mCppName (void) const {
    return mProperty_mCppName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_localInitializedVariableList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mType = inValue ;
  }

  public: inline void setter_setMName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mName = inValue ;
  }

  public: inline void setter_setMCppName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCppName = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_localInitializedVariableList_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_localInitializedVariableList_2D_element (const GALGAS_unifiedTypeMapEntry & in_mType,
                                                          const GALGAS_lstring & in_mName,
                                                          const GALGAS_string & in_mCppName) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_localInitializedVariableList_2D_element init_21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                  const class GALGAS_lstring & inOperand1,
                                                                                  const class GALGAS_string & inOperand2,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_localInitializedVariableList_2D_element extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_localInitializedVariableList_2D_element class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                      const class GALGAS_lstring & inOperand1,
                                                                                      const class GALGAS_string & inOperand2,
                                                                                      class Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_localInitializedVariableList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_localInitializedVariableList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localInitializedVariableList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@formalArgumentPassingModeAST correspondingEffectiveParameterString' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_correspondingEffectiveParameterString (const class GALGAS_formalArgumentPassingModeAST & inObject,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractGrammarInstructionSyntaxDirectedTranslationResult reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult (const class cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult init (Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult extractObject (const GALGAS_object & inObject,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractGrammarInstructionSyntaxDirectedTranslationResult class
//
//--------------------------------------------------------------------------------------------------

class cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void abstractGrammarInstructionSyntaxDirectedTranslationResult_init (Compiler * inCompiler) ;


//--- Extension method analyzeGrammarInstructionSDT
  public: virtual void method_analyzeGrammarInstructionSDT (const class GALGAS_analysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           const class GALGAS_bool arg_inHasTranslateFeature,
           const class GALGAS_string arg_inSyntaxDirectedTranslationResultVarName,
           class GALGAS_stringlist & arg_ioAssignementList,
           class GALGAS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method analyzeSDT
  public: virtual void method_analyzeSDT (const class GALGAS_analysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           const class GALGAS_bool arg_inHasTranslateFeature,
           class GALGAS_localVarManager & arg_ioVariableMap,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method generateCode
  public: virtual void method_generateCode (const class GALGAS_bool arg_inGenerateSyntaxDirectedTranslationString,
           const class GALGAS_string arg_inAccessMethodName,
           class GALGAS_stringset & arg_ioUnusedVariableCppNameSet,
           class GALGAS_string & arg_ioGeneratedCode,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties


//--- Default constructor
  public: cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_semanticAnalysis (class cPtr_semanticDeclarationAST * inObject,
                                           class GALGAS_lstringlist & io_ioUsefulnessRootEntities,
                                           class GALGAS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                           const class GALGAS_string constin_inProductDirectory,
                                           const class GALGAS_semanticContext constin_inSemanticContext,
                                           class GALGAS_unifiedTypeMap & io_ioTypeMap,
                                           const class GALGAS_predefinedTypes constin_inPredefinedTypes,
                                           class GALGAS_semanticDeclarationListForGeneration & io_ioSemanticDeclarationListForGeneration,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @propertyIndexMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_propertyIndexMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_propertyIndexMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_propertyIndexMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_propertyIndexMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_propertyIndexMap (const GALGAS_propertyIndexMap & inSource) ;
  public: GALGAS_propertyIndexMap & operator = (const GALGAS_propertyIndexMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_propertyIndexMap init (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_propertyIndexMap extractObject (const GALGAS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_propertyIndexMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_propertyIndexMap class_func_mapWithMapToOverride (const class GALGAS_propertyIndexMap & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_unifiedTypeMapEntry & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_propertyIndexMap add_operation (const GALGAS_propertyIndexMap & inOperand,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_unifiedTypeMapEntry constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyTypeIndexForKey (class GALGAS_unifiedTypeMapEntry constinArgument0,
                                                                    class GALGAS_string constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_unifiedTypeMapEntry & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapEntry getter_mPropertyTypeIndexForKey (const class GALGAS_string & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_propertyIndexMap getter_overriddenMap (Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_unifiedTypeMapEntry & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_propertyIndexMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_propertyIndexMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_propertyIndexMap ;
 
} ; // End of GALGAS_propertyIndexMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_propertyIndexMap : public cGenericAbstractEnumerator {
  public: cEnumerator_propertyIndexMap (const GALGAS_propertyIndexMap & inEnumeratedObject,
                                        const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_unifiedTypeMapEntry current_mPropertyTypeIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_propertyIndexMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyIndexMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@propertyIndexMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_propertyIndexMap : public cMapElement {
//--- Map attributes
  public: GALGAS_unifiedTypeMapEntry mProperty_mPropertyTypeIndex ;

//--- Constructors
  public: cMapElement_propertyIndexMap (const GALGAS_propertyIndexMap_2D_element & inValue
                                        COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_propertyIndexMap (const GALGAS_lstring & inKey,
                                        const GALGAS_unifiedTypeMapEntry & in_mPropertyTypeIndex
                                        COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @propertyIndexMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_propertyIndexMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_unifiedTypeMapEntry mProperty_mPropertyTypeIndex ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mPropertyTypeIndex (void) const {
    return mProperty_mPropertyTypeIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_propertyIndexMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMPropertyTypeIndex (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyTypeIndex = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_propertyIndexMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_propertyIndexMap_2D_element (const GALGAS_lstring & in_lkey,
                                              const GALGAS_unifiedTypeMapEntry & in_mPropertyTypeIndex) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_propertyIndexMap_2D_element init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                  const class GALGAS_unifiedTypeMapEntry & inOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_propertyIndexMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_propertyIndexMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_unifiedTypeMapEntry & inOperand1,
                                                                          class Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_propertyIndexMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_propertyIndexMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyIndexMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @nonterminalLabelMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_nonterminalLabelMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_nonterminalLabelMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_nonterminalLabelMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_nonterminalLabelMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_nonterminalLabelMap (const GALGAS_nonterminalLabelMap & inSource) ;
  public: GALGAS_nonterminalLabelMap & operator = (const GALGAS_nonterminalLabelMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_nonterminalLabelMap init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_nonterminalLabelMap extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_nonterminalLabelMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_nonterminalLabelMap class_func_mapWithMapToOverride (const class GALGAS_nonterminalLabelMap & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_formalParameterListForGeneration & inOperand1,
                                                     const class GALGAS_formalParameterSignature & inOperand2,
                                                     const class GALGAS_location & inOperand3,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_nonterminalLabelMap add_operation (const GALGAS_nonterminalLabelMap & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_formalParameterListForGeneration constinArgument1,
                                                  class GALGAS_formalParameterSignature constinArgument2,
                                                  class GALGAS_location constinArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfArgumentLocationForKey (class GALGAS_location constinArgument0,
                                                                        class GALGAS_string constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSignatureForGenerationForKey (class GALGAS_formalParameterListForGeneration constinArgument0,
                                                                         class GALGAS_string constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSignatureForKey (class GALGAS_formalParameterSignature constinArgument0,
                                                            class GALGAS_string constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_formalParameterListForGeneration & outArgument1,
                                                  class GALGAS_formalParameterSignature & outArgument2,
                                                  class GALGAS_location & outArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfArgumentLocationForKey (const class GALGAS_string & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterListForGeneration getter_mSignatureForGenerationForKey (const class GALGAS_string & constinOperand0,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterSignature getter_mSignatureForKey (const class GALGAS_string & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_nonterminalLabelMap getter_overriddenMap (Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_formalParameterListForGeneration & outOperand1,
                                                    class GALGAS_formalParameterSignature & outOperand2,
                                                    class GALGAS_location & outOperand3) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_nonterminalLabelMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                const GALGAS_string & inKey
                                                                                                COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_nonterminalLabelMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_nonterminalLabelMap ;
 
} ; // End of GALGAS_nonterminalLabelMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_nonterminalLabelMap : public cGenericAbstractEnumerator {
  public: cEnumerator_nonterminalLabelMap (const GALGAS_nonterminalLabelMap & inEnumeratedObject,
                                           const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_formalParameterListForGeneration current_mSignatureForGeneration (LOCATION_ARGS) const ;
  public: class GALGAS_formalParameterSignature current_mSignature (LOCATION_ARGS) const ;
  public: class GALGAS_location current_mEndOfArgumentLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_nonterminalLabelMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalLabelMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@nonterminalLabelMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_nonterminalLabelMap : public cMapElement {
//--- Map attributes
  public: GALGAS_formalParameterListForGeneration mProperty_mSignatureForGeneration ;
  public: GALGAS_formalParameterSignature mProperty_mSignature ;
  public: GALGAS_location mProperty_mEndOfArgumentLocation ;

//--- Constructors
  public: cMapElement_nonterminalLabelMap (const GALGAS_nonterminalLabelMap_2D_element & inValue
                                           COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_nonterminalLabelMap (const GALGAS_lstring & inKey,
                                           const GALGAS_formalParameterListForGeneration & in_mSignatureForGeneration,
                                           const GALGAS_formalParameterSignature & in_mSignature,
                                           const GALGAS_location & in_mEndOfArgumentLocation
                                           COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @nonterminalLabelMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_nonterminalLabelMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_formalParameterListForGeneration mProperty_mSignatureForGeneration ;
  public: inline GALGAS_formalParameterListForGeneration readProperty_mSignatureForGeneration (void) const {
    return mProperty_mSignatureForGeneration ;
  }

  public: GALGAS_formalParameterSignature mProperty_mSignature ;
  public: inline GALGAS_formalParameterSignature readProperty_mSignature (void) const {
    return mProperty_mSignature ;
  }

  public: GALGAS_location mProperty_mEndOfArgumentLocation ;
  public: inline GALGAS_location readProperty_mEndOfArgumentLocation (void) const {
    return mProperty_mEndOfArgumentLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_nonterminalLabelMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMSignatureForGeneration (const GALGAS_formalParameterListForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSignatureForGeneration = inValue ;
  }

  public: inline void setter_setMSignature (const GALGAS_formalParameterSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSignature = inValue ;
  }

  public: inline void setter_setMEndOfArgumentLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfArgumentLocation = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_nonterminalLabelMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_nonterminalLabelMap_2D_element (const GALGAS_lstring & in_lkey,
                                                 const GALGAS_formalParameterListForGeneration & in_mSignatureForGeneration,
                                                 const GALGAS_formalParameterSignature & in_mSignature,
                                                 const GALGAS_location & in_mEndOfArgumentLocation) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_nonterminalLabelMap_2D_element init_21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_formalParameterListForGeneration & inOperand1,
                                                                             const class GALGAS_formalParameterSignature & inOperand2,
                                                                             const class GALGAS_location & inOperand3,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_nonterminalLabelMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_nonterminalLabelMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_formalParameterListForGeneration & inOperand1,
                                                                             const class GALGAS_formalParameterSignature & inOperand2,
                                                                             const class GALGAS_location & inOperand3,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_nonterminalLabelMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_nonterminalLabelMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalLabelMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @nonterminalMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_nonterminalMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_nonterminalMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_nonterminalMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_nonterminalMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_nonterminalMap (const GALGAS_nonterminalMap & inSource) ;
  public: GALGAS_nonterminalMap & operator = (const GALGAS_nonterminalMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_nonterminalMap init (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_nonterminalMap extractObject (const GALGAS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_nonterminalMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_nonterminalMap class_func_mapWithMapToOverride (const class GALGAS_nonterminalMap & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_nonterminalLabelMap & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_nonterminalMap add_operation (const GALGAS_nonterminalMap & inOperand,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_nonterminalLabelMap constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLabelMapForKey (class GALGAS_nonterminalLabelMap constinArgument0,
                                                           class GALGAS_string constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_nonterminalLabelMap & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_nonterminalLabelMap getter_mLabelMapForKey (const class GALGAS_string & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_nonterminalMap getter_overriddenMap (Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_nonterminalLabelMap & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_nonterminalMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                           const GALGAS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_nonterminalMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_nonterminalMap ;
 
} ; // End of GALGAS_nonterminalMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_nonterminalMap : public cGenericAbstractEnumerator {
  public: cEnumerator_nonterminalMap (const GALGAS_nonterminalMap & inEnumeratedObject,
                                      const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_nonterminalLabelMap current_mLabelMap (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_nonterminalMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@nonterminalMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_nonterminalMap : public cMapElement {
//--- Map attributes
  public: GALGAS_nonterminalLabelMap mProperty_mLabelMap ;

//--- Constructors
  public: cMapElement_nonterminalMap (const GALGAS_nonterminalMap_2D_element & inValue
                                      COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_nonterminalMap (const GALGAS_lstring & inKey,
                                      const GALGAS_nonterminalLabelMap & in_mLabelMap
                                      COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @nonterminalMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_nonterminalMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_nonterminalLabelMap mProperty_mLabelMap ;
  public: inline GALGAS_nonterminalLabelMap readProperty_mLabelMap (void) const {
    return mProperty_mLabelMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_nonterminalMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMLabelMap (const GALGAS_nonterminalLabelMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLabelMap = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_nonterminalMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_nonterminalMap_2D_element (const GALGAS_lstring & in_lkey,
                                            const GALGAS_nonterminalLabelMap & in_mLabelMap) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_nonterminalMap_2D_element init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                const class GALGAS_nonterminalLabelMap & inOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_nonterminalMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_nonterminalMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_nonterminalLabelMap & inOperand1,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_nonterminalMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_nonterminalMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ruleLabelImplementationList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ruleLabelImplementationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_ruleLabelImplementationList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_ruleLabelImplementationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mLabelName,
                                                 const class GALGAS_formalParameterListForGeneration & in_mSignatureForGeneration,
                                                 const class GALGAS_formalParameterSignature & in_mSignature,
                                                 const class GALGAS_location & in_mEndOfArgumentLocation,
                                                 const class GALGAS_semanticInstructionListForGeneration & in_mInstructionListForGeneration
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ruleLabelImplementationList init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ruleLabelImplementationList extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ruleLabelImplementationList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_ruleLabelImplementationList class_func_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_formalParameterListForGeneration & inOperand1,
                                                                                    const class GALGAS_formalParameterSignature & inOperand2,
                                                                                    const class GALGAS_location & inOperand3,
                                                                                    const class GALGAS_semanticInstructionListForGeneration & inOperand4
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_ruleLabelImplementationList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_formalParameterListForGeneration & inOperand1,
                                                     const class GALGAS_formalParameterSignature & inOperand2,
                                                     const class GALGAS_location & inOperand3,
                                                     const class GALGAS_semanticInstructionListForGeneration & inOperand4
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_ruleLabelImplementationList add_operation (const GALGAS_ruleLabelImplementationList & inOperand,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_formalParameterListForGeneration constinArgument1,
                                               class GALGAS_formalParameterSignature constinArgument2,
                                               class GALGAS_location constinArgument3,
                                               class GALGAS_semanticInstructionListForGeneration constinArgument4,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_formalParameterListForGeneration constinArgument1,
                                                      class GALGAS_formalParameterSignature constinArgument2,
                                                      class GALGAS_location constinArgument3,
                                                      class GALGAS_semanticInstructionListForGeneration constinArgument4,
                                                      class GALGAS_uint constinArgument5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_formalParameterListForGeneration & outArgument1,
                                                 class GALGAS_formalParameterSignature & outArgument2,
                                                 class GALGAS_location & outArgument3,
                                                 class GALGAS_semanticInstructionListForGeneration & outArgument4,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_formalParameterListForGeneration & outArgument1,
                                                class GALGAS_formalParameterSignature & outArgument2,
                                                class GALGAS_location & outArgument3,
                                                class GALGAS_semanticInstructionListForGeneration & outArgument4,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_formalParameterListForGeneration & outArgument1,
                                                      class GALGAS_formalParameterSignature & outArgument2,
                                                      class GALGAS_location & outArgument3,
                                                      class GALGAS_semanticInstructionListForGeneration & outArgument4,
                                                      class GALGAS_uint constinArgument5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfArgumentLocationAtIndex (class GALGAS_location constinArgument0,
                                                                         class GALGAS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListForGenerationAtIndex (class GALGAS_semanticInstructionListForGeneration constinArgument0,
                                                                                class GALGAS_uint constinArgument1,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLabelNameAtIndex (class GALGAS_lstring constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSignatureAtIndex (class GALGAS_formalParameterSignature constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSignatureForGenerationAtIndex (class GALGAS_formalParameterListForGeneration constinArgument0,
                                                                          class GALGAS_uint constinArgument1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_formalParameterListForGeneration & outArgument1,
                                              class GALGAS_formalParameterSignature & outArgument2,
                                              class GALGAS_location & outArgument3,
                                              class GALGAS_semanticInstructionListForGeneration & outArgument4,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_formalParameterListForGeneration & outArgument1,
                                             class GALGAS_formalParameterSignature & outArgument2,
                                             class GALGAS_location & outArgument3,
                                             class GALGAS_semanticInstructionListForGeneration & outArgument4,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfArgumentLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_semanticInstructionListForGeneration getter_mInstructionListForGenerationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLabelNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterSignature getter_mSignatureAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formalParameterListForGeneration getter_mSignatureForGenerationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_ruleLabelImplementationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_ruleLabelImplementationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_ruleLabelImplementationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_ruleLabelImplementationList_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_ruleLabelImplementationList ;
 
} ; // End of GALGAS_ruleLabelImplementationList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_ruleLabelImplementationList : public cGenericAbstractEnumerator {
  public: cEnumerator_ruleLabelImplementationList (const GALGAS_ruleLabelImplementationList & inEnumeratedObject,
                                                   const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mLabelName (LOCATION_ARGS) const ;
  public: class GALGAS_formalParameterListForGeneration current_mSignatureForGeneration (LOCATION_ARGS) const ;
  public: class GALGAS_formalParameterSignature current_mSignature (LOCATION_ARGS) const ;
  public: class GALGAS_location current_mEndOfArgumentLocation (LOCATION_ARGS) const ;
  public: class GALGAS_semanticInstructionListForGeneration current_mInstructionListForGeneration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_ruleLabelImplementationList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ruleLabelImplementationList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ruleLabelImplementationList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ruleLabelImplementationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mLabelName ;
  public: inline GALGAS_lstring readProperty_mLabelName (void) const {
    return mProperty_mLabelName ;
  }

  public: GALGAS_formalParameterListForGeneration mProperty_mSignatureForGeneration ;
  public: inline GALGAS_formalParameterListForGeneration readProperty_mSignatureForGeneration (void) const {
    return mProperty_mSignatureForGeneration ;
  }

  public: GALGAS_formalParameterSignature mProperty_mSignature ;
  public: inline GALGAS_formalParameterSignature readProperty_mSignature (void) const {
    return mProperty_mSignature ;
  }

  public: GALGAS_location mProperty_mEndOfArgumentLocation ;
  public: inline GALGAS_location readProperty_mEndOfArgumentLocation (void) const {
    return mProperty_mEndOfArgumentLocation ;
  }

  public: GALGAS_semanticInstructionListForGeneration mProperty_mInstructionListForGeneration ;
  public: inline GALGAS_semanticInstructionListForGeneration readProperty_mInstructionListForGeneration (void) const {
    return mProperty_mInstructionListForGeneration ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_ruleLabelImplementationList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMLabelName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLabelName = inValue ;
  }

  public: inline void setter_setMSignatureForGeneration (const GALGAS_formalParameterListForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSignatureForGeneration = inValue ;
  }

  public: inline void setter_setMSignature (const GALGAS_formalParameterSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSignature = inValue ;
  }

  public: inline void setter_setMEndOfArgumentLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfArgumentLocation = inValue ;
  }

  public: inline void setter_setMInstructionListForGeneration (const GALGAS_semanticInstructionListForGeneration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionListForGeneration = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_ruleLabelImplementationList_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_ruleLabelImplementationList_2D_element (const GALGAS_lstring & in_mLabelName,
                                                         const GALGAS_formalParameterListForGeneration & in_mSignatureForGeneration,
                                                         const GALGAS_formalParameterSignature & in_mSignature,
                                                         const GALGAS_location & in_mEndOfArgumentLocation,
                                                         const GALGAS_semanticInstructionListForGeneration & in_mInstructionListForGeneration) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ruleLabelImplementationList_2D_element init_21__21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                         const class GALGAS_formalParameterListForGeneration & inOperand1,
                                                                                         const class GALGAS_formalParameterSignature & inOperand2,
                                                                                         const class GALGAS_location & inOperand3,
                                                                                         const class GALGAS_semanticInstructionListForGeneration & inOperand4,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ruleLabelImplementationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ruleLabelImplementationList_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                     const class GALGAS_formalParameterListForGeneration & inOperand1,
                                                                                     const class GALGAS_formalParameterSignature & inOperand2,
                                                                                     const class GALGAS_location & inOperand3,
                                                                                     const class GALGAS_semanticInstructionListForGeneration & inOperand4,
                                                                                     class Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ruleLabelImplementationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ruleLabelImplementationList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ruleLabelImplementationList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ruleDeclarationList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ruleDeclarationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_ruleDeclarationList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_ruleDeclarationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_string & in_mNonterminalName,
                                                 const class GALGAS_uint & in_mRuleIndex,
                                                 const class GALGAS_ruleLabelImplementationList & in_mLabelImplementationList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ruleDeclarationList init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ruleDeclarationList extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ruleDeclarationList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_ruleDeclarationList class_func_listWithValue (const class GALGAS_string & inOperand0,
                                                                            const class GALGAS_uint & inOperand1,
                                                                            const class GALGAS_ruleLabelImplementationList & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_ruleDeclarationList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_uint & inOperand1,
                                                     const class GALGAS_ruleLabelImplementationList & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_ruleDeclarationList add_operation (const GALGAS_ruleDeclarationList & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_string constinArgument0,
                                               class GALGAS_uint constinArgument1,
                                               class GALGAS_ruleLabelImplementationList constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      class GALGAS_ruleLabelImplementationList constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_uint & outArgument1,
                                                 class GALGAS_ruleLabelImplementationList & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_uint & outArgument1,
                                                class GALGAS_ruleLabelImplementationList & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_uint & outArgument1,
                                                      class GALGAS_ruleLabelImplementationList & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLabelImplementationListAtIndex (class GALGAS_ruleLabelImplementationList constinArgument0,
                                                                           class GALGAS_uint constinArgument1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMNonterminalNameAtIndex (class GALGAS_string constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRuleIndexAtIndex (class GALGAS_uint constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_uint & outArgument1,
                                              class GALGAS_ruleLabelImplementationList & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_uint & outArgument1,
                                             class GALGAS_ruleLabelImplementationList & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_ruleLabelImplementationList getter_mLabelImplementationListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mNonterminalNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mRuleIndexAtIndex (const class GALGAS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_ruleDeclarationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_ruleDeclarationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_ruleDeclarationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_ruleDeclarationList_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_ruleDeclarationList ;
 
} ; // End of GALGAS_ruleDeclarationList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_ruleDeclarationList : public cGenericAbstractEnumerator {
  public: cEnumerator_ruleDeclarationList (const GALGAS_ruleDeclarationList & inEnumeratedObject,
                                           const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mNonterminalName (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mRuleIndex (LOCATION_ARGS) const ;
  public: class GALGAS_ruleLabelImplementationList current_mLabelImplementationList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_ruleDeclarationList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ruleDeclarationList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ruleDeclarationList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ruleDeclarationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mNonterminalName ;
  public: inline GALGAS_string readProperty_mNonterminalName (void) const {
    return mProperty_mNonterminalName ;
  }

  public: GALGAS_uint mProperty_mRuleIndex ;
  public: inline GALGAS_uint readProperty_mRuleIndex (void) const {
    return mProperty_mRuleIndex ;
  }

  public: GALGAS_ruleLabelImplementationList mProperty_mLabelImplementationList ;
  public: inline GALGAS_ruleLabelImplementationList readProperty_mLabelImplementationList (void) const {
    return mProperty_mLabelImplementationList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_ruleDeclarationList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMNonterminalName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNonterminalName = inValue ;
  }

  public: inline void setter_setMRuleIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRuleIndex = inValue ;
  }

  public: inline void setter_setMLabelImplementationList (const GALGAS_ruleLabelImplementationList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLabelImplementationList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_ruleDeclarationList_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_ruleDeclarationList_2D_element (const GALGAS_string & in_mNonterminalName,
                                                 const GALGAS_uint & in_mRuleIndex,
                                                 const GALGAS_ruleLabelImplementationList & in_mLabelImplementationList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ruleDeclarationList_2D_element init_21__21__21_ (const class GALGAS_string & inOperand0,
                                                                         const class GALGAS_uint & inOperand1,
                                                                         const class GALGAS_ruleLabelImplementationList & inOperand2,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ruleDeclarationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ruleDeclarationList_2D_element class_func_new (const class GALGAS_string & inOperand0,
                                                                             const class GALGAS_uint & inOperand1,
                                                                             const class GALGAS_ruleLabelImplementationList & inOperand2,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ruleDeclarationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ruleDeclarationList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ruleDeclarationList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@syntaxInstructionAST analyzeSyntaxInstruction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeSyntaxInstruction (class cPtr_syntaxInstructionAST * inObject,
                                                   const class GALGAS_lstring constin_inUsefulnessCallerEntityName,
                                                   class GALGAS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                   const class GALGAS_analysisContext constin_inAnalysisContext,
                                                   class GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                   const class GALGAS_bool constin_inHasTranslateFeature,
                                                   const class GALGAS_terminalMap constin_inTerminalMap,
                                                   const class GALGAS_string constin_inLexiqueName,
                                                   const class GALGAS_nonterminalMap constin_inNonterminalMap,
                                                   const class GALGAS_string constin_inComponentName,
                                                   const class GALGAS_stringset constin_inIndexNameSet,
                                                   class GALGAS_semanticInstructionListForGeneration & io_ioInstructionListForGeneration,
                                                   class GALGAS_localVarManager & io_ioVariableMap,
                                                   class GALGAS_uint & io_ioSelectMethodCount,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractInputParameter analyzeInputParameter'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeInputParameter (class cPtr_abstractInputParameter * inObject,
                                                const class GALGAS_analysisContext constin_inAnalysisContext,
                                                class GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                const class GALGAS_lexicalTypeEnum constin_inRequiredLexicalType,
                                                const class GALGAS_string constin_inLexicalAttributeName,
                                                class GALGAS_terminalCheckAssignementList & io_ioTerminalCheckAssignementList,
                                                class GALGAS_localVarManager & io_ioVariableMap,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractGrammarInstructionSyntaxDirectedTranslationResult analyzeSDT'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeSDT (class cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                     const class GALGAS_analysisContext constin_inAnalysisContext,
                                     class GALGAS_unifiedTypeMap & io_ioTypeMap,
                                     const class GALGAS_bool constin_inHasTranslateFeature,
                                     class GALGAS_localVarManager & io_ioVariableMap,
                                     class Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractGrammarInstructionSyntaxDirectedTranslationResult generateCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateCode (class cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                       const class GALGAS_bool constin_inGenerateSyntaxDirectedTranslationString,
                                       const class GALGAS_string constin_inAccessMethodName,
                                       class GALGAS_stringset & io_ioUnusedVariableCppNameSet,
                                       class GALGAS_string & io_ioGeneratedCode,
                                       class Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxDeclarationForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_syntaxDeclarationForGeneration : public GALGAS_semanticDeclarationForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_syntaxDeclarationForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_syntaxDeclarationForGeneration (const class cPtr_syntaxDeclarationForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_string readProperty_mSyntaxComponentName (void) const ;

  public: class GALGAS_string readProperty_mLexiqueName (void) const ;

  public: class GALGAS_nonterminalMap readProperty_mNonterminalDeclarationMap (void) const ;

  public: class GALGAS_ruleDeclarationList readProperty_mRuleDeclarationList (void) const ;

  public: class GALGAS_uint readProperty_mSelectMethodCount (void) const ;

  public: class GALGAS_bool readProperty_mHasIndexing (void) const ;

  public: class GALGAS_bool readProperty_mHasTranslateFeature (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_syntaxDeclarationForGeneration init_21__21__21__21__21__21__21_ (const class GALGAS_string & inOperand0,
                                                                                         const class GALGAS_string & inOperand1,
                                                                                         const class GALGAS_nonterminalMap & inOperand2,
                                                                                         const class GALGAS_ruleDeclarationList & inOperand3,
                                                                                         const class GALGAS_uint & inOperand4,
                                                                                         const class GALGAS_bool & inOperand5,
                                                                                         const class GALGAS_bool & inOperand6,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_syntaxDeclarationForGeneration extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_syntaxDeclarationForGeneration class_func_new (const class GALGAS_string & inOperand0,
                                                                             const class GALGAS_string & inOperand1,
                                                                             const class GALGAS_nonterminalMap & inOperand2,
                                                                             const class GALGAS_ruleDeclarationList & inOperand3,
                                                                             const class GALGAS_uint & inOperand4,
                                                                             const class GALGAS_bool & inOperand5,
                                                                             const class GALGAS_bool & inOperand6
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_syntaxDeclarationForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_syntaxDeclarationForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @syntaxDeclarationForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_syntaxDeclarationForGeneration : public cPtr_semanticDeclarationForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void syntaxDeclarationForGeneration_init_21__21__21__21__21__21__21_ (const class GALGAS_string & inOperand0,
                                                                                const class GALGAS_string & inOperand1,
                                                                                const class GALGAS_nonterminalMap & inOperand2,
                                                                                const class GALGAS_ruleDeclarationList & inOperand3,
                                                                                const class GALGAS_uint & inOperand4,
                                                                                const class GALGAS_bool & inOperand5,
                                                                                const class GALGAS_bool & inOperand6,
                                                                                Compiler * inCompiler) ;


//--- Extension getter getImplementationCppFileName
  public: virtual class GALGAS_string getter_getImplementationCppFileName (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter hasCppHeaderFile
  public: virtual class GALGAS_bool getter_hasCppHeaderFile (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter headerKind
  public: virtual class GALGAS_headerKind getter_headerKind (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter isPredefined
  public: virtual class GALGAS_bool getter_isPredefined (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method appendDeclaration1
  public: virtual void method_appendDeclaration_31_ (class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_string & arg_outHeader,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method appendSpecificImplementation
  public: virtual void method_appendSpecificImplementation (const class GALGAS_unifiedTypeMap arg_inUnifiedTypeMap,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_string & arg_outImplementation,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mSyntaxComponentName ;
  public: GALGAS_string mProperty_mLexiqueName ;
  public: GALGAS_nonterminalMap mProperty_mNonterminalDeclarationMap ;
  public: GALGAS_ruleDeclarationList mProperty_mRuleDeclarationList ;
  public: GALGAS_uint mProperty_mSelectMethodCount ;
  public: GALGAS_bool mProperty_mHasIndexing ;
  public: GALGAS_bool mProperty_mHasTranslateFeature ;


//--- Default constructor
  public: cPtr_syntaxDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_syntaxDeclarationForGeneration (const GALGAS_string & in_mSyntaxComponentName,
                                               const GALGAS_string & in_mLexiqueName,
                                               const GALGAS_nonterminalMap & in_mNonterminalDeclarationMap,
                                               const GALGAS_ruleDeclarationList & in_mRuleDeclarationList,
                                               const GALGAS_uint & in_mSelectMethodCount,
                                               const GALGAS_bool & in_mHasIndexing,
                                               const GALGAS_bool & in_mHasTranslateFeature
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @syntaxDeclarationForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_syntaxDeclarationForGeneration_2D_weak : public GALGAS_semanticDeclarationForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_syntaxDeclarationForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_syntaxDeclarationForGeneration_2D_weak (const class GALGAS_syntaxDeclarationForGeneration & inSource) ;

  public: GALGAS_syntaxDeclarationForGeneration_2D_weak & operator = (const class GALGAS_syntaxDeclarationForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_syntaxDeclarationForGeneration bang_syntaxDeclarationForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_syntaxDeclarationForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_syntaxDeclarationForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_syntaxDeclarationForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_syntaxDeclarationForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @uselessEntityLocationMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_uselessEntityLocationMap ;

//--------------------------------------------------------------------------------------------------

class GALGAS_uselessEntityLocationMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_uselessEntityLocationMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_uselessEntityLocationMap (const GALGAS_uselessEntityLocationMap & inSource) ;
  public: GALGAS_uselessEntityLocationMap & operator = (const GALGAS_uselessEntityLocationMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_uselessEntityLocationMap init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_uselessEntityLocationMap extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_uselessEntityLocationMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_uselessEntityLocationMap class_func_mapWithMapToOverride (const class GALGAS_uselessEntityLocationMap & inOperand0
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_location & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_uselessEntityLocationMap add_operation (const GALGAS_uselessEntityLocationMap & inOperand,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_location constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLocationForKey (class GALGAS_location constinArgument0,
                                                           class GALGAS_string constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mLocationForKey (const class GALGAS_string & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uselessEntityLocationMap getter_overriddenMap (Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_location & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_uselessEntityLocationMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                     const GALGAS_string & inKey
                                                                                                     COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GALGAS_uselessEntityLocationMap_2D_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class cEnumerator_uselessEntityLocationMap ;
 
} ; // End of GALGAS_uselessEntityLocationMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_uselessEntityLocationMap : public cGenericAbstractEnumerator {
  public: cEnumerator_uselessEntityLocationMap (const GALGAS_uselessEntityLocationMap & inEnumeratedObject,
                                                const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_location current_mLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_uselessEntityLocationMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_uselessEntityLocationMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@uselessEntityLocationMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_uselessEntityLocationMap : public cMapElement {
//--- Map attributes
  public: GALGAS_location mProperty_mLocation ;

//--- Constructors
  public: cMapElement_uselessEntityLocationMap (const GALGAS_uselessEntityLocationMap_2D_element & inValue
                                                COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_uselessEntityLocationMap (const GALGAS_lstring & inKey,
                                                const GALGAS_location & in_mLocation
                                                COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @uselessEntityLocationMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_uselessEntityLocationMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_location mProperty_mLocation ;
  public: inline GALGAS_location readProperty_mLocation (void) const {
    return mProperty_mLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_uselessEntityLocationMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLocation = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_uselessEntityLocationMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_uselessEntityLocationMap_2D_element (const GALGAS_lstring & in_lkey,
                                                      const GALGAS_location & in_mLocation) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_uselessEntityLocationMap_2D_element init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_location & inOperand1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_uselessEntityLocationMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_uselessEntityLocationMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_location & inOperand1,
                                                                                  class Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_uselessEntityLocationMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_uselessEntityLocationMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_uselessEntityLocationMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ifExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ifExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_ifExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_ifExpressionAST (const class cPtr_ifExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mIfExpression (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mThenExpression (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mElseExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ifExpressionAST init_21__21__21__21_ (const class GALGAS_location & inOperand0,
                                                              const class GALGAS_semanticExpressionAST & inOperand1,
                                                              const class GALGAS_semanticExpressionAST & inOperand2,
                                                              const class GALGAS_semanticExpressionAST & inOperand3,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ifExpressionAST extractObject (const GALGAS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ifExpressionAST class_func_new (const class GALGAS_location & inOperand0,
                                                              const class GALGAS_semanticExpressionAST & inOperand1,
                                                              const class GALGAS_semanticExpressionAST & inOperand2,
                                                              const class GALGAS_semanticExpressionAST & inOperand3
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ifExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ifExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @ifExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_ifExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ifExpressionAST_init_21__21__21__21_ (const class GALGAS_location & inOperand0,
                                                     const class GALGAS_semanticExpressionAST & inOperand1,
                                                     const class GALGAS_semanticExpressionAST & inOperand2,
                                                     const class GALGAS_semanticExpressionAST & inOperand3,
                                                     Compiler * inCompiler) ;


//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_unifiedTypeMapEntry arg_inType,
           const class GALGAS_analysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_localVarManager & arg_ioVariableMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_semanticExpressionAST mProperty_mIfExpression ;
  public: GALGAS_semanticExpressionAST mProperty_mThenExpression ;
  public: GALGAS_semanticExpressionAST mProperty_mElseExpression ;


//--- Default constructor
  public: cPtr_ifExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ifExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                const GALGAS_semanticExpressionAST & in_mIfExpression,
                                const GALGAS_semanticExpressionAST & in_mThenExpression,
                                const GALGAS_semanticExpressionAST & in_mElseExpression
                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ifExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ifExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ifExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ifExpressionAST_2D_weak (const class GALGAS_ifExpressionAST & inSource) ;

  public: GALGAS_ifExpressionAST_2D_weak & operator = (const class GALGAS_ifExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ifExpressionAST bang_ifExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ifExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ifExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ifExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ifExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ifExpressionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ifExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_ifExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_ifExpressionForGeneration (const class cPtr_ifExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_semanticExpressionForGeneration readProperty_mIfExpression (void) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_mThenExpression (void) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_mElseExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_ifExpressionForGeneration init_21__21__21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                            const class GALGAS_location & inOperand1,
                                                                            const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                            const class GALGAS_semanticExpressionForGeneration & inOperand3,
                                                                            const class GALGAS_semanticExpressionForGeneration & inOperand4,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ifExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ifExpressionForGeneration class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                        const class GALGAS_location & inOperand1,
                                                                        const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                        const class GALGAS_semanticExpressionForGeneration & inOperand3,
                                                                        const class GALGAS_semanticExpressionForGeneration & inOperand4
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ifExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ifExpressionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @ifExpressionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_ifExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ifExpressionForGeneration_init_21__21__21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                   const class GALGAS_location & inOperand1,
                                                                   const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                   const class GALGAS_semanticExpressionForGeneration & inOperand3,
                                                                   const class GALGAS_semanticExpressionForGeneration & inOperand4,
                                                                   Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GALGAS_string & arg_ioGeneratedCode,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_uint & arg_ioTemporaryVariableIndex,
           class GALGAS_stringset & arg_ioUnusedVariableCppNameSet,
           class GALGAS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_semanticExpressionForGeneration mProperty_mIfExpression ;
  public: GALGAS_semanticExpressionForGeneration mProperty_mThenExpression ;
  public: GALGAS_semanticExpressionForGeneration mProperty_mElseExpression ;


//--- Default constructor
  public: cPtr_ifExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ifExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                          const GALGAS_location & in_mLocation,
                                          const GALGAS_semanticExpressionForGeneration & in_mIfExpression,
                                          const GALGAS_semanticExpressionForGeneration & in_mThenExpression,
                                          const GALGAS_semanticExpressionForGeneration & in_mElseExpression
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ifExpressionForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ifExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_ifExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_ifExpressionForGeneration_2D_weak (const class GALGAS_ifExpressionForGeneration & inSource) ;

  public: GALGAS_ifExpressionForGeneration_2D_weak & operator = (const class GALGAS_ifExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_ifExpressionForGeneration bang_ifExpressionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ifExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ifExpressionForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ifExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ifExpressionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @unaryPlusExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_unaryPlusExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_unaryPlusExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_unaryPlusExpressionAST (const class cPtr_unaryPlusExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_unaryPlusExpressionAST init_21__21_ (const class GALGAS_location & inOperand0,
                                                             const class GALGAS_semanticExpressionAST & inOperand1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_unaryPlusExpressionAST extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_unaryPlusExpressionAST class_func_new (const class GALGAS_location & inOperand0,
                                                                     const class GALGAS_semanticExpressionAST & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_unaryPlusExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_unaryPlusExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unaryPlusExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @unaryPlusExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_unaryPlusExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void unaryPlusExpressionAST_init_21__21_ (const class GALGAS_location & inOperand0,
                                                    const class GALGAS_semanticExpressionAST & inOperand1,
                                                    Compiler * inCompiler) ;


//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_unifiedTypeMapEntry arg_inType,
           const class GALGAS_analysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_localVarManager & arg_ioVariableMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_semanticExpressionAST mProperty_mExpression ;


//--- Default constructor
  public: cPtr_unaryPlusExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_unaryPlusExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                       const GALGAS_semanticExpressionAST & in_mExpression
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @unaryPlusExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_unaryPlusExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_unaryPlusExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_unaryPlusExpressionAST_2D_weak (const class GALGAS_unaryPlusExpressionAST & inSource) ;

  public: GALGAS_unaryPlusExpressionAST_2D_weak & operator = (const class GALGAS_unaryPlusExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_unaryPlusExpressionAST bang_unaryPlusExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_unaryPlusExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_unaryPlusExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_unaryPlusExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_unaryPlusExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unaryPlusExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @unaryMinusExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_unaryMinusExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_unaryMinusExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_unaryMinusExpressionAST (const class cPtr_unaryMinusExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_unaryMinusExpressionAST init_21__21_ (const class GALGAS_location & inOperand0,
                                                              const class GALGAS_semanticExpressionAST & inOperand1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_unaryMinusExpressionAST extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_unaryMinusExpressionAST class_func_new (const class GALGAS_location & inOperand0,
                                                                      const class GALGAS_semanticExpressionAST & inOperand1
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_unaryMinusExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_unaryMinusExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unaryMinusExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @unaryMinusExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_unaryMinusExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void unaryMinusExpressionAST_init_21__21_ (const class GALGAS_location & inOperand0,
                                                     const class GALGAS_semanticExpressionAST & inOperand1,
                                                     Compiler * inCompiler) ;


//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_unifiedTypeMapEntry arg_inType,
           const class GALGAS_analysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_localVarManager & arg_ioVariableMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_semanticExpressionAST mProperty_mExpression ;


//--- Default constructor
  public: cPtr_unaryMinusExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_unaryMinusExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                        const GALGAS_semanticExpressionAST & in_mExpression
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @unaryMinusExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_unaryMinusExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_unaryMinusExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_unaryMinusExpressionAST_2D_weak (const class GALGAS_unaryMinusExpressionAST & inSource) ;

  public: GALGAS_unaryMinusExpressionAST_2D_weak & operator = (const class GALGAS_unaryMinusExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_unaryMinusExpressionAST bang_unaryMinusExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_unaryMinusExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_unaryMinusExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_unaryMinusExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_unaryMinusExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unaryMinusExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @unaryMinusExpressionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_unaryMinusExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_unaryMinusExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_unaryMinusExpressionForGeneration (const class cPtr_unaryMinusExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_semanticExpressionForGeneration readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_unaryMinusExpressionForGeneration init_21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                            const class GALGAS_location & inOperand1,
                                                                            const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_unaryMinusExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_unaryMinusExpressionForGeneration class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                const class GALGAS_location & inOperand1,
                                                                                const class GALGAS_semanticExpressionForGeneration & inOperand2
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_unaryMinusExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_unaryMinusExpressionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unaryMinusExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @unaryMinusExpressionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_unaryMinusExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void unaryMinusExpressionForGeneration_init_21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                   const class GALGAS_location & inOperand1,
                                                                   const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                   Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GALGAS_string & arg_ioGeneratedCode,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_uint & arg_ioTemporaryVariableIndex,
           class GALGAS_stringset & arg_ioUnusedVariableCppNameSet,
           class GALGAS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_semanticExpressionForGeneration mProperty_mExpression ;


//--- Default constructor
  public: cPtr_unaryMinusExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_unaryMinusExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                  const GALGAS_location & in_mLocation,
                                                  const GALGAS_semanticExpressionForGeneration & in_mExpression
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @unaryMinusExpressionForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_unaryMinusExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_unaryMinusExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_unaryMinusExpressionForGeneration_2D_weak (const class GALGAS_unaryMinusExpressionForGeneration & inSource) ;

  public: GALGAS_unaryMinusExpressionForGeneration_2D_weak & operator = (const class GALGAS_unaryMinusExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_unaryMinusExpressionForGeneration bang_unaryMinusExpressionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_unaryMinusExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_unaryMinusExpressionForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_unaryMinusExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_unaryMinusExpressionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unaryMinusExpressionForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @varInExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_varInExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_varInExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_varInExpressionAST (const class cPtr_varInExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mVarName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_varInExpressionAST init_21_ (const class GALGAS_lstring & inOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_varInExpressionAST extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_varInExpressionAST class_func_new (const class GALGAS_lstring & inOperand0
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_varInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_varInExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varInExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @varInExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_varInExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void varInExpressionAST_init_21_ (const class GALGAS_lstring & inOperand0,
                                            Compiler * inCompiler) ;


//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_unifiedTypeMapEntry arg_inType,
           const class GALGAS_analysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_localVarManager & arg_ioVariableMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mVarName ;


//--- Default constructor
  public: cPtr_varInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_varInExpressionAST (const GALGAS_lstring & in_mVarName
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @varInExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_varInExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_varInExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_varInExpressionAST_2D_weak (const class GALGAS_varInExpressionAST & inSource) ;

  public: GALGAS_varInExpressionAST_2D_weak & operator = (const class GALGAS_varInExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_varInExpressionAST bang_varInExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_varInExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_varInExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_varInExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_varInExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varInExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @varInExpressionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_varInExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_varInExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_varInExpressionForGeneration (const class cPtr_varInExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_string readProperty_mCppVarName (void) const ;

  public: class GALGAS_string readProperty_mNameForCheckingFormalParameterUsing (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_varInExpressionForGeneration init_21__21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                           const class GALGAS_location & inOperand1,
                                                                           const class GALGAS_string & inOperand2,
                                                                           const class GALGAS_string & inOperand3,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_varInExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_varInExpressionForGeneration class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                           const class GALGAS_location & inOperand1,
                                                                           const class GALGAS_string & inOperand2,
                                                                           const class GALGAS_string & inOperand3
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_varInExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_varInExpressionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varInExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @varInExpressionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_varInExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void varInExpressionForGeneration_init_21__21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                  const class GALGAS_location & inOperand1,
                                                                  const class GALGAS_string & inOperand2,
                                                                  const class GALGAS_string & inOperand3,
                                                                  Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GALGAS_string & arg_ioGeneratedCode,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_uint & arg_ioTemporaryVariableIndex,
           class GALGAS_stringset & arg_ioUnusedVariableCppNameSet,
           class GALGAS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mCppVarName ;
  public: GALGAS_string mProperty_mNameForCheckingFormalParameterUsing ;


//--- Default constructor
  public: cPtr_varInExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_varInExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                             const GALGAS_location & in_mLocation,
                                             const GALGAS_string & in_mCppVarName,
                                             const GALGAS_string & in_mNameForCheckingFormalParameterUsing
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @varInExpressionForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_varInExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_varInExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_varInExpressionForGeneration_2D_weak (const class GALGAS_varInExpressionForGeneration & inSource) ;

  public: GALGAS_varInExpressionForGeneration_2D_weak & operator = (const class GALGAS_varInExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_varInExpressionForGeneration bang_varInExpressionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_varInExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_varInExpressionForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_varInExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_varInExpressionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varInExpressionForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @actualOutputArgumentList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_actualOutputArgumentList_2D_element : public AC_GALGAS_root {
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
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_actualOutputArgumentList_2D_element (void) ;

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

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_actualOutputArgumentList_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_actualOutputArgumentList_2D_element (const GALGAS_lstring & in_mActualSelector,
                                                      const GALGAS_semanticExpressionAST & in_mExpression,
                                                      const GALGAS_location & in_mEndOfExpressionLocation) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_actualOutputArgumentList_2D_element init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_semanticExpressionAST & inOperand1,
                                                                              const class GALGAS_location & inOperand2,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_actualOutputArgumentList_2D_element extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_actualOutputArgumentList_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_semanticExpressionAST & inOperand1,
                                                                                  const class GALGAS_location & inOperand2,
                                                                                  class Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_actualOutputArgumentList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_actualOutputArgumentList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualOutputArgumentList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@actualOutputArgumentList enterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterInSemanticContext (const class GALGAS_actualOutputArgumentList inObject,
                                             class GALGAS_unifiedTypeMap & io_ioTypeMap,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @trueExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_trueExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_trueExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_trueExpressionAST (const class cPtr_trueExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_location readProperty_mLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_trueExpressionAST init_21_ (const class GALGAS_location & inOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_trueExpressionAST extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_trueExpressionAST class_func_new (const class GALGAS_location & inOperand0
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_trueExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_trueExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_trueExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @trueExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_trueExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void trueExpressionAST_init_21_ (const class GALGAS_location & inOperand0,
                                           Compiler * inCompiler) ;


//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_unifiedTypeMapEntry arg_inType,
           const class GALGAS_analysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_localVarManager & arg_ioVariableMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mLocation ;


//--- Default constructor
  public: cPtr_trueExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_trueExpressionAST (const GALGAS_location & in_mLocation
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @trueExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_trueExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_trueExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_trueExpressionAST_2D_weak (const class GALGAS_trueExpressionAST & inSource) ;

  public: GALGAS_trueExpressionAST_2D_weak & operator = (const class GALGAS_trueExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_trueExpressionAST bang_trueExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_trueExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_trueExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_trueExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_trueExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_trueExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @falseExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_falseExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_falseExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_falseExpressionAST (const class cPtr_falseExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_location readProperty_mLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_falseExpressionAST init_21_ (const class GALGAS_location & inOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_falseExpressionAST extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_falseExpressionAST class_func_new (const class GALGAS_location & inOperand0
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_falseExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_falseExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_falseExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @falseExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_falseExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void falseExpressionAST_init_21_ (const class GALGAS_location & inOperand0,
                                            Compiler * inCompiler) ;


//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_unifiedTypeMapEntry arg_inType,
           const class GALGAS_analysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_localVarManager & arg_ioVariableMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mLocation ;


//--- Default constructor
  public: cPtr_falseExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_falseExpressionAST (const GALGAS_location & in_mLocation
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @falseExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_falseExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_falseExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_falseExpressionAST_2D_weak (const class GALGAS_falseExpressionAST & inSource) ;

  public: GALGAS_falseExpressionAST_2D_weak & operator = (const class GALGAS_falseExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_falseExpressionAST bang_falseExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_falseExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_falseExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_falseExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_falseExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_falseExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @trueExpressionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_trueExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_trueExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_trueExpressionForGeneration (const class cPtr_trueExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_trueExpressionForGeneration init_21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                  const class GALGAS_location & inOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_trueExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_trueExpressionForGeneration class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                          const class GALGAS_location & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_trueExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_trueExpressionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_trueExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @trueExpressionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_trueExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void trueExpressionForGeneration_init_21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                         const class GALGAS_location & inOperand1,
                                                         Compiler * inCompiler) ;


//--- Extension getter isTrueExpression
  public: virtual class GALGAS_bool getter_isTrueExpression (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GALGAS_string & arg_ioGeneratedCode,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_uint & arg_ioTemporaryVariableIndex,
           class GALGAS_stringset & arg_ioUnusedVariableCppNameSet,
           class GALGAS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_trueExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_trueExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                            const GALGAS_location & in_mLocation
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @trueExpressionForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_trueExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_trueExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_trueExpressionForGeneration_2D_weak (const class GALGAS_trueExpressionForGeneration & inSource) ;

  public: GALGAS_trueExpressionForGeneration_2D_weak & operator = (const class GALGAS_trueExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_trueExpressionForGeneration bang_trueExpressionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_trueExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_trueExpressionForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_trueExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_trueExpressionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_trueExpressionForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @falseExpressionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_falseExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_falseExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_falseExpressionForGeneration (const class cPtr_falseExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_falseExpressionForGeneration init_21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                   const class GALGAS_location & inOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_falseExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_falseExpressionForGeneration class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                           const class GALGAS_location & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_falseExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_falseExpressionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_falseExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @falseExpressionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_falseExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void falseExpressionForGeneration_init_21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                          const class GALGAS_location & inOperand1,
                                                          Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GALGAS_string & arg_ioGeneratedCode,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_uint & arg_ioTemporaryVariableIndex,
           class GALGAS_stringset & arg_ioUnusedVariableCppNameSet,
           class GALGAS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties


//--- Default constructor
  public: cPtr_falseExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_falseExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                             const GALGAS_location & in_mLocation
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @falseExpressionForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_falseExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_falseExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_falseExpressionForGeneration_2D_weak (const class GALGAS_falseExpressionForGeneration & inSource) ;

  public: GALGAS_falseExpressionForGeneration_2D_weak & operator = (const class GALGAS_falseExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_falseExpressionForGeneration bang_falseExpressionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_falseExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_falseExpressionForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_falseExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_falseExpressionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_falseExpressionForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @literalStringExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_literalStringExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_literalStringExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_literalStringExpressionAST (const class cPtr_literalStringExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_location readProperty_mLocation (void) const ;

  public: class GALGAS_stringlist readProperty_mStringSequence (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_literalStringExpressionAST init_21__21_ (const class GALGAS_location & inOperand0,
                                                                 const class GALGAS_stringlist & inOperand1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_literalStringExpressionAST extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_literalStringExpressionAST class_func_new (const class GALGAS_location & inOperand0,
                                                                         const class GALGAS_stringlist & inOperand1
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_literalStringExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_literalStringExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalStringExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @literalStringExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_literalStringExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void literalStringExpressionAST_init_21__21_ (const class GALGAS_location & inOperand0,
                                                        const class GALGAS_stringlist & inOperand1,
                                                        Compiler * inCompiler) ;


//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_unifiedTypeMapEntry arg_inType,
           const class GALGAS_analysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_localVarManager & arg_ioVariableMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mLocation ;
  public: GALGAS_stringlist mProperty_mStringSequence ;


//--- Default constructor
  public: cPtr_literalStringExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_literalStringExpressionAST (const GALGAS_location & in_mLocation,
                                           const GALGAS_stringlist & in_mStringSequence
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @literalStringExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_literalStringExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_literalStringExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_literalStringExpressionAST_2D_weak (const class GALGAS_literalStringExpressionAST & inSource) ;

  public: GALGAS_literalStringExpressionAST_2D_weak & operator = (const class GALGAS_literalStringExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_literalStringExpressionAST bang_literalStringExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_literalStringExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_literalStringExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_literalStringExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_literalStringExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalStringExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @literalStringExpressionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_literalStringExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_literalStringExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_literalStringExpressionForGeneration (const class cPtr_literalStringExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_string readProperty_mString (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_literalStringExpressionForGeneration init_21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                               const class GALGAS_location & inOperand1,
                                                                               const class GALGAS_string & inOperand2,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_literalStringExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_literalStringExpressionForGeneration class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                   const class GALGAS_location & inOperand1,
                                                                                   const class GALGAS_string & inOperand2
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_literalStringExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_literalStringExpressionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalStringExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @literalStringExpressionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_literalStringExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void literalStringExpressionForGeneration_init_21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                      const class GALGAS_location & inOperand1,
                                                                      const class GALGAS_string & inOperand2,
                                                                      Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GALGAS_string & arg_ioGeneratedCode,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_uint & arg_ioTemporaryVariableIndex,
           class GALGAS_stringset & arg_ioUnusedVariableCppNameSet,
           class GALGAS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mString ;


//--- Default constructor
  public: cPtr_literalStringExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_literalStringExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                     const GALGAS_location & in_mLocation,
                                                     const GALGAS_string & in_mString
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @literalStringExpressionForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_literalStringExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_literalStringExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_literalStringExpressionForGeneration_2D_weak (const class GALGAS_literalStringExpressionForGeneration & inSource) ;

  public: GALGAS_literalStringExpressionForGeneration_2D_weak & operator = (const class GALGAS_literalStringExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_literalStringExpressionForGeneration bang_literalStringExpressionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_literalStringExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_literalStringExpressionForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_literalStringExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_literalStringExpressionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalStringExpressionForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @literalCharExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_literalCharExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_literalCharExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_literalCharExpressionAST (const class cPtr_literalCharExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lchar readProperty_mCharacter (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_literalCharExpressionAST init_21_ (const class GALGAS_lchar & inOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_literalCharExpressionAST extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_literalCharExpressionAST class_func_new (const class GALGAS_lchar & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_literalCharExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_literalCharExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalCharExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @literalCharExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_literalCharExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void literalCharExpressionAST_init_21_ (const class GALGAS_lchar & inOperand0,
                                                  Compiler * inCompiler) ;


//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_unifiedTypeMapEntry arg_inType,
           const class GALGAS_analysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_localVarManager & arg_ioVariableMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lchar mProperty_mCharacter ;


//--- Default constructor
  public: cPtr_literalCharExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_literalCharExpressionAST (const GALGAS_lchar & in_mCharacter
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @literalCharExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_literalCharExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_literalCharExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_literalCharExpressionAST_2D_weak (const class GALGAS_literalCharExpressionAST & inSource) ;

  public: GALGAS_literalCharExpressionAST_2D_weak & operator = (const class GALGAS_literalCharExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_literalCharExpressionAST bang_literalCharExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_literalCharExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_literalCharExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_literalCharExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_literalCharExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalCharExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @literalCharExpressionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_literalCharExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_literalCharExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_literalCharExpressionForGeneration (const class cPtr_literalCharExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_char readProperty_mCharacter (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_literalCharExpressionForGeneration init_21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                             const class GALGAS_location & inOperand1,
                                                                             const class GALGAS_char & inOperand2,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_literalCharExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_literalCharExpressionForGeneration class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                 const class GALGAS_location & inOperand1,
                                                                                 const class GALGAS_char & inOperand2
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_literalCharExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_literalCharExpressionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalCharExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @literalCharExpressionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_literalCharExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void literalCharExpressionForGeneration_init_21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                    const class GALGAS_location & inOperand1,
                                                                    const class GALGAS_char & inOperand2,
                                                                    Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GALGAS_string & arg_ioGeneratedCode,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_uint & arg_ioTemporaryVariableIndex,
           class GALGAS_stringset & arg_ioUnusedVariableCppNameSet,
           class GALGAS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_char mProperty_mCharacter ;


//--- Default constructor
  public: cPtr_literalCharExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_literalCharExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                   const GALGAS_location & in_mLocation,
                                                   const GALGAS_char & in_mCharacter
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @literalCharExpressionForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_literalCharExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_literalCharExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_literalCharExpressionForGeneration_2D_weak (const class GALGAS_literalCharExpressionForGeneration & inSource) ;

  public: GALGAS_literalCharExpressionForGeneration_2D_weak & operator = (const class GALGAS_literalCharExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_literalCharExpressionForGeneration bang_literalCharExpressionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_literalCharExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_literalCharExpressionForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_literalCharExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_literalCharExpressionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalCharExpressionForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @literalDoubleExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_literalDoubleExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_literalDoubleExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_literalDoubleExpressionAST (const class cPtr_literalDoubleExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_ldouble readProperty_mValue (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_literalDoubleExpressionAST init_21_ (const class GALGAS_ldouble & inOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_literalDoubleExpressionAST extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_literalDoubleExpressionAST class_func_new (const class GALGAS_ldouble & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_literalDoubleExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_literalDoubleExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalDoubleExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @literalDoubleExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_literalDoubleExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void literalDoubleExpressionAST_init_21_ (const class GALGAS_ldouble & inOperand0,
                                                    Compiler * inCompiler) ;


//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_unifiedTypeMapEntry arg_inType,
           const class GALGAS_analysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_localVarManager & arg_ioVariableMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_ldouble mProperty_mValue ;


//--- Default constructor
  public: cPtr_literalDoubleExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_literalDoubleExpressionAST (const GALGAS_ldouble & in_mValue
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @literalDoubleExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_literalDoubleExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_literalDoubleExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_literalDoubleExpressionAST_2D_weak (const class GALGAS_literalDoubleExpressionAST & inSource) ;

  public: GALGAS_literalDoubleExpressionAST_2D_weak & operator = (const class GALGAS_literalDoubleExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_literalDoubleExpressionAST bang_literalDoubleExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_literalDoubleExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_literalDoubleExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_literalDoubleExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_literalDoubleExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalDoubleExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @literalDoubleExpressionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_literalDoubleExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_literalDoubleExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_literalDoubleExpressionForGeneration (const class cPtr_literalDoubleExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_double readProperty_mValue (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_literalDoubleExpressionForGeneration init_21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                               const class GALGAS_location & inOperand1,
                                                                               const class GALGAS_double & inOperand2,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_literalDoubleExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_literalDoubleExpressionForGeneration class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                   const class GALGAS_location & inOperand1,
                                                                                   const class GALGAS_double & inOperand2
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_literalDoubleExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_literalDoubleExpressionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalDoubleExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @literalDoubleExpressionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_literalDoubleExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void literalDoubleExpressionForGeneration_init_21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                      const class GALGAS_location & inOperand1,
                                                                      const class GALGAS_double & inOperand2,
                                                                      Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GALGAS_string & arg_ioGeneratedCode,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_uint & arg_ioTemporaryVariableIndex,
           class GALGAS_stringset & arg_ioUnusedVariableCppNameSet,
           class GALGAS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_double mProperty_mValue ;


//--- Default constructor
  public: cPtr_literalDoubleExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_literalDoubleExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                     const GALGAS_location & in_mLocation,
                                                     const GALGAS_double & in_mValue
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @literalDoubleExpressionForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_literalDoubleExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_literalDoubleExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_literalDoubleExpressionForGeneration_2D_weak (const class GALGAS_literalDoubleExpressionForGeneration & inSource) ;

  public: GALGAS_literalDoubleExpressionForGeneration_2D_weak & operator = (const class GALGAS_literalDoubleExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_literalDoubleExpressionForGeneration bang_literalDoubleExpressionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_literalDoubleExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_literalDoubleExpressionForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_literalDoubleExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_literalDoubleExpressionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalDoubleExpressionForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @literalBigIntExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_literalBigIntExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_literalBigIntExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_literalBigIntExpressionAST (const class cPtr_literalBigIntExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lbigint readProperty_mValue (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_literalBigIntExpressionAST init_21_ (const class GALGAS_lbigint & inOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_literalBigIntExpressionAST extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_literalBigIntExpressionAST class_func_new (const class GALGAS_lbigint & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_literalBigIntExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_literalBigIntExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalBigIntExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @literalBigIntExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_literalBigIntExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void literalBigIntExpressionAST_init_21_ (const class GALGAS_lbigint & inOperand0,
                                                    Compiler * inCompiler) ;


//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_unifiedTypeMapEntry arg_inType,
           const class GALGAS_analysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_localVarManager & arg_ioVariableMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lbigint mProperty_mValue ;


//--- Default constructor
  public: cPtr_literalBigIntExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_literalBigIntExpressionAST (const GALGAS_lbigint & in_mValue
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @literalBigIntExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_literalBigIntExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_literalBigIntExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_literalBigIntExpressionAST_2D_weak (const class GALGAS_literalBigIntExpressionAST & inSource) ;

  public: GALGAS_literalBigIntExpressionAST_2D_weak & operator = (const class GALGAS_literalBigIntExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_literalBigIntExpressionAST bang_literalBigIntExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_literalBigIntExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_literalBigIntExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_literalBigIntExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_literalBigIntExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalBigIntExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @literalUIntExpressionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_literalUIntExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_literalUIntExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_literalUIntExpressionForGeneration (const class cPtr_literalUIntExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_uint readProperty_mValue (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_literalUIntExpressionForGeneration init_21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                             const class GALGAS_location & inOperand1,
                                                                             const class GALGAS_uint & inOperand2,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_literalUIntExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_literalUIntExpressionForGeneration class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                 const class GALGAS_location & inOperand1,
                                                                                 const class GALGAS_uint & inOperand2
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_literalUIntExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_literalUIntExpressionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalUIntExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @literalUIntExpressionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_literalUIntExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void literalUIntExpressionForGeneration_init_21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                    const class GALGAS_location & inOperand1,
                                                                    const class GALGAS_uint & inOperand2,
                                                                    Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GALGAS_string & arg_ioGeneratedCode,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_uint & arg_ioTemporaryVariableIndex,
           class GALGAS_stringset & arg_ioUnusedVariableCppNameSet,
           class GALGAS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_uint mProperty_mValue ;


//--- Default constructor
  public: cPtr_literalUIntExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_literalUIntExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                   const GALGAS_location & in_mLocation,
                                                   const GALGAS_uint & in_mValue
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @literalUIntExpressionForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_literalUIntExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_literalUIntExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_literalUIntExpressionForGeneration_2D_weak (const class GALGAS_literalUIntExpressionForGeneration & inSource) ;

  public: GALGAS_literalUIntExpressionForGeneration_2D_weak & operator = (const class GALGAS_literalUIntExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_literalUIntExpressionForGeneration bang_literalUIntExpressionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_literalUIntExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_literalUIntExpressionForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_literalUIntExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_literalUIntExpressionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalUIntExpressionForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @literalUInt_36__34_ExpressionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_literalUInt_36__34_ExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_literalUInt_36__34_ExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_literalUInt_36__34_ExpressionForGeneration (const class cPtr_literalUInt_36__34_ExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_uint_36__34_ readProperty_mValue (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_literalUInt_36__34_ExpressionForGeneration init_21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                     const class GALGAS_location & inOperand1,
                                                                                     const class GALGAS_uint_36__34_ & inOperand2,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_literalUInt_36__34_ExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_literalUInt_36__34_ExpressionForGeneration class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                         const class GALGAS_location & inOperand1,
                                                                                         const class GALGAS_uint_36__34_ & inOperand2
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_literalUInt_36__34_ExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_literalUInt_36__34_ExpressionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @literalUInt64ExpressionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_literalUInt_36__34_ExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void literalUInt_36__34_ExpressionForGeneration_init_21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                            const class GALGAS_location & inOperand1,
                                                                            const class GALGAS_uint_36__34_ & inOperand2,
                                                                            Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GALGAS_string & arg_ioGeneratedCode,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_uint & arg_ioTemporaryVariableIndex,
           class GALGAS_stringset & arg_ioUnusedVariableCppNameSet,
           class GALGAS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_uint_36__34_ mProperty_mValue ;


//--- Default constructor
  public: cPtr_literalUInt_36__34_ExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_literalUInt_36__34_ExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                           const GALGAS_location & in_mLocation,
                                                           const GALGAS_uint_36__34_ & in_mValue
                                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @literalUInt_36__34_ExpressionForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_literalUInt_36__34_ExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_literalUInt_36__34_ExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_literalUInt_36__34_ExpressionForGeneration_2D_weak (const class GALGAS_literalUInt_36__34_ExpressionForGeneration & inSource) ;

  public: GALGAS_literalUInt_36__34_ExpressionForGeneration_2D_weak & operator = (const class GALGAS_literalUInt_36__34_ExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_literalUInt_36__34_ExpressionForGeneration bang_literalUInt_36__34_ExpressionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_literalUInt_36__34_ExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_literalUInt_36__34_ExpressionForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_literalUInt_36__34_ExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_literalUInt_36__34_ExpressionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @literalSIntExpressionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_literalSIntExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_literalSIntExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_literalSIntExpressionForGeneration (const class cPtr_literalSIntExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_sint readProperty_mValue (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_literalSIntExpressionForGeneration init_21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                             const class GALGAS_location & inOperand1,
                                                                             const class GALGAS_sint & inOperand2,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_literalSIntExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_literalSIntExpressionForGeneration class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                 const class GALGAS_location & inOperand1,
                                                                                 const class GALGAS_sint & inOperand2
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_literalSIntExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_literalSIntExpressionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalSIntExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @literalSIntExpressionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_literalSIntExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void literalSIntExpressionForGeneration_init_21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                    const class GALGAS_location & inOperand1,
                                                                    const class GALGAS_sint & inOperand2,
                                                                    Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GALGAS_string & arg_ioGeneratedCode,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_uint & arg_ioTemporaryVariableIndex,
           class GALGAS_stringset & arg_ioUnusedVariableCppNameSet,
           class GALGAS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_sint mProperty_mValue ;


//--- Default constructor
  public: cPtr_literalSIntExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_literalSIntExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                   const GALGAS_location & in_mLocation,
                                                   const GALGAS_sint & in_mValue
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @literalSIntExpressionForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_literalSIntExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_literalSIntExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_literalSIntExpressionForGeneration_2D_weak (const class GALGAS_literalSIntExpressionForGeneration & inSource) ;

  public: GALGAS_literalSIntExpressionForGeneration_2D_weak & operator = (const class GALGAS_literalSIntExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_literalSIntExpressionForGeneration bang_literalSIntExpressionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_literalSIntExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_literalSIntExpressionForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_literalSIntExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_literalSIntExpressionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalSIntExpressionForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @literalSInt_36__34_ExpressionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_literalSInt_36__34_ExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_literalSInt_36__34_ExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_literalSInt_36__34_ExpressionForGeneration (const class cPtr_literalSInt_36__34_ExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_sint_36__34_ readProperty_mValue (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_literalSInt_36__34_ExpressionForGeneration init_21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                     const class GALGAS_location & inOperand1,
                                                                                     const class GALGAS_sint_36__34_ & inOperand2,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_literalSInt_36__34_ExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_literalSInt_36__34_ExpressionForGeneration class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                         const class GALGAS_location & inOperand1,
                                                                                         const class GALGAS_sint_36__34_ & inOperand2
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_literalSInt_36__34_ExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_literalSInt_36__34_ExpressionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @literalSInt64ExpressionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_literalSInt_36__34_ExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void literalSInt_36__34_ExpressionForGeneration_init_21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                            const class GALGAS_location & inOperand1,
                                                                            const class GALGAS_sint_36__34_ & inOperand2,
                                                                            Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GALGAS_string & arg_ioGeneratedCode,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_uint & arg_ioTemporaryVariableIndex,
           class GALGAS_stringset & arg_ioUnusedVariableCppNameSet,
           class GALGAS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_sint_36__34_ mProperty_mValue ;


//--- Default constructor
  public: cPtr_literalSInt_36__34_ExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_literalSInt_36__34_ExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                           const GALGAS_location & in_mLocation,
                                                           const GALGAS_sint_36__34_ & in_mValue
                                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @literalSInt_36__34_ExpressionForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_literalSInt_36__34_ExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_literalSInt_36__34_ExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_literalSInt_36__34_ExpressionForGeneration_2D_weak (const class GALGAS_literalSInt_36__34_ExpressionForGeneration & inSource) ;

  public: GALGAS_literalSInt_36__34_ExpressionForGeneration_2D_weak & operator = (const class GALGAS_literalSInt_36__34_ExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_literalSInt_36__34_ExpressionForGeneration bang_literalSInt_36__34_ExpressionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_literalSInt_36__34_ExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_literalSInt_36__34_ExpressionForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_literalSInt_36__34_ExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_literalSInt_36__34_ExpressionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @literalBigIntExpressionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_literalBigIntExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_literalBigIntExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_literalBigIntExpressionForGeneration (const class cPtr_literalBigIntExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_bigint readProperty_mValue (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_literalBigIntExpressionForGeneration init_21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                               const class GALGAS_location & inOperand1,
                                                                               const class GALGAS_bigint & inOperand2,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_literalBigIntExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_literalBigIntExpressionForGeneration class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                   const class GALGAS_location & inOperand1,
                                                                                   const class GALGAS_bigint & inOperand2
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_literalBigIntExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_literalBigIntExpressionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalBigIntExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @literalBigIntExpressionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_literalBigIntExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void literalBigIntExpressionForGeneration_init_21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                      const class GALGAS_location & inOperand1,
                                                                      const class GALGAS_bigint & inOperand2,
                                                                      Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GALGAS_string & arg_ioGeneratedCode,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_uint & arg_ioTemporaryVariableIndex,
           class GALGAS_stringset & arg_ioUnusedVariableCppNameSet,
           class GALGAS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_bigint mProperty_mValue ;


//--- Default constructor
  public: cPtr_literalBigIntExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_literalBigIntExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                     const GALGAS_location & in_mLocation,
                                                     const GALGAS_bigint & in_mValue
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @literalBigIntExpressionForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_literalBigIntExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_literalBigIntExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_literalBigIntExpressionForGeneration_2D_weak (const class GALGAS_literalBigIntExpressionForGeneration & inSource) ;

  public: GALGAS_literalBigIntExpressionForGeneration_2D_weak & operator = (const class GALGAS_literalBigIntExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_literalBigIntExpressionForGeneration bang_literalBigIntExpressionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_literalBigIntExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_literalBigIntExpressionForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_literalBigIntExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_literalBigIntExpressionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalBigIntExpressionForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//                                              Phase 1: @comparison enum                                              *
//
//--------------------------------------------------------------------------------------------------

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
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_comparison extractObject (const GALGAS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_comparison class_func_differentInstances (LOCATION_ARGS) ;

  public: static class GALGAS_comparison class_func_equal (LOCATION_ARGS) ;

  public: static class GALGAS_comparison class_func_greaterOrEqual (LOCATION_ARGS) ;

  public: static class GALGAS_comparison class_func_greaterThan (LOCATION_ARGS) ;

  public: static class GALGAS_comparison class_func_lowerOrEqual (LOCATION_ARGS) ;

  public: static class GALGAS_comparison class_func_lowerThan (LOCATION_ARGS) ;

  public: static class GALGAS_comparison class_func_notEqual (LOCATION_ARGS) ;

  public: static class GALGAS_comparison class_func_sameInstance (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_comparison & inOperand) const ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_comparison class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparison ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @comparisonExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_comparisonExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_comparisonExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_comparisonExpressionAST (const class cPtr_comparisonExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_comparison readProperty_mComparison (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_comparisonExpressionAST init_21__21__21__21_ (const class GALGAS_location & inOperand0,
                                                                      const class GALGAS_semanticExpressionAST & inOperand1,
                                                                      const class GALGAS_comparison & inOperand2,
                                                                      const class GALGAS_semanticExpressionAST & inOperand3,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_comparisonExpressionAST extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_comparisonExpressionAST class_func_new (const class GALGAS_location & inOperand0,
                                                                      const class GALGAS_semanticExpressionAST & inOperand1,
                                                                      const class GALGAS_comparison & inOperand2,
                                                                      const class GALGAS_semanticExpressionAST & inOperand3
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_comparisonExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_comparisonExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparisonExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @comparisonExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_comparisonExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void comparisonExpressionAST_init_21__21__21__21_ (const class GALGAS_location & inOperand0,
                                                             const class GALGAS_semanticExpressionAST & inOperand1,
                                                             const class GALGAS_comparison & inOperand2,
                                                             const class GALGAS_semanticExpressionAST & inOperand3,
                                                             Compiler * inCompiler) ;


//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_unifiedTypeMapEntry arg_inType,
           const class GALGAS_analysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_localVarManager & arg_ioVariableMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_comparison mProperty_mComparison ;
  public: GALGAS_semanticExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_comparisonExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_comparisonExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                        const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                        const GALGAS_comparison & in_mComparison,
                                        const GALGAS_semanticExpressionAST & in_mRightExpression
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @comparisonExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_comparisonExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_comparisonExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_comparisonExpressionAST_2D_weak (const class GALGAS_comparisonExpressionAST & inSource) ;

  public: GALGAS_comparisonExpressionAST_2D_weak & operator = (const class GALGAS_comparisonExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_comparisonExpressionAST bang_comparisonExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_comparisonExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_comparisonExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_comparisonExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_comparisonExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparisonExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @comparisonExpressionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_comparisonExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_comparisonExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_comparisonExpressionForGeneration (const class cPtr_comparisonExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_semanticExpressionForGeneration readProperty_mLeftExpression (void) const ;

  public: class GALGAS_comparison readProperty_mComparison (void) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_comparisonExpressionForGeneration init_21__21__21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                    const class GALGAS_location & inOperand1,
                                                                                    const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                                    const class GALGAS_comparison & inOperand3,
                                                                                    const class GALGAS_semanticExpressionForGeneration & inOperand4,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_comparisonExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_comparisonExpressionForGeneration class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                const class GALGAS_location & inOperand1,
                                                                                const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                                const class GALGAS_comparison & inOperand3,
                                                                                const class GALGAS_semanticExpressionForGeneration & inOperand4
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_comparisonExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_comparisonExpressionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparisonExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @comparisonExpressionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_comparisonExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void comparisonExpressionForGeneration_init_21__21__21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                           const class GALGAS_location & inOperand1,
                                                                           const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                           const class GALGAS_comparison & inOperand3,
                                                                           const class GALGAS_semanticExpressionForGeneration & inOperand4,
                                                                           Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GALGAS_string & arg_ioGeneratedCode,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_uint & arg_ioTemporaryVariableIndex,
           class GALGAS_stringset & arg_ioUnusedVariableCppNameSet,
           class GALGAS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_semanticExpressionForGeneration mProperty_mLeftExpression ;
  public: GALGAS_comparison mProperty_mComparison ;
  public: GALGAS_semanticExpressionForGeneration mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_comparisonExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_comparisonExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                  const GALGAS_location & in_mLocation,
                                                  const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                  const GALGAS_comparison & in_mComparison,
                                                  const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @comparisonExpressionForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_comparisonExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_comparisonExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_comparisonExpressionForGeneration_2D_weak (const class GALGAS_comparisonExpressionForGeneration & inSource) ;

  public: GALGAS_comparisonExpressionForGeneration_2D_weak & operator = (const class GALGAS_comparisonExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_comparisonExpressionForGeneration bang_comparisonExpressionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_comparisonExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_comparisonExpressionForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_comparisonExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_comparisonExpressionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparisonExpressionForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @rightShiftExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_rightShiftExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_rightShiftExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_rightShiftExpressionAST (const class cPtr_rightShiftExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_rightShiftExpressionAST init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                  const class GALGAS_semanticExpressionAST & inOperand1,
                                                                  const class GALGAS_semanticExpressionAST & inOperand2,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_rightShiftExpressionAST extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_rightShiftExpressionAST class_func_new (const class GALGAS_location & inOperand0,
                                                                      const class GALGAS_semanticExpressionAST & inOperand1,
                                                                      const class GALGAS_semanticExpressionAST & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_rightShiftExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_rightShiftExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_rightShiftExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @rightShiftExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_rightShiftExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void rightShiftExpressionAST_init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                         const class GALGAS_semanticExpressionAST & inOperand1,
                                                         const class GALGAS_semanticExpressionAST & inOperand2,
                                                         Compiler * inCompiler) ;


//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_unifiedTypeMapEntry arg_inType,
           const class GALGAS_analysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_localVarManager & arg_ioVariableMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_semanticExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_rightShiftExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_rightShiftExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                        const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                        const GALGAS_semanticExpressionAST & in_mRightExpression
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @rightShiftExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_rightShiftExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_rightShiftExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_rightShiftExpressionAST_2D_weak (const class GALGAS_rightShiftExpressionAST & inSource) ;

  public: GALGAS_rightShiftExpressionAST_2D_weak & operator = (const class GALGAS_rightShiftExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_rightShiftExpressionAST bang_rightShiftExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_rightShiftExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_rightShiftExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_rightShiftExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_rightShiftExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_rightShiftExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @leftShiftExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_leftShiftExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_leftShiftExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_leftShiftExpressionAST (const class cPtr_leftShiftExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_leftShiftExpressionAST init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                 const class GALGAS_semanticExpressionAST & inOperand1,
                                                                 const class GALGAS_semanticExpressionAST & inOperand2,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_leftShiftExpressionAST extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_leftShiftExpressionAST class_func_new (const class GALGAS_location & inOperand0,
                                                                     const class GALGAS_semanticExpressionAST & inOperand1,
                                                                     const class GALGAS_semanticExpressionAST & inOperand2
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_leftShiftExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_leftShiftExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_leftShiftExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @leftShiftExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_leftShiftExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void leftShiftExpressionAST_init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                        const class GALGAS_semanticExpressionAST & inOperand1,
                                                        const class GALGAS_semanticExpressionAST & inOperand2,
                                                        Compiler * inCompiler) ;


//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_unifiedTypeMapEntry arg_inType,
           const class GALGAS_analysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_localVarManager & arg_ioVariableMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_semanticExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_leftShiftExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_leftShiftExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                       const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                       const GALGAS_semanticExpressionAST & in_mRightExpression
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @leftShiftExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_leftShiftExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_leftShiftExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_leftShiftExpressionAST_2D_weak (const class GALGAS_leftShiftExpressionAST & inSource) ;

  public: GALGAS_leftShiftExpressionAST_2D_weak & operator = (const class GALGAS_leftShiftExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_leftShiftExpressionAST bang_leftShiftExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_leftShiftExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_leftShiftExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_leftShiftExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_leftShiftExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_leftShiftExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @addExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_addExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_addExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_addExpressionAST (const class cPtr_addExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_addExpressionAST init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                           const class GALGAS_semanticExpressionAST & inOperand1,
                                                           const class GALGAS_semanticExpressionAST & inOperand2,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_addExpressionAST extractObject (const GALGAS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_addExpressionAST class_func_new (const class GALGAS_location & inOperand0,
                                                               const class GALGAS_semanticExpressionAST & inOperand1,
                                                               const class GALGAS_semanticExpressionAST & inOperand2
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_addExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_addExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_addExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @addExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_addExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void addExpressionAST_init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                  const class GALGAS_semanticExpressionAST & inOperand1,
                                                  const class GALGAS_semanticExpressionAST & inOperand2,
                                                  Compiler * inCompiler) ;


//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_unifiedTypeMapEntry arg_inType,
           const class GALGAS_analysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_localVarManager & arg_ioVariableMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_semanticExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_addExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_addExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                 const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                 const GALGAS_semanticExpressionAST & in_mRightExpression
                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @addExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_addExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_addExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_addExpressionAST_2D_weak (const class GALGAS_addExpressionAST & inSource) ;

  public: GALGAS_addExpressionAST_2D_weak & operator = (const class GALGAS_addExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_addExpressionAST bang_addExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_addExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_addExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_addExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_addExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_addExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @addExpressionNoOverflowAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_addExpressionNoOverflowAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_addExpressionNoOverflowAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_addExpressionNoOverflowAST (const class cPtr_addExpressionNoOverflowAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_addExpressionNoOverflowAST init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                     const class GALGAS_semanticExpressionAST & inOperand1,
                                                                     const class GALGAS_semanticExpressionAST & inOperand2,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_addExpressionNoOverflowAST extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_addExpressionNoOverflowAST class_func_new (const class GALGAS_location & inOperand0,
                                                                         const class GALGAS_semanticExpressionAST & inOperand1,
                                                                         const class GALGAS_semanticExpressionAST & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_addExpressionNoOverflowAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_addExpressionNoOverflowAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_addExpressionNoOverflowAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @addExpressionNoOverflowAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_addExpressionNoOverflowAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void addExpressionNoOverflowAST_init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                            const class GALGAS_semanticExpressionAST & inOperand1,
                                                            const class GALGAS_semanticExpressionAST & inOperand2,
                                                            Compiler * inCompiler) ;


//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_unifiedTypeMapEntry arg_inType,
           const class GALGAS_analysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_localVarManager & arg_ioVariableMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_semanticExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_addExpressionNoOverflowAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_addExpressionNoOverflowAST (const GALGAS_location & in_mOperatorLocation,
                                           const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                           const GALGAS_semanticExpressionAST & in_mRightExpression
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @addExpressionNoOverflowAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_addExpressionNoOverflowAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_addExpressionNoOverflowAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_addExpressionNoOverflowAST_2D_weak (const class GALGAS_addExpressionNoOverflowAST & inSource) ;

  public: GALGAS_addExpressionNoOverflowAST_2D_weak & operator = (const class GALGAS_addExpressionNoOverflowAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_addExpressionNoOverflowAST bang_addExpressionNoOverflowAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_addExpressionNoOverflowAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_addExpressionNoOverflowAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_addExpressionNoOverflowAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_addExpressionNoOverflowAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_addExpressionNoOverflowAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @subExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_subExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_subExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_subExpressionAST (const class cPtr_subExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_subExpressionAST init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                           const class GALGAS_semanticExpressionAST & inOperand1,
                                                           const class GALGAS_semanticExpressionAST & inOperand2,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_subExpressionAST extractObject (const GALGAS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_subExpressionAST class_func_new (const class GALGAS_location & inOperand0,
                                                               const class GALGAS_semanticExpressionAST & inOperand1,
                                                               const class GALGAS_semanticExpressionAST & inOperand2
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_subExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_subExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_subExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @subExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_subExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void subExpressionAST_init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                  const class GALGAS_semanticExpressionAST & inOperand1,
                                                  const class GALGAS_semanticExpressionAST & inOperand2,
                                                  Compiler * inCompiler) ;


//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_unifiedTypeMapEntry arg_inType,
           const class GALGAS_analysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_localVarManager & arg_ioVariableMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_semanticExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_subExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_subExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                 const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                 const GALGAS_semanticExpressionAST & in_mRightExpression
                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @subExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_subExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_subExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_subExpressionAST_2D_weak (const class GALGAS_subExpressionAST & inSource) ;

  public: GALGAS_subExpressionAST_2D_weak & operator = (const class GALGAS_subExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_subExpressionAST bang_subExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_subExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_subExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_subExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_subExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_subExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @subExpressionNoOverflowAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_subExpressionNoOverflowAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_subExpressionNoOverflowAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_subExpressionNoOverflowAST (const class cPtr_subExpressionNoOverflowAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_subExpressionNoOverflowAST init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                     const class GALGAS_semanticExpressionAST & inOperand1,
                                                                     const class GALGAS_semanticExpressionAST & inOperand2,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_subExpressionNoOverflowAST extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_subExpressionNoOverflowAST class_func_new (const class GALGAS_location & inOperand0,
                                                                         const class GALGAS_semanticExpressionAST & inOperand1,
                                                                         const class GALGAS_semanticExpressionAST & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_subExpressionNoOverflowAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_subExpressionNoOverflowAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_subExpressionNoOverflowAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @subExpressionNoOverflowAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_subExpressionNoOverflowAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void subExpressionNoOverflowAST_init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                            const class GALGAS_semanticExpressionAST & inOperand1,
                                                            const class GALGAS_semanticExpressionAST & inOperand2,
                                                            Compiler * inCompiler) ;


//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_unifiedTypeMapEntry arg_inType,
           const class GALGAS_analysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_localVarManager & arg_ioVariableMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_semanticExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_subExpressionNoOverflowAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_subExpressionNoOverflowAST (const GALGAS_location & in_mOperatorLocation,
                                           const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                           const GALGAS_semanticExpressionAST & in_mRightExpression
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @subExpressionNoOverflowAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_subExpressionNoOverflowAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_subExpressionNoOverflowAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_subExpressionNoOverflowAST_2D_weak (const class GALGAS_subExpressionNoOverflowAST & inSource) ;

  public: GALGAS_subExpressionNoOverflowAST_2D_weak & operator = (const class GALGAS_subExpressionNoOverflowAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_subExpressionNoOverflowAST bang_subExpressionNoOverflowAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_subExpressionNoOverflowAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_subExpressionNoOverflowAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_subExpressionNoOverflowAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_subExpressionNoOverflowAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_subExpressionNoOverflowAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//                                            Phase 1: @binaryOperator enum                                            *
//
//--------------------------------------------------------------------------------------------------

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
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_binaryOperator extractObject (const GALGAS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_binaryOperator class_func_add (LOCATION_ARGS) ;

  public: static class GALGAS_binaryOperator class_func_addNoOverflow (LOCATION_ARGS) ;

  public: static class GALGAS_binaryOperator class_func_divide_5F_operation (LOCATION_ARGS) ;

  public: static class GALGAS_binaryOperator class_func_divide_5F_operation_5F_no_5F_ovf (LOCATION_ARGS) ;

  public: static class GALGAS_binaryOperator class_func_leftShift (LOCATION_ARGS) ;

  public: static class GALGAS_binaryOperator class_func_modulo_5F_operation (LOCATION_ARGS) ;

  public: static class GALGAS_binaryOperator class_func_multiply_5F_operation (LOCATION_ARGS) ;

  public: static class GALGAS_binaryOperator class_func_multiply_5F_operation_5F_no_5F_ovf (LOCATION_ARGS) ;

  public: static class GALGAS_binaryOperator class_func_operator_5F_and (LOCATION_ARGS) ;

  public: static class GALGAS_binaryOperator class_func_operator_5F_or (LOCATION_ARGS) ;

  public: static class GALGAS_binaryOperator class_func_operator_5F_xor (LOCATION_ARGS) ;

  public: static class GALGAS_binaryOperator class_func_rightShift (LOCATION_ARGS) ;

  public: static class GALGAS_binaryOperator class_func_sub (LOCATION_ARGS) ;

  public: static class GALGAS_binaryOperator class_func_subNoOverflow (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_binaryOperator & inOperand) const ;

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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_binaryOperator class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_binaryOperator ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @binaryOperatorExpressionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_binaryOperatorExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_binaryOperatorExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_binaryOperatorExpressionForGeneration (const class cPtr_binaryOperatorExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_semanticExpressionForGeneration readProperty_mLeftExpression (void) const ;

  public: class GALGAS_binaryOperator readProperty_mOperator (void) const ;

  public: class GALGAS_semanticExpressionForGeneration readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_binaryOperatorExpressionForGeneration init_21__21__21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                        const class GALGAS_location & inOperand1,
                                                                                        const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                                        const class GALGAS_binaryOperator & inOperand3,
                                                                                        const class GALGAS_semanticExpressionForGeneration & inOperand4,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_binaryOperatorExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_binaryOperatorExpressionForGeneration class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                    const class GALGAS_location & inOperand1,
                                                                                    const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                                    const class GALGAS_binaryOperator & inOperand3,
                                                                                    const class GALGAS_semanticExpressionForGeneration & inOperand4
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_binaryOperatorExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_binaryOperatorExpressionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_binaryOperatorExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @binaryOperatorExpressionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_binaryOperatorExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void binaryOperatorExpressionForGeneration_init_21__21__21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                               const class GALGAS_location & inOperand1,
                                                                               const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                               const class GALGAS_binaryOperator & inOperand3,
                                                                               const class GALGAS_semanticExpressionForGeneration & inOperand4,
                                                                               Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GALGAS_string & arg_ioGeneratedCode,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_uint & arg_ioTemporaryVariableIndex,
           class GALGAS_stringset & arg_ioUnusedVariableCppNameSet,
           class GALGAS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_semanticExpressionForGeneration mProperty_mLeftExpression ;
  public: GALGAS_binaryOperator mProperty_mOperator ;
  public: GALGAS_semanticExpressionForGeneration mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_binaryOperatorExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_binaryOperatorExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                      const GALGAS_location & in_mLocation,
                                                      const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                      const GALGAS_binaryOperator & in_mOperator,
                                                      const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @binaryOperatorExpressionForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_binaryOperatorExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_binaryOperatorExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_binaryOperatorExpressionForGeneration_2D_weak (const class GALGAS_binaryOperatorExpressionForGeneration & inSource) ;

  public: GALGAS_binaryOperatorExpressionForGeneration_2D_weak & operator = (const class GALGAS_binaryOperatorExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_binaryOperatorExpressionForGeneration bang_binaryOperatorExpressionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_binaryOperatorExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_binaryOperatorExpressionForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_binaryOperatorExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_binaryOperatorExpressionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_binaryOperatorExpressionForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @multiplicationExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_multiplicationExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_multiplicationExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_multiplicationExpressionAST (const class cPtr_multiplicationExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_multiplicationExpressionAST init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                      const class GALGAS_semanticExpressionAST & inOperand1,
                                                                      const class GALGAS_semanticExpressionAST & inOperand2,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_multiplicationExpressionAST extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_multiplicationExpressionAST class_func_new (const class GALGAS_location & inOperand0,
                                                                          const class GALGAS_semanticExpressionAST & inOperand1,
                                                                          const class GALGAS_semanticExpressionAST & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_multiplicationExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_multiplicationExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_multiplicationExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @multiplicationExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_multiplicationExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void multiplicationExpressionAST_init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                             const class GALGAS_semanticExpressionAST & inOperand1,
                                                             const class GALGAS_semanticExpressionAST & inOperand2,
                                                             Compiler * inCompiler) ;


//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_unifiedTypeMapEntry arg_inType,
           const class GALGAS_analysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_localVarManager & arg_ioVariableMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_semanticExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_multiplicationExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_multiplicationExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                            const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                            const GALGAS_semanticExpressionAST & in_mRightExpression
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @multiplicationExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_multiplicationExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_multiplicationExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_multiplicationExpressionAST_2D_weak (const class GALGAS_multiplicationExpressionAST & inSource) ;

  public: GALGAS_multiplicationExpressionAST_2D_weak & operator = (const class GALGAS_multiplicationExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_multiplicationExpressionAST bang_multiplicationExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_multiplicationExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_multiplicationExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_multiplicationExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_multiplicationExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_multiplicationExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @multiplicationExpressionNoOverflowAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_multiplicationExpressionNoOverflowAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_multiplicationExpressionNoOverflowAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_multiplicationExpressionNoOverflowAST (const class cPtr_multiplicationExpressionNoOverflowAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_multiplicationExpressionNoOverflowAST init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                                const class GALGAS_semanticExpressionAST & inOperand1,
                                                                                const class GALGAS_semanticExpressionAST & inOperand2,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_multiplicationExpressionNoOverflowAST extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_multiplicationExpressionNoOverflowAST class_func_new (const class GALGAS_location & inOperand0,
                                                                                    const class GALGAS_semanticExpressionAST & inOperand1,
                                                                                    const class GALGAS_semanticExpressionAST & inOperand2
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_multiplicationExpressionNoOverflowAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_multiplicationExpressionNoOverflowAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_multiplicationExpressionNoOverflowAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @multiplicationExpressionNoOverflowAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_multiplicationExpressionNoOverflowAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void multiplicationExpressionNoOverflowAST_init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                       const class GALGAS_semanticExpressionAST & inOperand1,
                                                                       const class GALGAS_semanticExpressionAST & inOperand2,
                                                                       Compiler * inCompiler) ;


//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_unifiedTypeMapEntry arg_inType,
           const class GALGAS_analysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_localVarManager & arg_ioVariableMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_semanticExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_multiplicationExpressionNoOverflowAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_multiplicationExpressionNoOverflowAST (const GALGAS_location & in_mOperatorLocation,
                                                      const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                                      const GALGAS_semanticExpressionAST & in_mRightExpression
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @multiplicationExpressionNoOverflowAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_multiplicationExpressionNoOverflowAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_multiplicationExpressionNoOverflowAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_multiplicationExpressionNoOverflowAST_2D_weak (const class GALGAS_multiplicationExpressionNoOverflowAST & inSource) ;

  public: GALGAS_multiplicationExpressionNoOverflowAST_2D_weak & operator = (const class GALGAS_multiplicationExpressionNoOverflowAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_multiplicationExpressionNoOverflowAST bang_multiplicationExpressionNoOverflowAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_multiplicationExpressionNoOverflowAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_multiplicationExpressionNoOverflowAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_multiplicationExpressionNoOverflowAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_multiplicationExpressionNoOverflowAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_multiplicationExpressionNoOverflowAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @divisionExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_divisionExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_divisionExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_divisionExpressionAST (const class cPtr_divisionExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_divisionExpressionAST init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                const class GALGAS_semanticExpressionAST & inOperand1,
                                                                const class GALGAS_semanticExpressionAST & inOperand2,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_divisionExpressionAST extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_divisionExpressionAST class_func_new (const class GALGAS_location & inOperand0,
                                                                    const class GALGAS_semanticExpressionAST & inOperand1,
                                                                    const class GALGAS_semanticExpressionAST & inOperand2
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_divisionExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_divisionExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_divisionExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @divisionExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_divisionExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void divisionExpressionAST_init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                       const class GALGAS_semanticExpressionAST & inOperand1,
                                                       const class GALGAS_semanticExpressionAST & inOperand2,
                                                       Compiler * inCompiler) ;


//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_unifiedTypeMapEntry arg_inType,
           const class GALGAS_analysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_localVarManager & arg_ioVariableMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_semanticExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_divisionExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_divisionExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                      const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                      const GALGAS_semanticExpressionAST & in_mRightExpression
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @divisionExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_divisionExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_divisionExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_divisionExpressionAST_2D_weak (const class GALGAS_divisionExpressionAST & inSource) ;

  public: GALGAS_divisionExpressionAST_2D_weak & operator = (const class GALGAS_divisionExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_divisionExpressionAST bang_divisionExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_divisionExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_divisionExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_divisionExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_divisionExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_divisionExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @divisionExpressionNoOverflowAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_divisionExpressionNoOverflowAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_divisionExpressionNoOverflowAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_divisionExpressionNoOverflowAST (const class cPtr_divisionExpressionNoOverflowAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_divisionExpressionNoOverflowAST init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                          const class GALGAS_semanticExpressionAST & inOperand1,
                                                                          const class GALGAS_semanticExpressionAST & inOperand2,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_divisionExpressionNoOverflowAST extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_divisionExpressionNoOverflowAST class_func_new (const class GALGAS_location & inOperand0,
                                                                              const class GALGAS_semanticExpressionAST & inOperand1,
                                                                              const class GALGAS_semanticExpressionAST & inOperand2
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_divisionExpressionNoOverflowAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_divisionExpressionNoOverflowAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_divisionExpressionNoOverflowAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @divisionExpressionNoOverflowAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_divisionExpressionNoOverflowAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void divisionExpressionNoOverflowAST_init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                                 const class GALGAS_semanticExpressionAST & inOperand1,
                                                                 const class GALGAS_semanticExpressionAST & inOperand2,
                                                                 Compiler * inCompiler) ;


//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_unifiedTypeMapEntry arg_inType,
           const class GALGAS_analysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_localVarManager & arg_ioVariableMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_semanticExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_divisionExpressionNoOverflowAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_divisionExpressionNoOverflowAST (const GALGAS_location & in_mOperatorLocation,
                                                const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                                const GALGAS_semanticExpressionAST & in_mRightExpression
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @divisionExpressionNoOverflowAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_divisionExpressionNoOverflowAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_divisionExpressionNoOverflowAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_divisionExpressionNoOverflowAST_2D_weak (const class GALGAS_divisionExpressionNoOverflowAST & inSource) ;

  public: GALGAS_divisionExpressionNoOverflowAST_2D_weak & operator = (const class GALGAS_divisionExpressionNoOverflowAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_divisionExpressionNoOverflowAST bang_divisionExpressionNoOverflowAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_divisionExpressionNoOverflowAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_divisionExpressionNoOverflowAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_divisionExpressionNoOverflowAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_divisionExpressionNoOverflowAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_divisionExpressionNoOverflowAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @moduloExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_moduloExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_moduloExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_moduloExpressionAST (const class cPtr_moduloExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_location readProperty_mOperatorLocation (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mLeftExpression (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_moduloExpressionAST init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                              const class GALGAS_semanticExpressionAST & inOperand1,
                                                              const class GALGAS_semanticExpressionAST & inOperand2,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_moduloExpressionAST extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_moduloExpressionAST class_func_new (const class GALGAS_location & inOperand0,
                                                                  const class GALGAS_semanticExpressionAST & inOperand1,
                                                                  const class GALGAS_semanticExpressionAST & inOperand2
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_moduloExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_moduloExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_moduloExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @moduloExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_moduloExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void moduloExpressionAST_init_21__21__21_ (const class GALGAS_location & inOperand0,
                                                     const class GALGAS_semanticExpressionAST & inOperand1,
                                                     const class GALGAS_semanticExpressionAST & inOperand2,
                                                     Compiler * inCompiler) ;


//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_unifiedTypeMapEntry arg_inType,
           const class GALGAS_analysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_localVarManager & arg_ioVariableMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_location mProperty_mOperatorLocation ;
  public: GALGAS_semanticExpressionAST mProperty_mLeftExpression ;
  public: GALGAS_semanticExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_moduloExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_moduloExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                    const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                    const GALGAS_semanticExpressionAST & in_mRightExpression
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @moduloExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_moduloExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_moduloExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_moduloExpressionAST_2D_weak (const class GALGAS_moduloExpressionAST & inSource) ;

  public: GALGAS_moduloExpressionAST_2D_weak & operator = (const class GALGAS_moduloExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_moduloExpressionAST bang_moduloExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_moduloExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_moduloExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_moduloExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_moduloExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_moduloExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @testDynamicClassInExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_testDynamicClassInExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_testDynamicClassInExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_testDynamicClassInExpressionAST (const class cPtr_testDynamicClassInExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_semanticExpressionAST readProperty_mReceiverExpression (void) const ;

  public: class GALGAS_location readProperty_mEndOfReceiverExpression (void) const ;

  public: class GALGAS_dynamicTypeComparisonKind readProperty_mTypeComparisonKind (void) const ;

  public: class GALGAS_lstring readProperty_mTypeName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_testDynamicClassInExpressionAST init_21__21__21__21_ (const class GALGAS_semanticExpressionAST & inOperand0,
                                                                              const class GALGAS_location & inOperand1,
                                                                              const class GALGAS_dynamicTypeComparisonKind & inOperand2,
                                                                              const class GALGAS_lstring & inOperand3,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_testDynamicClassInExpressionAST extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_testDynamicClassInExpressionAST class_func_new (const class GALGAS_semanticExpressionAST & inOperand0,
                                                                              const class GALGAS_location & inOperand1,
                                                                              const class GALGAS_dynamicTypeComparisonKind & inOperand2,
                                                                              const class GALGAS_lstring & inOperand3
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_testDynamicClassInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_testDynamicClassInExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_testDynamicClassInExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @testDynamicClassInExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_testDynamicClassInExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void testDynamicClassInExpressionAST_init_21__21__21__21_ (const class GALGAS_semanticExpressionAST & inOperand0,
                                                                     const class GALGAS_location & inOperand1,
                                                                     const class GALGAS_dynamicTypeComparisonKind & inOperand2,
                                                                     const class GALGAS_lstring & inOperand3,
                                                                     Compiler * inCompiler) ;


//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_unifiedTypeMapEntry arg_inType,
           const class GALGAS_analysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_localVarManager & arg_ioVariableMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_semanticExpressionAST mProperty_mReceiverExpression ;
  public: GALGAS_location mProperty_mEndOfReceiverExpression ;
  public: GALGAS_dynamicTypeComparisonKind mProperty_mTypeComparisonKind ;
  public: GALGAS_lstring mProperty_mTypeName ;


//--- Default constructor
  public: cPtr_testDynamicClassInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_testDynamicClassInExpressionAST (const GALGAS_semanticExpressionAST & in_mReceiverExpression,
                                                const GALGAS_location & in_mEndOfReceiverExpression,
                                                const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                const GALGAS_lstring & in_mTypeName
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @testDynamicClassInExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_testDynamicClassInExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_testDynamicClassInExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_testDynamicClassInExpressionAST_2D_weak (const class GALGAS_testDynamicClassInExpressionAST & inSource) ;

  public: GALGAS_testDynamicClassInExpressionAST_2D_weak & operator = (const class GALGAS_testDynamicClassInExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_testDynamicClassInExpressionAST bang_testDynamicClassInExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_testDynamicClassInExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_testDynamicClassInExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_testDynamicClassInExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_testDynamicClassInExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_testDynamicClassInExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @castInExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_castInExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_castInExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_castInExpressionAST (const class cPtr_castInExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_semanticExpressionAST readProperty_mReceiverExpression (void) const ;

  public: class GALGAS_location readProperty_mEndOfReceiverExpression (void) const ;

  public: class GALGAS_lstring readProperty_mTypeName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_castInExpressionAST init_21__21__21_ (const class GALGAS_semanticExpressionAST & inOperand0,
                                                              const class GALGAS_location & inOperand1,
                                                              const class GALGAS_lstring & inOperand2,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_castInExpressionAST extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_castInExpressionAST class_func_new (const class GALGAS_semanticExpressionAST & inOperand0,
                                                                  const class GALGAS_location & inOperand1,
                                                                  const class GALGAS_lstring & inOperand2
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_castInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_castInExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_castInExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @castInExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_castInExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void castInExpressionAST_init_21__21__21_ (const class GALGAS_semanticExpressionAST & inOperand0,
                                                     const class GALGAS_location & inOperand1,
                                                     const class GALGAS_lstring & inOperand2,
                                                     Compiler * inCompiler) ;


//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_unifiedTypeMapEntry arg_inType,
           const class GALGAS_analysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_localVarManager & arg_ioVariableMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_semanticExpressionAST mProperty_mReceiverExpression ;
  public: GALGAS_location mProperty_mEndOfReceiverExpression ;
  public: GALGAS_lstring mProperty_mTypeName ;


//--- Default constructor
  public: cPtr_castInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_castInExpressionAST (const GALGAS_semanticExpressionAST & in_mReceiverExpression,
                                    const GALGAS_location & in_mEndOfReceiverExpression,
                                    const GALGAS_lstring & in_mTypeName
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @castInExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_castInExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_castInExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_castInExpressionAST_2D_weak (const class GALGAS_castInExpressionAST & inSource) ;

  public: GALGAS_castInExpressionAST_2D_weak & operator = (const class GALGAS_castInExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_castInExpressionAST bang_castInExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_castInExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_castInExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_castInExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_castInExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_castInExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @testDynamicClassInExpressionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_testDynamicClassInExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_testDynamicClassInExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_testDynamicClassInExpressionForGeneration (const class cPtr_testDynamicClassInExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_semanticExpressionForGeneration readProperty_mReceiverExpression (void) const ;

  public: class GALGAS_dynamicTypeComparisonKind readProperty_mTypeComparisonKind (void) const ;

  public: class GALGAS_unifiedTypeMapEntry readProperty_mCastType (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_testDynamicClassInExpressionForGeneration init_21__21__21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                            const class GALGAS_location & inOperand1,
                                                                                            const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                                            const class GALGAS_dynamicTypeComparisonKind & inOperand3,
                                                                                            const class GALGAS_unifiedTypeMapEntry & inOperand4,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_testDynamicClassInExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_testDynamicClassInExpressionForGeneration class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                        const class GALGAS_location & inOperand1,
                                                                                        const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                                        const class GALGAS_dynamicTypeComparisonKind & inOperand3,
                                                                                        const class GALGAS_unifiedTypeMapEntry & inOperand4
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_testDynamicClassInExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_testDynamicClassInExpressionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_testDynamicClassInExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @testDynamicClassInExpressionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_testDynamicClassInExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void testDynamicClassInExpressionForGeneration_init_21__21__21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                   const class GALGAS_location & inOperand1,
                                                                                   const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                                   const class GALGAS_dynamicTypeComparisonKind & inOperand3,
                                                                                   const class GALGAS_unifiedTypeMapEntry & inOperand4,
                                                                                   Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GALGAS_string & arg_ioGeneratedCode,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_uint & arg_ioTemporaryVariableIndex,
           class GALGAS_stringset & arg_ioUnusedVariableCppNameSet,
           class GALGAS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_semanticExpressionForGeneration mProperty_mReceiverExpression ;
  public: GALGAS_dynamicTypeComparisonKind mProperty_mTypeComparisonKind ;
  public: GALGAS_unifiedTypeMapEntry mProperty_mCastType ;


//--- Default constructor
  public: cPtr_testDynamicClassInExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_testDynamicClassInExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                          const GALGAS_location & in_mLocation,
                                                          const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                          const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                          const GALGAS_unifiedTypeMapEntry & in_mCastType
                                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @testDynamicClassInExpressionForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_testDynamicClassInExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_testDynamicClassInExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_testDynamicClassInExpressionForGeneration_2D_weak (const class GALGAS_testDynamicClassInExpressionForGeneration & inSource) ;

  public: GALGAS_testDynamicClassInExpressionForGeneration_2D_weak & operator = (const class GALGAS_testDynamicClassInExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_testDynamicClassInExpressionForGeneration bang_testDynamicClassInExpressionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_testDynamicClassInExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_testDynamicClassInExpressionForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_testDynamicClassInExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_testDynamicClassInExpressionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_testDynamicClassInExpressionForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extractObjectInExpressionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_extractObjectInExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_extractObjectInExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_extractObjectInExpressionForGeneration (const class cPtr_extractObjectInExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_semanticExpressionForGeneration readProperty_mReceiverExpression (void) const ;

  public: class GALGAS_string readProperty_mTypeName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_extractObjectInExpressionForGeneration init_21__21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                     const class GALGAS_location & inOperand1,
                                                                                     const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                                     const class GALGAS_string & inOperand3,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_extractObjectInExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_extractObjectInExpressionForGeneration class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                     const class GALGAS_location & inOperand1,
                                                                                     const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                                     const class GALGAS_string & inOperand3
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_extractObjectInExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_extractObjectInExpressionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extractObjectInExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @extractObjectInExpressionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_extractObjectInExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void extractObjectInExpressionForGeneration_init_21__21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                            const class GALGAS_location & inOperand1,
                                                                            const class GALGAS_semanticExpressionForGeneration & inOperand2,
                                                                            const class GALGAS_string & inOperand3,
                                                                            Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GALGAS_string & arg_ioGeneratedCode,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_uint & arg_ioTemporaryVariableIndex,
           class GALGAS_stringset & arg_ioUnusedVariableCppNameSet,
           class GALGAS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_semanticExpressionForGeneration mProperty_mReceiverExpression ;
  public: GALGAS_string mProperty_mTypeName ;


//--- Default constructor
  public: cPtr_extractObjectInExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_extractObjectInExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                       const GALGAS_location & in_mLocation,
                                                       const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                       const GALGAS_string & in_mTypeName
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extractObjectInExpressionForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_extractObjectInExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_extractObjectInExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_extractObjectInExpressionForGeneration_2D_weak (const class GALGAS_extractObjectInExpressionForGeneration & inSource) ;

  public: GALGAS_extractObjectInExpressionForGeneration_2D_weak & operator = (const class GALGAS_extractObjectInExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_extractObjectInExpressionForGeneration bang_extractObjectInExpressionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_extractObjectInExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_extractObjectInExpressionForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_extractObjectInExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_extractObjectInExpressionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extractObjectInExpressionForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @optionExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_optionExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_optionExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_optionExpressionAST (const class cPtr_optionExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mOptionComponentName (void) const ;

  public: class GALGAS_lstring readProperty_mOptionEntryName (void) const ;

  public: class GALGAS_lstring readProperty_mOptionGetterName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_optionExpressionAST init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                              const class GALGAS_lstring & inOperand1,
                                                              const class GALGAS_lstring & inOperand2,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_optionExpressionAST extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_optionExpressionAST class_func_new (const class GALGAS_lstring & inOperand0,
                                                                  const class GALGAS_lstring & inOperand1,
                                                                  const class GALGAS_lstring & inOperand2
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_optionExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_optionExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @optionExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_optionExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void optionExpressionAST_init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1,
                                                     const class GALGAS_lstring & inOperand2,
                                                     Compiler * inCompiler) ;


//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_unifiedTypeMapEntry arg_inType,
           const class GALGAS_analysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_localVarManager & arg_ioVariableMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mOptionComponentName ;
  public: GALGAS_lstring mProperty_mOptionEntryName ;
  public: GALGAS_lstring mProperty_mOptionGetterName ;


//--- Default constructor
  public: cPtr_optionExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_optionExpressionAST (const GALGAS_lstring & in_mOptionComponentName,
                                    const GALGAS_lstring & in_mOptionEntryName,
                                    const GALGAS_lstring & in_mOptionGetterName
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @optionExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_optionExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_optionExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_optionExpressionAST_2D_weak (const class GALGAS_optionExpressionAST & inSource) ;

  public: GALGAS_optionExpressionAST_2D_weak & operator = (const class GALGAS_optionExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_optionExpressionAST bang_optionExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_optionExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_optionExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_optionExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_optionExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @optionValueExpressionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_optionValueExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_optionValueExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_optionValueExpressionForGeneration (const class cPtr_optionValueExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_bool readProperty_mOptionComponentIsPredefined (void) const ;

  public: class GALGAS_string readProperty_mOptionComponentName (void) const ;

  public: class GALGAS_string readProperty_mOptionEntryName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_optionValueExpressionForGeneration init_21__21__21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                     const class GALGAS_location & inOperand1,
                                                                                     const class GALGAS_bool & inOperand2,
                                                                                     const class GALGAS_string & inOperand3,
                                                                                     const class GALGAS_string & inOperand4,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_optionValueExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_optionValueExpressionForGeneration class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                 const class GALGAS_location & inOperand1,
                                                                                 const class GALGAS_bool & inOperand2,
                                                                                 const class GALGAS_string & inOperand3,
                                                                                 const class GALGAS_string & inOperand4
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_optionValueExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_optionValueExpressionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionValueExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @optionValueExpressionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_optionValueExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void optionValueExpressionForGeneration_init_21__21__21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                            const class GALGAS_location & inOperand1,
                                                                            const class GALGAS_bool & inOperand2,
                                                                            const class GALGAS_string & inOperand3,
                                                                            const class GALGAS_string & inOperand4,
                                                                            Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GALGAS_string & arg_ioGeneratedCode,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_uint & arg_ioTemporaryVariableIndex,
           class GALGAS_stringset & arg_ioUnusedVariableCppNameSet,
           class GALGAS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_bool mProperty_mOptionComponentIsPredefined ;
  public: GALGAS_string mProperty_mOptionComponentName ;
  public: GALGAS_string mProperty_mOptionEntryName ;


//--- Default constructor
  public: cPtr_optionValueExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_optionValueExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                   const GALGAS_location & in_mLocation,
                                                   const GALGAS_bool & in_mOptionComponentIsPredefined,
                                                   const GALGAS_string & in_mOptionComponentName,
                                                   const GALGAS_string & in_mOptionEntryName
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @optionValueExpressionForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_optionValueExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_optionValueExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_optionValueExpressionForGeneration_2D_weak (const class GALGAS_optionValueExpressionForGeneration & inSource) ;

  public: GALGAS_optionValueExpressionForGeneration_2D_weak & operator = (const class GALGAS_optionValueExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_optionValueExpressionForGeneration bang_optionValueExpressionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_optionValueExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_optionValueExpressionForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_optionValueExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_optionValueExpressionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionValueExpressionForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @optionCharExpressionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_optionCharExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_optionCharExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_optionCharExpressionForGeneration (const class cPtr_optionCharExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_bool readProperty_mOptionComponentIsPredefined (void) const ;

  public: class GALGAS_string readProperty_mOptionComponentName (void) const ;

  public: class GALGAS_string readProperty_mOptionEntryName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_optionCharExpressionForGeneration init_21__21__21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                    const class GALGAS_location & inOperand1,
                                                                                    const class GALGAS_bool & inOperand2,
                                                                                    const class GALGAS_string & inOperand3,
                                                                                    const class GALGAS_string & inOperand4,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_optionCharExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_optionCharExpressionForGeneration class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                const class GALGAS_location & inOperand1,
                                                                                const class GALGAS_bool & inOperand2,
                                                                                const class GALGAS_string & inOperand3,
                                                                                const class GALGAS_string & inOperand4
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_optionCharExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_optionCharExpressionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionCharExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @optionCharExpressionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_optionCharExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void optionCharExpressionForGeneration_init_21__21__21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                           const class GALGAS_location & inOperand1,
                                                                           const class GALGAS_bool & inOperand2,
                                                                           const class GALGAS_string & inOperand3,
                                                                           const class GALGAS_string & inOperand4,
                                                                           Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GALGAS_string & arg_ioGeneratedCode,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_uint & arg_ioTemporaryVariableIndex,
           class GALGAS_stringset & arg_ioUnusedVariableCppNameSet,
           class GALGAS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_bool mProperty_mOptionComponentIsPredefined ;
  public: GALGAS_string mProperty_mOptionComponentName ;
  public: GALGAS_string mProperty_mOptionEntryName ;


//--- Default constructor
  public: cPtr_optionCharExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_optionCharExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                  const GALGAS_location & in_mLocation,
                                                  const GALGAS_bool & in_mOptionComponentIsPredefined,
                                                  const GALGAS_string & in_mOptionComponentName,
                                                  const GALGAS_string & in_mOptionEntryName
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @optionCharExpressionForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_optionCharExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_optionCharExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_optionCharExpressionForGeneration_2D_weak (const class GALGAS_optionCharExpressionForGeneration & inSource) ;

  public: GALGAS_optionCharExpressionForGeneration_2D_weak & operator = (const class GALGAS_optionCharExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_optionCharExpressionForGeneration bang_optionCharExpressionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_optionCharExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_optionCharExpressionForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_optionCharExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_optionCharExpressionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionCharExpressionForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @optionStringExpressionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_optionStringExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_optionStringExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_optionStringExpressionForGeneration (const class cPtr_optionStringExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_bool readProperty_mOptionComponentIsPredefined (void) const ;

  public: class GALGAS_string readProperty_mOptionComponentName (void) const ;

  public: class GALGAS_string readProperty_mOptionEntryName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_optionStringExpressionForGeneration init_21__21__21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                      const class GALGAS_location & inOperand1,
                                                                                      const class GALGAS_bool & inOperand2,
                                                                                      const class GALGAS_string & inOperand3,
                                                                                      const class GALGAS_string & inOperand4,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_optionStringExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_optionStringExpressionForGeneration class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                  const class GALGAS_location & inOperand1,
                                                                                  const class GALGAS_bool & inOperand2,
                                                                                  const class GALGAS_string & inOperand3,
                                                                                  const class GALGAS_string & inOperand4
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_optionStringExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_optionStringExpressionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionStringExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @optionStringExpressionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_optionStringExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void optionStringExpressionForGeneration_init_21__21__21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                             const class GALGAS_location & inOperand1,
                                                                             const class GALGAS_bool & inOperand2,
                                                                             const class GALGAS_string & inOperand3,
                                                                             const class GALGAS_string & inOperand4,
                                                                             Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GALGAS_string & arg_ioGeneratedCode,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_uint & arg_ioTemporaryVariableIndex,
           class GALGAS_stringset & arg_ioUnusedVariableCppNameSet,
           class GALGAS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_bool mProperty_mOptionComponentIsPredefined ;
  public: GALGAS_string mProperty_mOptionComponentName ;
  public: GALGAS_string mProperty_mOptionEntryName ;


//--- Default constructor
  public: cPtr_optionStringExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_optionStringExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                    const GALGAS_location & in_mLocation,
                                                    const GALGAS_bool & in_mOptionComponentIsPredefined,
                                                    const GALGAS_string & in_mOptionComponentName,
                                                    const GALGAS_string & in_mOptionEntryName
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @optionStringExpressionForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_optionStringExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_optionStringExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_optionStringExpressionForGeneration_2D_weak (const class GALGAS_optionStringExpressionForGeneration & inSource) ;

  public: GALGAS_optionStringExpressionForGeneration_2D_weak & operator = (const class GALGAS_optionStringExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_optionStringExpressionForGeneration bang_optionStringExpressionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_optionStringExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_optionStringExpressionForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_optionStringExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_optionStringExpressionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionStringExpressionForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @optionCommentExpressionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_optionCommentExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_optionCommentExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_optionCommentExpressionForGeneration (const class cPtr_optionCommentExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_bool readProperty_mOptionComponentIsPredefined (void) const ;

  public: class GALGAS_string readProperty_mOptionComponentName (void) const ;

  public: class GALGAS_string readProperty_mOptionEntryName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_optionCommentExpressionForGeneration init_21__21__21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                       const class GALGAS_location & inOperand1,
                                                                                       const class GALGAS_bool & inOperand2,
                                                                                       const class GALGAS_string & inOperand3,
                                                                                       const class GALGAS_string & inOperand4,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_optionCommentExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_optionCommentExpressionForGeneration class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                   const class GALGAS_location & inOperand1,
                                                                                   const class GALGAS_bool & inOperand2,
                                                                                   const class GALGAS_string & inOperand3,
                                                                                   const class GALGAS_string & inOperand4
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_optionCommentExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_optionCommentExpressionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionCommentExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @optionCommentExpressionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_optionCommentExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void optionCommentExpressionForGeneration_init_21__21__21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                              const class GALGAS_location & inOperand1,
                                                                              const class GALGAS_bool & inOperand2,
                                                                              const class GALGAS_string & inOperand3,
                                                                              const class GALGAS_string & inOperand4,
                                                                              Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GALGAS_string & arg_ioGeneratedCode,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_uint & arg_ioTemporaryVariableIndex,
           class GALGAS_stringset & arg_ioUnusedVariableCppNameSet,
           class GALGAS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_bool mProperty_mOptionComponentIsPredefined ;
  public: GALGAS_string mProperty_mOptionComponentName ;
  public: GALGAS_string mProperty_mOptionEntryName ;


//--- Default constructor
  public: cPtr_optionCommentExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_optionCommentExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                     const GALGAS_location & in_mLocation,
                                                     const GALGAS_bool & in_mOptionComponentIsPredefined,
                                                     const GALGAS_string & in_mOptionComponentName,
                                                     const GALGAS_string & in_mOptionEntryName
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @optionCommentExpressionForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_optionCommentExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_optionCommentExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_optionCommentExpressionForGeneration_2D_weak (const class GALGAS_optionCommentExpressionForGeneration & inSource) ;

  public: GALGAS_optionCommentExpressionForGeneration_2D_weak & operator = (const class GALGAS_optionCommentExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_optionCommentExpressionForGeneration bang_optionCommentExpressionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_optionCommentExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_optionCommentExpressionForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_optionCommentExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_optionCommentExpressionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionCommentExpressionForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexiqueIntrospectionExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexiqueIntrospectionExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_lexiqueIntrospectionExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_lexiqueIntrospectionExpressionAST (const class cPtr_lexiqueIntrospectionExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mLexiqueComponentName (void) const ;

  public: class GALGAS_lstring readProperty_mLexiqueGetterName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_lexiqueIntrospectionExpressionAST init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_lstring & inOperand1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexiqueIntrospectionExpressionAST extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_lexiqueIntrospectionExpressionAST class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_lexiqueIntrospectionExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexiqueIntrospectionExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueIntrospectionExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexiqueIntrospectionExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_lexiqueIntrospectionExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexiqueIntrospectionExpressionAST_init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                               const class GALGAS_lstring & inOperand1,
                                                               Compiler * inCompiler) ;


//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_unifiedTypeMapEntry arg_inType,
           const class GALGAS_analysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_localVarManager & arg_ioVariableMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mLexiqueComponentName ;
  public: GALGAS_lstring mProperty_mLexiqueGetterName ;


//--- Default constructor
  public: cPtr_lexiqueIntrospectionExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexiqueIntrospectionExpressionAST (const GALGAS_lstring & in_mLexiqueComponentName,
                                                  const GALGAS_lstring & in_mLexiqueGetterName
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexiqueIntrospectionExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexiqueIntrospectionExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexiqueIntrospectionExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexiqueIntrospectionExpressionAST_2D_weak (const class GALGAS_lexiqueIntrospectionExpressionAST & inSource) ;

  public: GALGAS_lexiqueIntrospectionExpressionAST_2D_weak & operator = (const class GALGAS_lexiqueIntrospectionExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexiqueIntrospectionExpressionAST bang_lexiqueIntrospectionExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexiqueIntrospectionExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_lexiqueIntrospectionExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_lexiqueIntrospectionExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexiqueIntrospectionExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueIntrospectionExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexiqueIntrospectionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexiqueIntrospectionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_lexiqueIntrospectionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_lexiqueIntrospectionForGeneration (const class cPtr_lexiqueIntrospectionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_string readProperty_mLexiqueComponentName (void) const ;

  public: class GALGAS_string readProperty_mLexiqueGetterName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_lexiqueIntrospectionForGeneration init_21__21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                const class GALGAS_location & inOperand1,
                                                                                const class GALGAS_string & inOperand2,
                                                                                const class GALGAS_string & inOperand3,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexiqueIntrospectionForGeneration extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_lexiqueIntrospectionForGeneration class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                const class GALGAS_location & inOperand1,
                                                                                const class GALGAS_string & inOperand2,
                                                                                const class GALGAS_string & inOperand3
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_lexiqueIntrospectionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexiqueIntrospectionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueIntrospectionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @lexiqueIntrospectionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_lexiqueIntrospectionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void lexiqueIntrospectionForGeneration_init_21__21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                       const class GALGAS_location & inOperand1,
                                                                       const class GALGAS_string & inOperand2,
                                                                       const class GALGAS_string & inOperand3,
                                                                       Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GALGAS_string & arg_ioGeneratedCode,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_uint & arg_ioTemporaryVariableIndex,
           class GALGAS_stringset & arg_ioUnusedVariableCppNameSet,
           class GALGAS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mLexiqueComponentName ;
  public: GALGAS_string mProperty_mLexiqueGetterName ;


//--- Default constructor
  public: cPtr_lexiqueIntrospectionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_lexiqueIntrospectionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                  const GALGAS_location & in_mLocation,
                                                  const GALGAS_string & in_mLexiqueComponentName,
                                                  const GALGAS_string & in_mLexiqueGetterName
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @lexiqueIntrospectionForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lexiqueIntrospectionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_lexiqueIntrospectionForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_lexiqueIntrospectionForGeneration_2D_weak (const class GALGAS_lexiqueIntrospectionForGeneration & inSource) ;

  public: GALGAS_lexiqueIntrospectionForGeneration_2D_weak & operator = (const class GALGAS_lexiqueIntrospectionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_lexiqueIntrospectionForGeneration bang_lexiqueIntrospectionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_lexiqueIntrospectionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_lexiqueIntrospectionForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_lexiqueIntrospectionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_lexiqueIntrospectionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueIntrospectionForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @filewrapperObjectInstanciationInExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_filewrapperObjectInstanciationInExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_filewrapperObjectInstanciationInExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_filewrapperObjectInstanciationInExpressionAST (const class cPtr_filewrapperObjectInstanciationInExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mFilewrapperName (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_filewrapperObjectInstanciationInExpressionAST init_21_ (const class GALGAS_lstring & inOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_filewrapperObjectInstanciationInExpressionAST extractObject (const GALGAS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_filewrapperObjectInstanciationInExpressionAST class_func_new (const class GALGAS_lstring & inOperand0
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_filewrapperObjectInstanciationInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_filewrapperObjectInstanciationInExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperObjectInstanciationInExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @filewrapperObjectInstanciationInExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_filewrapperObjectInstanciationInExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void filewrapperObjectInstanciationInExpressionAST_init_21_ (const class GALGAS_lstring & inOperand0,
                                                                       Compiler * inCompiler) ;


//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_unifiedTypeMapEntry arg_inType,
           const class GALGAS_analysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_localVarManager & arg_ioVariableMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mFilewrapperName ;


//--- Default constructor
  public: cPtr_filewrapperObjectInstanciationInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_filewrapperObjectInstanciationInExpressionAST (const GALGAS_lstring & in_mFilewrapperName
                                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @filewrapperObjectInstanciationInExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_filewrapperObjectInstanciationInExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_filewrapperObjectInstanciationInExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_filewrapperObjectInstanciationInExpressionAST_2D_weak (const class GALGAS_filewrapperObjectInstanciationInExpressionAST & inSource) ;

  public: GALGAS_filewrapperObjectInstanciationInExpressionAST_2D_weak & operator = (const class GALGAS_filewrapperObjectInstanciationInExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_filewrapperObjectInstanciationInExpressionAST bang_filewrapperObjectInstanciationInExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_filewrapperObjectInstanciationInExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_filewrapperObjectInstanciationInExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_filewrapperObjectInstanciationInExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_filewrapperObjectInstanciationInExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperObjectInstanciationInExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @filewrapperInExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_filewrapperInExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_filewrapperInExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_filewrapperInExpressionAST (const class cPtr_filewrapperInExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mFilewrapperName (void) const ;

  public: class GALGAS_lstring readProperty_mFilewrapperPath (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_filewrapperInExpressionAST init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                 const class GALGAS_lstring & inOperand1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_filewrapperInExpressionAST extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_filewrapperInExpressionAST class_func_new (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_lstring & inOperand1
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_filewrapperInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_filewrapperInExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperInExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @filewrapperInExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_filewrapperInExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void filewrapperInExpressionAST_init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                        const class GALGAS_lstring & inOperand1,
                                                        Compiler * inCompiler) ;


//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_unifiedTypeMapEntry arg_inType,
           const class GALGAS_analysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_localVarManager & arg_ioVariableMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mFilewrapperName ;
  public: GALGAS_lstring mProperty_mFilewrapperPath ;


//--- Default constructor
  public: cPtr_filewrapperInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_filewrapperInExpressionAST (const GALGAS_lstring & in_mFilewrapperName,
                                           const GALGAS_lstring & in_mFilewrapperPath
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @filewrapperInExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_filewrapperInExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_filewrapperInExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_filewrapperInExpressionAST_2D_weak (const class GALGAS_filewrapperInExpressionAST & inSource) ;

  public: GALGAS_filewrapperInExpressionAST_2D_weak & operator = (const class GALGAS_filewrapperInExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_filewrapperInExpressionAST bang_filewrapperInExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_filewrapperInExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_filewrapperInExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_filewrapperInExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_filewrapperInExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperInExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @filewrapperTemplateInExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_filewrapperTemplateInExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_filewrapperTemplateInExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_filewrapperTemplateInExpressionAST (const class cPtr_filewrapperTemplateInExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mFilewrapperName (void) const ;

  public: class GALGAS_lstring readProperty_mFilewrapperTemplateName (void) const ;

  public: class GALGAS_actualOutputArgumentList readProperty_mExpressions (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_filewrapperTemplateInExpressionAST init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_lstring & inOperand1,
                                                                             const class GALGAS_actualOutputArgumentList & inOperand2,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_filewrapperTemplateInExpressionAST extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_filewrapperTemplateInExpressionAST class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1,
                                                                                 const class GALGAS_actualOutputArgumentList & inOperand2
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_filewrapperTemplateInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_filewrapperTemplateInExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @filewrapperTemplateInExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_filewrapperTemplateInExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void filewrapperTemplateInExpressionAST_init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                    const class GALGAS_lstring & inOperand1,
                                                                    const class GALGAS_actualOutputArgumentList & inOperand2,
                                                                    Compiler * inCompiler) ;


//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_unifiedTypeMapEntry arg_inType,
           const class GALGAS_analysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_localVarManager & arg_ioVariableMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mFilewrapperName ;
  public: GALGAS_lstring mProperty_mFilewrapperTemplateName ;
  public: GALGAS_actualOutputArgumentList mProperty_mExpressions ;


//--- Default constructor
  public: cPtr_filewrapperTemplateInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_filewrapperTemplateInExpressionAST (const GALGAS_lstring & in_mFilewrapperName,
                                                   const GALGAS_lstring & in_mFilewrapperTemplateName,
                                                   const GALGAS_actualOutputArgumentList & in_mExpressions
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @filewrapperTemplateInExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_filewrapperTemplateInExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_filewrapperTemplateInExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_filewrapperTemplateInExpressionAST_2D_weak (const class GALGAS_filewrapperTemplateInExpressionAST & inSource) ;

  public: GALGAS_filewrapperTemplateInExpressionAST_2D_weak & operator = (const class GALGAS_filewrapperTemplateInExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_filewrapperTemplateInExpressionAST bang_filewrapperTemplateInExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_filewrapperTemplateInExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_filewrapperTemplateInExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_filewrapperTemplateInExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_filewrapperTemplateInExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @filewrapperInExpressionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_filewrapperInExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_filewrapperInExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_filewrapperInExpressionForGeneration (const class cPtr_filewrapperInExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_string readProperty_mFilewrapperName (void) const ;

  public: class GALGAS_string readProperty_mFilewrapperPath (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_filewrapperInExpressionForGeneration init_21__21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                   const class GALGAS_location & inOperand1,
                                                                                   const class GALGAS_string & inOperand2,
                                                                                   const class GALGAS_string & inOperand3,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_filewrapperInExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_filewrapperInExpressionForGeneration class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                   const class GALGAS_location & inOperand1,
                                                                                   const class GALGAS_string & inOperand2,
                                                                                   const class GALGAS_string & inOperand3
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_filewrapperInExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_filewrapperInExpressionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperInExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @filewrapperInExpressionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_filewrapperInExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void filewrapperInExpressionForGeneration_init_21__21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                          const class GALGAS_location & inOperand1,
                                                                          const class GALGAS_string & inOperand2,
                                                                          const class GALGAS_string & inOperand3,
                                                                          Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GALGAS_string & arg_ioGeneratedCode,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_uint & arg_ioTemporaryVariableIndex,
           class GALGAS_stringset & arg_ioUnusedVariableCppNameSet,
           class GALGAS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mFilewrapperName ;
  public: GALGAS_string mProperty_mFilewrapperPath ;


//--- Default constructor
  public: cPtr_filewrapperInExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_filewrapperInExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                     const GALGAS_location & in_mLocation,
                                                     const GALGAS_string & in_mFilewrapperName,
                                                     const GALGAS_string & in_mFilewrapperPath
                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @filewrapperInExpressionForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_filewrapperInExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_filewrapperInExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_filewrapperInExpressionForGeneration_2D_weak (const class GALGAS_filewrapperInExpressionForGeneration & inSource) ;

  public: GALGAS_filewrapperInExpressionForGeneration_2D_weak & operator = (const class GALGAS_filewrapperInExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_filewrapperInExpressionForGeneration bang_filewrapperInExpressionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_filewrapperInExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_filewrapperInExpressionForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_filewrapperInExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_filewrapperInExpressionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperInExpressionForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @filewrapperTemplateInExpressionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_filewrapperTemplateInExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_filewrapperTemplateInExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_filewrapperTemplateInExpressionForGeneration (const class cPtr_filewrapperTemplateInExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_string readProperty_mFilewrapperName (void) const ;

  public: class GALGAS_string readProperty_mFilewrapperTemplateName (void) const ;

  public: class GALGAS_semanticExpressionListForGeneration readProperty_mActualOutputParameterList (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_filewrapperTemplateInExpressionForGeneration init_21__21__21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                               const class GALGAS_location & inOperand1,
                                                                                               const class GALGAS_string & inOperand2,
                                                                                               const class GALGAS_string & inOperand3,
                                                                                               const class GALGAS_semanticExpressionListForGeneration & inOperand4,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_filewrapperTemplateInExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_filewrapperTemplateInExpressionForGeneration class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                           const class GALGAS_location & inOperand1,
                                                                                           const class GALGAS_string & inOperand2,
                                                                                           const class GALGAS_string & inOperand3,
                                                                                           const class GALGAS_semanticExpressionListForGeneration & inOperand4
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_filewrapperTemplateInExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_filewrapperTemplateInExpressionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @filewrapperTemplateInExpressionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_filewrapperTemplateInExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void filewrapperTemplateInExpressionForGeneration_init_21__21__21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                      const class GALGAS_location & inOperand1,
                                                                                      const class GALGAS_string & inOperand2,
                                                                                      const class GALGAS_string & inOperand3,
                                                                                      const class GALGAS_semanticExpressionListForGeneration & inOperand4,
                                                                                      Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GALGAS_string & arg_ioGeneratedCode,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_uint & arg_ioTemporaryVariableIndex,
           class GALGAS_stringset & arg_ioUnusedVariableCppNameSet,
           class GALGAS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mFilewrapperName ;
  public: GALGAS_string mProperty_mFilewrapperTemplateName ;
  public: GALGAS_semanticExpressionListForGeneration mProperty_mActualOutputParameterList ;


//--- Default constructor
  public: cPtr_filewrapperTemplateInExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_filewrapperTemplateInExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                             const GALGAS_location & in_mLocation,
                                                             const GALGAS_string & in_mFilewrapperName,
                                                             const GALGAS_string & in_mFilewrapperTemplateName,
                                                             const GALGAS_semanticExpressionListForGeneration & in_mActualOutputParameterList
                                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @filewrapperTemplateInExpressionForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_filewrapperTemplateInExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_filewrapperTemplateInExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_filewrapperTemplateInExpressionForGeneration_2D_weak (const class GALGAS_filewrapperTemplateInExpressionForGeneration & inSource) ;

  public: GALGAS_filewrapperTemplateInExpressionForGeneration_2D_weak & operator = (const class GALGAS_filewrapperTemplateInExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_filewrapperTemplateInExpressionForGeneration bang_filewrapperTemplateInExpressionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_filewrapperTemplateInExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_filewrapperTemplateInExpressionForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_filewrapperTemplateInExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_filewrapperTemplateInExpressionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @filewrapperStaticPathInExpressionForGeneration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_filewrapperStaticPathInExpressionForGeneration : public GALGAS_semanticExpressionForGeneration {
//--------------------------------- Default constructor
  public: GALGAS_filewrapperStaticPathInExpressionForGeneration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_filewrapperStaticPathInExpressionForGeneration (const class cPtr_filewrapperStaticPathInExpressionForGeneration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_string readProperty_mFilewrapperName (void) const ;

  public: class GALGAS_uint readProperty_mFilewrapperFileIndex (void) const ;

  public: class GALGAS_bool readProperty_mIsTextFile (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_filewrapperStaticPathInExpressionForGeneration init_21__21__21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                                 const class GALGAS_location & inOperand1,
                                                                                                 const class GALGAS_string & inOperand2,
                                                                                                 const class GALGAS_uint & inOperand3,
                                                                                                 const class GALGAS_bool & inOperand4,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_filewrapperStaticPathInExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_filewrapperStaticPathInExpressionForGeneration class_func_new (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                             const class GALGAS_location & inOperand1,
                                                                                             const class GALGAS_string & inOperand2,
                                                                                             const class GALGAS_uint & inOperand3,
                                                                                             const class GALGAS_bool & inOperand4
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_filewrapperStaticPathInExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_filewrapperStaticPathInExpressionForGeneration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperStaticPathInExpressionForGeneration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @filewrapperStaticPathInExpressionForGeneration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_filewrapperStaticPathInExpressionForGeneration : public cPtr_semanticExpressionForGeneration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void filewrapperStaticPathInExpressionForGeneration_init_21__21__21__21__21_ (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                        const class GALGAS_location & inOperand1,
                                                                                        const class GALGAS_string & inOperand2,
                                                                                        const class GALGAS_uint & inOperand3,
                                                                                        const class GALGAS_bool & inOperand4,
                                                                                        Compiler * inCompiler) ;


//--- Extension method generateExpression
  public: virtual void method_generateExpression (class GALGAS_string & arg_ioGeneratedCode,
           class GALGAS_stringset & arg_ioInclusionSet,
           class GALGAS_uint & arg_ioTemporaryVariableIndex,
           class GALGAS_stringset & arg_ioUnusedVariableCppNameSet,
           class GALGAS_string & arg_outCppExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mFilewrapperName ;
  public: GALGAS_uint mProperty_mFilewrapperFileIndex ;
  public: GALGAS_bool mProperty_mIsTextFile ;


//--- Default constructor
  public: cPtr_filewrapperStaticPathInExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_filewrapperStaticPathInExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                               const GALGAS_location & in_mLocation,
                                                               const GALGAS_string & in_mFilewrapperName,
                                                               const GALGAS_uint & in_mFilewrapperFileIndex,
                                                               const GALGAS_bool & in_mIsTextFile
                                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @filewrapperStaticPathInExpressionForGeneration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_filewrapperStaticPathInExpressionForGeneration_2D_weak : public GALGAS_semanticExpressionForGeneration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_filewrapperStaticPathInExpressionForGeneration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_filewrapperStaticPathInExpressionForGeneration_2D_weak (const class GALGAS_filewrapperStaticPathInExpressionForGeneration & inSource) ;

  public: GALGAS_filewrapperStaticPathInExpressionForGeneration_2D_weak & operator = (const class GALGAS_filewrapperStaticPathInExpressionForGeneration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_filewrapperStaticPathInExpressionForGeneration bang_filewrapperStaticPathInExpressionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_filewrapperStaticPathInExpressionForGeneration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_filewrapperStaticPathInExpressionForGeneration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_filewrapperStaticPathInExpressionForGeneration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_filewrapperStaticPathInExpressionForGeneration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperStaticPathInExpressionForGeneration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @getterCallExpressionAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_getterCallExpressionAST : public GALGAS_semanticExpressionAST {
//--------------------------------- Default constructor
  public: GALGAS_getterCallExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_getterCallExpressionAST (const class cPtr_getterCallExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_bool readProperty_errorOnGetterCallInsteadOfPropertyRead (void) const ;

  public: class GALGAS_semanticExpressionAST readProperty_mReceiver (void) const ;

  public: class GALGAS_lstring readProperty_mGetterName (void) const ;

  public: class GALGAS_actualOutputArgumentList readProperty_mActualArgumentList (void) const ;

  public: class GALGAS_location readProperty_mExpressionLocation (void) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_getterCallExpressionAST init_21_errorOnGetterCallInsteadOfPropertyRead_21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                                const class GALGAS_semanticExpressionAST & inOperand1,
                                                                                                                const class GALGAS_lstring & inOperand2,
                                                                                                                const class GALGAS_actualOutputArgumentList & inOperand3,
                                                                                                                const class GALGAS_location & inOperand4,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_getterCallExpressionAST extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_getterCallExpressionAST class_func_new (const class GALGAS_bool & inOperand0,
                                                                      const class GALGAS_semanticExpressionAST & inOperand1,
                                                                      const class GALGAS_lstring & inOperand2,
                                                                      const class GALGAS_actualOutputArgumentList & inOperand3,
                                                                      const class GALGAS_location & inOperand4
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_getterCallExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_getterCallExpressionAST class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getterCallExpressionAST ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @getterCallExpressionAST class
//
//--------------------------------------------------------------------------------------------------

class cPtr_getterCallExpressionAST : public cPtr_semanticExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void getterCallExpressionAST_init_21_errorOnGetterCallInsteadOfPropertyRead_21__21__21__21_ (const class GALGAS_bool & inOperand0,
                                                                                                       const class GALGAS_semanticExpressionAST & inOperand1,
                                                                                                       const class GALGAS_lstring & inOperand2,
                                                                                                       const class GALGAS_actualOutputArgumentList & inOperand3,
                                                                                                       const class GALGAS_location & inOperand4,
                                                                                                       Compiler * inCompiler) ;


//--- Extension method analyzeSemanticExpression
  public: virtual void method_analyzeSemanticExpression (const class GALGAS_lstring arg_inUsefulnessCallerEntityName,
           class GALGAS_usefulEntitiesGraph & arg_ioUsefulEntitiesGraph,
           const class GALGAS_unifiedTypeMapEntry arg_inType,
           const class GALGAS_analysisContext arg_inAnalysisContext,
           class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           class GALGAS_localVarManager & arg_ioVariableMap,
           class GALGAS_semanticExpressionForGeneration & arg_outExpression,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterExpressionInSemanticContext
  public: virtual void method_enterExpressionInSemanticContext (class GALGAS_unifiedTypeMap & arg_ioTypeMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_bool mProperty_errorOnGetterCallInsteadOfPropertyRead ;
  public: GALGAS_semanticExpressionAST mProperty_mReceiver ;
  public: GALGAS_lstring mProperty_mGetterName ;
  public: GALGAS_actualOutputArgumentList mProperty_mActualArgumentList ;
  public: GALGAS_location mProperty_mExpressionLocation ;


//--- Default constructor
  public: cPtr_getterCallExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_getterCallExpressionAST (const GALGAS_bool & in_errorOnGetterCallInsteadOfPropertyRead,
                                        const GALGAS_semanticExpressionAST & in_mReceiver,
                                        const GALGAS_lstring & in_mGetterName,
                                        const GALGAS_actualOutputArgumentList & in_mActualArgumentList,
                                        const GALGAS_location & in_mExpressionLocation
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @getterCallExpressionAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_getterCallExpressionAST_2D_weak : public GALGAS_semanticExpressionAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_getterCallExpressionAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_getterCallExpressionAST_2D_weak (const class GALGAS_getterCallExpressionAST & inSource) ;

  public: GALGAS_getterCallExpressionAST_2D_weak & operator = (const class GALGAS_getterCallExpressionAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_getterCallExpressionAST bang_getterCallExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_getterCallExpressionAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_getterCallExpressionAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_getterCallExpressionAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_getterCallExpressionAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getterCallExpressionAST_2D_weak ;

